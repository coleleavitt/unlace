__int64 __fastcall sub_6A63E0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  char v3; // dl
  char v4; // al
  char v5; // al
  __m128i v6; // xmm0
  int v8; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+4h] [rbp-54h]
  __m128i v10; // [rsp+8h] [rbp-50h] BYREF
  __m128i v11; // [rsp+18h] [rbp-40h] BYREF
  __m128i v12[3]; // [rsp+28h] [rbp-30h] BYREF

  if ( a1 == a2 )
  {
    v5 = *(_BYTE *)(a1 + 4);
  }
  else
  {
    sub_6A4260((__int64)&v8, (int *)a2);
    if ( *(_DWORD *)a1 > 1u )
      sub_69F740(a1);
    v2 = _mm_loadu_si128(&v10);
    v3 = v9;
    *(_DWORD *)a1 = v8;
    v4 = *(_BYTE *)(a1 + 4);
    *(__m128i *)(a1 + 8) = v2;
    v5 = v3 & 1 | v4 & 0xFE;
    *(__m128i *)(a1 + 24) = _mm_loadu_si128(&v11);
    v6 = _mm_loadu_si128(v12);
    *(_BYTE *)(a1 + 4) = v5;
    *(__m128i *)(a1 + 40) = v6;
  }
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4) & 1 | v5 & 0xFE;
  return a1;
}

