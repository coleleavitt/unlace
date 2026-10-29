__int64 __fastcall sub_7B3CA0(__int64 a1, __int64 a2, char *a3, size_t a4)
{
  size_t v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned int v9; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a2 == -1 || !a3 )
  {
    return 0;
  }
  else
  {
    v5 = a4;
    if ( !a4 )
      v5 = strlen(a3) + 1;
    *(_WORD *)(a1 + 53) = 10;
    v6 = swap64(a2);
    v8 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 64) = 86;
    *(_QWORD *)(a1 + 56) = v6;
    if ( v5 > 0x400 )
      LODWORD(v5) = 1024;
    if ( *(_BYTE *)(v8 + 6020) && (unsigned __int8)must_journal(a2, a2, v7) )
    {
      v12 = 0;
      ptr = nullptr;
      v9 = sub_73D2C0(v8, (unsigned __int16 *)(a1 + 53), (unsigned int)v5, a3, (__int64)&ptr);
      add_undo_record(1, ptr, v12);
      if ( ptr )
      {
        *(_QWORD *)&v12 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v9 = sub_73D2C0(v8, (unsigned __int16 *)(a1 + 53), (unsigned int)v5, a3, 0);
    }
    if ( !(_BYTE)v9 )
      sub_743130();
  }
  return v9;
}
