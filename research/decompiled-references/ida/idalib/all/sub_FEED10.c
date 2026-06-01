bool __fastcall sub_FEED10(char **a1, __int64 a2)
{
  char **i; // rdx
  char *v3; // r13
  unsigned __int64 v4; // rbp
  char *v5; // r12
  size_t v6; // rbx
  bool result; // al

  for ( i = a1; i[5]; i = (char **)i[5] )
    ;
  v3 = *i;
  v4 = (unsigned __int64)i[1];
  v5 = *(char **)(a2 + 488);
  v6 = *(_QWORD *)(a2 + 496);
  if ( !(*(_BYTE *)(a2 + 201) >> 5) )
  {
    while ( a1[5] )
      a1 = (char **)a1[5];
    if ( ((_BYTE)a1[113] & 0x10) != 0
      && v6 == *(_QWORD *)(a2 + 464)
      && (!v6
       || !memcmp(v5, *(const void **)(a2 + 456), v6) && (v6 <= 7 || *(_QWORD *)&v5[v6 - 8] != 0x657461766972505FLL))
      && v4 > 7
      && *(_QWORD *)&v3[v4 - 8] == 0x657461766972505FLL
      && v4 > v4 - 8 )
    {
      v4 -= 8LL;
    }
  }
  result = 0;
  if ( v6 == v4 )
  {
    result = 1;
    if ( v6 )
      return memcmp(v3, v5, v6) == 0;
  }
  return result;
}
