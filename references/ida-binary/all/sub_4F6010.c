bool __fastcall sub_4F6010(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  const char *v6; // rsi
  const char *v7; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  v3 = v2 + 24LL * *(_QWORD *)(a1 + 72);
  if ( v2 == v3 )
    return 0;
  v4 = *(_QWORD *)(a2 + 40);
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      v6 = *(const char **)v2;
      v7 = &s1;
      if ( !v4 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v4 )
      return v2 != v3;
    v6 = &s1;
LABEL_9:
    v7 = *(const char **)(a2 + 32);
LABEL_4:
    if ( !strcmp(v7, v6) )
      return v2 != v3;
    v2 += 24;
    if ( v3 == v2 )
      return 0;
  }
}
