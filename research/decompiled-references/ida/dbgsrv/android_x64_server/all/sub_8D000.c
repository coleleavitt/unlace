/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D000
// Address: 0x000000000008D000

//----- (000000000008D000) ----------------------------------------------------
void __fastcall sub_8D000(__int64 a1, unsigned __int64 a2, __m128 a3)
{
  unsigned __int64 prime; // rbx
  unsigned __int64 v4; // r15
  bool v5; // cl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx

  if ( a2 == 1 )
  {
    prime = 2;
  }
  else
  {
    prime = a2;
    if ( (a2 & (a2 - 1)) != 0 )
      prime = std::__next_prime(a2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( prime > v4 )
    goto LABEL_6;
  if ( prime < v4 )
  {
    v5 = v4 >= 3 && (v4 & (v4 - 1)) == 0;
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 < 0 )
    {
      v7 = (*(_QWORD *)(a1 + 24) >> 1) | *(_QWORD *)(a1 + 24) & 1LL;
      a3.m128_f32[0] = (float)(int)v7 + (float)(int)v7;
    }
    else
    {
      a3.m128_f32[0] = (float)(int)v6;
    }
    a3.m128_f32[0] = a3.m128_f32[0] / *(float *)(a1 + 32);
    a3.m128_f32[0] = _mm_round_ss(a3, a3, 10).m128_f32[0];
    v8 = (unsigned int)(int)a3.m128_f32[0];
    if ( a3.m128_f32[0] >= 9.223372e18 )
      v8 = (unsigned int)(int)(float)(a3.m128_f32[0] - 9.223372e18) ^ 0x8000000000000000LL;
    if ( v5 )
    {
      if ( v8 >= 2 )
      {
        _BitScanReverse64(&v9, v8 - 1);
        v8 = 1LL << (((unsigned __int8)v9 ^ 0xC0u) + 65);
      }
    }
    else
    {
      v8 = std::__next_prime(v8);
    }
    if ( prime < v8 )
      prime = v8;
    if ( prime < v4 )
LABEL_6:
      sub_8D100(a1, prime);
  }
}
