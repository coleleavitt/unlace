int __fastcall sub_59AD80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm7
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm4
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm5
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm6
  __m128i v26; // [rsp+0h] [rbp-78h] BYREF
  __m128i v27; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  char v30; // [rsp+33h] [rbp-45h] BYREF
  int v31; // [rsp+34h] [rbp-44h] BYREF
  _QWORD v32[8]; // [rsp+38h] [rbp-40h] BYREF

  qword_4AFD980 = (__int64)&qword_4AFD990;
  qword_4AFD950 = 0;
  qword_4AFD958 = 0;
  qword_4AFD940 = (__int64)&off_4A6E058;
  qword_4AFD948 = (unsigned int)qword_4AFD948 & 0x80000000;
  qword_4AFD998 = (__int64)&qword_4AFD9B0;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB198), (__m128i)(unsigned __int64)nullsub_266);
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB1A0), (__m128i)(unsigned __int64)nullsub_291);
  qword_4AFD960 = 0;
  qword_4AFD968 = 0;
  qword_4AFD970 = 0;
  qword_4AFD978 = 0;
  qword_4AFD988 = 0x100000000LL;
  dword_4AFD9A8 = 0;
  qword_4AFD9A0 = 1;
  byte_4AFD9AC = 1;
  v1 = sub_259AC30(a1, &qword_4AFD990);
  v2 = (unsigned int)qword_4AFD988;
  v3 = (unsigned int)qword_4AFD988 + 1LL;
  if ( HIDWORD(qword_4AFD988) < v3 )
  {
    sub_25D6060(&qword_4AFD990 - 2, &qword_4AFD990, v3, 8);
    v2 = (unsigned int)qword_4AFD988;
  }
  v4 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AFD980 + 8 * v2) = v1;
  xmmword_4AFD9D8 = 0;
  xmmword_4AFD9E8 = (__int128)v4;
  qword_4AFD9C0 = (__int64)&off_4A692B8;
  LODWORD(qword_4AFD988) = qword_4AFD988 + 1;
  byte_4AFD9CC = 0;
  qword_4AFD940 = (__int64)off_4A6DF20;
  qword_4AFD9D0 = (__int64)off_49D91C8;
  dword_4AFD9B8 = 0;
  dword_4AFD9C8 = 0;
  sub_259F400(&qword_4AFD940, "ifcvt-fn-start", 14);
  dword_4AFD9B8 = -1;
  byte_4AFD9CC = 1;
  dword_4AFD9C8 = -1;
  BYTE2(qword_4AFD948) = BYTE2(qword_4AFD948) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD940);
  __cxa_atexit(sub_20B86E0, &qword_4AFD940, &off_47CFE00);
  qword_4AFD890 = 0;
  qword_4AFD8C0 = (__int64)&qword_4AFD8D0;
  qword_4AFD898 = 0;
  qword_4AFD880 = (__int64)&off_4A6E058;
  qword_4AFD888 = (unsigned int)qword_4AFD888 & 0x80000000;
  qword_4AFD8A0 = 0;
  qword_4AFD8A8 = 0;
  qword_4AFD8B0 = 0;
  qword_4AFD8B8 = 0;
  qword_4AFD8C8 = 0x100000000LL;
  qword_4AFD8D8 = (__int64)&qword_4AFD8F0;
  qword_4AFD8E0 = 1;
  dword_4AFD8E8 = 0;
  byte_4AFD8EC = 1;
  v5 = sub_259AC30(sub_20B86E0, &qword_4AFD8D0);
  v6 = (unsigned int)qword_4AFD8C8;
  if ( HIDWORD(qword_4AFD8C8) < (unsigned __int64)(unsigned int)qword_4AFD8C8 + 1 )
  {
    v28 = (_QWORD *)v5;
    sub_25D6060(&qword_4AFD8D0 - 2, &qword_4AFD8D0, (unsigned int)qword_4AFD8C8 + 1LL, 8);
    v6 = (unsigned int)qword_4AFD8C8;
    v5 = (__int64)v28;
  }
  v7 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AFD8C0 + 8 * v6) = v5;
  xmmword_4AFD918 = 0;
  xmmword_4AFD928 = (__int128)v7;
  qword_4AFD900 = (__int64)&off_4A692B8;
  LODWORD(qword_4AFD8C8) = qword_4AFD8C8 + 1;
  byte_4AFD90C = 0;
  qword_4AFD880 = (__int64)off_4A6DF20;
  qword_4AFD910 = (__int64)off_49D91C8;
  dword_4AFD8F8 = 0;
  dword_4AFD908 = 0;
  sub_259F400(&qword_4AFD880, "ifcvt-fn-stop", 13);
  dword_4AFD8F8 = -1;
  byte_4AFD90C = 1;
  dword_4AFD908 = -1;
  BYTE2(qword_4AFD888) = BYTE2(qword_4AFD888) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD880);
  __cxa_atexit(sub_20B86E0, &qword_4AFD880, &off_47CFE00);
  qword_4AFD7D0 = 0;
  qword_4AFD800 = (__int64)&qword_4AFD810;
  qword_4AFD7D8 = 0;
  qword_4AFD7C0 = (__int64)&off_4A6E058;
  qword_4AFD7C8 = (unsigned int)qword_4AFD7C8 & 0x80000000;
  qword_4AFD7E0 = 0;
  qword_4AFD7E8 = 0;
  qword_4AFD7F0 = 0;
  qword_4AFD7F8 = 0;
  qword_4AFD808 = 0x100000000LL;
  qword_4AFD818 = (__int64)&qword_4AFD830;
  qword_4AFD820 = 1;
  dword_4AFD828 = 0;
  byte_4AFD82C = 1;
  v8 = sub_259AC30(sub_20B86E0, &qword_4AFD810);
  v9 = (unsigned int)qword_4AFD808;
  if ( HIDWORD(qword_4AFD808) < (unsigned __int64)(unsigned int)qword_4AFD808 + 1 )
  {
    v28 = (_QWORD *)v8;
    sub_25D6060(&qword_4AFD810 - 2, &qword_4AFD810, (unsigned int)qword_4AFD808 + 1LL, 8);
    v9 = (unsigned int)qword_4AFD808;
    v8 = (__int64)v28;
  }
  v10 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AFD800 + 8 * v9) = v8;
  xmmword_4AFD858 = 0;
  xmmword_4AFD868 = (__int128)v10;
  qword_4AFD840 = (__int64)&off_4A692B8;
  LODWORD(qword_4AFD808) = qword_4AFD808 + 1;
  byte_4AFD84C = 0;
  qword_4AFD7C0 = (__int64)off_4A6DF20;
  qword_4AFD850 = (__int64)off_49D91C8;
  dword_4AFD838 = 0;
  dword_4AFD848 = 0;
  sub_259F400(&qword_4AFD7C0, "ifcvt-limit", 11);
  dword_4AFD838 = -1;
  byte_4AFD84C = 1;
  dword_4AFD848 = -1;
  BYTE2(qword_4AFD7C8) = BYTE2(qword_4AFD7C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD7C0);
  __cxa_atexit(sub_20B86E0, &qword_4AFD7C0, &off_47CFE00);
  qword_4AFD710 = 0;
  qword_4AFD740 = (__int64)&qword_4AFD750;
  qword_4AFD718 = 0;
  qword_4AFD700 = (__int64)&off_4A6E058;
  qword_4AFD708 = (unsigned int)qword_4AFD708 & 0x80000000;
  qword_4AFD720 = 0;
  qword_4AFD728 = 0;
  qword_4AFD730 = 0;
  qword_4AFD738 = 0;
  qword_4AFD748 = 0x100000000LL;
  qword_4AFD758 = (__int64)&qword_4AFD770;
  qword_4AFD760 = 1;
  dword_4AFD768 = 0;
  byte_4AFD76C = 1;
  v11 = sub_259AC30(sub_20B86E0, &qword_4AFD750);
  v12 = (unsigned int)qword_4AFD748;
  v13 = (unsigned int)qword_4AFD748 + 1LL;
  if ( HIDWORD(qword_4AFD748) < v13 )
  {
    sub_25D6060(&qword_4AFD750 - 2, &qword_4AFD750, v13, 8);
    v12 = (unsigned int)qword_4AFD748;
  }
  v14 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_4AFD740 + 8 * v12) = v11;
  word_4AFD788 = 0;
  xmmword_4AFD798 = 0;
  qword_4AFD780 = (__int64)&off_4A64730;
  xmmword_4AFD7A8 = (__int128)v14;
  LODWORD(qword_4AFD748) = qword_4AFD748 + 1;
  qword_4AFD700 = (__int64)off_4A6DFF0;
  byte_4AFD778 = 0;
  qword_4AFD790 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD700, "disable-ifcvt-simple", 20);
  byte_4AFD778 = 0;
  word_4AFD788 = 256;
  BYTE2(qword_4AFD708) = BYTE2(qword_4AFD708) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD700);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFD700, &off_47CFE00);
  v27.m128i_i64[0] = (__int64)&v31;
  v28 = v32;
  v31 = 1;
  v30 = 0;
  v32[0] = &v30;
  sub_339D770(qword_4AFD640, "disable-ifcvt-simple-false", v32);
  __cxa_atexit(sub_1F6C9D0, qword_4AFD640, &off_47CFE00);
  qword_4AFD590 = 0;
  qword_4AFD5C0 = (__int64)&qword_4AFD5D0;
  qword_4AFD598 = 0;
  qword_4AFD580 = (__int64)&off_4A6E058;
  qword_4AFD588 = (unsigned int)qword_4AFD588 & 0x80000000;
  qword_4AFD5A0 = 0;
  qword_4AFD5A8 = 0;
  qword_4AFD5B0 = 0;
  qword_4AFD5B8 = 0;
  qword_4AFD5C8 = 0x100000000LL;
  qword_4AFD5D8 = (__int64)&qword_4AFD5F0;
  qword_4AFD5E0 = 1;
  dword_4AFD5E8 = 0;
  byte_4AFD5EC = 1;
  v15 = sub_259AC30(sub_1F6C9D0, &qword_4AFD5D0);
  v16 = (unsigned int)qword_4AFD5C8;
  if ( HIDWORD(qword_4AFD5C8) < (unsigned __int64)(unsigned int)qword_4AFD5C8 + 1 )
  {
    v29 = v15;
    sub_25D6060(&qword_4AFD5D0 - 2, &qword_4AFD5D0, (unsigned int)qword_4AFD5C8 + 1LL, 8);
    v16 = (unsigned int)qword_4AFD5C8;
    v15 = v29;
  }
  v17 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_4AFD5C0 + 8 * v16) = v15;
  word_4AFD608 = 0;
  xmmword_4AFD618 = 0;
  qword_4AFD600 = (__int64)&off_4A64730;
  xmmword_4AFD628 = (__int128)v17;
  LODWORD(qword_4AFD5C8) = qword_4AFD5C8 + 1;
  qword_4AFD580 = (__int64)off_4A6DFF0;
  byte_4AFD5F8 = 0;
  qword_4AFD610 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD580, "disable-ifcvt-triangle", 22);
  byte_4AFD5F8 = 0;
  word_4AFD608 = 256;
  BYTE2(qword_4AFD588) = BYTE2(qword_4AFD588) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD580);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFD580, &off_47CFE00);
  v30 = 0;
  v31 = 1;
  v32[0] = &v30;
  sub_339D770(qword_4AFD4C0, "disable-ifcvt-triangle-rev", v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AFD4C0, &off_47CFE00);
  v30 = 0;
  v31 = 1;
  v32[0] = &v30;
  sub_339D910(qword_4AFD400, "disable-ifcvt-triangle-false", v28, v27.m128i_i64[0]);
  __cxa_atexit(sub_1F6C9D0, qword_4AFD400, &off_47CFE00);
  qword_4AFD350 = 0;
  qword_4AFD380 = (__int64)&qword_4AFD390;
  qword_4AFD358 = 0;
  qword_4AFD340 = (__int64)&off_4A6E058;
  qword_4AFD348 = (unsigned int)qword_4AFD348 & 0x80000000;
  qword_4AFD360 = 0;
  qword_4AFD368 = 0;
  qword_4AFD370 = 0;
  qword_4AFD378 = 0;
  qword_4AFD388 = 0x100000000LL;
  qword_4AFD398 = (__int64)&qword_4AFD3B0;
  qword_4AFD3A0 = 1;
  dword_4AFD3A8 = 0;
  byte_4AFD3AC = 1;
  v18 = sub_259AC30(sub_1F6C9D0, &qword_4AFD390);
  v19 = (unsigned int)qword_4AFD388;
  if ( HIDWORD(qword_4AFD388) < (unsigned __int64)(unsigned int)qword_4AFD388 + 1 )
  {
    v29 = v18;
    sub_25D6060(&qword_4AFD390 - 2, &qword_4AFD390, (unsigned int)qword_4AFD388 + 1LL, 8);
    v19 = (unsigned int)qword_4AFD388;
    v18 = v29;
  }
  v20 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_4AFD380 + 8 * v19) = v18;
  xmmword_4AFD3D8 = 0;
  xmmword_4AFD3E8 = (__int128)v20;
  qword_4AFD3C0 = (__int64)&off_4A64730;
  word_4AFD3C8 = 0;
  LODWORD(qword_4AFD388) = qword_4AFD388 + 1;
  qword_4AFD340 = (__int64)off_4A6DFF0;
  byte_4AFD3B8 = 0;
  qword_4AFD3D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD340, "disable-ifcvt-diamond", 21);
  byte_4AFD3B8 = 0;
  word_4AFD3C8 = 256;
  BYTE2(qword_4AFD348) = BYTE2(qword_4AFD348) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD340);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFD340, &off_47CFE00);
  v32[0] = &v30;
  v31 = 1;
  v30 = 0;
  sub_339D910(qword_4AFD280, "disable-ifcvt-forked-diamond", v28, v27.m128i_i64[0]);
  __cxa_atexit(sub_1F6C9D0, qword_4AFD280, &off_47CFE00);
  qword_4AFD1D0 = 0;
  qword_4AFD200 = (__int64)&qword_4AFD210;
  qword_4AFD1D8 = 0;
  qword_4AFD1C0 = (__int64)&off_4A6E058;
  qword_4AFD1C8 = (unsigned int)qword_4AFD1C8 & 0x80000000;
  qword_4AFD1E0 = 0;
  qword_4AFD1E8 = 0;
  qword_4AFD1F0 = 0;
  qword_4AFD1F8 = 0;
  qword_4AFD208 = 0x100000000LL;
  qword_4AFD218 = (__int64)&qword_4AFD230;
  qword_4AFD220 = 1;
  dword_4AFD228 = 0;
  byte_4AFD22C = 1;
  v21 = sub_259AC30(sub_1F6C9D0, &qword_4AFD210);
  v22 = (unsigned int)qword_4AFD208;
  v23 = (unsigned int)qword_4AFD208 + 1LL;
  if ( HIDWORD(qword_4AFD208) < v23 )
  {
    sub_25D6060(&qword_4AFD210 - 2, &qword_4AFD210, v23, 8);
    v22 = (unsigned int)qword_4AFD208;
  }
  v24 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_4AFD200 + 8 * v22) = v21;
  word_4AFD248 = 0;
  xmmword_4AFD258 = 0;
  xmmword_4AFD268 = (__int128)v24;
  qword_4AFD240 = (__int64)&off_4A64730;
  LODWORD(qword_4AFD208) = qword_4AFD208 + 1;
  byte_4AFD238 = 0;
  qword_4AFD1C0 = (__int64)off_4A6DFF0;
  qword_4AFD250 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD1C0, "ifcvt-branch-fold", 17);
  word_4AFD248 = 257;
  byte_4AFD238 = 1;
  BYTE2(qword_4AFD1C8) = BYTE2(qword_4AFD1C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFD1C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFD1C0, &off_47CFE00);
}

