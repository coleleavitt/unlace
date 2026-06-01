int __fastcall sub_2F4910(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  size_t v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __m128 v13; // xmm0
  size_t v14; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // rdi
  int *v17; // r15
  int *v18; // rdi
  char *v20; // [rsp+0h] [rbp-288h] BYREF
  unsigned int *v21; // [rsp+8h] [rbp-280h]
  _DWORD v22[2]; // [rsp+10h] [rbp-278h] BYREF
  __int64 v23; // [rsp+18h] [rbp-270h] BYREF
  int v24; // [rsp+20h] [rbp-268h] BYREF
  int v25; // [rsp+24h] [rbp-264h]
  unsigned __int64 v26; // [rsp+28h] [rbp-260h] BYREF
  void *v27; // [rsp+30h] [rbp-258h] BYREF
  __int64 v28; // [rsp+38h] [rbp-250h] BYREF
  _BYTE v29[48]; // [rsp+40h] [rbp-248h] BYREF
  void *v30; // [rsp+70h] [rbp-218h] BYREF
  __int64 v31; // [rsp+78h] [rbp-210h] BYREF
  _BYTE v32[48]; // [rsp+80h] [rbp-208h] BYREF
  void *v33; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-1D0h] BYREF
  _BYTE v35[48]; // [rsp+C0h] [rbp-1C8h] BYREF
  void *v36; // [rsp+F0h] [rbp-198h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-190h]
  _BYTE v38[48]; // [rsp+100h] [rbp-188h] BYREF
  unsigned int v39; // [rsp+130h] [rbp-158h] BYREF
  void *v40; // [rsp+138h] [rbp-150h] BYREF
  __int64 v41; // [rsp+140h] [rbp-148h]
  _BYTE v42[48]; // [rsp+148h] [rbp-140h] BYREF
  int v43; // [rsp+178h] [rbp-110h]
  void *ptr; // [rsp+180h] [rbp-108h] BYREF
  __int64 v45; // [rsp+188h] [rbp-100h]
  _BYTE v46[48]; // [rsp+190h] [rbp-F8h] BYREF
  int v47; // [rsp+1C0h] [rbp-C8h]
  _BYTE *v48; // [rsp+1C8h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+1D0h] [rbp-B8h]
  _BYTE v50[48]; // [rsp+1D8h] [rbp-B0h] BYREF
  int v51; // [rsp+208h] [rbp-80h] BYREF
  _QWORD v52[2]; // [rsp+210h] [rbp-78h] BYREF
  __int64 v53; // [rsp+220h] [rbp-68h] BYREF
  char v54; // [rsp+250h] [rbp-38h] BYREF

  v2 = j__strlen("Print the branch probability info.");
  qword_2CDAE30 = 0;
  v3 = v2;
  qword_2CDAE38 = 0;
  qword_2CDAE40 = 0;
  qword_2CDAE20 = (__int64)&off_2C758B0;
  qword_2CDAE28 = (unsigned int)qword_2CDAE28 & 0x80000000;
  qword_2CDAE68 = 0x100000000LL;
  qword_2CDAE48 = 0;
  qword_2CDAE50 = 0;
  qword_2CDAE58 = 0;
  qword_2CDAE60 = (__int64)&unk_2CDAE70;
  qword_2CDAE78 = (__int64)&unk_2CDAE90;
  qword_2CDAE80 = 1;
  dword_2CDAE88 = 0;
  byte_2CDAE8C = 1;
  v4 = sub_2210FF0("Print the branch probability info.", a2);
  v5 = (unsigned int)qword_2CDAE68;
  v6 = (unsigned int)qword_2CDAE68 + 1LL;
  if ( v6 > HIDWORD(qword_2CDAE68) )
  {
    v20 = (char *)v4;
    sub_2237220((char *)&unk_2CDAE70 - 16, &unk_2CDAE70, v6, 8);
    v5 = (unsigned int)qword_2CDAE68;
    v4 = (__int64)v20;
  }
  *(_QWORD *)(qword_2CDAE60 + 8 * v5) = v4;
  word_2CDAEA8 = 0;
  xmmword_2CDAEC8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDAE68) = qword_2CDAE68 + 1;
  qword_2CDAEA0 = (__int64)off_2C714E8;
  byte_2CDAE98 = 0;
  qword_2CDAE20 = (__int64)off_2C75848;
  qword_2CDAEB0 = (__int64)off_2BEAB08;
  v7 = j__strlen("print-bpi");
  sub_2217250(&qword_2CDAE20, "print-bpi", v7);
  word_2CDAEA8 = 256;
  byte_2CDAE98 = 0;
  qword_2CDAE48 = v3;
  BYTE2(qword_2CDAE28) = BYTE2(qword_2CDAE28) & 0x9F | 0x20;
  qword_2CDAE40 = (__int64)"Print the branch probability info.";
  sub_2218140(&qword_2CDAE20);
  __cxa_atexit(sub_200E190, &qword_2CDAE20, &off_2B25620);
  v8 = j__strlen("The option to specify the name of the function whose branch probability info is printed.");
  byte_2CDAD8C = 1;
  qword_2CDAD30 = 0;
  v9 = v8;
  qword_2CDAD20 = (__int64)&off_2C758B0;
  qword_2CDAD28 = (unsigned int)qword_2CDAD28 & 0x80000000;
  qword_2CDAD68 = 0x100000000LL;
  qword_2CDAD38 = 0;
  qword_2CDAD40 = 0;
  qword_2CDAD48 = 0;
  qword_2CDAD50 = 0;
  qword_2CDAD58 = 0;
  qword_2CDAD60 = (__int64)&unk_2CDAD70;
  qword_2CDAD78 = (__int64)&unk_2CDAD90;
  qword_2CDAD80 = 1;
  dword_2CDAD88 = 0;
  v10 = sub_2210FF0(
          "The option to specify the name of the function whose branch probability info is printed.",
          &qword_2CDAE20);
  v11 = (unsigned int)qword_2CDAD68;
  v12 = (unsigned int)qword_2CDAD68 + 1LL;
  if ( v12 > HIDWORD(qword_2CDAD68) )
  {
    v20 = (char *)v10;
    sub_2237220((char *)&unk_2CDAD70 - 16, &unk_2CDAD70, v12, 8);
    v11 = (unsigned int)qword_2CDAD68;
    v10 = (__int64)v20;
  }
  *(_QWORD *)(qword_2CDAD60 + 8 * v11) = v10;
  qword_2CDAD98 = (__int64)&byte_2CDADA8;
  LODWORD(qword_2CDAD68) = qword_2CDAD68 + 1;
  v20 = &byte_2CDADD0;
  qword_2CDADA0 = 0;
  byte_2CDADA8 = 0;
  v13 = _mm_loadh_ps((const double *)&v20);
  qword_2CDAD20 = (__int64)off_2C757E0;
  xmmword_2CDADB8 = (__int128)v13;
  byte_2CDADD0 = 0;
  byte_2CDADE0 = 0;
  xmmword_2CDAE00 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CDADC8 = 0;
  qword_2CDADE8 = (__int64)off_2BEAC58;
  v14 = j__strlen("print-bpi-func-name");
  sub_2217250(&qword_2CDAD20, "print-bpi-func-name", v14);
  qword_2CDAD48 = v9;
  BYTE2(qword_2CDAD28) = BYTE2(qword_2CDAD28) & 0x9F | 0x20;
  qword_2CDAD40 = (__int64)"The option to specify the name of the function whose branch probability info is printed.";
  sub_2218140(&qword_2CDAD20);
  __cxa_atexit(sub_1FED2E0, &qword_2CDAD20, &off_2B25620);
  dword_2CDAD18 = 1;
  sub_220FB50((char *)&qword_2CDAD10 + 4, 20, 32);
  sub_220FB50(&qword_2CDAD10, 12, 32);
  v37 = 0xC00000000LL;
  v30 = (void *)__PAIR64__(qword_2CDAD10, HIDWORD(qword_2CDAD10));
  v36 = v38;
  sub_2010460(&v36, &v30, &v31);
  v39 = 33;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  v34 = 0xC00000000LL;
  v27 = (void *)qword_2CDAD10;
  v33 = v35;
  sub_2010460(&v33, &v27, &v28);
  v43 = 32;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_2010370(&ptr, &v33);
  sub_2F4790((__int64)&unk_2CDACE0, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_2010550, &unk_2CDACE0, &off_2B25620);
  sub_220FB50((char *)&qword_2CDACD0 + 4, 20, 32);
  sub_220FB50(&qword_2CDACD0, 12, 32);
  v26 = qword_2CDACD0;
  v36 = v38;
  v37 = 0xC00000000LL;
  sub_2010460(&v36, &v26, &v27);
  v39 = 32;
  v41 = 0xC00000000LL;
  v40 = v42;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  v20 = (char *)&v24;
  v24 = HIDWORD(qword_2CDACD0);
  v25 = qword_2CDACD0;
  v33 = v35;
  v34 = 0xC00000000LL;
  sub_2010460(&v33, &v24, &v26);
  v43 = 33;
  v45 = 0xC00000000LL;
  ptr = v46;
  if ( (_DWORD)v34 )
    sub_2010370(&ptr, &v33);
  v23 = qword_2CDACD0;
  v30 = v32;
  v31 = 0xC00000000LL;
  sub_2010460(&v30, &v23, &v24);
  v47 = 40;
  v49 = 0xC00000000LL;
  v48 = v50;
  if ( (_DWORD)v31 )
    sub_2010370(&v48, &v30);
  v22[0] = HIDWORD(qword_2CDACD0);
  v22[1] = qword_2CDACD0;
  v27 = v29;
  v28 = 0xC00000000LL;
  sub_2010460(&v27, v22, &v23);
  v51 = 38;
  v52[0] = &v53;
  v52[1] = 0xC00000000LL;
  if ( (_DWORD)v28 )
    sub_2010370(v52, &v27);
  sub_2F4790((__int64)&unk_2CDACA0, &v39, 4);
  v15 = (unsigned int *)&v54;
  do
  {
    while ( 1 )
    {
      v15 -= 18;
      v16 = *((unsigned int **)v15 + 1);
      if ( v16 == v15 + 6 )
        break;
      v21 = v15;
      free(v16);
      v15 = v21;
      if ( v21 == &v39 )
        goto LABEL_28;
    }
  }
  while ( v15 != &v39 );
LABEL_28:
  if ( v27 != v29 )
    free(v27);
  if ( v30 != v32 )
    free(v30);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_2010550, &unk_2CDACA0, &off_2B25620);
  v27 = (void *)qword_2CDACD0;
  v36 = v38;
  v37 = 0xC00000000LL;
  sub_2010460(&v36, &v27, &v28);
  v39 = 32;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  v26 = __PAIR64__(qword_2CDACD0, HIDWORD(qword_2CDACD0));
  v33 = v35;
  v34 = 0xC00000000LL;
  sub_2010460(&v33, &v26, &v27);
  v43 = 33;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_2010370(&ptr, &v33);
  v31 = 0xC00000000LL;
  v24 = HIDWORD(qword_2CDACD0);
  v25 = qword_2CDACD0;
  v30 = v32;
  sub_2010460(&v30, v20, v20 + 8);
  v47 = 38;
  v48 = v50;
  v49 = 0xC00000000LL;
  if ( (_DWORD)v31 )
    sub_2010370(&v48, &v30);
  sub_2F4790((__int64)&unk_2CDAC60, &v39, 3);
  v17 = &v51;
  do
  {
    while ( 1 )
    {
      v17 -= 18;
      v18 = *((int **)v17 + 1);
      if ( v18 == v17 + 6 )
        break;
      free(v18);
      if ( v17 == (int *)&v39 )
        goto LABEL_45;
    }
  }
  while ( v17 != (int *)&v39 );
LABEL_45:
  if ( v30 != v32 )
    free(v30);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_2010550, &unk_2CDAC60, &off_2B25620);
  v37 = 0xC00000000LL;
  v33 = (void *)qword_2CDACD0;
  v36 = v38;
  sub_2010460(&v36, &v33, &v34);
  v39 = 40;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  sub_2F4790((__int64)&unk_2CDAC20, &v39, 1);
  if ( v40 != v42 )
    free(v40);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_2010550, &unk_2CDAC20, &off_2B25620);
  v37 = 0xC00000000LL;
  v30 = (void *)qword_2CDACD0;
  v36 = v38;
  sub_2010460(&v36, &v30, &v31);
  v39 = 32;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  v27 = (void *)__PAIR64__(qword_2CDACD0, HIDWORD(qword_2CDACD0));
  v34 = 0xC00000000LL;
  v33 = v35;
  sub_2010460(&v33, &v27, &v28);
  v43 = 33;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_2010370(&ptr, &v33);
  sub_2F4790((__int64)&unk_2CDABE0, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_2010550, &unk_2CDABE0, &off_2B25620);
  sub_220FB50((char *)&qword_2CDABD8 + 4, 0xFFFFF, 0x100000);
  sub_220FB50(&qword_2CDABD8, 1, 0x100000);
  sub_220FB50(&unk_2CDABD4, 20, 32);
  sub_220FB50(&unk_2CDABD0, 12, 32);
  v37 = 0xC00000000LL;
  v30 = (void *)__PAIR64__(qword_2CDABD8, HIDWORD(qword_2CDABD8));
  v36 = v38;
  sub_2010460(&v36, &v30, &v31);
  v39 = 7;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_2010370(&v40, &v36);
  v27 = (void *)qword_2CDABD8;
  v34 = 0xC00000000LL;
  v33 = v35;
  sub_2010460(&v33, &v27, &v28);
  v43 = 8;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_2010370(&ptr, &v33);
  sub_2F4790((__int64)&unk_2CDABA0, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  return __cxa_atexit(sub_2010550, &unk_2CDABA0, &off_2B25620);
}
