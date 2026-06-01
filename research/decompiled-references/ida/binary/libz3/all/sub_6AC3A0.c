_QWORD *__fastcall sub_6AC3A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // r13
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = (_QWORD *)sub_186B270(0x380u);
  v18 = 0;
  *v2 = a2;
  v3 = v2;
  v4 = (__int64)(v2 + 1);
  v2[2] = off_1C52F08;
  v5 = v2 + 8;
  v2[4] = off_1C52F30;
  v2[1] = &off_1C53028;
  v2[8] = 0x100000001LL;
  v2[7] = a2;
  v2[3] = v2 + 1;
  v2[5] = v2 + 1;
  v2[6] = 0;
  v2[12] = 0x1FFFFFFFFLL;
  v19 = 0;
  v20[0] = 0;
  sub_15B6DB0(v2 + 8, v20);
  sub_18572D0(v20);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  *((_WORD *)v3 + 51) = 0;
  v3[13] = 0;
  *((_WORD *)v3 + 64) = 1;
  *((_BYTE *)v3 + 130) = 1;
  *((__m128i *)v3 + 7) = si128;
  sub_15B7800(v5, &v19);
  sub_18572D0(&v19);
  v3[17] = 1;
  v3[18] = 0x3FB999999999999ALL;
  v20[0] = 0;
  v3[19] = 0x7D00000000ALL;
  v3[20] = 0x3FE999999999999ALL;
  sub_15B81B0(v3 + 17, v20);
  sub_18572D0(v20);
  v20[0] = 0;
  sub_6A99E0(v3 + 21, "(+ weight generation)");
  sub_6A99E0(v3 + 25, "cost");
  *((_BYTE *)v3 + 256) = 0;
  *((_DWORD *)v3 + 72) = 1000;
  v3[31] = 0x200000000LL;
  *((_WORD *)v3 + 134) = 257;
  *(_QWORD *)((char *)v3 + 260) = 0xFFFFFFFFLL;
  v3[34] = 0x1000000FFFFFFFFLL;
  *((_BYTE *)v3 + 292) = 0;
  v3[35] = 0x100000001LL;
  *((_DWORD *)v3 + 74) = 10;
  v3[38] = 0;
  *(_OWORD *)(v3 + 29) = xmmword_18B64B0;
  sub_15AFF30(v3 + 21, v20);
  sub_18572D0(v20);
  v3[39] = 0x600000000LL;
  v3[40] = 0x3E800000000LL;
  v3[41] = 0x200000001LL;
  v3[49] = 0x200000001LL;
  v3[51] = 0xFFFFFFFFLL;
  v3[54] = 0x20000000101LL;
  v3[42] = 0x8000000101LL;
  v3[55] = 0x600000100LL;
  v3[43] = 0x100000010LL;
  v3[44] = 0;
  v3[45] = 0xFFFFFC1800000000LL;
  v3[46] = 1000;
  v3[50] = 0x10000;
  v3[52] = 0;
  v3[53] = 1;
  v3[56] = 0x40000000001LL;
  *((_WORD *)v3 + 228) = 257;
  *((_BYTE *)v3 + 458) = 1;
  *(_OWORD *)(v3 + 47) = xmmword_18B64C0;
  v20[0] = 0;
  sub_15B26B0(v3 + 39, v20);
  sub_18572D0(v20);
  *((_BYTE *)v3 + 484) = 0;
  *((_DWORD *)v3 + 116) = 3;
  v3[59] = 0x1000100000001LL;
  v3[61] = 0x10000000001LL;
  *((_WORD *)v3 + 230) = 256;
  *((_WORD *)v3 + 234) = 256;
  *((_DWORD *)v3 + 120) = 10;
  v3[62] = 0x100017FFFFFFFLL;
  *((_DWORD *)v3 + 126) = 0;
  v20[0] = 0;
  sub_15B7350(v3 + 61, v20);
  sub_18572D0(v20);
  *((_DWORD *)v3 + 127) = 0;
  v3[64] = 0x13FFFFFFFLL;
  v20[0] = 0;
  sub_15B3AA0((char *)v3 + 508, v20);
  sub_18572D0(v20);
  *((_BYTE *)v3 + 524) = 1;
  *((_DWORD *)v3 + 130) = 1000;
  v20[0] = 0;
  sub_15B6C70(v3 + 65, v20);
  sub_18572D0(v20);
  *(_QWORD *)((char *)v3 + 620) = 0x10100000003E8LL;
  *(_OWORD *)(v3 + 69) = xmmword_18B64D0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  *(_QWORD *)((char *)v3 + 652) = 0x2000000000LL;
  *(__m128i *)(v3 + 71) = v7;
  v8 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v3[83] = 0x6400000001LL;
  *(__m128i *)(v3 + 75) = v8;
  v3[66] = 1;
  v3[84] = 0x3FF199999999999ALL;
  *((_WORD *)v3 + 268) = 257;
  *((_DWORD *)v3 + 135) = 2;
  *((_BYTE *)v3 + 544) = 0;
  *((_DWORD *)v3 + 137) = 0;
  *((_DWORD *)v3 + 146) = 100;
  *((_BYTE *)v3 + 588) = 1;
  *((_DWORD *)v3 + 148) = -1;
  *((_BYTE *)v3 + 616) = 1;
  *((_BYTE *)v3 + 628) = 0;
  v3[79] = 0;
  *((_WORD *)v3 + 320) = 256;
  *(_QWORD *)((char *)v3 + 644) = 1;
  *((_BYTE *)v3 + 660) = 0;
  *((_BYTE *)v3 + 680) = 1;
  *((_DWORD *)v3 + 176) = 0;
  *((_BYTE *)v3 + 708) = 0;
  *((_OWORD *)v3 + 43) = xmmword_18B6500;
  v3[89] = 0x138800000064LL;
  v3[90] = 0x3FF199999999999ALL;
  v9 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  v3[94] = 0x3FF0000000000000LL;
  *((_DWORD *)v3 + 186) = 6;
  *((_DWORD *)v3 + 190) = 0;
  *((_DWORD *)v3 + 194) = 0x1000000;
  v3[96] = 0;
  *((_WORD *)v3 + 390) = 0;
  *((_DWORD *)v3 + 196) = 0;
  *(_QWORD *)((char *)v3 + 788) = 0x100000000000100LL;
  *(__m128i *)(v3 + 91) = v9;
  sub_180C5A0(v3 + 102, "auto");
  sub_15B65B0(v5, &v18);
  sub_18572D0(&v18);
  v3[105] = 0;
  *(_OWORD *)(v3 + 103) = 0;
  v10 = (_OWORD *)sub_186B270(0x40u);
  v3[106] = v10;
  *((_DWORD *)v3 + 216) = 0;
  v3[107] = 8;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  v3[109] = v11;
  v3[110] = 8;
  *((_DWORD *)v3 + 222) = 0;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v12 = sub_70F5C0(v4);
  sub_6AB850(v4, v12);
  v16 = sub_6C0270(v4, 0, (_DWORD)v5, v13, v14, v15);
  sub_6AB850(v4, v16);
  *a1 = v3;
  return a1;
}

