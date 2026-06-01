int __fastcall sub_5B9A50(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  __m128i v6; // xmm4
  __m128i v7; // xmm0
  char v8; // al
  _BYTE *v9; // r15
  _BYTE *v10; // r14
  _BYTE *v11; // rdi
  _BYTE *v12; // rdi
  __m128i v14; // [rsp+0h] [rbp-2E8h] BYREF
  void **v15; // [rsp+18h] [rbp-2D0h]
  void **v16; // [rsp+20h] [rbp-2C8h]
  void **v17; // [rsp+28h] [rbp-2C0h]
  unsigned int *v18; // [rsp+30h] [rbp-2B8h]
  void **v19; // [rsp+38h] [rbp-2B0h]
  int *v20; // [rsp+40h] [rbp-2A8h]
  __int64 *v21; // [rsp+48h] [rbp-2A0h]
  _BYTE *v22; // [rsp+50h] [rbp-298h]
  __int64 *v23; // [rsp+58h] [rbp-290h]
  __int64 *v24; // [rsp+60h] [rbp-288h]
  _BYTE *v25; // [rsp+68h] [rbp-280h]
  __int64 v26; // [rsp+70h] [rbp-278h] BYREF
  _DWORD v27[2]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v28; // [rsp+80h] [rbp-268h] BYREF
  int v29; // [rsp+88h] [rbp-260h] BYREF
  int v30; // [rsp+8Ch] [rbp-25Ch]
  void *v31; // [rsp+90h] [rbp-258h] BYREF
  __int64 v32; // [rsp+98h] [rbp-250h] BYREF
  _BYTE v33[48]; // [rsp+A0h] [rbp-248h] BYREF
  void *v34; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-210h] BYREF
  _BYTE v36[48]; // [rsp+E0h] [rbp-208h] BYREF
  void *v37; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v38; // [rsp+118h] [rbp-1D0h] BYREF
  _BYTE v39[48]; // [rsp+120h] [rbp-1C8h] BYREF
  void *v40; // [rsp+150h] [rbp-198h] BYREF
  __int64 v41; // [rsp+158h] [rbp-190h]
  _BYTE v42[48]; // [rsp+160h] [rbp-188h] BYREF
  unsigned int v43; // [rsp+190h] [rbp-158h] BYREF
  void *v44; // [rsp+198h] [rbp-150h] BYREF
  __int64 v45; // [rsp+1A0h] [rbp-148h]
  _BYTE v46[48]; // [rsp+1A8h] [rbp-140h] BYREF
  int v47; // [rsp+1D8h] [rbp-110h]
  void *ptr; // [rsp+1E0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+1E8h] [rbp-100h]
  _BYTE v50[48]; // [rsp+1F0h] [rbp-F8h] BYREF
  int v51; // [rsp+220h] [rbp-C8h]
  _BYTE *v52; // [rsp+228h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+230h] [rbp-B8h]
  _BYTE v54[48]; // [rsp+238h] [rbp-B0h] BYREF
  int v55; // [rsp+268h] [rbp-80h]
  _QWORD v56[2]; // [rsp+270h] [rbp-78h] BYREF
  _BYTE v57[104]; // [rsp+280h] [rbp-68h] BYREF

  qword_4B0B040 = (__int64)&qword_4B0B050;
  qword_4B0B010 = 0;
  qword_4B0B018 = 0;
  qword_4B0B020 = 0;
  qword_4B0B000 = (__int64)&off_4A6E058;
  qword_4B0B008 = (unsigned int)qword_4B0B008 & 0x80000000;
  qword_4B0B058 = (__int64)&qword_4B0B070;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4B0AF00[22]);
  qword_4B0B028 = 0;
  qword_4B0B030 = 0;
  qword_4B0B038 = 0;
  qword_4B0B048 = 0x100000000LL;
  qword_4B0B060 = 1;
  dword_4B0B068 = 0;
  byte_4B0B06C = 1;
  v1 = sub_259AC30(a1, &qword_4B0B050);
  v2 = (unsigned int)qword_4B0B048;
  v3 = (unsigned int)qword_4B0B048 + 1LL;
  if ( HIDWORD(qword_4B0B048) < v3 )
  {
    sub_25D6060(&qword_4B0B050 - 2, &qword_4B0B050, v3, 8);
    v2 = (unsigned int)qword_4B0B048;
  }
  *(_QWORD *)(qword_4B0B040 + 8 * v2) = v1;
  word_4B0B088 = 0;
  xmmword_4B0B098 = 0;
  LODWORD(qword_4B0B048) = qword_4B0B048 + 1;
  qword_4B0B080 = (__int64)&off_4A64730;
  byte_4B0B078 = 0;
  qword_4B0B000 = (__int64)off_4A6DFF0;
  qword_4B0B090 = (__int64)off_49D9168;
  xmmword_4B0B0A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBE90),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0B000, "print-bpi", 9);
  byte_4B0B078 = 0;
  word_4B0B088 = 256;
  qword_4B0B028 = 34;
  BYTE2(qword_4B0B008) = BYTE2(qword_4B0B008) & 0x9F | 0x20;
  qword_4B0B020 = (__int64)"Print the branch probability info.";
  sub_259EC40(&qword_4B0B000);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0B000, &off_47CFE00);
  qword_4B0AF00[2] = 0;
  qword_4B0AF00[0] = (__int64)&off_4A6E058;
  qword_4B0AF00[1] &= 0x80000000uLL;
  qword_4B0AF00[3] = 0;
  qword_4B0AF00[4] = 0;
  qword_4B0AF00[5] = 0;
  qword_4B0AF00[6] = 0;
  qword_4B0AF00[7] = 0;
  qword_4B0AF00[8] = (__int64)&qword_4B0AF00[10];
  qword_4B0AF00[9] = 0x100000000LL;
  qword_4B0AF00[11] = (__int64)&qword_4B0AF00[14];
  qword_4B0AF00[12] = 1;
  LODWORD(qword_4B0AF00[13]) = 0;
  BYTE4(qword_4B0AF00[13]) = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B0B000);
  v5 = LODWORD(qword_4B0AF00[9]);
  if ( HIDWORD(qword_4B0AF00[9]) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(&qword_4B0AF00[8], &qword_4B0AF00[10], v5 + 1, 8);
    v5 = LODWORD(qword_4B0AF00[9]);
  }
  v6 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4B0AF00[8] + 8 * v5) = v4;
  qword_4B0AF00[15] = (__int64)&qword_4B0AF00[17];
  *(_OWORD *)&qword_4B0AF00[26] = 0;
  v7 = _mm_loadl_epi64((const __m128i *)&off_49EBE98);
  ++LODWORD(qword_4B0AF00[9]);
  qword_4B0AF00[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4B0AF00[19] = v6;
  qword_4B0AF00[16] = 0;
  qword_4B0AF00[25] = (__int64)off_49D92E8;
  LOBYTE(qword_4B0AF00[17]) = 0;
  LOBYTE(qword_4B0AF00[22]) = 0;
  *(__m128i *)&qword_4B0AF00[28] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)nullsub_294);
  qword_4B0AF00[21] = 0;
  LOBYTE(qword_4B0AF00[24]) = 0;
  sub_259F400(qword_4B0AF00, "print-bpi-func-name", 19);
  v8 = BYTE2(qword_4B0AF00[1]);
  qword_4B0AF00[5] = 88;
  BYTE2(qword_4B0AF00[1]) = v8 & 0x9F | 0x20;
  qword_4B0AF00[4] = (__int64)"The option to specify the name of the function whose branch probability info is printed.";
  sub_259EC40(qword_4B0AF00);
  __cxa_atexit(sub_2283FB0, qword_4B0AF00, &off_47CFE00);
  dword_4B0AED8 = 1;
  sub_2595890((char *)&qword_4B0AED0 + 4, 20, 32);
  sub_2595890(&qword_4B0AED0, 12, 32);
  v16 = &v37;
  v31 = (void *)__PAIR64__(qword_4B0AED0, HIDWORD(qword_4B0AED0));
  v37 = v39;
  v21 = &v32;
  v38 = 0xC00000000LL;
  v17 = &v31;
  sub_3724130(&v37, &v31, &v32);
  v43 = 33;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v38 )
    sub_3724670(&v44, v16);
  v41 = 0xC00000000LL;
  v15 = &v40;
  v34 = (void *)qword_4B0AED0;
  v40 = v42;
  v24 = &v35;
  v19 = &v34;
  sub_3724130(&v40, &v34, &v35);
  v47 = 32;
  v14.m128i_i64[0] = (__int64)v50;
  ptr = v50;
  v49 = 0xC00000000LL;
  if ( (_DWORD)v41 )
    sub_3724670(&ptr, v15);
  v18 = &v43;
  sub_5B98B0((__int64)&qword_4B0AEA0, &v43, 2);
  if ( ptr != (void *)v14.m128i_i64[0] )
    free(ptr);
  if ( v44 != v46 )
    free(v44);
  if ( v40 != v42 )
    free(v40);
  if ( v37 != v39 )
    free(v37);
  __cxa_atexit(sub_3724BC0, &qword_4B0AEA0, &off_47CFE00);
  sub_2595890((char *)&qword_4B0AE90 + 4, 20, 32);
  sub_2595890(&qword_4B0AE90, 12, 32);
  v32 = 0xC00000000LL;
  v26 = qword_4B0AE90;
  v25 = v33;
  v31 = v33;
  sub_3724130(v17, &v26, v27);
  v43 = 32;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v32 )
    sub_3724670(&v44, v17);
  v35 = 0xC00000000LL;
  v27[0] = HIDWORD(qword_4B0AE90);
  v27[1] = qword_4B0AE90;
  v22 = v36;
  v34 = v36;
  v23 = &v28;
  sub_3724130(v19, v27, &v28);
  v47 = 33;
  v49 = 0xC00000000LL;
  ptr = (void *)v14.m128i_i64[0];
  if ( (_DWORD)v35 )
    sub_3724670(&ptr, v19);
  v37 = v39;
  v9 = v54;
  v38 = 0xC00000000LL;
  v28 = qword_4B0AE90;
  v20 = &v29;
  sub_3724130(v16, v23, &v29);
  v51 = 40;
  v52 = v54;
  v53 = 0xC00000000LL;
  if ( (_DWORD)v38 )
    sub_3724670(&v52, v16);
  v40 = v42;
  v10 = v57;
  v41 = 0xC00000000LL;
  v29 = HIDWORD(qword_4B0AE90);
  v30 = qword_4B0AE90;
  sub_3724130(v15, v20, v17);
  v55 = 38;
  v56[0] = v57;
  v56[1] = 0xC00000000LL;
  if ( (_DWORD)v41 )
    sub_3724670(v56, v15);
  sub_5B98B0((__int64)&qword_4B0AE60, v18, 4);
  do
  {
    v11 = *((_BYTE **)v10 - 2);
    if ( v11 != v10 )
      free(v11);
    v10 -= 72;
  }
  while ( v42 != v10 );
  if ( v40 != v42 )
    free(v40);
  if ( v37 != v39 )
    free(v37);
  if ( v34 != v22 )
    free(v34);
  if ( v31 != v25 )
    free(v31);
  __cxa_atexit(sub_3724BC0, &qword_4B0AE60, &off_47CFE00);
  v35 = 0xC00000000LL;
  v28 = qword_4B0AE90;
  v34 = v22;
  sub_3724130(v19, v23, v20);
  v43 = 32;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v35 )
    sub_3724670(&v44, v19);
  v37 = v39;
  v38 = 0xC00000000LL;
  v29 = HIDWORD(qword_4B0AE90);
  v30 = qword_4B0AE90;
  sub_3724130(v16, v20, v17);
  v47 = 33;
  v49 = 0xC00000000LL;
  ptr = (void *)v14.m128i_i64[0];
  if ( (_DWORD)v38 )
    sub_3724670(&ptr, v16);
  v40 = v42;
  v41 = 0xC00000000LL;
  v31 = (void *)__PAIR64__(qword_4B0AE90, HIDWORD(qword_4B0AE90));
  sub_3724130(v15, v17, v21);
  v51 = 38;
  v52 = v54;
  v53 = 0xC00000000LL;
  if ( (_DWORD)v41 )
    sub_3724670(&v52, v15);
  sub_5B98B0((__int64)&qword_4B0AE20, v18, 3);
  do
  {
    v12 = *((_BYTE **)v9 - 2);
    if ( v12 != v9 )
      free(v12);
    v9 -= 72;
  }
  while ( v42 != v9 );
  if ( v40 != v42 )
    free(v40);
  if ( v37 != v39 )
    free(v37);
  if ( v34 != v22 )
    free(v34);
  __cxa_atexit(sub_3724BC0, &qword_4B0AE20, &off_47CFE00);
  v40 = v42;
  v37 = (void *)qword_4B0AE90;
  v41 = 0xC00000000LL;
  sub_3724130(v15, v16, &v38);
  v43 = 40;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v41 )
    sub_3724670(&v44, v15);
  sub_5B98B0((__int64)&qword_4B0ADE0, v18, 1);
  if ( v44 != v46 )
    free(v44);
  if ( v40 != v42 )
    free(v40);
  __cxa_atexit(sub_3724BC0, &qword_4B0ADE0, &off_47CFE00);
  v37 = v39;
  v38 = 0xC00000000LL;
  v31 = (void *)qword_4B0AE90;
  sub_3724130(v16, v17, v21);
  v43 = 32;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v38 )
    sub_3724670(&v44, v16);
  v40 = v42;
  v41 = 0xC00000000LL;
  v34 = (void *)__PAIR64__(qword_4B0AE90, HIDWORD(qword_4B0AE90));
  sub_3724130(v15, v19, v24);
  v47 = 33;
  v49 = 0xC00000000LL;
  ptr = (void *)v14.m128i_i64[0];
  if ( (_DWORD)v41 )
    sub_3724670(&ptr, v15);
  sub_5B98B0((__int64)&qword_4B0ADA0, v18, 2);
  if ( ptr != (void *)v14.m128i_i64[0] )
    free(ptr);
  if ( v44 != v46 )
    free(v44);
  if ( v40 != v42 )
    free(v40);
  if ( v37 != v39 )
    free(v37);
  __cxa_atexit(sub_3724BC0, &qword_4B0ADA0, &off_47CFE00);
  sub_2595890((char *)&qword_4B0AD98 + 4, 0xFFFFF, 0x100000);
  sub_2595890(&qword_4B0AD98, 1, 0x100000);
  sub_2595890(&dword_4B0AD94, 20, 32);
  sub_2595890(&dword_4B0AD90, 12, 32);
  v37 = v39;
  v38 = 0xC00000000LL;
  v31 = (void *)__PAIR64__(qword_4B0AD98, HIDWORD(qword_4B0AD98));
  sub_3724130(v16, v17, v21);
  v43 = 7;
  v44 = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v38 )
    sub_3724670(&v44, v16);
  v40 = v42;
  v41 = 0xC00000000LL;
  v34 = (void *)qword_4B0AD98;
  sub_3724130(v15, v19, v24);
  v47 = 8;
  v49 = 0xC00000000LL;
  ptr = (void *)v14.m128i_i64[0];
  if ( (_DWORD)v41 )
    sub_3724670(&ptr, v15);
  sub_5B98B0((__int64)&qword_4B0AD60, v18, 2);
  if ( ptr != (void *)v14.m128i_i64[0] )
    free(ptr);
  if ( v44 != v46 )
    free(v44);
  if ( v40 != v42 )
    free(v40);
  if ( v37 != v39 )
    free(v37);
  return __cxa_atexit(sub_3724BC0, &qword_4B0AD60, &off_47CFE00);
}

