int sub_334370()
{
  size_t v0; // rax
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __m128 v6; // xmm0
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i si128; // xmm2
  __int64 v12; // r9
  __m128 v14; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v15; // [rsp+10h] [rbp-A8h] BYREF
  int v16; // [rsp+24h] [rbp-94h] BYREF
  void *v17; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v19; // [rsp+40h] [rbp-78h]
  _QWORD v20[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v21; // [rsp+60h] [rbp-58h]
  __int16 v22; // [rsp+70h] [rbp-48h]

  v0 = j__strlen("Time each pass, printing elapsed time for each on exit");
  qword_2CFDC30 = 0;
  v1 = v0;
  qword_2CFDC38 = 0;
  qword_2CFDC40 = 0;
  qword_2CFDC20 = (__int64)&off_2C758B0;
  qword_2CFDC28 = (unsigned int)qword_2CFDC28 & 0x80000000;
  qword_2CFDC68 = 0x100000000LL;
  qword_2CFDC48 = 0;
  qword_2CFDC50 = 0;
  qword_2CFDC58 = 0;
  qword_2CFDC60 = (__int64)&unk_2CFDC70;
  qword_2CFDC78 = (__int64)&unk_2CFDC90;
  qword_2CFDC80 = 1;
  dword_2CFDC88 = 0;
  byte_2CFDC8C = 1;
  v2 = sub_2210FF0("Time each pass, printing elapsed time for each on exit");
  v3 = (unsigned int)qword_2CFDC68;
  v4 = (unsigned int)qword_2CFDC68 + 1LL;
  if ( v4 > HIDWORD(qword_2CFDC68) )
  {
    v14.m128_u64[0] = v2;
    sub_2237220((char *)&unk_2CFDC70 - 16, &unk_2CFDC70, v4, 8);
    v3 = (unsigned int)qword_2CFDC68;
    v2 = v14.m128_u64[0];
  }
  *(_QWORD *)(qword_2CFDC60 + 8 * v3) = v2;
  qword_2CFDCA0 = (__int64)off_2C714E8;
  qword_2CFDC20 = (__int64)off_2C71D10;
  LODWORD(qword_2CFDC68) = qword_2CFDC68 + 1;
  v14 = _mm_loadh_ps((const double *)off_2C778E8);
  qword_2CFDC98 = 0;
  byte_2CFDCA9 = 0;
  qword_2CFDCB0 = (__int64)off_2BEAB08;
  xmmword_2CFDCC8 = (__int128)v14;
  sub_2217250(&qword_2CFDC20, "time-passes", 11);
  if ( qword_2CFDC98 )
  {
    v5 = sub_227D6D0(&qword_2CFDC20, "time-passes");
    v22 = 259;
    v20[0] = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2CFDC20, v20, 0, 0, v5);
  }
  else
  {
    byte_2CFDCA9 = 1;
    qword_2CFDC98 = (__int64)byte_2CFDCD9;
    byte_2CFDCA8 = byte_2CFDCD9[0];
  }
  qword_2CFDC48 = v1;
  v15.m128i_i64[0] = (__int64)sub_20C0960;
  v6 = _mm_loadh_ps((const double *)v15.m128i_i64);
  BYTE2(qword_2CFDC28) = BYTE2(qword_2CFDC28) & 0x9F | 0x20;
  v15 = (__m128i)v6;
  qword_2CFDC40 = (__int64)"Time each pass, printing elapsed time for each on exit";
  sub_2218140(&qword_2CFDC20);
  __cxa_atexit(sub_2015670, &qword_2CFDC20, &off_2B25620);
  v21 = _mm_load_si128(&v15);
  v19 = v21;
  sub_20C0970(v20, v20, 3);
  v7 = j__strlen("Time each pass run, printing elapsed time for each run on exit");
  v16 = 1;
  v20[1] = v7;
  v20[0] = "Time each pass run, printing elapsed time for each run on exit";
  v17 = &unk_2CFDCD8;
  qword_2CFDB60 = (__int64)&off_2C758B0;
  qword_2CFDB68 = (unsigned int)qword_2CFDB68 & 0x80000000;
  qword_2CFDBA8 = 0x100000000LL;
  qword_2CFDB70 = 0;
  qword_2CFDB78 = 0;
  qword_2CFDB80 = 0;
  qword_2CFDB88 = 0;
  qword_2CFDB90 = 0;
  qword_2CFDB98 = 0;
  qword_2CFDBA0 = (__int64)&unk_2CFDBB0;
  qword_2CFDBB8 = (__int64)&unk_2CFDBD0;
  qword_2CFDBC0 = 1;
  dword_2CFDBC8 = 0;
  byte_2CFDBCC = 1;
  v8 = sub_2210FF0("Time each pass run, printing elapsed time for each run on exit");
  v9 = (unsigned int)qword_2CFDBA8;
  v10 = (unsigned int)qword_2CFDBA8 + 1LL;
  if ( v10 > HIDWORD(qword_2CFDBA8) )
  {
    v15.m128i_i64[0] = v8;
    sub_2237220((char *)&unk_2CFDBB0 - 16, &unk_2CFDBB0, v10, 8);
    v9 = (unsigned int)qword_2CFDBA8;
    v8 = v15.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v14);
  *(_QWORD *)(qword_2CFDBA0 + 8 * v9) = v8;
  qword_2CFDBE0 = (__int64)off_2C714E8;
  qword_2CFDB60 = (__int64)off_2C71D10;
  qword_2CFDBF0 = (__int64)off_2BEAB08;
  xmmword_2CFDC08 = (__int128)si128;
  LODWORD(qword_2CFDBA8) = qword_2CFDBA8 + 1;
  qword_2CFDBD8 = 0;
  byte_2CFDBE9 = 0;
  sub_2217250(&qword_2CFDB60, "time-passes-per-run", 19);
  sub_20C0E90(&qword_2CFDB60, &v17, &v16, v20, v18, v12, v14.m128_u64[0], v14.m128_u64[1]);
  sub_2218140(&qword_2CFDB60);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v19.m128i_i64[0])(v18, v18, 3);
  return __cxa_atexit(sub_2015670, &qword_2CFDB60, &off_2B25620);
}
