__int64 __fastcall sub_2E3DE0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v5; // rdi
  unsigned int v6; // eax
  const char *v7; // rsi
  const char *v8; // rsi

  v3 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  v5 = &s1;
  if ( *(_QWORD *)(a1 + 8) )
    v5 = *(const char **)a1;
  v6 = strcasecmp(v5, v3);
  if ( v6 )
    return v6 >> 31;
  v7 = &s1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    if ( !*(_QWORD *)(a1 + 32) )
      goto LABEL_8;
LABEL_13:
    v6 = strcasecmp(*(const char **)(a1 + 24), v7);
    if ( v6 )
      return v6 >> 31;
LABEL_9:
    v8 = &s1;
    if ( *(_QWORD *)(a2 + 56) )
    {
      v8 = *(const char **)(a2 + 48);
      if ( !*(_QWORD *)(a1 + 56) )
        goto LABEL_11;
    }
    else if ( !*(_QWORD *)(a1 + 56) )
    {
LABEL_11:
      v6 = strcasecmp(&s1, v8);
      return v6 >> 31;
    }
    v6 = strcasecmp(*(const char **)(a1 + 48), v8);
    return v6 >> 31;
  }
  v7 = *(const char **)(a2 + 24);
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_13;
LABEL_8:
  v6 = strcasecmp(&s1, v7);
  if ( !v6 )
    goto LABEL_9;
  return v6 >> 31;
}
