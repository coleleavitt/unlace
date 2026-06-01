__int64 __fastcall del_items(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r9d
  __m128i si128; // xmm2
  __m128i v6; // xmm0
  __int64 v7; // rbp
  unsigned int v8; // ebp
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  __m128i v11; // [rsp+10h] [rbp-58h]
  __m128i v12[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v4 = a1;
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0u;
  if ( a4 )
  {
    v12[0].m128i_i64[0] = a4;
    si128 = _mm_load_si128(v12);
    v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B26148), (__m128i)(unsigned __int64)sub_3B7E90);
    v7 = *(_QWORD *)(qword_2CCB598 + 1672);
    v11 = v6;
    v10 = si128;
    memset(v12, 0, 24);
    sub_3B9140(v12, &v10, 2);
    v12[1] = v6;
  }
  else
  {
    v7 = *(_QWORD *)(qword_2CCB598 + 1672);
    memset(v12, 0, sizeof(v12));
  }
  v8 = sub_3D19E0(v7, v4);
  if ( v12[1].m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12[1].m128i_i64[0])(v12, v12, 3);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128i_i64[0])(&v10, &v10, 3);
  return v8;
}
