bool __fastcall sub_1302D10(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int16 v5; // ax
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  const char **v18; // rax
  size_t v19; // rdx
  const char *v20; // rsi
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  const char **v30; // rax
  size_t v31; // rdx
  const char *v32; // rsi
  _BYTE *v33; // rsi
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  __int64 v36; // rdx
  _BYTE *v37; // rsi
  __int64 v38; // rdx
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  const char **v48; // rax
  size_t v49; // rdx
  const char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r15
  const char **v56; // rax
  size_t v57; // rdx
  const char *v58; // rsi
  _BYTE *v60; // rsi
  __int64 v61; // rdx
  _BYTE *v62; // rsi
  __int64 v63; // rdx
  _BYTE *v64; // rsi
  __int64 v65; // rdx
  _BYTE *v66; // rsi
  __int64 v67; // rdx
  _BYTE *v68; // rsi
  __int64 v69; // rdx
  _BYTE *v70; // rsi
  __int64 v71; // rdx
  _BYTE *v72; // rsi
  __int64 v73; // rdx
  _BYTE *v74; // rsi
  __int64 v75; // rdx
  __int64 *v77; // [rsp+8h] [rbp-100h]
  __int64 *v78; // [rsp+8h] [rbp-100h]
  int v79; // [rsp+14h] [rbp-F4h]
  void *v80; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v81; // [rsp+28h] [rbp-E0h]
  _BYTE v82[16]; // [rsp+30h] [rbp-D8h] BYREF
  void *v83[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v84[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v85; // [rsp+60h] [rbp-A8h] BYREF
  signed __int64 v86; // [rsp+68h] [rbp-A0h]
  __m128i v87; // [rsp+70h] [rbp-98h] BYREF
  __m128i v88; // [rsp+80h] [rbp-88h] BYREF
  __m128i v89; // [rsp+90h] [rbp-78h] BYREF
  char v90; // [rsp+A0h] [rbp-68h]

  v4 = *(_DWORD *)(a3 + 212);
  *(_OWORD *)v83 = 0;
  v79 = v4;
  v84[0] = 0;
  sub_12FD200((unsigned __int64 **)v83, (__int64)&v80, (__int64)&v80);
  v77 = (__int64 *)(a1 + 328);
  sub_C23620((__int64)&v85, (__int64 *)(a1 + 328));
  sub_C23620((__int64)&v88, (__int64 *)v83);
  sub_12FB6B0(a1 + 328, &v88);
  sub_9B4A30((void ***)&v88);
  sub_9B4A30((void ***)&v85);
  sub_9B4A30((void ***)v83);
  sub_12FB670(&v88, 0xB7u, a2);
  if ( v89.m128i_i8[8] )
  {
    sub_C23620((__int64)&v80, v88.m128i_i64);
    sub_C23620((__int64)v83, v77);
    sub_C23620((__int64)&v85, (__int64 *)&v80);
    sub_12FB6B0((__int64)v77, &v85);
    sub_9B4A30((void ***)&v85);
    sub_9B4A30((void ***)v83);
    sub_9B4A30((void ***)&v80);
    if ( v89.m128i_i8[8] )
      sub_9B4A30((void ***)&v88);
  }
  *(_BYTE *)(a1 + 353) = 0;
  v88.m128i_i16[0] = 1;
  v88.m128i_i32[1] = 1071;
  v5 = sub_12FBBD0(v88.m128i_i8, 0x220u, a2);
  if ( HIBYTE(v5) )
    *(_BYTE *)(a1 + 353) = v5;
  *(_DWORD *)(a1 + 360) = 0;
  v6 = sub_1302940(0xAFDu, 2u, a2, a3);
  if ( BYTE4(v6) )
    *(_DWORD *)(a1 + 360) = v6;
  *(_BYTE *)(a1 + 352) = 0;
  v88.m128i_i16[0] = 1;
  v88.m128i_i32[1] = 1145;
  v7 = sub_12FBBD0(v88.m128i_i8, 0x317u, a2);
  if ( HIBYTE(v7) )
    *(_BYTE *)(a1 + 352) = v7;
  v8 = *(_BYTE **)(a1 + 368);
  v9 = *(_QWORD *)(a1 + 376);
  v85 = &v87;
  sub_12FAA20(&v85, v8, (__int64)&v8[v9]);
  sub_12FB750(&v88, "default");
  sub_A0AAD0(a1 + 368, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  sub_1302A80(&v88, 0x909u, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v70 = *(_BYTE **)(a1 + 368);
    v71 = *(_QWORD *)(a1 + 376);
    v83[0] = v84;
    sub_12FAA20(v83, v70, (__int64)&v70[v71]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 368, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  *(_QWORD *)(a1 + 400) = 0;
  v10 = sub_1302610(0x996u, a2, a3);
  if ( BYTE4(v10) )
    *(_QWORD *)(a1 + 400) = (unsigned int)v10;
  *(_DWORD *)(a1 + 192) = 1;
  v11 = sub_1302940(0x929u, 0x25u, a2, a3);
  if ( BYTE4(v11) )
    *(_DWORD *)(a1 + 192) = v11;
  *(_DWORD *)(a1 + 356) = 600;
  v12 = sub_1302940(0x90Du, 0x26u, a2, a3);
  if ( BYTE4(v12) )
    *(_DWORD *)(a1 + 356) = v12;
  v13 = *(_BYTE **)(a1 + 160);
  LOBYTE(v84[0]) = 0;
  v14 = *(_QWORD *)(a1 + 168);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  sub_12FAA20(&v85, v13, (__int64)&v13[v14]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 160, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  sub_1302A80(&v88, 0xCFAu, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v68 = *(_BYTE **)(a1 + 160);
    v69 = *(_QWORD *)(a1 + 168);
    v83[0] = v84;
    sub_12FAA20(v83, v68, (__int64)&v68[v69]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 160, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v15 = *(_BYTE **)(a1 + 424);
  LOBYTE(v84[0]) = 0;
  v16 = *(_QWORD *)(a1 + 432);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  sub_12FAA20(&v85, v15, (__int64)&v15[v16]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 424, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  v17 = sub_13021E0(a2, 0x104u);
  if ( v17 )
  {
    v18 = *(const char ***)(v17 + 48);
    v19 = 0;
    v20 = *v18;
    if ( *v18 )
    {
      v20 = *v18;
      v19 = j__strlen(*v18);
    }
    sub_22BC1E0(&v85, v20, v19, 0);
    v88.m128i_i64[0] = (__int64)&v89;
    if ( v85 == &v87 )
    {
      v89 = _mm_load_si128(&v87);
    }
    else
    {
      v88.m128i_i64[0] = (__int64)v85;
      v89.m128i_i64[0] = v87.m128i_i64[0];
    }
    v80 = v82;
    v88.m128i_i64[1] = v86;
    v90 = 1;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v86);
    v21 = *(_BYTE **)(a1 + 424);
    v22 = *(_QWORD *)(a1 + 432);
    v83[0] = v84;
    sub_12FAA20(v83, v21, (__int64)&v21[v22]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 424, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v23 = *(_BYTE **)(a1 + 96);
  v24 = *(_QWORD *)(a1 + 104);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  LOBYTE(v84[0]) = 0;
  sub_12FAA20(&v85, v23, (__int64)&v23[v24]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 96, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  sub_1302A80(&v88, 0xD11u, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v66 = *(_BYTE **)(a1 + 96);
    v67 = (__int64)&v66[*(_QWORD *)(a1 + 104)];
    v83[0] = v84;
    sub_12FAA20(v83, v66, v67);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 96, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v25 = *(_BYTE **)(a1 + 64);
  v26 = *(_QWORD *)(a1 + 72);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  LOBYTE(v84[0]) = 0;
  sub_12FAA20(&v85, v25, (__int64)&v25[v26]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 64, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  sub_1302A80(&v88, 0xCFBu, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v64 = *(_BYTE **)(a1 + 64);
    v65 = (__int64)&v64[*(_QWORD *)(a1 + 72)];
    v83[0] = v84;
    sub_12FAA20(v83, v64, v65);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 64, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  *(_OWORD *)v83 = 0;
  v84[0] = 0;
  sub_12FD200((unsigned __int64 **)v83, (__int64)&v80, (__int64)&v80);
  v78 = (__int64 *)(a1 + 232);
  sub_C23620((__int64)&v85, (__int64 *)(a1 + 232));
  sub_C23620((__int64)&v88, (__int64 *)v83);
  sub_12FB6B0(a1 + 232, &v88);
  sub_9B4A30((void ***)&v88);
  sub_9B4A30((void ***)&v85);
  sub_9B4A30((void ***)v83);
  sub_12FB670(&v88, 0xCFCu, a2);
  if ( v89.m128i_i8[8] )
  {
    sub_C23620((__int64)&v80, v88.m128i_i64);
    sub_C23620((__int64)v83, v78);
    sub_C23620((__int64)&v85, (__int64 *)&v80);
    sub_12FB6B0((__int64)v78, &v85);
    sub_9B4A30((void ***)&v85);
    sub_9B4A30((void ***)v83);
    sub_9B4A30((void ***)&v80);
    if ( v89.m128i_i8[8] )
      sub_9B4A30((void ***)&v88);
  }
  sub_22A4A00(&v80);
  sub_22BC1E0(v83, v80, v81, 0);
  v27 = *(_BYTE **)a1;
  v28 = *(_QWORD *)(a1 + 8);
  v85 = &v87;
  sub_12FAA20(&v85, v27, (__int64)&v27[v28]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  if ( v80 != v82 )
    operator delete(v80);
  v29 = sub_13021E0(a2, 0xD10u);
  if ( v29 )
  {
    v30 = *(const char ***)(v29 + 48);
    v31 = 0;
    v32 = *v30;
    if ( *v30 )
    {
      v32 = *v30;
      v31 = j__strlen(*v30);
    }
    sub_22BC1E0(&v85, v32, v31, 0);
    v88.m128i_i64[0] = (__int64)&v89;
    if ( v85 == &v87 )
    {
      v89 = _mm_load_si128(&v87);
    }
    else
    {
      v88.m128i_i64[0] = (__int64)v85;
      v89.m128i_i64[0] = v87.m128i_i64[0];
    }
    v80 = v82;
    v88.m128i_i64[1] = v86;
    v90 = 1;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v86);
    v33 = *(_BYTE **)a1;
    v34 = *(_QWORD *)(a1 + 8);
    v83[0] = v84;
    sub_12FAA20(v83, v33, (__int64)&v33[v34]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v35 = *(_BYTE **)(a1 + 200);
  LOBYTE(v84[0]) = 0;
  v36 = *(_QWORD *)(a1 + 208);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  sub_12FAA20(&v85, v35, (__int64)&v35[v36]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 200, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  sub_1302A80(&v88, 0xCFEu, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v74 = *(_BYTE **)(a1 + 200);
    v75 = *(_QWORD *)(a1 + 208);
    v83[0] = v84;
    sub_12FAA20(v83, v74, (__int64)&v74[v75]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 200, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v37 = *(_BYTE **)(a1 + 128);
  LOBYTE(v84[0]) = 0;
  v38 = *(_QWORD *)(a1 + 136);
  v83[0] = v84;
  v85 = &v87;
  v83[1] = nullptr;
  sub_12FAA20(&v85, v37, (__int64)&v37[v38]);
  v88.m128i_i64[0] = (__int64)&v89;
  sub_12FAA20(&v88, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
  sub_A0AAD0(a1 + 128, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( v83[0] != v84 )
    operator delete(v83[0]);
  sub_1302A80(&v88, 0x94Cu, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v72 = *(_BYTE **)(a1 + 128);
    v73 = *(_QWORD *)(a1 + 136);
    v83[0] = v84;
    sub_12FAA20(v83, v72, (__int64)&v72[v73]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 128, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v39 = *(_BYTE **)(a1 + 472);
  v40 = *(_QWORD *)(a1 + 480);
  v85 = &v87;
  sub_12FAA20(&v85, v39, (__int64)&v39[v40]);
  sub_12FB750(&v88, "1.8");
  sub_A0AAD0(a1 + 472, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  sub_1302A80(&v88, 0xD29u, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v62 = *(_BYTE **)(a1 + 472);
    v63 = *(_QWORD *)(a1 + 480);
    v83[0] = v84;
    sub_12FAA20(v83, v62, (__int64)&v62[v63]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 472, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v41 = *(_BYTE **)(a1 + 504);
  v42 = *(_QWORD *)(a1 + 512);
  v85 = &v87;
  sub_12FAA20(&v85, v41, (__int64)&v41[v42]);
  sub_12FB750(&v88, "main");
  sub_A0AAD0(a1 + 504, &v88);
  if ( (__m128i *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
  if ( v85 != &v87 )
    operator delete(v85);
  sub_1302A80(&v88, 0x849u, a2);
  if ( v90 )
  {
    v80 = v82;
    sub_12FAA20(&v80, v88.m128i_i64[0], v88.m128i_i64[0] + v88.m128i_i64[1]);
    v60 = *(_BYTE **)(a1 + 504);
    v61 = *(_QWORD *)(a1 + 512);
    v83[0] = v84;
    sub_12FAA20(v83, v60, (__int64)&v60[v61]);
    v85 = &v87;
    sub_12FAA20(&v85, v80, (__int64)v80 + v81);
    sub_A0AAD0(a1 + 504, &v85);
    if ( v85 != &v87 )
      operator delete(v85);
    if ( v83[0] != v84 )
      operator delete(v83[0]);
    if ( v80 != v82 )
      operator delete(v80);
    if ( v90 && (__m128i *)v88.m128i_i64[0] != &v89 )
      operator delete((void *)v88.m128i_i64[0]);
  }
  v43 = sub_10DCD30(a2, 0xCFFu);
  v47 = v43;
  if ( v43 )
  {
    v48 = *(const char ***)(v43 + 48);
    v49 = 0;
    *(_OWORD *)v83 = 0;
    v50 = *v48;
    if ( *v48 )
    {
      v50 = *v48;
      v49 = j__strlen(*v48);
    }
    if ( (unsigned __int8)sub_22578D0(v83, v50, v49, v44, v45, v46) )
    {
      sub_FC70B0((__int64)&v88, a3, 0, 400);
      sub_21B5FF0(&v85, v47, a2);
      sub_AEC220((unsigned __int8 **)&v88, v85, v86);
      sub_12FA2D0((unsigned __int8 **)&v88, **(_QWORD **)(v47 + 48));
      if ( v85 != &v87 )
        operator delete(v85);
      sub_AEA040((__int64)&v88);
    }
    else
    {
      *(__m128i *)(a1 + 408) = _mm_load_si128((const __m128i *)v83);
    }
  }
  v51 = sub_10DCD30(a2, 0x103u);
  v55 = v51;
  if ( v51 )
  {
    v56 = *(const char ***)(v51 + 48);
    v57 = 0;
    *(_OWORD *)v83 = 0;
    v58 = *v56;
    if ( *v56 )
    {
      v58 = *v56;
      v57 = j__strlen(*v56);
    }
    if ( (unsigned __int8)sub_22578D0(v83, v58, v57, v52, v53, v54) )
    {
      sub_FC70B0((__int64)&v88, a3, 0, 400);
      sub_21B5FF0(&v85, v55, a2);
      sub_AEC220((unsigned __int8 **)&v88, v85, v86);
      sub_12FA2D0((unsigned __int8 **)&v88, **(_QWORD **)(v55 + 48));
      if ( v85 != &v87 )
        operator delete(v85);
      sub_AEA040((__int64)&v88);
    }
    else
    {
      *(__m128i *)(a1 + 456) = _mm_load_si128((const __m128i *)v83);
    }
  }
  return *(_DWORD *)(a3 + 212) == v79;
}
