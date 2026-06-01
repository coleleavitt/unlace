int __fastcall sub_2F1550(__int64 a1, __int64 a2)
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
  qword_2CB0F10 = 0;
  v3 = v2;
  qword_2CB0F18 = 0;
  qword_2CB0F20 = 0;
  qword_2CB0F00 = (__int64)&off_2C4B8B0;
  qword_2CB0F08 = (unsigned int)qword_2CB0F08 & 0x80000000;
  qword_2CB0F48 = 0x100000000LL;
  qword_2CB0F28 = 0;
  qword_2CB0F30 = 0;
  qword_2CB0F38 = 0;
  qword_2CB0F40 = (__int64)&unk_2CB0F50;
  qword_2CB0F58 = (__int64)&unk_2CB0F70;
  qword_2CB0F60 = 1;
  dword_2CB0F68 = 0;
  byte_2CB0F6C = 1;
  v4 = sub_21ED2B0("Print the branch probability info.", a2);
  v5 = (unsigned int)qword_2CB0F48;
  v6 = (unsigned int)qword_2CB0F48 + 1LL;
  if ( v6 > HIDWORD(qword_2CB0F48) )
  {
    v20 = (char *)v4;
    sub_22134E0((char *)&unk_2CB0F50 - 16, &unk_2CB0F50, v6, 8);
    v5 = (unsigned int)qword_2CB0F48;
    v4 = (__int64)v20;
  }
  *(_QWORD *)(qword_2CB0F40 + 8 * v5) = v4;
  word_2CB0F88 = 0;
  xmmword_2CB0FA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB0F48) = qword_2CB0F48 + 1;
  qword_2CB0F80 = (__int64)off_2C474E8;
  byte_2CB0F78 = 0;
  qword_2CB0F00 = (__int64)off_2C4B848;
  qword_2CB0F90 = (__int64)off_2BC0B68;
  v7 = j__strlen("print-bpi");
  sub_21F3510(&qword_2CB0F00, "print-bpi", v7);
  word_2CB0F88 = 256;
  byte_2CB0F78 = 0;
  qword_2CB0F28 = v3;
  BYTE2(qword_2CB0F08) = BYTE2(qword_2CB0F08) & 0x9F | 0x20;
  qword_2CB0F20 = (__int64)"Print the branch probability info.";
  sub_21F4400(&qword_2CB0F00);
  __cxa_atexit(sub_1FEA450, &qword_2CB0F00, &off_2AFC540);
  v8 = j__strlen("The option to specify the name of the function whose branch probability info is printed.");
  byte_2CB0E6C = 1;
  qword_2CB0E10 = 0;
  v9 = v8;
  qword_2CB0E00 = (__int64)&off_2C4B8B0;
  qword_2CB0E08 = (unsigned int)qword_2CB0E08 & 0x80000000;
  qword_2CB0E48 = 0x100000000LL;
  qword_2CB0E18 = 0;
  qword_2CB0E20 = 0;
  qword_2CB0E28 = 0;
  qword_2CB0E30 = 0;
  qword_2CB0E38 = 0;
  qword_2CB0E40 = (__int64)&unk_2CB0E50;
  qword_2CB0E58 = (__int64)&unk_2CB0E70;
  qword_2CB0E60 = 1;
  dword_2CB0E68 = 0;
  v10 = sub_21ED2B0(
          "The option to specify the name of the function whose branch probability info is printed.",
          &qword_2CB0F00);
  v11 = (unsigned int)qword_2CB0E48;
  v12 = (unsigned int)qword_2CB0E48 + 1LL;
  if ( v12 > HIDWORD(qword_2CB0E48) )
  {
    v20 = (char *)v10;
    sub_22134E0((char *)&unk_2CB0E50 - 16, &unk_2CB0E50, v12, 8);
    v11 = (unsigned int)qword_2CB0E48;
    v10 = (__int64)v20;
  }
  *(_QWORD *)(qword_2CB0E40 + 8 * v11) = v10;
  qword_2CB0E78 = (__int64)&byte_2CB0E88;
  LODWORD(qword_2CB0E48) = qword_2CB0E48 + 1;
  v20 = &byte_2CB0EB0;
  qword_2CB0E80 = 0;
  byte_2CB0E88 = 0;
  v13 = _mm_loadh_ps((const double *)&v20);
  qword_2CB0E00 = (__int64)off_2C4B7E0;
  xmmword_2CB0E98 = (__int128)v13;
  byte_2CB0EB0 = 0;
  byte_2CB0EC0 = 0;
  xmmword_2CB0EE0 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB0EA8 = 0;
  qword_2CB0EC8 = (__int64)off_2BC0CB8;
  v14 = j__strlen("print-bpi-func-name");
  sub_21F3510(&qword_2CB0E00, "print-bpi-func-name", v14);
  qword_2CB0E28 = v9;
  BYTE2(qword_2CB0E08) = BYTE2(qword_2CB0E08) & 0x9F | 0x20;
  qword_2CB0E20 = (__int64)"The option to specify the name of the function whose branch probability info is printed.";
  sub_21F4400(&qword_2CB0E00);
  __cxa_atexit(sub_1FC95A0, &qword_2CB0E00, &off_2AFC540);
  dword_2CB0DF8 = 1;
  sub_21EBE10((char *)&qword_2CB0DF0 + 4, 20, 32);
  sub_21EBE10(&qword_2CB0DF0, 12, 32);
  v37 = 0xC00000000LL;
  v30 = (void *)__PAIR64__(qword_2CB0DF0, HIDWORD(qword_2CB0DF0));
  v36 = v38;
  sub_1FEC720(&v36, &v30, &v31);
  v39 = 33;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  v34 = 0xC00000000LL;
  v27 = (void *)qword_2CB0DF0;
  v33 = v35;
  sub_1FEC720(&v33, &v27, &v28);
  v43 = 32;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_1FEC630(&ptr, &v33);
  sub_2F13D0((__int64)&unk_2CB0DC0, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_1FEC810, &unk_2CB0DC0, &off_2AFC540);
  sub_21EBE10((char *)&qword_2CB0DB0 + 4, 20, 32);
  sub_21EBE10(&qword_2CB0DB0, 12, 32);
  v26 = qword_2CB0DB0;
  v36 = v38;
  v37 = 0xC00000000LL;
  sub_1FEC720(&v36, &v26, &v27);
  v39 = 32;
  v41 = 0xC00000000LL;
  v40 = v42;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  v20 = (char *)&v24;
  v24 = HIDWORD(qword_2CB0DB0);
  v25 = qword_2CB0DB0;
  v33 = v35;
  v34 = 0xC00000000LL;
  sub_1FEC720(&v33, &v24, &v26);
  v43 = 33;
  v45 = 0xC00000000LL;
  ptr = v46;
  if ( (_DWORD)v34 )
    sub_1FEC630(&ptr, &v33);
  v23 = qword_2CB0DB0;
  v30 = v32;
  v31 = 0xC00000000LL;
  sub_1FEC720(&v30, &v23, &v24);
  v47 = 40;
  v49 = 0xC00000000LL;
  v48 = v50;
  if ( (_DWORD)v31 )
    sub_1FEC630(&v48, &v30);
  v22[0] = HIDWORD(qword_2CB0DB0);
  v22[1] = qword_2CB0DB0;
  v27 = v29;
  v28 = 0xC00000000LL;
  sub_1FEC720(&v27, v22, &v23);
  v51 = 38;
  v52[0] = &v53;
  v52[1] = 0xC00000000LL;
  if ( (_DWORD)v28 )
    sub_1FEC630(v52, &v27);
  sub_2F13D0((__int64)&unk_2CB0D80, &v39, 4);
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
  __cxa_atexit(sub_1FEC810, &unk_2CB0D80, &off_2AFC540);
  v27 = (void *)qword_2CB0DB0;
  v36 = v38;
  v37 = 0xC00000000LL;
  sub_1FEC720(&v36, &v27, &v28);
  v39 = 32;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  v26 = __PAIR64__(qword_2CB0DB0, HIDWORD(qword_2CB0DB0));
  v33 = v35;
  v34 = 0xC00000000LL;
  sub_1FEC720(&v33, &v26, &v27);
  v43 = 33;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_1FEC630(&ptr, &v33);
  v31 = 0xC00000000LL;
  v24 = HIDWORD(qword_2CB0DB0);
  v25 = qword_2CB0DB0;
  v30 = v32;
  sub_1FEC720(&v30, v20, v20 + 8);
  v47 = 38;
  v48 = v50;
  v49 = 0xC00000000LL;
  if ( (_DWORD)v31 )
    sub_1FEC630(&v48, &v30);
  sub_2F13D0((__int64)&unk_2CB0D40, &v39, 3);
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
  __cxa_atexit(sub_1FEC810, &unk_2CB0D40, &off_2AFC540);
  v37 = 0xC00000000LL;
  v33 = (void *)qword_2CB0DB0;
  v36 = v38;
  sub_1FEC720(&v36, &v33, &v34);
  v39 = 40;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  sub_2F13D0((__int64)&unk_2CB0D00, &v39, 1);
  if ( v40 != v42 )
    free(v40);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_1FEC810, &unk_2CB0D00, &off_2AFC540);
  v37 = 0xC00000000LL;
  v30 = (void *)qword_2CB0DB0;
  v36 = v38;
  sub_1FEC720(&v36, &v30, &v31);
  v39 = 32;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  v27 = (void *)__PAIR64__(qword_2CB0DB0, HIDWORD(qword_2CB0DB0));
  v34 = 0xC00000000LL;
  v33 = v35;
  sub_1FEC720(&v33, &v27, &v28);
  v43 = 33;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_1FEC630(&ptr, &v33);
  sub_2F13D0((__int64)&unk_2CB0CC0, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  __cxa_atexit(sub_1FEC810, &unk_2CB0CC0, &off_2AFC540);
  sub_21EBE10((char *)&qword_2CB0CB8 + 4, 0xFFFFF, &stru_100000);
  sub_21EBE10(&qword_2CB0CB8, 1, &stru_100000);
  sub_21EBE10(&unk_2CB0CB4, 20, 32);
  sub_21EBE10(&unk_2CB0CB0, 12, 32);
  v37 = 0xC00000000LL;
  v30 = (void *)__PAIR64__(qword_2CB0CB8, HIDWORD(qword_2CB0CB8));
  v36 = v38;
  sub_1FEC720(&v36, &v30, &v31);
  v39 = 7;
  v40 = v42;
  v41 = 0xC00000000LL;
  if ( (_DWORD)v37 )
    sub_1FEC630(&v40, &v36);
  v27 = (void *)qword_2CB0CB8;
  v34 = 0xC00000000LL;
  v33 = v35;
  sub_1FEC720(&v33, &v27, &v28);
  v43 = 8;
  ptr = v46;
  v45 = 0xC00000000LL;
  if ( (_DWORD)v34 )
    sub_1FEC630(&ptr, &v33);
  sub_2F13D0((__int64)&unk_2CB0C80, &v39, 2);
  if ( ptr != v46 )
    free(ptr);
  if ( v40 != v42 )
    free(v40);
  if ( v33 != v35 )
    free(v33);
  if ( v36 != v38 )
    free(v36);
  return __cxa_atexit(sub_1FEC810, &unk_2CB0C80, &off_2AFC540);
}

