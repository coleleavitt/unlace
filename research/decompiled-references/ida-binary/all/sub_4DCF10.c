unsigned __int64 __fastcall sub_4DCF10(const __m128i *a1, __int64 a2)
{
  __int8 *v2; // rbx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rbp
  __m128i v7; // xmm0
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v2 = &a1[-2].m128i_i8[8];
  v3 = a1[1].m128i_i64[0];
  v11 = __readfsqword(0x28u);
  v10 = v3;
  v9 = _mm_loadu_si128(a1);
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a2 + 480LL))(a2, &v9) >> 32;
    if ( (int)v6 >= (int)((unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int8 *))(*(_QWORD *)a2 + 480LL))(
                                              a2,
                                              v2) >> 32) )
      break;
    v4 = _mm_loadu_si128((const __m128i *)v2);
    v5 = *((_QWORD *)v2 + 2);
    v2 -= 24;
    *((_QWORD *)v2 + 8) = v5;
    *((__m128i *)v2 + 3) = v4;
  }
  v7 = _mm_load_si128(&v9);
  *((_QWORD *)v2 + 5) = v10;
  *(__m128i *)(v2 + 24) = v7;
  return v11 - __readfsqword(0x28u);
}
