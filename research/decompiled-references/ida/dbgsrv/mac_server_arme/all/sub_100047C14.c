/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047C14
// Address: 0x0000000100047C14

//----- (0000000100047C14) ----------------------------------------------------
__int64 __fastcall sub_100047C14(__int64 a1, __int64 a2)
{
  size_t prime; // x21
  int8x8_t v5; // x22
  bool v6; // cf
  unsigned __int64 v7; // x0
  uint8x8_t v8; // d0
  __int64 v9; // x8
  _QWORD *i; // x20

  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  prime = *(_QWORD *)(a2 + 8);
  if ( prime == 1 )
  {
    prime = 2;
LABEL_17:
    sub_100047D48(a1, prime);
    goto LABEL_18;
  }
  if ( (prime & (prime - 1)) != 0 )
  {
    prime = std::__next_prime(*(_QWORD *)(a2 + 8));
    v5 = *(int8x8_t *)(a1 + 8);
    v6 = prime >= *(_QWORD *)&v5;
    if ( prime > *(_QWORD *)&v5 )
      goto LABEL_17;
  }
  else
  {
    v5 = 0;
    v6 = 1;
    if ( prime )
      goto LABEL_17;
  }
  if ( !v6 )
  {
    v7 = vcvtps_u32_f32((float)*(unsigned __int64 *)(a1 + 24) / *(float *)(a1 + 32));
    if ( *(_QWORD *)&v5 < 3u || (v8 = (uint8x8_t)vcnt_s8(v5), v8.i16[0] = vaddlv_u8(v8), v8.u32[0] > 1uLL) )
    {
      v7 = std::__next_prime(v7);
    }
    else
    {
      v9 = 1LL << -(char)__clz(v7 - 1);
      if ( v7 >= 2 )
        v7 = v9;
    }
    if ( prime <= v7 )
      prime = v7;
    if ( prime < *(_QWORD *)&v5 )
      goto LABEL_17;
  }
LABEL_18:
  for ( i = *(_QWORD **)(a2 + 16); i; i = (_QWORD *)*i )
    sub_100047EA4(a1, (__int64)(i + 2), (__int64)(i + 2));
  return a1;
}
