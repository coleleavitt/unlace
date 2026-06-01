void __fastcall __noreturn sub_39CB10(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 *idp_descs; // rax
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r14
  const char *v8; // rsi
  const char *v9; // rsi
  size_t v10; // rax
  char *v11; // r12
  __int64 v12; // [rsp+18h] [rbp-470h]
  char s1[32]; // [rsp+20h] [rbp-468h] BYREF
  _BYTE v14[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+448h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1528);
  qstrncpy(s1, a2, 17);
  idp_descs = (__int64 *)get_idp_descs();
  v4 = *idp_descs;
  v12 = *idp_descs + 88 * idp_descs[1];
  if ( *idp_descs != v12 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 56);
      v6 = v5 + 56LL * *(_QWORD *)(v4 + 64);
      if ( v5 != v6 )
      {
        v7 = *(_QWORD *)(v4 + 56);
        do
        {
          v8 = haystack;
          if ( *(_QWORD *)(v7 + 32) )
            v8 = *(const char **)(v7 + 24);
          if ( !strcasecmp(s1, v8) )
          {
            v9 = haystack;
            if ( *(_QWORD *)(v4 + 8) )
              v9 = *(const char **)v4;
            qstrncpy(v14, v9, 1024);
            *(_QWORD *)(v2 + 40) = qstrdup(v14);
            sub_368890();
          }
          v7 += 56;
        }
        while ( v6 != v7 );
      }
      v4 += 88;
    }
    while ( v12 != v4 );
  }
  v10 = strlen(s1);
  v11 = &s1[v10];
  qstrncpy(&s1[v10], ".so", 27 - v10);
  if ( getsysfile(v14, 1024, s1, "procs") )
  {
    *(_QWORD *)(v2 + 40) = qstrdup(v14);
    sub_368890();
  }
  *v11 = 0;
  sub_378D50();
}
