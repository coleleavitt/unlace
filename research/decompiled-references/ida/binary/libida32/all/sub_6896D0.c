__int64 __fastcall sub_6896D0(__int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rsi
  __m128i v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = *a3;
  v11 = __readfsqword(0x28u);
  v5 = a3[1];
  v9 = 0;
  v10 = 0;
  v8 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  LODWORD(v10) = unpack_dd(&v8);
  HIDWORD(v10) = unpack_dd(&v8);
  v6 = *a2;
  *a2 = v9;
  v9 = v6;
  LODWORD(a2) = create_tinfo(a1, v6 & 0xC0 | 0xB, 11, &v9);
  clear_tinfo_t(&v9);
  return (unsigned int)a2;
}

