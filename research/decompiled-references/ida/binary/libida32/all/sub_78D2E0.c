__int64 __fastcall sub_78D2E0(__int64 a1, __int64 a2, const char *a3, char *a4, size_t a5, char a6)
{
  size_t v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // ebx
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a4 == nullptr || a3 == nullptr || (_DWORD)a2 == -1 )
  {
    return 0;
  }
  else
  {
    v8 = a5;
    if ( !a5 )
    {
      a2 = (unsigned int)a2;
      v8 = strlen(a4) + 1;
    }
    sub_78D080(a1, a2, a6, a3);
    v11 = *(_QWORD *)a1;
    if ( v8 > 0x400 )
      LODWORD(v8) = 1024;
    if ( *(_BYTE *)(v11 + 5988) && (unsigned __int8)must_journal(a1, a2, v10) )
    {
      v15 = 0;
      ptr = nullptr;
      v12 = sub_71CD80(v11, (unsigned __int16 *)(a1 + 45), (unsigned int)v8, a4, (__int64)&ptr);
      add_undo_record(1, ptr, v15);
      if ( ptr )
      {
        *(_QWORD *)&v15 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v12 = sub_71CD80(v11, (unsigned __int16 *)(a1 + 45), (unsigned int)v8, a4, 0);
    }
    if ( !(_BYTE)v12 )
      sub_722BF0();
  }
  return v12;
}

