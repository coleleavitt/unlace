/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004DEB0
// Address: 0x000000010004DEB0

//----- (000000010004DEB0) ----------------------------------------------------
void __fastcall sub_10004DEB0(__int64 a1, __int64 a2)
{
  __m128 v3; // xmm0
  size_t prime; // r15
  size_t v5; // rsi
  unsigned __int64 v6; // r12
  bool v7; // cf
  unsigned __int8 *i; // r14
  __int64 v9; // rax
  __m128 v10; // xmm0
  __int64 v11; // rax
  size_t v12; // rax
  unsigned __int64 v13; // rcx

  v3 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  prime = *(_QWORD *)(a2 + 8);
  v5 = 2;
  if ( prime == 1 )
    goto LABEL_5;
  if ( ((prime - 1) & prime) != 0 )
  {
    prime = std::__next_prime(prime);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = prime < v6;
    if ( prime > v6 )
      goto LABEL_4;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    if ( prime )
    {
LABEL_4:
      v5 = prime;
LABEL_5:
      sub_10004E060(a1, v5);
      goto LABEL_6;
    }
  }
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 < 0 )
    {
      v11 = (*(_QWORD *)(a1 + 24) >> 1) | *(_QWORD *)(a1 + 24) & 1LL;
      v10 = 0;
      v10.f32[0] = (float)(int)v11 + (float)(int)v11;
    }
    else
    {
      v10 = 0;
      v10.f32[0] = (float)(int)v9;
    }
    v10.f32[0] = v10.f32[0] / *(float *)(a1 + 32);
    v3 = _mm_round_ss(v10, v10, 10);
    v12 = (unsigned int)(int)v3.f32[0];
    v3.f32[0] = v3.f32[0] - 9.223372e18;
    if ( v6 < 3
      || (unsigned int)((0x101010101010101LL
                       * ((((v6 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v6 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v6 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v6 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
                        & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 > 1 )
    {
      v5 = std::__next_prime(v12);
    }
    else
    {
      _BitScanReverse64(&v13, v12 - 1);
      v5 = 1LL << -(v13 ^ 0x3F);
      if ( v12 < 2 )
        v5 = v12;
    }
    if ( prime > v5 )
      v5 = prime;
    if ( v5 < v6 )
      goto LABEL_5;
  }
LABEL_6:
  for ( i = *(unsigned __int8 **)(a2 + 16); i; i = *(unsigned __int8 **)i )
    sub_10004E2C0((_QWORD *)a1, i + 16, (__int64)(i + 16), v3);
}
