unsigned __int64 __fastcall sub_396C10(__int64 a1)
{
  int user_idadir; // eax
  int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // r14
  const char *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  char v11; // [rsp+0h] [rbp-1058h]
  __int64 v12; // [rsp+8h] [rbp-1050h]
  _BYTE v13[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v14; // [rsp+1018h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath((int)v13, 4096, user_idadir, (int)"proccache32.lst", 0, v2, v11);
  v3 = fopenWT(v13);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 != v5 + 88LL * *(_QWORD *)(a1 + 16) )
    {
      v12 = v5 + 88LL * *(_QWORD *)(a1 + 16);
      v6 = *(_QWORD *)(a1 + 8);
      do
      {
        v7 = haystack;
        if ( *(_QWORD *)(v6 + 8) )
          v7 = *(const char **)v6;
        qbasename(v7);
        sub_38CDA0();
        sub_38CDA0();
        v8 = *(_QWORD *)(v6 + 56);
        v9 = v8 + 56LL * *(_QWORD *)(v6 + 64);
        while ( v9 != v8 )
        {
          v8 += 56;
          sub_38CDA0();
        }
        v6 += 88;
        sub_38CDA0();
      }
      while ( v12 != v6 );
    }
    qfclose(v4);
  }
  return v14 - __readfsqword(0x28u);
}

