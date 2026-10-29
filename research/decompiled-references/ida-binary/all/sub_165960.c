__int64 **sub_165960()
{
  __m128 v0; // xmm14
  __m128 v1; // xmm13
  __m128 v2; // xmm12
  __m128 v3; // xmm11
  __m128 v4; // xmm10
  __m128 v5; // xmm9
  __m128 v6; // xmm8
  __m128 v7; // xmm7
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm4
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128i si128; // xmm15
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm3
  __m128 v22; // [rsp+0h] [rbp-68h] BYREF
  __m128 v23; // [rsp+10h] [rbp-58h] BYREF
  __m128 v24; // [rsp+20h] [rbp-48h] BYREF
  __m128i v25; // [rsp+30h] [rbp-38h] BYREF
  __m128i v26[2]; // [rsp+40h] [rbp-28h] BYREF

  qword_8CD838 = (__int64)&dword_8CD828;
  dword_8CD828 = 0;
  qword_8CD830 = 0;
  qword_8CD840 = (__int64)&dword_8CD828;
  qword_8CD848 = 0;
  __cxa_atexit(sub_2FFD70, &dword_8CD828 - 2, &off_85BC80);
  xmmword_8CD7C8 = 0;
  qword_8CD7C0 = nullptr;
  __cxa_atexit(sub_16B530, &qword_8CD7C0, &off_85BC80);
  sub_1A1F60(&qword_8CD7A0, &unk_5C2F25);
  __cxa_atexit(sub_16B530, &qword_8CD7A0, &off_85BC80);
  sub_1A1F60(&unk_8CD780, "notepad.exe");
  __cxa_atexit(sub_16B530, &unk_8CD780, &off_85BC80);
  qword_8CD760 = 0;
  qword_8CD768 = 0;
  __cxa_atexit(sub_2FEDC0, &qword_8CD760, &off_85BC80);
  qword_8CD750 = 0;
  qword_8CD758 = 0;
  __cxa_atexit(sub_2FEDC0, &qword_8CD750, &off_85BC80);
  __cxa_atexit(graph_dispatcher_t__::vfunc_1, &off_8BA8B0, &off_85BC80);
  __cxa_atexit(sub_17C8C0, &xmmword_8CD720, &off_85BC80);
  v0 = _mm_loadh_ps((const double *)&off_8BA5D0);
  v1 = _mm_loadh_ps((const double *)&off_8BC9E8);
  v2 = _mm_loadh_ps((const double *)&off_8BCAF0);
  v3 = _mm_loadh_ps((const double *)&off_8BCBE8);
  v4 = _mm_loadh_ps((const double *)&off_8BC968);
  v5 = _mm_loadh_ps((const double *)&off_8BCA48);
  v6 = _mm_loadh_ps((const double *)&off_8BA538);
  v7 = _mm_loadh_ps((const double *)off_8BDE70);
  v8 = _mm_loadh_ps((const double *)&off_8BDE58);
  v9 = _mm_loadh_ps((const double *)&off_8BA520);
  v10 = _mm_loadh_ps((const double *)&off_8BA4E8);
  v11 = _mm_loadh_ps((const double *)&off_8BCA30);
  v22 = _mm_loadh_ps((const double *)&off_8BC960);
  v23 = _mm_loadh_ps((const double *)&off_8BC948);
  v24 = _mm_loadh_ps((const double *)&off_8BA300);
  xmmword_8CD550 = (__int128)v0;
  xmmword_8CD560 = (__int128)v1;
  xmmword_8CD570 = (__int128)v2;
  v12 = _mm_loadh_ps((const double *)off_8BA468);
  xmmword_8CD580 = (__int128)v3;
  v25 = (__m128i)v12;
  xmmword_8CD590 = (__int128)v4;
  xmmword_8CD5A0 = (__int128)v5;
  v26[0] = (__m128i)_mm_loadh_ps((const double *)off_8BC9D8);
  v13 = _mm_loadh_ps((const double *)off_8BC9C8);
  v14 = _mm_loadh_ps((const double *)&off_8BC9B8);
  v15 = _mm_loadh_ps((const double *)&off_8BDE80);
  xmmword_8CD540 = (__int128)_mm_loadh_ps((const double *)&off_8BA720);
  xmmword_8CD5B0 = (__int128)v6;
  si128 = _mm_load_si128((const __m128i *)&v24);
  xmmword_8CD5D0 = (__int128)v8;
  v18 = _mm_load_si128(v26);
  xmmword_8CD5E0 = (__int128)v9;
  v19 = _mm_load_si128(&v25);
  xmmword_8CD5F0 = (__int128)v10;
  v20 = _mm_load_si128((const __m128i *)&v23);
  xmmword_8CD600 = (__int128)v11;
  v21 = _mm_load_si128((const __m128i *)&v22);
  xmmword_8CD5C0 = (__int128)v7;
  xmmword_8CD610 = (__int128)v21;
  xmmword_8CD620 = (__int128)v20;
  xmmword_8CD630 = (__int128)si128;
  xmmword_8CD640 = (__int128)v19;
  xmmword_8CD650 = (__int128)v18;
  xmmword_8CD660 = (__int128)v13;
  xmmword_8CD670 = (__int128)v14;
  xmmword_8CD680 = (__int128)v15;
  return &off_8BA720;
}
