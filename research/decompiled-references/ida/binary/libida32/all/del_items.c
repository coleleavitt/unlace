__int64 __fastcall del_items(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r9d
  int v5; // r10d
  __m128i si128; // xmm2
  __m128i v7; // xmm0
  __int64 v8; // rbp
  unsigned int v9; // ebp
  __m128i v11; // [rsp+0h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h]
  __m128i v13[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v4 = a1;
  v5 = a2;
  v14 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0u;
  if ( a4 )
  {
    v13[0].m128i_i64[0] = a4;
    si128 = _mm_load_si128(v13);
    v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFD008), (__m128i)(unsigned __int64)sub_3B3600);
    v8 = *(_QWORD *)(qword_2CA1698 + 1480);
    v12 = v7;
    v11 = si128;
    memset(v13, 0, 24);
    sub_3B4980(v13, &v11, 2);
    v13[1] = v7;
  }
  else
  {
    v8 = *(_QWORD *)(qword_2CA1698 + 1480);
    memset(v13, 0, sizeof(v13));
  }
  v9 = sub_3CC010(v8, v4, v5);
  if ( v13[1].m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v13[1].m128i_i64[0])(v13, v13, 3);
  if ( v12.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v11, &v11, 3);
  return v9;
}

