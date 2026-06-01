int sub_33C770()
{
  __m128i *v0; // rax
  __m128i v1; // xmm2
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm6
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm7
  size_t v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm1
  __m128i v26; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-1D0h]
  int v28; // [rsp+20h] [rbp-1C8h] BYREF
  int v29; // [rsp+24h] [rbp-1C4h] BYREF
  int *v30; // [rsp+28h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-1B0h]
  _BYTE v33[160]; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v34; // [rsp+E0h] [rbp-108h] BYREF
  __m128i v35; // [rsp+F0h] [rbp-F8h] BYREF
  __m128i v36; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+130h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+140h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+150h] [rbp-98h] BYREF
  __m128i v42; // [rsp+160h] [rbp-88h] BYREF
  __m128i v43; // [rsp+170h] [rbp-78h] BYREF
  __m128i v44; // [rsp+180h] [rbp-68h] BYREF
  __m128i v45; // [rsp+190h] [rbp-58h] BYREF
  __int64 v46; // [rsp+1A0h] [rbp-48h]

  v34.m128i_i64[0] = (__int64)"never";
  v35.m128i_i64[1] = (__int64)"never replace exit value";
  v36.m128i_i64[1] = (__int64)"cheap";
  v38.m128i_i64[0] = (__int64)"only replace exit value when the cost is cheap";
  v39.m128i_i64[0] = (__int64)"unusedindvarinloop";
  v40.m128i_i64[1] = (__int64)"only replace exit value when it is an unused induction variable in the loop and has cheap "
                              "replacement cost";
  v41.m128i_i64[1] = (__int64)"noharduse";
  v43.m128i_i64[0] = (__int64)"only replace exit values when loop def likely dead";
  v44.m128i_i64[0] = (__int64)"always";
  v45.m128i_i64[1] = (__int64)"always replace exit value whenever possible";
  v34.m128i_i64[1] = 5;
  v35.m128i_i32[0] = 0;
  v36.m128i_i64[0] = 24;
  v37.m128i_i64[0] = 5;
  v37.m128i_i32[2] = 1;
  v38.m128i_i64[1] = 46;
  v39.m128i_i64[1] = 18;
  v40.m128i_i32[0] = 3;
  v41.m128i_i64[0] = 106;
  v42.m128i_i64[0] = 9;
  v42.m128i_i32[2] = 2;
  v43.m128i_i64[1] = 50;
  v44.m128i_i64[1] = 6;
  v45.m128i_i32[0] = 4;
  v46 = 43;
  ptr = v33;
  v32 = 0x400000000LL;
  sub_22134E0(&ptr, v33, 5, 40);
  v0 = (__m128i *)((char *)ptr + 40 * (unsigned int)v32);
  *v0 = _mm_load_si128(&v34);
  v1 = _mm_load_si128(&v35);
  LODWORD(v32) = v32 + 5;
  v0[1] = v1;
  v0[2] = _mm_load_si128(&v36);
  v0[3] = _mm_load_si128(&v37);
  v0[4] = _mm_load_si128(&v38);
  v0[5] = _mm_load_si128(&v39);
  v0[6] = _mm_load_si128(&v40);
  v0[7] = _mm_load_si128(&v41);
  v0[8] = _mm_load_si128(&v42);
  v0[9] = _mm_load_si128(&v43);
  v0[10] = _mm_load_si128(&v44);
  v0[11] = _mm_load_si128(&v45);
  v0[12].m128i_i64[0] = v46;
  v34.m128i_i64[1] = j__strlen("Choose the strategy to replace exit value in IndVarSimplify");
  v34.m128i_i64[0] = (__int64)"Choose the strategy to replace exit value in IndVarSimplify";
  v29 = 1;
  v30 = &v29;
  v28 = 1;
  sub_21C6580(&unk_2CD8F40, "replexitval", &v28, &v30, &v34, &ptr);
  if ( ptr != v33 )
    free(ptr);
  __cxa_atexit(sub_21C6440, &unk_2CD8F40, &off_2AFC540);
  v2 = j__strlen("Use post increment control-dependent ranges in IndVarSimplify");
  qword_2CD8E90 = 0;
  v3 = v2;
  qword_2CD8E98 = 0;
  qword_2CD8EA0 = 0;
  qword_2CD8E80 = (__int64)&off_2C4B8B0;
  qword_2CD8E88 = (unsigned int)qword_2CD8E88 & 0x80000000;
  qword_2CD8EC8 = 0x100000000LL;
  qword_2CD8EA8 = 0;
  qword_2CD8EB0 = 0;
  qword_2CD8EB8 = 0;
  qword_2CD8EC0 = (__int64)&unk_2CD8ED0;
  qword_2CD8ED8 = (__int64)&unk_2CD8EF0;
  qword_2CD8EE0 = 1;
  dword_2CD8EE8 = 0;
  byte_2CD8EEC = 1;
  v4 = sub_21ED2B0("Use post increment control-dependent ranges in IndVarSimplify");
  v5 = (unsigned int)qword_2CD8EC8;
  v6 = (unsigned int)qword_2CD8EC8 + 1LL;
  if ( v6 > HIDWORD(qword_2CD8EC8) )
  {
    v26.m128i_i64[0] = v4;
    sub_22134E0((char *)&unk_2CD8ED0 - 16, &unk_2CD8ED0, v6, 8);
    v5 = (unsigned int)qword_2CD8EC8;
    v4 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD8EC0 + 8 * v5) = v4;
  qword_2CD8F00 = (__int64)off_2C474E8;
  qword_2CD8E80 = (__int64)off_2C4B848;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  word_2CD8F08 = 0;
  xmmword_2CD8F28 = (__int128)v26;
  qword_2CD8F10 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8EC8) = qword_2CD8EC8 + 1;
  byte_2CD8EF8 = 0;
  sub_21F3510(&qword_2CD8E80, "indvars-post-increment-ranges", 29);
  word_2CD8F08 = 257;
  qword_2CD8EA8 = v3;
  byte_2CD8EF8 = 1;
  BYTE2(qword_2CD8E88) = BYTE2(qword_2CD8E88) & 0x9F | 0x20;
  qword_2CD8EA0 = (__int64)"Use post increment control-dependent ranges in IndVarSimplify";
  sub_21F4400(&qword_2CD8E80);
  __cxa_atexit(sub_1FEA450, &qword_2CD8E80, &off_2AFC540);
  v7 = j__strlen("Disable Linear Function Test Replace optimization");
  qword_2CD8E00 = (__int64)&unk_2CD8E10;
  v8 = v7;
  qword_2CD8DD0 = 0;
  qword_2CD8DC0 = (__int64)&off_2C4B8B0;
  qword_2CD8DC8 = (unsigned int)qword_2CD8DC8 & 0x80000000;
  qword_2CD8E08 = 0x100000000LL;
  qword_2CD8DD8 = 0;
  qword_2CD8DE0 = 0;
  qword_2CD8DE8 = 0;
  qword_2CD8DF0 = 0;
  qword_2CD8DF8 = 0;
  qword_2CD8E18 = (__int64)&unk_2CD8E30;
  qword_2CD8E20 = 1;
  dword_2CD8E28 = 0;
  byte_2CD8E2C = 1;
  v9 = sub_21ED2B0("Disable Linear Function Test Replace optimization");
  v10 = (unsigned int)qword_2CD8E08;
  v11 = (unsigned int)qword_2CD8E08 + 1LL;
  if ( v11 > HIDWORD(qword_2CD8E08) )
  {
    v27 = v9;
    sub_22134E0((char *)&unk_2CD8E10 - 16, &unk_2CD8E10, v11, 8);
    v10 = (unsigned int)qword_2CD8E08;
    v9 = v27;
  }
  v12 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CD8E00 + 8 * v10) = v9;
  qword_2CD8E40 = (__int64)off_2C474E8;
  word_2CD8E48 = 0;
  qword_2CD8DC0 = (__int64)off_2C4B848;
  xmmword_2CD8E68 = (__int128)v12;
  qword_2CD8E50 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8E08) = qword_2CD8E08 + 1;
  byte_2CD8E38 = 0;
  sub_21F3510(&qword_2CD8DC0, "disable-lftr", 12);
  word_2CD8E48 = 256;
  qword_2CD8DE8 = v8;
  byte_2CD8E38 = 0;
  BYTE2(qword_2CD8DC8) = BYTE2(qword_2CD8DC8) & 0x9F | 0x20;
  qword_2CD8DE0 = (__int64)"Disable Linear Function Test Replace optimization";
  sub_21F4400(&qword_2CD8DC0);
  __cxa_atexit(sub_1FEA450, &qword_2CD8DC0, &off_2AFC540);
  v13 = j__strlen("Predicate conditions in read only loops");
  qword_2CD8D40 = (__int64)&unk_2CD8D50;
  v14 = v13;
  qword_2CD8D10 = 0;
  qword_2CD8D00 = (__int64)&off_2C4B8B0;
  qword_2CD8D08 = (unsigned int)qword_2CD8D08 & 0x80000000;
  qword_2CD8D48 = 0x100000000LL;
  qword_2CD8D18 = 0;
  qword_2CD8D20 = 0;
  qword_2CD8D28 = 0;
  qword_2CD8D30 = 0;
  qword_2CD8D38 = 0;
  qword_2CD8D58 = (__int64)&unk_2CD8D70;
  qword_2CD8D60 = 1;
  dword_2CD8D68 = 0;
  byte_2CD8D6C = 1;
  v15 = sub_21ED2B0("Predicate conditions in read only loops");
  v16 = (unsigned int)qword_2CD8D48;
  v17 = (unsigned int)qword_2CD8D48 + 1LL;
  if ( v17 > HIDWORD(qword_2CD8D48) )
  {
    v27 = v15;
    sub_22134E0((char *)&unk_2CD8D50 - 16, &unk_2CD8D50, v17, 8);
    v16 = (unsigned int)qword_2CD8D48;
    v15 = v27;
  }
  v18 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CD8D40 + 8 * v16) = v15;
  qword_2CD8D80 = (__int64)off_2C474E8;
  qword_2CD8D00 = (__int64)off_2C4B848;
  word_2CD8D88 = 0;
  xmmword_2CD8DA8 = (__int128)v18;
  qword_2CD8D90 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8D48) = qword_2CD8D48 + 1;
  byte_2CD8D78 = 0;
  sub_21F3510(&qword_2CD8D00, "indvars-predicate-loops", 23);
  word_2CD8D88 = 257;
  qword_2CD8D28 = v14;
  byte_2CD8D78 = 1;
  BYTE2(qword_2CD8D08) = BYTE2(qword_2CD8D08) & 0x9F | 0x20;
  qword_2CD8D20 = (__int64)"Predicate conditions in read only loops";
  sub_21F4400(&qword_2CD8D00);
  __cxa_atexit(sub_1FEA450, &qword_2CD8D00, &off_2AFC540);
  v19 = j__strlen("Allow widening of indvars to eliminate s/zext");
  byte_2CD8CAC = 1;
  qword_2CD8C50 = 0;
  v20 = v19;
  qword_2CD8C40 = (__int64)&off_2C4B8B0;
  qword_2CD8C48 = (unsigned int)qword_2CD8C48 & 0x80000000;
  qword_2CD8C88 = 0x100000000LL;
  qword_2CD8C58 = 0;
  qword_2CD8C60 = 0;
  qword_2CD8C68 = 0;
  qword_2CD8C70 = 0;
  qword_2CD8C78 = 0;
  qword_2CD8C80 = (__int64)&unk_2CD8C90;
  qword_2CD8C98 = (__int64)&unk_2CD8CB0;
  qword_2CD8CA0 = 1;
  dword_2CD8CA8 = 0;
  v21 = sub_21ED2B0("Allow widening of indvars to eliminate s/zext");
  v22 = (unsigned int)qword_2CD8C88;
  v23 = (unsigned int)qword_2CD8C88 + 1LL;
  if ( v23 > HIDWORD(qword_2CD8C88) )
  {
    v27 = v21;
    sub_22134E0((char *)&unk_2CD8C90 - 16, &unk_2CD8C90, v23, 8);
    v22 = (unsigned int)qword_2CD8C88;
    v21 = v27;
  }
  v24 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CD8C80 + 8 * v22) = v21;
  word_2CD8CC8 = 0;
  qword_2CD8CC0 = (__int64)off_2C474E8;
  qword_2CD8C40 = (__int64)off_2C4B848;
  xmmword_2CD8CE8 = (__int128)v24;
  qword_2CD8CD0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8C88) = qword_2CD8C88 + 1;
  byte_2CD8CB8 = 0;
  sub_21F3510(&qword_2CD8C40, "indvars-widen-indvars", 21);
  word_2CD8CC8 = 257;
  qword_2CD8C68 = v20;
  byte_2CD8CB8 = 1;
  BYTE2(qword_2CD8C48) = BYTE2(qword_2CD8C48) & 0x9F | 0x20;
  qword_2CD8C60 = (__int64)"Allow widening of indvars to eliminate s/zext";
  sub_21F4400(&qword_2CD8C40);
  return __cxa_atexit(sub_1FEA450, &qword_2CD8C40, &off_2AFC540);
}

