unsigned __int64 __fastcall sub_39B920(__int64 a1)
{
  int user_idadir; // eax
  int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // r14
  const char *v7; // r13
  __int64 v8; // r12
  const char *v9; // rdi
  const char *v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  const char *v13; // r8
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v17; // [rsp+8h] [rbp-1050h]
  _BYTE v18[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+1018h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath((unsigned int)v18, 4096, user_idadir, (unsigned int)"proccache.lst", 0, v2);
  v3 = fopenWT(v18);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 != v5 + 88LL * *(_QWORD *)(a1 + 16) )
    {
      v17 = v5 + 88LL * *(_QWORD *)(a1 + 16);
      v6 = *(_QWORD *)(a1 + 8);
      do
      {
        v7 = haystack;
        if ( *(_QWORD *)(v6 + 40) )
          v7 = *(const char **)(v6 + 32);
        v8 = *(_QWORD *)(v6 + 24);
        v9 = haystack;
        if ( *(_QWORD *)(v6 + 8) )
          v9 = *(const char **)v6;
        v10 = (const char *)qbasename(v9);
        sub_391AE0(v4, (__int64)"%s:%lld:%s", v10, v8, v7);
        sub_391AE0(v4, (__int64)":%zu", *(_QWORD *)(v6 + 64));
        v11 = *(_QWORD *)(v6 + 56);
        v12 = v11 + 56LL * *(_QWORD *)(v6 + 64);
        while ( v12 != v11 )
        {
          v13 = haystack;
          if ( *(_QWORD *)(v11 + 32) )
            v13 = *(const char **)(v11 + 24);
          v14 = &byte_22F0C30;
          v15 = haystack;
          if ( *(_BYTE *)(v11 + 48) )
            v14 = "-";
          if ( *(_QWORD *)(v11 + 8) )
            v15 = *(const char **)v11;
          v11 += 56;
          sub_391AE0(v4, (__int64)":%s:%s%s", v15, v14, v13);
        }
        v6 += 88;
        sub_391AE0(v4, (__int64)"\n");
      }
      while ( v17 != v6 );
    }
    qfclose(v4);
  }
  return v19 - __readfsqword(0x28u);
}
