__int64 __fastcall sub_791A30(char *a1, __int64 a2, char *a3, size_t a4)
{
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == -1 || !a3 )
  {
    return 0;
  }
  else
  {
    v5 = a1;
    if ( !a4 )
    {
      a1 = a3;
      a4 = strlen(a3) + 1;
    }
    v6 = 1024;
    v7 = *(_QWORD *)v5;
    *((_DWORD *)v5 + 12) = _byteswap_ulong(a2);
    if ( a4 <= 0x400 )
      v6 = a4;
    *(_WORD *)(v5 + 45) = 6;
    v5[52] = 86;
    v8 = v6;
    if ( *(_BYTE *)(v7 + 5988) && (unsigned __int8)must_journal(a1, a2, 6) )
    {
      v12 = 0;
      ptr = nullptr;
      v9 = sub_71CD80(v7, (unsigned __int16 *)(v5 + 45), v8, a3, (__int64)&ptr);
      add_undo_record(1, ptr, v12);
      if ( ptr )
      {
        *(_QWORD *)&v12 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v9 = sub_71CD80(v7, (unsigned __int16 *)(v5 + 45), v8, a3, 0);
    }
    if ( !(_BYTE)v9 )
      sub_722BF0();
  }
  return v9;
}

