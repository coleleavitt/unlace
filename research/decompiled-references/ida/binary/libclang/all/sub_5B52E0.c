int __fastcall sub_5B52E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h]
  int v15; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+24h] [rbp-54h] BYREF
  int *v17; // [rsp+28h] [rbp-50h] BYREF
  const char *v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]

  qword_4B09780 = (__int64)&qword_4B09790;
  qword_4B09750 = 0;
  qword_4B09758 = 0;
  qword_4B09740 = (__int64)&off_4A6E058;
  qword_4B09748 = (unsigned int)qword_4B09748 & 0x80000000;
  qword_4B09798 = (__int64)&qword_4B097B0;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBC00), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B09760 = 0;
  qword_4B09768 = 0;
  qword_4B09770 = 0;
  qword_4B09778 = 0;
  qword_4B09788 = 0x100000000LL;
  qword_4B097A0 = 1;
  dword_4B097A8 = 0;
  byte_4B097AC = 1;
  v1 = sub_259AC30(a1, &qword_4B09790);
  v2 = (unsigned int)qword_4B09788;
  v3 = (unsigned int)qword_4B09788 + 1LL;
  if ( HIDWORD(qword_4B09788) < v3 )
  {
    sub_25D6060(&qword_4B09790 - 2, &qword_4B09790, v3, 8);
    v2 = (unsigned int)qword_4B09788;
  }
  v4 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B09780 + 8 * v2) = v1;
  word_4B097C8 = 0;
  xmmword_4B097D8 = 0;
  qword_4B097C0 = (__int64)&off_4A64730;
  xmmword_4B097E8 = (__int128)v4;
  LODWORD(qword_4B09788) = qword_4B09788 + 1;
  qword_4B09740 = (__int64)off_4A6DFF0;
  byte_4B097B8 = 0;
  qword_4B097D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B09740, "enable-double-float-shrink", 26);
  byte_4B097B8 = 0;
  word_4B097C8 = 256;
  qword_4B09768 = 58;
  BYTE2(qword_4B09748) = BYTE2(qword_4B09748) & 0x9F | 0x20;
  qword_4B09760 = (__int64)"Enable unsafe double to float shrinking for math lib calls";
  sub_259EC40(&qword_4B09740);
  __cxa_atexit(sub_1F6C9D0, &qword_4B09740, &off_47CFE00);
  qword_4B09690 = 0;
  qword_4B096C0 = (__int64)&qword_4B096D0;
  qword_4B09698 = 0;
  qword_4B09680 = (__int64)&off_4A6E058;
  qword_4B09688 = (unsigned int)qword_4B09688 & 0x80000000;
  qword_4B096A0 = 0;
  qword_4B096A8 = 0;
  qword_4B096B0 = 0;
  qword_4B096B8 = 0;
  qword_4B096C8 = 0x100000000LL;
  qword_4B096D8 = (__int64)&qword_4B096F0;
  qword_4B096E0 = 1;
  dword_4B096E8 = 0;
  byte_4B096EC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B096D0);
  v6 = (unsigned int)qword_4B096C8;
  if ( HIDWORD(qword_4B096C8) < (unsigned __int64)(unsigned int)qword_4B096C8 + 1 )
  {
    v14 = v5;
    sub_25D6060(&qword_4B096D0 - 2, &qword_4B096D0, (unsigned int)qword_4B096C8 + 1LL, 8);
    v6 = (unsigned int)qword_4B096C8;
    v5 = v14;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B096C0 + 8 * v6) = v5;
  word_4B09708 = 0;
  xmmword_4B09718 = 0;
  qword_4B09700 = (__int64)&off_4A64730;
  xmmword_4B09728 = (__int128)v7;
  LODWORD(qword_4B096C8) = qword_4B096C8 + 1;
  qword_4B09680 = (__int64)off_4A6DFF0;
  byte_4B096F8 = 0;
  qword_4B09710 = (__int64)off_49D9168;
  sub_259F400(&qword_4B09680, "optimize-hot-cold-new", 21);
  byte_4B096F8 = 0;
  word_4B09708 = 256;
  qword_4B096A8 = 42;
  BYTE2(qword_4B09688) = BYTE2(qword_4B09688) & 0x9F | 0x20;
  qword_4B096A0 = (__int64)"Enable hot/cold operator new library calls";
  sub_259EC40(&qword_4B09680);
  __cxa_atexit(sub_1F6C9D0, &qword_4B09680, &off_47CFE00);
  qword_4B09608 = 0x100000000LL;
  qword_4B09600 = (__int64)&qword_4B09610;
  qword_4B095D0 = 0;
  qword_4B095C0 = (__int64)&off_4A6E058;
  qword_4B095C8 = (unsigned int)qword_4B095C8 & 0x80000000;
  qword_4B095D8 = 0;
  qword_4B095E0 = 0;
  qword_4B095E8 = 0;
  qword_4B095F0 = 0;
  qword_4B095F8 = 0;
  qword_4B09618 = (__int64)&qword_4B09630;
  qword_4B09620 = 1;
  dword_4B09628 = 0;
  byte_4B0962C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B09610);
  v9 = (unsigned int)qword_4B09608;
  v10 = (unsigned int)qword_4B09608 + 1LL;
  if ( HIDWORD(qword_4B09608) < v10 )
  {
    sub_25D6060(&qword_4B09610 - 2, &qword_4B09610, v10, 8);
    v9 = (unsigned int)qword_4B09608;
  }
  v11 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B09600 + 8 * v9) = v8;
  word_4B09648 = 0;
  xmmword_4B09658 = 0;
  xmmword_4B09668 = (__int128)v11;
  qword_4B09640 = (__int64)&off_4A64730;
  LODWORD(qword_4B09608) = qword_4B09608 + 1;
  byte_4B09638 = 0;
  qword_4B095C0 = (__int64)off_4A6DFF0;
  qword_4B09650 = (__int64)off_49D9168;
  sub_259F400(&qword_4B095C0, "optimize-existing-hot-cold-new", 30);
  word_4B09648 = 256;
  byte_4B09638 = 0;
  qword_4B095E8 = 67;
  BYTE2(qword_4B095C8) = BYTE2(qword_4B095C8) & 0x9F | 0x20;
  qword_4B095E0 = (__int64)"Enable optimization of existing hot/cold operator new library calls";
  sub_259EC40(&qword_4B095C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B095C0, &off_47CFE00);
  v17 = &v16;
  v18 = "Value to pass to hot/cold operator new for cold allocation";
  v19 = 58;
  v16 = 1;
  v15 = 1;
  sub_5B5130((__int64)qword_4B09500, "cold-new-hint-value", &v15, &v17, (__int64 *)&v18);
  __cxa_atexit(sub_36E9E60, qword_4B09500, &off_47CFE00);
  v17 = &v16;
  v18 = "Value to pass to hot/cold operator new for notcold (warm) allocation";
  v16 = 128;
  v19 = 68;
  v15 = 1;
  sub_5B5130((__int64)qword_4B09440, "notcold-new-hint-value", &v15, &v17, (__int64 *)&v18);
  __cxa_atexit(sub_36E9E60, qword_4B09440, &off_47CFE00);
  v17 = &v16;
  v18 = "Value to pass to hot/cold operator new for hot allocation";
  v19 = 57;
  v16 = 254;
  v15 = 1;
  sub_5B5130((__int64)qword_4B09380, "hot-new-hint-value", &v15, &v17, (__int64 *)&v18);
  return __cxa_atexit(sub_36E9E60, qword_4B09380, &off_47CFE00);
}

