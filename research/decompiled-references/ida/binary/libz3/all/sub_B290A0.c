__m128i *__fastcall sub_B290A0(__m128i *a1, const __m128i *a2)
{
  void *v2; // r13
  __int32 v3; // eax
  __int32 v4; // eax
  void *v5; // r12
  __int32 v6; // eax
  __int32 v7; // eax
  __m128i v8; // xmm0

  a1->m128i_i32[2] = a2->m128i_i32[2];
  v2 = qword_1C7F2C0;
  if ( (a2[1].m128i_i8[4] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &a1[1], &a2[1]);
    if ( (a2[2].m128i_i8[4] & 1) == 0 )
    {
LABEL_3:
      v4 = a2[2].m128i_i32[0];
      v5 = qword_1C7F2C0;
      a1[2].m128i_i8[4] &= ~1u;
      a1[2].m128i_i32[0] = v4;
      a1[3].m128i_i32[0] = a2[3].m128i_i32[0];
      if ( (a2[3].m128i_i8[12] & 1) == 0 )
        goto LABEL_4;
LABEL_9:
      sub_182C690(v5, &a1[3].m128i_u64[1], &a2[3].m128i_u64[1]);
      if ( (a2[4].m128i_i8[12] & 1) == 0 )
        goto LABEL_5;
LABEL_10:
      sub_182C690(v5, &a1[4].m128i_u64[1], &a2[4].m128i_u64[1]);
      goto LABEL_6;
    }
  }
  else
  {
    v3 = a2[1].m128i_i32[0];
    a1[1].m128i_i8[4] &= ~1u;
    a1[1].m128i_i32[0] = v3;
    if ( (a2[2].m128i_i8[4] & 1) == 0 )
      goto LABEL_3;
  }
  sub_182C690(v2, &a1[2], &a2[2]);
  v5 = qword_1C7F2C0;
  a1[3].m128i_i32[0] = a2[3].m128i_i32[0];
  if ( (a2[3].m128i_i8[12] & 1) != 0 )
    goto LABEL_9;
LABEL_4:
  v6 = a2[3].m128i_i32[2];
  a1[3].m128i_i8[12] &= ~1u;
  a1[3].m128i_i32[2] = v6;
  if ( (a2[4].m128i_i8[12] & 1) != 0 )
    goto LABEL_10;
LABEL_5:
  v7 = a2[4].m128i_i32[2];
  a1[4].m128i_i8[12] &= ~1u;
  a1[4].m128i_i32[2] = v7;
LABEL_6:
  v8 = _mm_loadu_si128(a2 + 6);
  a1[5].m128i_i16[4] = a2[5].m128i_i16[4];
  a1[6] = v8;
  return a1;
}

