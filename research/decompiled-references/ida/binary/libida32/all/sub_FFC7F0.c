__int64 __fastcall sub_FFC7F0(__int64 a1, int a2)
{
  signed int v3; // eax
  unsigned int *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // rsi

  v3 = sub_A5CA10(a1, a2);
  v4 = *(unsigned int **)(a1 + 296);
  v5 = (4LL * *(unsigned int *)(a1 + 304)) >> 2;
  if ( !(4LL * *(unsigned int *)(a1 + 304)) )
    return *v4;
  do
  {
    while ( 1 )
    {
      v6 = v5 >> 1;
      v7 = &v4[v5 >> 1];
      if ( v3 >= (int)*v7 )
        break;
      v4 = v7 + 1;
      v5 = v5 - v6 - 1;
      if ( v5 <= 0 )
        return *v4;
    }
    v5 >>= 1;
  }
  while ( v6 );
  return *v4;
}

