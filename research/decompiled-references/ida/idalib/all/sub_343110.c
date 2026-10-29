int sub_343110()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  size_t v19; // rax
  __m128i v21; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  char v23; // [rsp+2Bh] [rbp-7Dh] BYREF
  int v24; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *v25; // [rsp+30h] [rbp-78h] BYREF
  char *v26; // [rsp+38h] [rbp-70h] BYREF
  const char *v27; // [rsp+40h] [rbp-68h] BYREF
  size_t v28; // [rsp+48h] [rbp-60h]
  __int16 v29; // [rsp+60h] [rbp-48h]

  v0 = j__strlen("Options to disable Loop Idiom Recognize Pass.");
  qword_2D04CB0 = 0;
  v1 = v0;
  qword_2D04CB8 = 0;
  qword_2D04CC0 = 0;
  qword_2D04CA0 = (__int64)&off_2C758B0;
  qword_2D04CA8 = (unsigned int)qword_2D04CA8 & 0x80000000;
  qword_2D04CE8 = 0x100000000LL;
  qword_2D04CC8 = 0;
  qword_2D04CD0 = 0;
  qword_2D04CD8 = 0;
  qword_2D04CE0 = (__int64)&unk_2D04CF0;
  qword_2D04CF8 = (__int64)&unk_2D04D10;
  qword_2D04D00 = 1;
  dword_2D04D08 = 0;
  byte_2D04D0C = 1;
  v2 = sub_2210FF0("Options to disable Loop Idiom Recognize Pass.");
  v3 = (unsigned int)qword_2D04CE8;
  v4 = (unsigned int)qword_2D04CE8 + 1LL;
  if ( v4 > HIDWORD(qword_2D04CE8) )
  {
    v21.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D04CF0 - 16, &unk_2D04CF0, v4, 8);
    v3 = (unsigned int)qword_2D04CE8;
    v2 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D04CE0 + 8 * v3) = v2;
  LODWORD(qword_2D04CE8) = qword_2D04CE8 + 1;
  xmmword_2D04D48 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2D04D20 = (__int64)off_2C714E8;
  qword_2D04D18 = 0;
  byte_2D04D29 = 0;
  qword_2D04CA0 = (__int64)off_2C71D10;
  qword_2D04D30 = (__int64)off_2BEAB08;
  v5 = j__strlen("disable-loop-idiom-all");
  sub_2217250(&qword_2D04CA0, "disable-loop-idiom-all", v5);
  qword_2D04CC8 = v1;
  qword_2D04CC0 = (__int64)"Options to disable Loop Idiom Recognize Pass.";
  if ( qword_2D04D18 )
  {
    v6 = sub_227D6D0(&qword_2D04CA0, "disable-loop-idiom-all");
    v29 = 259;
    v27 = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2D04CA0, &v27, 0, 0, v6);
  }
  else
  {
    qword_2D04D18 = (__int64)&unk_2D04D58;
  }
  *(_BYTE *)qword_2D04D18 = 0;
  unk_2D04D28 = 256;
  BYTE2(qword_2D04CA8) = BYTE2(qword_2D04CA8) & 0x9F | 0x40;
  sub_2218140(&qword_2D04CA0);
  __cxa_atexit(sub_2015670, &qword_2D04CA0, &off_2B25620);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2D04C98;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to memset.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to memset.";
  sub_21EB200(&unk_2D04BE0, "disable-loop-idiom-memset", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_2015670, &unk_2D04BE0, &off_2B25620);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2D04BD8;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to memcpy.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to memcpy.";
  sub_21EB200(&unk_2D04B20, "disable-loop-idiom-memcpy", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_2015670, &unk_2D04B20, &off_2B25620);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2D04B18;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to strlen.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to strlen.";
  sub_21EB200(&unk_2D04A60, "disable-loop-idiom-strlen", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_2015670, &unk_2D04A60, &off_2B25620);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2D04A58;
  v28 = j__strlen("Proceed with loop idiom recognize pass, enable conversion of loop(s) to wcslen.");
  v27 = "Proceed with loop idiom recognize pass, enable conversion of loop(s) to wcslen.";
  sub_21EB200(&unk_2D049A0, "disable-loop-idiom-wcslen", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_2015670, &unk_2D049A0, &off_2B25620);
  v7 = j__strlen("Use loop idiom recognition code size heuristics when compiling with -Os/-Oz");
  qword_2D04920 = (__int64)&unk_2D04930;
  v8 = v7;
  qword_2D048F0 = 0;
  qword_2D048E0 = (__int64)&off_2C758B0;
  qword_2D048E8 = (unsigned int)qword_2D048E8 & 0x80000000;
  qword_2D04928 = 0x100000000LL;
  qword_2D048F8 = 0;
  qword_2D04900 = 0;
  qword_2D04908 = 0;
  qword_2D04910 = 0;
  qword_2D04918 = 0;
  qword_2D04938 = (__int64)&unk_2D04950;
  qword_2D04940 = 1;
  dword_2D04948 = 0;
  byte_2D0494C = 1;
  v9 = sub_2210FF0("Use loop idiom recognition code size heuristics when compiling with -Os/-Oz");
  v10 = (unsigned int)qword_2D04928;
  v11 = (unsigned int)qword_2D04928 + 1LL;
  if ( v11 > HIDWORD(qword_2D04928) )
  {
    v21.m128i_i64[0] = v9;
    sub_2237220((char *)&unk_2D04930 - 16, &unk_2D04930, v11, 8);
    v10 = (unsigned int)qword_2D04928;
    v9 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D04920 + 8 * v10) = v9;
  word_2D04968 = 0;
  xmmword_2D04988 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2D04960 = (__int64)off_2C714E8;
  qword_2D048E0 = (__int64)off_2C75848;
  v21 = (__m128i)xmmword_2D04988;
  LODWORD(qword_2D04928) = qword_2D04928 + 1;
  byte_2D04958 = 0;
  qword_2D04970 = (__int64)off_2BEAB08;
  v12 = j__strlen("use-lir-code-size-heurs");
  sub_2217250(&qword_2D048E0, "use-lir-code-size-heurs", v12);
  qword_2D04900 = (__int64)"Use loop idiom recognition code size heuristics when compiling with -Os/-Oz";
  qword_2D04908 = v8;
  word_2D04968 = 257;
  byte_2D04958 = 1;
  BYTE2(qword_2D048E8) = BYTE2(qword_2D048E8) & 0x9F | 0x20;
  sub_2218140(&qword_2D048E0);
  __cxa_atexit(sub_200E190, &qword_2D048E0, &off_2B25620);
  v13 = j__strlen("Use memset.pattern intrinsic whenever possible");
  qword_2D04860 = (__int64)&unk_2D04870;
  v14 = v13;
  qword_2D04830 = 0;
  qword_2D04820 = (__int64)&off_2C758B0;
  qword_2D04828 = (unsigned int)qword_2D04828 & 0x80000000;
  qword_2D04868 = 0x100000000LL;
  qword_2D04838 = 0;
  qword_2D04840 = 0;
  qword_2D04848 = 0;
  qword_2D04850 = 0;
  qword_2D04858 = 0;
  qword_2D04878 = (__int64)&unk_2D04890;
  qword_2D04880 = 1;
  dword_2D04888 = 0;
  byte_2D0488C = 1;
  v15 = sub_2210FF0("Use memset.pattern intrinsic whenever possible");
  v16 = (unsigned int)qword_2D04868;
  v17 = _mm_load_si128(&v21);
  v18 = (unsigned int)qword_2D04868 + 1LL;
  if ( v18 > HIDWORD(qword_2D04868) )
  {
    v22 = v15;
    sub_2237220((char *)&unk_2D04870 - 16, &unk_2D04870, v18, 8);
    v16 = (unsigned int)qword_2D04868;
    v15 = v22;
    v17 = _mm_load_si128(&v21);
  }
  *(_QWORD *)(qword_2D04860 + 8 * v16) = v15;
  word_2D048A8 = 0;
  xmmword_2D048C8 = (__int128)v17;
  LODWORD(qword_2D04868) = qword_2D04868 + 1;
  qword_2D048A0 = (__int64)off_2C714E8;
  qword_2D04820 = (__int64)off_2C75848;
  byte_2D04898 = 0;
  qword_2D048B0 = (__int64)off_2BEAB08;
  v19 = j__strlen("loop-idiom-force-memset-pattern-intrinsic");
  sub_2217250(&qword_2D04820, "loop-idiom-force-memset-pattern-intrinsic", v19);
  qword_2D04840 = (__int64)"Use memset.pattern intrinsic whenever possible";
  qword_2D04848 = v14;
  word_2D048A8 = 256;
  byte_2D04898 = 0;
  BYTE2(qword_2D04828) = BYTE2(qword_2D04828) & 0x9F | 0x20;
  sub_2218140(&qword_2D04820);
  return __cxa_atexit(sub_200E190, &qword_2D04820, &off_2B25620);
}
