char __fastcall sub_93360(int a1, _QWORD *a2)
{
  char result; // al
  __int64 v3; // rax
  const char *v4; // rcx
  const char *v5; // rcx
  const char *v6; // rcx
  const char *v7; // rcx
  const char *v8; // rcx
  __int64 v9; // rcx

  if ( a2 )
  {
    result = a1 < 0 || *a2 != 72;
    if ( result )
      return 0;
    if ( a1 < (unsigned __int64)xmmword_2518A8 )
    {
      v3 = qword_2518A0 + 168LL * a1;
      v4 = s1;
      if ( *(_QWORD *)(v3 + 8) )
        v4 = *(const char **)v3;
      a2[1] = v4;
      v5 = s1;
      if ( *(_QWORD *)(v3 + 32) )
        v5 = *(const char **)(v3 + 24);
      a2[2] = v5;
      v6 = s1;
      if ( *(_QWORD *)(v3 + 56) )
        v6 = *(const char **)(v3 + 48);
      a2[3] = v6;
      v7 = s1;
      if ( *(_QWORD *)(v3 + 80) )
        v7 = *(const char **)(v3 + 72);
      a2[4] = v7;
      v8 = s1;
      if ( *(_QWORD *)(v3 + 104) )
        v8 = *(const char **)(v3 + 96);
      a2[5] = v8;
      if ( *(_QWORD *)(v3 + 128) )
      {
        a2[6] = *(_QWORD *)(v3 + 120);
        v9 = 0;
        if ( !*(_QWORD *)(v3 + 152) )
          goto LABEL_18;
      }
      else
      {
        a2[6] = s1;
        v9 = 0;
        if ( !*(_QWORD *)(v3 + 152) )
        {
LABEL_18:
          a2[7] = v9;
          a2[8] = *(_QWORD *)(v3 + 152);
          return 1;
        }
      }
      v9 = *(_QWORD *)(v3 + 144);
      goto LABEL_18;
    }
  }
  else
  {
    result = 0;
    if ( a1 >= 0 )
      return a1 < (unsigned __int64)xmmword_2518A8;
  }
  return result;
}

