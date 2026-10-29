unsigned __int64 __fastcall sub_5ECD10(__int64 a1)
{
  __int64 v1; // r12
  const char *v4; // rsi
  _QWORD *v5; // r13
  char *v6; // rdx
  __int64 v7; // r14
  __int64 i; // rbp
  char *v9; // rax
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-1078h] BYREF
  __int128 v14; // [rsp+8h] [rbp-1070h]
  _BYTE v15[4104]; // [rsp+40h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1048h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1480);
  if ( !*(_QWORD *)(v1 + 8) )
  {
    v13 = nullptr;
    v14 = 0;
    sub_614990(a1, &v13, 81);
    v4 = haystack;
    if ( (_QWORD)v14 )
      v4 = (const char *)v13;
    sub_638CE0(a1, v4);
    sub_636020();
    sub_529720(a1);
    sub_674B30();
    v5 = *(_QWORD **)(a1 + 1456);
    v6 = (char *)v5[1];
    if ( v6 )
    {
      v7 = v5[2];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = &v6[24 * i];
          v10 = *(void **)v9;
          if ( *(_QWORD *)v9 )
          {
            *((_QWORD *)v9 + 1) = 0;
            qfree(v10);
            v6 = (char *)v5[1];
          }
        }
      }
      v5[2] = 0;
      qfree(v6);
      v5[1] = 0;
      v5[3] = 0;
    }
    sub_579240(a1, v15, 4096, (__int64)&unk_238D25C);
    if ( *(_DWORD *)(a1 + 152) != 2 && (unsigned __int8)qfileexist(v15, v15) )
      sub_365330();
    v11 = *(_QWORD *)(v1 + 8);
    if ( !v11 )
    {
      v12 = new_til(v15, "Local type definitions");
      *(_QWORD *)(v1 + 8) = v12;
      *(_DWORD *)(v12 + 32) &= ~1u;
      v11 = *(_QWORD *)(v1 + 8);
    }
    enable_numbered_types(v11, 1);
    register_undo_handlers(&unk_2B08880, 3, 1, 0);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
  }
  return v16 - __readfsqword(0x28u);
}

