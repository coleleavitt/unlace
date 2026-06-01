/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56778
// Address: 0x00056778

//----- (00056778) --------------------------------------------------------
unsigned int __fastcall sub_56778(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r6
  void **v5; // r0
  unsigned int v6; // r1
  _BOOL4 v7; // r7
  unsigned int v8; // r1
  unsigned int v9; // r1
  unsigned int v10; // r1
  unsigned int v11; // r2

  v2 = result;
  v3 = 2;
  if ( a2 != 1 )
  {
    result = a2 - 1;
    if ( ((a2 - 1) & a2) != 0 )
    {
      result = std::__next_prime(a2);
      v3 = result;
    }
    else
    {
      v3 = a2;
    }
  }
  v4 = *(_DWORD *)(v2 + 4);
  if ( v3 > v4 )
  {
    v5 = (void **)v2;
    v6 = v3;
    return sub_5685C(v5, v6);
  }
  if ( v3 >= v4 )
    return result;
  v7 = 0;
  if ( v4 >= 3 )
    v7 = ((v4 - 1) & v4) == 0;
  result = (unsigned int)ceilf((float)*(unsigned int *)(v2 + 12) / *(float *)(v2 + 16));
  v6 = result;
  if ( v7 )
  {
    if ( result < 2 )
    {
      if ( v3 < result )
        goto LABEL_14;
LABEL_19:
      v6 = v3;
      if ( v3 < v4 )
        goto LABEL_15;
      return result;
    }
    v8 = ((((result - 1) >> 1) | (result - 1)) >> 2) | ((result - 1) >> 1) | (result - 1);
    v9 = (((v8 >> 4) | v8) >> 8) | (v8 >> 4) | v8;
    v10 = ~(HIWORD(v9) | v9) - ((~(HIWORD(v9) | v9) >> 1) & 0x55555555);
    v11 = (16843009
         * (((v10 & 0x33333333) + ((v10 >> 2) & 0x33333333) + (((v10 & 0x33333333) + ((v10 >> 2) & 0x33333333)) >> 4))
          & 0xF0F0F0F)) >> 24;
    result = 32 - v11;
    v6 = 1 << (32 - v11);
    if ( v3 >= v6 )
      goto LABEL_19;
  }
  else
  {
    result = std::__next_prime(result);
    v6 = result;
    if ( v3 >= result )
      goto LABEL_19;
  }
LABEL_14:
  if ( v6 < v4 )
  {
LABEL_15:
    v5 = (void **)v2;
    return sub_5685C(v5, v6);
  }
  return result;
}
// 567FE: conditional instruction was optimized away because r0.4>=2u
