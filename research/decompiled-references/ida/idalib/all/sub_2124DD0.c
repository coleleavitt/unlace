const char *__fastcall sub_2124DD0(__int64 a1)
{
  const char *v1; // r12
  __int64 v2; // rbp
  const char *i; // rbx
  const char *v4; // r14
  size_t v5; // rax
  size_t v6; // rdx
  __int64 v7; // rsi

  v1 = *(const char **)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 136) = v1;
  for ( i = v1; ; *(_QWORD *)(a1 + 56) = i )
  {
    if ( !*(_BYTE *)(v2 + 22) || *(_BYTE *)(a1 + 147) )
    {
      v6 = *(_QWORD *)(v2 + 56);
      v7 = *(_QWORD *)(v2 + 48);
      if ( v6 == 1 || *(_BYTE *)(v7 + 1) == 35 )
      {
        if ( *(_BYTE *)v7 == *i )
          return v1;
      }
      else if ( !strncmp(i, (const char *)v7, v6) )
      {
        return v1;
      }
    }
    v4 = *(const char **)(v2 + 40);
    v5 = strlen(v4);
    if ( !strncmp(i, v4, v5) || *i == 10 || *i == 13 || i == (const char *)(*(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 72)) )
      break;
    ++i;
  }
  return v1;
}
