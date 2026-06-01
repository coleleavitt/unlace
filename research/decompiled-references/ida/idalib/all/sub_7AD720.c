__int64 __fastcall sub_7AD720(__int64 a1, __int64 a2, const char *a3, char *a4, size_t a5, char a6)
{
  size_t v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // ebx
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a4 == nullptr || a3 == nullptr || a2 == -1 )
  {
    return 0;
  }
  else
  {
    v8 = a5;
    if ( !a5 )
      v8 = strlen(a4) + 1;
    sub_7AD400(a1, a2, a6, a3, 0);
    v11 = *(_QWORD *)a1;
    if ( v8 > 0x400 )
      LODWORD(v8) = 1024;
    if ( *(_BYTE *)(v11 + 6020) && (unsigned __int8)must_journal(a1, a2, v10) )
    {
      v15 = 0;
      ptr = nullptr;
      v12 = sub_73D2C0(v11, (unsigned __int16 *)(a1 + 53), (unsigned int)v8, a4, (__int64)&ptr);
      add_undo_record(1, ptr, v15);
      if ( ptr )
      {
        *(_QWORD *)&v15 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v12 = sub_73D2C0(v11, (unsigned __int16 *)(a1 + 53), (unsigned int)v8, a4, 0);
    }
    if ( !(_BYTE)v12 )
      sub_743130();
  }
  return v12;
}
