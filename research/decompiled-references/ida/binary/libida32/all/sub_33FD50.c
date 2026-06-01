int sub_33FD50()
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
  qword_2CDAD90 = 0;
  v1 = v0;
  qword_2CDAD98 = 0;
  qword_2CDADA0 = 0;
  qword_2CDAD80 = (__int64)&off_2C4B8B0;
  qword_2CDAD88 = (unsigned int)qword_2CDAD88 & 0x80000000;
  qword_2CDADC8 = 0x100000000LL;
  qword_2CDADA8 = 0;
  qword_2CDADB0 = 0;
  qword_2CDADB8 = 0;
  qword_2CDADC0 = (__int64)&unk_2CDADD0;
  qword_2CDADD8 = (__int64)&unk_2CDADF0;
  qword_2CDADE0 = 1;
  dword_2CDADE8 = 0;
  byte_2CDADEC = 1;
  v2 = sub_21ED2B0("Options to disable Loop Idiom Recognize Pass.");
  v3 = (unsigned int)qword_2CDADC8;
  v4 = (unsigned int)qword_2CDADC8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDADC8) )
  {
    v21.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CDADD0 - 16, &unk_2CDADD0, v4, 8);
    v3 = (unsigned int)qword_2CDADC8;
    v2 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDADC0 + 8 * v3) = v2;
  LODWORD(qword_2CDADC8) = qword_2CDADC8 + 1;
  xmmword_2CDAE28 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CDAE00 = (__int64)off_2C474E8;
  qword_2CDADF8 = 0;
  byte_2CDAE09 = 0;
  qword_2CDAD80 = (__int64)off_2C47D10;
  qword_2CDAE10 = (__int64)off_2BC0B68;
  v5 = j__strlen("disable-loop-idiom-all");
  sub_21F3510(&qword_2CDAD80, "disable-loop-idiom-all", v5);
  qword_2CDADA8 = v1;
  qword_2CDADA0 = (__int64)"Options to disable Loop Idiom Recognize Pass.";
  if ( qword_2CDADF8 )
  {
    v6 = sub_2259990(&qword_2CDAD80, "disable-loop-idiom-all");
    v29 = 259;
    v27 = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CDAD80, &v27, 0, 0, v6);
  }
  else
  {
    qword_2CDADF8 = (__int64)&unk_2CDAE38;
  }
  *(_BYTE *)qword_2CDADF8 = 0;
  unk_2CDAE08 = 256;
  BYTE2(qword_2CDAD88) = BYTE2(qword_2CDAD88) & 0x9F | 0x40;
  sub_21F4400(&qword_2CDAD80);
  __cxa_atexit(sub_1FF1930, &qword_2CDAD80, &off_2AFC540);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2CDAD78;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to memset.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to memset.";
  sub_21C74C0(&unk_2CDACC0, "disable-loop-idiom-memset", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_1FF1930, &unk_2CDACC0, &off_2AFC540);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2CDACB8;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to memcpy.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to memcpy.";
  sub_21C74C0(&unk_2CDAC00, "disable-loop-idiom-memcpy", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_1FF1930, &unk_2CDAC00, &off_2AFC540);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2CDABF8;
  v28 = j__strlen("Proceed with loop idiom recognize pass, but do not convert loop(s) to strlen.");
  v27 = "Proceed with loop idiom recognize pass, but do not convert loop(s) to strlen.";
  sub_21C74C0(&unk_2CDAB40, "disable-loop-idiom-strlen", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_1FF1930, &unk_2CDAB40, &off_2AFC540);
  v23 = 0;
  v24 = 2;
  v26 = &v23;
  v25 = &unk_2CDAB38;
  v28 = j__strlen("Proceed with loop idiom recognize pass, enable conversion of loop(s) to wcslen.");
  v27 = "Proceed with loop idiom recognize pass, enable conversion of loop(s) to wcslen.";
  sub_21C74C0(&unk_2CDAA80, "disable-loop-idiom-wcslen", &v27, &v25, &v26, &v24);
  __cxa_atexit(sub_1FF1930, &unk_2CDAA80, &off_2AFC540);
  v7 = j__strlen("Use loop idiom recognition code size heuristics when compiling with -Os/-Oz");
  qword_2CDAA00 = (__int64)&unk_2CDAA10;
  v8 = v7;
  qword_2CDA9D0 = 0;
  qword_2CDA9C0 = (__int64)&off_2C4B8B0;
  qword_2CDA9C8 = (unsigned int)qword_2CDA9C8 & 0x80000000;
  qword_2CDAA08 = 0x100000000LL;
  qword_2CDA9D8 = 0;
  qword_2CDA9E0 = 0;
  qword_2CDA9E8 = 0;
  qword_2CDA9F0 = 0;
  qword_2CDA9F8 = 0;
  qword_2CDAA18 = (__int64)&unk_2CDAA30;
  qword_2CDAA20 = 1;
  dword_2CDAA28 = 0;
  byte_2CDAA2C = 1;
  v9 = sub_21ED2B0("Use loop idiom recognition code size heuristics when compiling with -Os/-Oz");
  v10 = (unsigned int)qword_2CDAA08;
  v11 = (unsigned int)qword_2CDAA08 + 1LL;
  if ( v11 > HIDWORD(qword_2CDAA08) )
  {
    v21.m128i_i64[0] = v9;
    sub_22134E0((char *)&unk_2CDAA10 - 16, &unk_2CDAA10, v11, 8);
    v10 = (unsigned int)qword_2CDAA08;
    v9 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDAA00 + 8 * v10) = v9;
  word_2CDAA48 = 0;
  xmmword_2CDAA68 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CDAA40 = (__int64)off_2C474E8;
  qword_2CDA9C0 = (__int64)off_2C4B848;
  v21 = (__m128i)xmmword_2CDAA68;
  LODWORD(qword_2CDAA08) = qword_2CDAA08 + 1;
  byte_2CDAA38 = 0;
  qword_2CDAA50 = (__int64)off_2BC0B68;
  v12 = j__strlen("use-lir-code-size-heurs");
  sub_21F3510(&qword_2CDA9C0, "use-lir-code-size-heurs", v12);
  qword_2CDA9E0 = (__int64)"Use loop idiom recognition code size heuristics when compiling with -Os/-Oz";
  qword_2CDA9E8 = v8;
  word_2CDAA48 = 257;
  byte_2CDAA38 = 1;
  BYTE2(qword_2CDA9C8) = BYTE2(qword_2CDA9C8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDA9C0);
  __cxa_atexit(sub_1FEA450, &qword_2CDA9C0, &off_2AFC540);
  v13 = j__strlen("Use memset.pattern intrinsic whenever possible");
  qword_2CDA940 = (__int64)&unk_2CDA950;
  v14 = v13;
  qword_2CDA910 = 0;
  qword_2CDA900 = (__int64)&off_2C4B8B0;
  qword_2CDA908 = (unsigned int)qword_2CDA908 & 0x80000000;
  qword_2CDA948 = 0x100000000LL;
  qword_2CDA918 = 0;
  qword_2CDA920 = 0;
  qword_2CDA928 = 0;
  qword_2CDA930 = 0;
  qword_2CDA938 = 0;
  qword_2CDA958 = (__int64)&unk_2CDA970;
  qword_2CDA960 = 1;
  dword_2CDA968 = 0;
  byte_2CDA96C = 1;
  v15 = sub_21ED2B0("Use memset.pattern intrinsic whenever possible");
  v16 = (unsigned int)qword_2CDA948;
  v17 = _mm_load_si128(&v21);
  v18 = (unsigned int)qword_2CDA948 + 1LL;
  if ( v18 > HIDWORD(qword_2CDA948) )
  {
    v22 = v15;
    sub_22134E0((char *)&unk_2CDA950 - 16, &unk_2CDA950, v18, 8);
    v16 = (unsigned int)qword_2CDA948;
    v15 = v22;
    v17 = _mm_load_si128(&v21);
  }
  *(_QWORD *)(qword_2CDA940 + 8 * v16) = v15;
  word_2CDA988 = 0;
  xmmword_2CDA9A8 = (__int128)v17;
  LODWORD(qword_2CDA948) = qword_2CDA948 + 1;
  qword_2CDA980 = (__int64)off_2C474E8;
  qword_2CDA900 = (__int64)off_2C4B848;
  byte_2CDA978 = 0;
  qword_2CDA990 = (__int64)off_2BC0B68;
  v19 = j__strlen("loop-idiom-force-memset-pattern-intrinsic");
  sub_21F3510(&qword_2CDA900, "loop-idiom-force-memset-pattern-intrinsic", v19);
  qword_2CDA920 = (__int64)"Use memset.pattern intrinsic whenever possible";
  qword_2CDA928 = v14;
  word_2CDA988 = 256;
  byte_2CDA978 = 0;
  BYTE2(qword_2CDA908) = BYTE2(qword_2CDA908) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDA900);
  return __cxa_atexit(sub_1FEA450, &qword_2CDA900, &off_2AFC540);
}

