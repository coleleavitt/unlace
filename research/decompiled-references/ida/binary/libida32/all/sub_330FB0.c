int sub_330FB0()
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
  qword_2CD3D10 = 0;
  v1 = v0;
  qword_2CD3D18 = 0;
  qword_2CD3D20 = 0;
  qword_2CD3D00 = (__int64)&off_2C4B8B0;
  qword_2CD3D08 = (unsigned int)qword_2CD3D08 & 0x80000000;
  qword_2CD3D48 = 0x100000000LL;
  qword_2CD3D28 = 0;
  qword_2CD3D30 = 0;
  qword_2CD3D38 = 0;
  qword_2CD3D40 = (__int64)&unk_2CD3D50;
  qword_2CD3D58 = (__int64)&unk_2CD3D70;
  qword_2CD3D60 = 1;
  dword_2CD3D68 = 0;
  byte_2CD3D6C = 1;
  v2 = sub_21ED2B0("Time each pass, printing elapsed time for each on exit");
  v3 = (unsigned int)qword_2CD3D48;
  v4 = (unsigned int)qword_2CD3D48 + 1LL;
  if ( v4 > HIDWORD(qword_2CD3D48) )
  {
    v14.m128_u64[0] = v2;
    sub_22134E0((char *)&unk_2CD3D50 - 16, &unk_2CD3D50, v4, 8);
    v3 = (unsigned int)qword_2CD3D48;
    v2 = v14.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD3D40 + 8 * v3) = v2;
  qword_2CD3D80 = (__int64)off_2C474E8;
  qword_2CD3D00 = (__int64)off_2C47D10;
  LODWORD(qword_2CD3D48) = qword_2CD3D48 + 1;
  v14 = _mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CD3D78 = 0;
  byte_2CD3D89 = 0;
  qword_2CD3D90 = (__int64)off_2BC0B68;
  xmmword_2CD3DA8 = (__int128)v14;
  sub_21F3510(&qword_2CD3D00, "time-passes", 11);
  if ( qword_2CD3D78 )
  {
    v5 = sub_2259990(&qword_2CD3D00, "time-passes");
    v22 = 259;
    v20[0] = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CD3D00, v20, 0, 0, v5);
  }
  else
  {
    byte_2CD3D89 = 1;
    qword_2CD3D78 = (__int64)byte_2CD3DB9;
    byte_2CD3D88 = byte_2CD3DB9[0];
  }
  qword_2CD3D28 = v1;
  v15.m128i_i64[0] = (__int64)sub_209CC20;
  v6 = _mm_loadh_ps((const double *)v15.m128i_i64);
  BYTE2(qword_2CD3D08) = BYTE2(qword_2CD3D08) & 0x9F | 0x20;
  v15 = (__m128i)v6;
  qword_2CD3D20 = (__int64)"Time each pass, printing elapsed time for each on exit";
  sub_21F4400(&qword_2CD3D00);
  __cxa_atexit(sub_1FF1930, &qword_2CD3D00, &off_2AFC540);
  v21 = _mm_load_si128(&v15);
  v19 = v21;
  sub_209CC30(v20, v20, 3);
  v7 = j__strlen("Time each pass run, printing elapsed time for each run on exit");
  v16 = 1;
  v20[1] = v7;
  v20[0] = "Time each pass run, printing elapsed time for each run on exit";
  v17 = &unk_2CD3DB8;
  qword_2CD3C40 = (__int64)&off_2C4B8B0;
  qword_2CD3C48 = (unsigned int)qword_2CD3C48 & 0x80000000;
  qword_2CD3C88 = 0x100000000LL;
  qword_2CD3C50 = 0;
  qword_2CD3C58 = 0;
  qword_2CD3C60 = 0;
  qword_2CD3C68 = 0;
  qword_2CD3C70 = 0;
  qword_2CD3C78 = 0;
  qword_2CD3C80 = (__int64)&unk_2CD3C90;
  qword_2CD3C98 = (__int64)&unk_2CD3CB0;
  qword_2CD3CA0 = 1;
  dword_2CD3CA8 = 0;
  byte_2CD3CAC = 1;
  v8 = sub_21ED2B0("Time each pass run, printing elapsed time for each run on exit");
  v9 = (unsigned int)qword_2CD3C88;
  v10 = (unsigned int)qword_2CD3C88 + 1LL;
  if ( v10 > HIDWORD(qword_2CD3C88) )
  {
    v15.m128i_i64[0] = v8;
    sub_22134E0((char *)&unk_2CD3C90 - 16, &unk_2CD3C90, v10, 8);
    v9 = (unsigned int)qword_2CD3C88;
    v8 = v15.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v14);
  *(_QWORD *)(qword_2CD3C80 + 8 * v9) = v8;
  qword_2CD3CC0 = (__int64)off_2C474E8;
  qword_2CD3C40 = (__int64)off_2C47D10;
  qword_2CD3CD0 = (__int64)off_2BC0B68;
  xmmword_2CD3CE8 = (__int128)si128;
  LODWORD(qword_2CD3C88) = qword_2CD3C88 + 1;
  qword_2CD3CB8 = 0;
  byte_2CD3CC9 = 0;
  sub_21F3510(&qword_2CD3C40, "time-passes-per-run", 19);
  sub_209D150(&qword_2CD3C40, &v17, &v16, v20, v18, v12, v14.m128_u64[0], v14.m128_u64[1]);
  sub_21F4400(&qword_2CD3C40);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v19.m128i_i64[0])(v18, v18, 3);
  return __cxa_atexit(sub_1FF1930, &qword_2CD3C40, &off_2AFC540);
}

