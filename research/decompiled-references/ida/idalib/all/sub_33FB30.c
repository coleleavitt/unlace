int sub_33FB30()
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
  sub_2237220(&ptr, v33, 5, 40);
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
  sub_21EA2C0(&unk_2D02E60, "replexitval", &v28, &v30, &v34, &ptr);
  if ( ptr != v33 )
    free(ptr);
  __cxa_atexit(sub_21EA180, &unk_2D02E60, &off_2B25620);
  v2 = j__strlen("Use post increment control-dependent ranges in IndVarSimplify");
  qword_2D02DB0 = 0;
  v3 = v2;
  qword_2D02DB8 = 0;
  qword_2D02DC0 = 0;
  qword_2D02DA0 = (__int64)&off_2C758B0;
  qword_2D02DA8 = (unsigned int)qword_2D02DA8 & 0x80000000;
  qword_2D02DE8 = 0x100000000LL;
  qword_2D02DC8 = 0;
  qword_2D02DD0 = 0;
  qword_2D02DD8 = 0;
  qword_2D02DE0 = (__int64)&unk_2D02DF0;
  qword_2D02DF8 = (__int64)&unk_2D02E10;
  qword_2D02E00 = 1;
  dword_2D02E08 = 0;
  byte_2D02E0C = 1;
  v4 = sub_2210FF0("Use post increment control-dependent ranges in IndVarSimplify");
  v5 = (unsigned int)qword_2D02DE8;
  v6 = (unsigned int)qword_2D02DE8 + 1LL;
  if ( v6 > HIDWORD(qword_2D02DE8) )
  {
    v26.m128i_i64[0] = v4;
    sub_2237220((char *)&unk_2D02DF0 - 16, &unk_2D02DF0, v6, 8);
    v5 = (unsigned int)qword_2D02DE8;
    v4 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D02DE0 + 8 * v5) = v4;
  qword_2D02E20 = (__int64)off_2C714E8;
  qword_2D02DA0 = (__int64)off_2C75848;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  word_2D02E28 = 0;
  xmmword_2D02E48 = (__int128)v26;
  qword_2D02E30 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02DE8) = qword_2D02DE8 + 1;
  byte_2D02E18 = 0;
  sub_2217250(&qword_2D02DA0, "indvars-post-increment-ranges", 29);
  word_2D02E28 = 257;
  qword_2D02DC8 = v3;
  byte_2D02E18 = 1;
  BYTE2(qword_2D02DA8) = BYTE2(qword_2D02DA8) & 0x9F | 0x20;
  qword_2D02DC0 = (__int64)"Use post increment control-dependent ranges in IndVarSimplify";
  sub_2218140(&qword_2D02DA0);
  __cxa_atexit(sub_200E190, &qword_2D02DA0, &off_2B25620);
  v7 = j__strlen("Disable Linear Function Test Replace optimization");
  qword_2D02D20 = (__int64)&unk_2D02D30;
  v8 = v7;
  qword_2D02CF0 = 0;
  qword_2D02CE0 = (__int64)&off_2C758B0;
  qword_2D02CE8 = (unsigned int)qword_2D02CE8 & 0x80000000;
  qword_2D02D28 = 0x100000000LL;
  qword_2D02CF8 = 0;
  qword_2D02D00 = 0;
  qword_2D02D08 = 0;
  qword_2D02D10 = 0;
  qword_2D02D18 = 0;
  qword_2D02D38 = (__int64)&unk_2D02D50;
  qword_2D02D40 = 1;
  dword_2D02D48 = 0;
  byte_2D02D4C = 1;
  v9 = sub_2210FF0("Disable Linear Function Test Replace optimization");
  v10 = (unsigned int)qword_2D02D28;
  v11 = (unsigned int)qword_2D02D28 + 1LL;
  if ( v11 > HIDWORD(qword_2D02D28) )
  {
    v27 = v9;
    sub_2237220((char *)&unk_2D02D30 - 16, &unk_2D02D30, v11, 8);
    v10 = (unsigned int)qword_2D02D28;
    v9 = v27;
  }
  v12 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2D02D20 + 8 * v10) = v9;
  qword_2D02D60 = (__int64)off_2C714E8;
  word_2D02D68 = 0;
  qword_2D02CE0 = (__int64)off_2C75848;
  xmmword_2D02D88 = (__int128)v12;
  qword_2D02D70 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02D28) = qword_2D02D28 + 1;
  byte_2D02D58 = 0;
  sub_2217250(&qword_2D02CE0, "disable-lftr", 12);
  word_2D02D68 = 256;
  qword_2D02D08 = v8;
  byte_2D02D58 = 0;
  BYTE2(qword_2D02CE8) = BYTE2(qword_2D02CE8) & 0x9F | 0x20;
  qword_2D02D00 = (__int64)"Disable Linear Function Test Replace optimization";
  sub_2218140(&qword_2D02CE0);
  __cxa_atexit(sub_200E190, &qword_2D02CE0, &off_2B25620);
  v13 = j__strlen("Predicate conditions in read only loops");
  qword_2D02C60 = (__int64)&unk_2D02C70;
  v14 = v13;
  qword_2D02C30 = 0;
  qword_2D02C20 = (__int64)&off_2C758B0;
  qword_2D02C28 = (unsigned int)qword_2D02C28 & 0x80000000;
  qword_2D02C68 = 0x100000000LL;
  qword_2D02C38 = 0;
  qword_2D02C40 = 0;
  qword_2D02C48 = 0;
  qword_2D02C50 = 0;
  qword_2D02C58 = 0;
  qword_2D02C78 = (__int64)&unk_2D02C90;
  qword_2D02C80 = 1;
  dword_2D02C88 = 0;
  byte_2D02C8C = 1;
  v15 = sub_2210FF0("Predicate conditions in read only loops");
  v16 = (unsigned int)qword_2D02C68;
  v17 = (unsigned int)qword_2D02C68 + 1LL;
  if ( v17 > HIDWORD(qword_2D02C68) )
  {
    v27 = v15;
    sub_2237220((char *)&unk_2D02C70 - 16, &unk_2D02C70, v17, 8);
    v16 = (unsigned int)qword_2D02C68;
    v15 = v27;
  }
  v18 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2D02C60 + 8 * v16) = v15;
  qword_2D02CA0 = (__int64)off_2C714E8;
  qword_2D02C20 = (__int64)off_2C75848;
  word_2D02CA8 = 0;
  xmmword_2D02CC8 = (__int128)v18;
  qword_2D02CB0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02C68) = qword_2D02C68 + 1;
  byte_2D02C98 = 0;
  sub_2217250(&qword_2D02C20, "indvars-predicate-loops", 23);
  word_2D02CA8 = 257;
  qword_2D02C48 = v14;
  byte_2D02C98 = 1;
  BYTE2(qword_2D02C28) = BYTE2(qword_2D02C28) & 0x9F | 0x20;
  qword_2D02C40 = (__int64)"Predicate conditions in read only loops";
  sub_2218140(&qword_2D02C20);
  __cxa_atexit(sub_200E190, &qword_2D02C20, &off_2B25620);
  v19 = j__strlen("Allow widening of indvars to eliminate s/zext");
  byte_2D02BCC = 1;
  qword_2D02B70 = 0;
  v20 = v19;
  qword_2D02B60 = (__int64)&off_2C758B0;
  qword_2D02B68 = (unsigned int)qword_2D02B68 & 0x80000000;
  qword_2D02BA8 = 0x100000000LL;
  qword_2D02B78 = 0;
  qword_2D02B80 = 0;
  qword_2D02B88 = 0;
  qword_2D02B90 = 0;
  qword_2D02B98 = 0;
  qword_2D02BA0 = (__int64)&unk_2D02BB0;
  qword_2D02BB8 = (__int64)&unk_2D02BD0;
  qword_2D02BC0 = 1;
  dword_2D02BC8 = 0;
  v21 = sub_2210FF0("Allow widening of indvars to eliminate s/zext");
  v22 = (unsigned int)qword_2D02BA8;
  v23 = (unsigned int)qword_2D02BA8 + 1LL;
  if ( v23 > HIDWORD(qword_2D02BA8) )
  {
    v27 = v21;
    sub_2237220((char *)&unk_2D02BB0 - 16, &unk_2D02BB0, v23, 8);
    v22 = (unsigned int)qword_2D02BA8;
    v21 = v27;
  }
  v24 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2D02BA0 + 8 * v22) = v21;
  word_2D02BE8 = 0;
  qword_2D02BE0 = (__int64)off_2C714E8;
  qword_2D02B60 = (__int64)off_2C75848;
  xmmword_2D02C08 = (__int128)v24;
  qword_2D02BF0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02BA8) = qword_2D02BA8 + 1;
  byte_2D02BD8 = 0;
  sub_2217250(&qword_2D02B60, "indvars-widen-indvars", 21);
  word_2D02BE8 = 257;
  qword_2D02B88 = v20;
  byte_2D02BD8 = 1;
  BYTE2(qword_2D02B68) = BYTE2(qword_2D02B68) & 0x9F | 0x20;
  qword_2D02B80 = (__int64)"Allow widening of indvars to eliminate s/zext";
  sub_2218140(&qword_2D02B60);
  return __cxa_atexit(sub_200E190, &qword_2D02B60, &off_2B25620);
}
