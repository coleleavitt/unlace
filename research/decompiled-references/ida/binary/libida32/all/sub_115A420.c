unsigned __int64 __fastcall sub_115A420(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  double v3; // rdx
  double v5; // rdx
  __int64 v6; // rdx
  double v7[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+18h] [rbp-10h]

  v1 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v1 <= 0x26 )
  {
    v2 = sub_1107630(a1);
    BYTE1(v5) |= 2u;
    v7[0] = v5;
    v8 = v2 | 0x20010000000B03FLL;
    v6 = 0x4010000018LL;
    if ( _bittest64(&v6, v1) )
      return _mm_loadh_ps(v7).m128_u64[0];
  }
  else
  {
    v2 = sub_1107630(a1);
    BYTE1(v3) |= 2u;
    v7[0] = v3;
  }
  v8 = v2 | 0x20010000000B00FLL;
  return _mm_loadh_ps(v7).m128_u64[0];
}

