void __fastcall sub_AE3E50(__int64 a1, const __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int128 si128; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  _BYTE v11[24]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v12; // [rsp+20h] [rbp-70h]
  __m128i v13[5]; // [rsp+28h] [rbp-68h] BYREF
  __int64 v14; // [rsp+78h] [rbp-18h]

  v6 = _mm_loadu_si128(a2);
  v7 = a2[1].m128i_i64[0];
  v13[0] = (__m128i)a3;
  *(__m128i *)&v11[8] = v6;
  *(_QWORD *)v11 = a1;
  si128 = (__int128)_mm_load_si128((const __m128i *)v11);
  v12 = v7;
  v9 = (__int128)_mm_load_si128((const __m128i *)&v11[16]);
  v10 = (__int128)_mm_load_si128(v13);
  v13[2] = (__m128i)si128;
  v13[3] = (__m128i)v9;
  v13[4] = (__m128i)v10;
  v14 = 0;
  sub_AE3830((char *)(a1 + 8), (char *)&byte_22F0C30, 0, a4, a5, a6, si128, v9, v10, 0);
}
