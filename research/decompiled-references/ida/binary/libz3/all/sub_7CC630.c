void __fastcall sub_7CC630(const __m128i *a1)
{
  __int64 v1; // rbp
  void *v2; // r12
  __m128i v3; // xmm2
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 (__fastcall *v6)(__m128i *, _QWORD *, int); // rax
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  _QWORD v10[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v11; // [rsp+10h] [rbp-68h]
  _QWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  __m128i v14[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( a1[140].m128i_i64[1] || !a1[56].m128i_i32[2] )
    return;
  v1 = sub_186B270(0x48u);
  sub_7F38C0(v1, a1, a1[9].m128i_i64[0]);
  v2 = (void *)a1[140].m128i_i64[1];
  if ( (void *)v1 != v2 )
  {
    if ( v2 )
    {
      sub_7F3C30(a1[140].m128i_i64[1]);
      sub_186B220(v2);
    }
    a1[140].m128i_i64[1] = v1;
  }
  v14[0].m128i_i64[0] = (__int64)a1;
  v3 = _mm_loadu_si128(a1 + 127);
  v10[0] = a1;
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C54910), (__m128i)(unsigned __int64)sub_7C9CF0);
  v10[1] = 0;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C54918), (__m128i)(unsigned __int64)sub_7C9D10);
  *(__m128i *)((char *)v14 + 8) = 0;
  v12[1] = 0;
  a1[127] = _mm_load_si128(v14);
  v5 = _mm_loadu_si128(a1 + 128);
  v12[0] = a1;
  v11 = v4;
  v14[0] = v3;
  v14[1] = v5;
  a1[128] = v4;
  if ( v5.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v5.m128i_i64[0])(v14, v14, 3);
    v6 = (__int64 (__fastcall *)(__m128i *, _QWORD *, int))v13.m128i_i64[0];
    memset(v14, 0, 32);
    if ( !v13.m128i_i64[0] )
    {
      v7 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = (__int64 (__fastcall *)(__m128i *, _QWORD *, int))sub_7C9E20;
    memset(v14, 0, 32);
  }
  v6(v14, v12, 2);
  v7 = _mm_load_si128(&v13);
  v6 = (__int64 (__fastcall *)(__m128i *, _QWORD *, int))v13.m128i_i64[0];
LABEL_10:
  v8 = _mm_loadu_si128(a1 + 129);
  a1[129] = _mm_load_si128(v14);
  v9 = _mm_loadu_si128(a1 + 130);
  v14[0] = v8;
  v14[1] = v9;
  a1[130] = v7;
  if ( v9.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v9.m128i_i64[0])(v14, v14, 3);
    v6 = (__int64 (__fastcall *)(__m128i *, _QWORD *, int))v13.m128i_i64[0];
  }
  if ( v6 )
    v6((__m128i *)v12, v12, 3);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v11.m128i_i64[0])(v10, v10, 3);
}

