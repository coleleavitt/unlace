__int64 __fastcall sub_A54D20(__int64 a1, int *a2)
{
  char v2; // dl
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  char v5; // al
  __m128i v6; // xmm2
  int v8; // [rsp+0h] [rbp-48h] BYREF
  char v9; // [rsp+4h] [rbp-44h]
  __m128i v10; // [rsp+8h] [rbp-40h] BYREF
  __m128i v11; // [rsp+18h] [rbp-30h] BYREF
  __m128i v12[2]; // [rsp+28h] [rbp-20h] BYREF

  if ( (int *)a1 != a2 )
  {
    sub_A53C40((__int64)&v8, a2);
    if ( *(_DWORD *)a1 > 1u )
      sub_A4F8E0((int *)a1);
    v2 = v9;
    v3 = _mm_loadu_si128(&v10);
    v4 = _mm_loadu_si128(&v11);
    *(_DWORD *)a1 = v8;
    v5 = *(_BYTE *)(a1 + 4);
    v6 = _mm_loadu_si128(v12);
    *(__m128i *)(a1 + 8) = v3;
    *(__m128i *)(a1 + 24) = v4;
    *(__m128i *)(a1 + 40) = v6;
    *(_BYTE *)(a1 + 4) = v2 & 1 | v5 & 0xFE;
  }
  return a1;
}
