__int64 __fastcall sub_BF5050(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __m128 v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i si128; // xmm1
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  void (__fastcall *v21)(_QWORD *, _QWORD *, __int64); // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm0
  __int64 result; // rax
  __m128i v26; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v28; // [rsp+20h] [rbp-98h]
  _QWORD v29[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v30; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v32; // [rsp+60h] [rbp-58h] BYREF
  __m128i v33[4]; // [rsp+70h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = a3;
  v4 = _mm_loadl_epi64((const __m128i *)off_1C57F58);
  *(_QWORD *)a1 = a2;
  v26 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)sub_BF5B10);
  v5 = sub_14B5FD0(a3);
  *(_QWORD *)(a1 + 16) = v5;
  sub_16669D0(a1 + 24, v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v6;
  sub_180C5A0(v33, "seq");
  v7 = sub_15DA4C0(v6 + 560, v33);
  v8 = sub_15D2690(v6, v7);
  v9 = *(_QWORD *)(a1 + 16);
  *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)(v8 + 88));
  LODWORD(v8) = *(_DWORD *)(v8 + 16);
  *(_QWORD *)(a1 + 120) = 0;
  v10 = _mm_loadh_ps((const double *)(a1 + 40));
  *(_DWORD *)(a1 + 64) = v8;
  *(_DWORD *)(a1 + 88) = v8;
  *(_DWORD *)(a1 + 112) = v8;
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = v11;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 168) = 0;
  *(__m128 *)(a1 + 72) = v10;
  *(__m128 *)(a1 + 96) = v10;
  sub_1407260(a1 + 176, v9, a3);
  sub_1450910(a1 + 512, a3);
  v33[0].m128i_i64[0] = a1;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 1072));
  v13 = _mm_load_si128(&v26);
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C57F60), (__m128i)(unsigned __int64)sub_BF5650);
  *(_BYTE *)(a1 + 1168) = 0;
  v30 = v14;
  v15 = _mm_loadl_epi64((const __m128i *)&off_1C57F68);
  *(_QWORD *)(a1 + 1192) = 0;
  v27[0] = a1;
  v32 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)sub_BF5E90);
  *(__m128i *)((char *)v33 + 8) = 0;
  si128 = _mm_load_si128(v33);
  *(_QWORD *)(a1 + 1200) = 0;
  *(__m128i *)(a1 + 1072) = si128;
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 1088));
  *(_QWORD *)(a1 + 1224) = 0;
  v29[0] = a1;
  *(_QWORD *)(a1 + 1232) = 0;
  v27[1] = 0;
  v29[1] = 0;
  v31[1] = 0;
  v31[0] = a1;
  *(_OWORD *)(a1 + 1176) = 0;
  *(_OWORD *)(a1 + 1208) = 0;
  v28 = v13;
  v33[0] = v12;
  v33[1] = v17;
  *(__m128i *)(a1 + 1088) = v13;
  if ( !v17.m128i_i64[0] )
  {
    memset(v33, 0, 32);
    sub_BF4FF0(v33, v29, 2);
    goto LABEL_4;
  }
  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v17.m128i_i64[0])(v33, v33, 3);
  memset(v33, 0, 32);
  if ( v30.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v30.m128i_i64[0])(v33, v29, 2);
LABEL_4:
    v18 = _mm_load_si128(&v30);
    goto LABEL_5;
  }
  v18 = 0;
LABEL_5:
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 1104));
  *(__m128i *)(a1 + 1104) = _mm_load_si128(v33);
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 1120));
  v33[0] = v19;
  v33[1] = v20;
  *(__m128i *)(a1 + 1120) = v18;
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(v33, v33, 3);
  v21 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v32.m128i_i64[0];
  memset(v33, 0, 32);
  if ( v32.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v32.m128i_i64[0])(v33, v31, 2);
    v22 = _mm_load_si128(&v32);
    v21 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v32.m128i_i64[0];
  }
  else
  {
    v22 = 0;
  }
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 1136));
  *(__m128i *)(a1 + 1136) = _mm_load_si128(v33);
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 1152));
  v33[0] = v23;
  v33[1] = v24;
  *(__m128i *)(a1 + 1152) = v22;
  if ( v24.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v24.m128i_i64[0])(v33, v33, 3);
    v21 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v32.m128i_i64[0];
  }
  if ( v21 )
    v21(v31, v31, 3);
  if ( v30.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v30.m128i_i64[0])(v29, v29, 3);
  result = v28.m128i_i64[0];
  if ( v28.m128i_i64[0] )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v28.m128i_i64[0])(v27, v27, 3);
  return result;
}

