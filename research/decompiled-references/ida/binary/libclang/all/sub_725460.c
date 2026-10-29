__m128i *__fastcall sub_725460(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __m128i *v3; // rbx
  __int8 v4; // al
  __int8 v5; // al

  v2 = a2[274];
  a2[284] += 48LL;
  v3 = (__m128i *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&v3[3] && v2 )
    a2[274] = v3 + 3;
  else
    v3 = (__m128i *)sub_722150((__int64)(a2 + 274), 48, 3);
  sub_7252C0(v3, a2, a1, a1[2].m128i_i64[1], a1[2].m128i_u32[1]);
  v4 = a1[2].m128i_i8[2] & 1 | v3[2].m128i_i8[2] & 0xFE;
  v3[2].m128i_i8[2] = v4;
  v5 = a1[2].m128i_i8[2] & 2 | v4 & 0xFD;
  v3[2].m128i_i8[2] = v5;
  v3[2].m128i_i8[2] = a1[2].m128i_i8[2] & 4 | v5 & 0xFB;
  return v3;
}

