int sub_333D90()
{
  size_t v0; // rax
  __m128i si128; // xmm0
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm2
  __m128i *v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __m128i v10; // xmm3
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // rax
  __int64 (__fastcall *v14)(); // rdx
  __m128i v15; // xmm0
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rcx
  size_t v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128 v23; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v24[16]; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v27; // [rsp+40h] [rbp-88h]
  __m128i v28; // [rsp+50h] [rbp-78h] BYREF
  __m128i v29; // [rsp+60h] [rbp-68h]
  _QWORD v30[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+80h] [rbp-48h]
  __int64 (__fastcall *v32)(); // [rsp+88h] [rbp-40h]
  __m128i v33; // [rsp+90h] [rbp-38h] BYREF
  void (__fastcall *v34)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-28h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-20h]

  v23.m128_u64[0] = (unsigned __int64)sub_20BF220;
  v23 = _mm_loadh_ps((const double *)v23.m128_u64);
  v0 = j__strlen("Maximum optimization to perform");
  si128 = _mm_load_si128((const __m128i *)&v23);
  qword_2CFD990 = 0;
  v2 = v0;
  qword_2CFD998 = 0;
  v27 = si128;
  qword_2CFD980 = (__int64)&off_2C758B0;
  qword_2CFD988 = (unsigned int)qword_2CFD988 & 0x80000000;
  qword_2CFD9C8 = 0x100000000LL;
  v25 = si128;
  qword_2CFD9A0 = 0;
  qword_2CFD9A8 = 0;
  qword_2CFD9B0 = 0;
  qword_2CFD9B8 = 0;
  qword_2CFD9C0 = (__int64)&unk_2CFD9D0;
  qword_2CFD9D8 = (__int64)&unk_2CFD9F0;
  qword_2CFD9E0 = 1;
  dword_2CFD9E8 = 0;
  byte_2CFD9EC = 1;
  v3 = sub_2210FF0("Maximum optimization to perform");
  v4 = (unsigned int)qword_2CFD9C8;
  v5 = (unsigned int)qword_2CFD9C8 + 1LL;
  if ( v5 > HIDWORD(qword_2CFD9C8) )
  {
    v23.m128_u64[0] = v3;
    sub_2237220((char *)&unk_2CFD9D0 - 16, &unk_2CFD9D0, v5, 8);
    v4 = (unsigned int)qword_2CFD9C8;
    v3 = v23.m128_u64[0];
  }
  *(_QWORD *)(qword_2CFD9C0 + 8 * v4) = v3;
  LODWORD(qword_2CFD9C8) = qword_2CFD9C8 + 1;
  byte_2CFDA0C = 0;
  qword_2CFDA00 = (__int64)off_2C71BB0;
  dword_2CFD9F8 = 0;
  xmmword_2CFDA28 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  qword_2CFD980 = (__int64)off_2C75778;
  dword_2CFDA08 = 0;
  qword_2CFDA10 = (__int64)off_2BEAB68;
  sub_2217250(&qword_2CFD980, "opt-bisect-limit", 16);
  dword_2CFD9F8 = 0x7FFFFFFF;
  byte_2CFDA0C = 1;
  dword_2CFDA08 = 0x7FFFFFFF;
  v29.m128i_i64[0] = 0;
  BYTE2(qword_2CFD988) = BYTE2(qword_2CFD988) & 0x98 | 0x20;
  if ( v25.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v25.m128i_i64[0])(&v28, v24, 2);
    v6 = _mm_load_si128(&v25);
    v31 = nullptr;
    v29 = v6;
    if ( v25.m128i_i64[0] )
    {
      v7 = (__m128i *)operator new(0x20u);
      v8 = v29.m128i_i64[0];
      v9 = _mm_load_si128(&v28);
      v29.m128i_i64[0] = 0;
      v10 = _mm_loadu_si128(v7);
      v11 = v7[1].m128i_i64[1];
      v30[0] = v7;
      v7[1].m128i_i64[0] = v8;
      v12 = v29.m128i_i64[1];
      *v7 = v9;
      v7[1].m128i_i64[1] = v12;
      v29.m128i_i64[1] = v11;
      v32 = sub_20BF1F0;
      v28 = v10;
      v31 = sub_20BF280;
    }
  }
  else
  {
    v31 = nullptr;
  }
  v13 = v31;
  v14 = v35;
  v34 = nullptr;
  if ( v31 )
  {
    ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v31)(&v33, v30, 2);
    v14 = v32;
    v13 = v31;
  }
  v15 = _mm_load_si128(&v33);
  v16 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))xmmword_2CFDA28;
  *(_QWORD *)&xmmword_2CFDA28 = v13;
  v33 = _mm_loadu_si128((const __m128i *)&xmmword_2CFDA18);
  xmmword_2CFDA18 = (__int128)v15;
  v34 = v16;
  v35 = *((__int64 (__fastcall **)())&xmmword_2CFDA28 + 1);
  *((_QWORD *)&xmmword_2CFDA28 + 1) = v14;
  if ( v16 )
    v16(&v33, &v33, 3);
  if ( v31 )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v31)(v30, v30, 3);
  if ( v29.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v29.m128i_i64[0])(&v28, &v28, 3);
  qword_2CFD9A8 = v2;
  qword_2CFD9A0 = (__int64)"Maximum optimization to perform";
  sub_2218140(&qword_2CFD980);
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v25.m128i_i64[0])(v24, v24, 3);
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v27.m128i_i64[0])(v26, v26, 3);
  __cxa_atexit(sub_20141D0, &qword_2CFD980, &off_2B25620);
  v17 = j__strlen("Show verbose output when opt-bisect-limit is set");
  byte_2CFD92C = 1;
  qword_2CFD8D0 = 0;
  v18 = v17;
  qword_2CFD8C0 = (__int64)&off_2C758B0;
  qword_2CFD8C8 = (unsigned int)qword_2CFD8C8 & 0x80000000;
  qword_2CFD908 = 0x100000000LL;
  qword_2CFD8D8 = 0;
  qword_2CFD8E0 = 0;
  qword_2CFD8E8 = 0;
  qword_2CFD8F0 = 0;
  qword_2CFD8F8 = 0;
  qword_2CFD900 = (__int64)&unk_2CFD910;
  qword_2CFD918 = (__int64)&unk_2CFD930;
  qword_2CFD920 = 1;
  dword_2CFD928 = 0;
  v19 = sub_2210FF0("Show verbose output when opt-bisect-limit is set");
  v20 = (unsigned int)qword_2CFD908;
  v21 = (unsigned int)qword_2CFD908 + 1LL;
  if ( v21 > HIDWORD(qword_2CFD908) )
  {
    v23.m128_u64[0] = v19;
    sub_2237220((char *)&unk_2CFD910 - 16, &unk_2CFD910, v21, 8);
    v20 = (unsigned int)qword_2CFD908;
    v19 = v23.m128_u64[0];
  }
  *(_QWORD *)(qword_2CFD900 + 8 * v20) = v19;
  word_2CFD948 = 0;
  xmmword_2CFD968 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFD908) = qword_2CFD908 + 1;
  qword_2CFD940 = (__int64)off_2C714E8;
  byte_2CFD938 = 0;
  qword_2CFD8C0 = (__int64)off_2C75848;
  qword_2CFD950 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFD8C0, "opt-bisect-verbose", 18);
  qword_2CFD8E0 = (__int64)"Show verbose output when opt-bisect-limit is set";
  qword_2CFD8E8 = v18;
  word_2CFD948 = 257;
  byte_2CFD938 = 1;
  BYTE2(qword_2CFD8C8) = BYTE2(qword_2CFD8C8) & 0x98 | 0x20;
  sub_2218140(&qword_2CFD8C0);
  return __cxa_atexit(sub_200E190, &qword_2CFD8C0, &off_2B25620);
}
