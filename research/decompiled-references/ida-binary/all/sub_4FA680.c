bool __fastcall sub_4FA680(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rbx
  __int64 v6; // r13
  const char *v7; // rsi
  const char *v8; // rdi

  v3 = *(_QWORD *)(a2 + 40);
  if ( v3 > 7 && !strncmp(*(const char **)(a2 + 32), "Chooser", 7u) )
    return QT::qt_qFindChild_helper(a1, 0, 0, &off_8974E0, 1) != 0;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = v5 + 24LL * *(_QWORD *)(a1 + 144);
  if ( v5 == v6 )
    return 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v7 = *(const char **)v5;
      v8 = &s1;
      if ( !v3 )
        goto LABEL_7;
      goto LABEL_12;
    }
    if ( !v3 )
      return v6 != v5;
    v7 = &s1;
LABEL_12:
    v8 = *(const char **)(a2 + 32);
LABEL_7:
    if ( !strcmp(v8, v7) )
      return v6 != v5;
    v5 += 24;
    if ( v6 == v5 )
      return 0;
  }
}
