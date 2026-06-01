void __fastcall sub_131A020(__int64 a1, void (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  char v6; // al
  void **v7; // rdx
  void **v8; // rax
  void **v9; // rdx
  void **v10; // rax
  void **v11; // rdx
  void **v12; // rax
  int v13; // r8d
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  bool v16; // al
  __m128i *v17; // rdi
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r8d
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  __m128i *v23; // rcx
  bool v24; // al
  __m128i *v25; // rcx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __m128i *v28; // rcx
  bool v29; // al
  __m128i *v30; // rcx
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __m128i *v33; // rcx
  bool v34; // al
  __m128i *v35; // rcx
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  __m128i *v38; // rcx
  bool v39; // al
  __m128i *v40; // rcx
  void **v41; // rax
  char v42; // al
  void **v43; // rdx
  void **v44; // rax
  void **v45; // rdx
  void **v46; // rax
  void **v47; // rdx
  void **v48; // rax
  _BYTE *v49; // rsi
  __int64 v50; // rdx
  __m128i *v51; // rsi
  void **v52; // rdx
  _BYTE *v53; // rsi
  __int64 v54; // rdx
  __m128i *v55; // rcx
  bool v56; // al
  __m128i *v57; // rcx
  _BYTE *v58; // rsi
  __int64 v59; // rdx
  __m128i *v60; // rcx
  bool v61; // al
  __m128i *v62; // rcx
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  bool v65; // al
  __m128i *v66; // rdi
  _BYTE *v67; // rsi
  __int64 v68; // rdx
  bool v69; // al
  __m128i *v70; // rdi
  char v71; // [rsp+0h] [rbp-D8h]
  void **v72; // [rsp+0h] [rbp-D8h]
  void **v73; // [rsp+0h] [rbp-D8h]
  bool v74; // [rsp+0h] [rbp-D8h]
  void *v75; // [rsp+0h] [rbp-D8h]
  void *v76; // [rsp+0h] [rbp-D8h]
  void *v77; // [rsp+0h] [rbp-D8h]
  void *v78; // [rsp+0h] [rbp-D8h]
  char v79; // [rsp+0h] [rbp-D8h]
  void **v80; // [rsp+0h] [rbp-D8h]
  void **v81; // [rsp+0h] [rbp-D8h]
  void *v82; // [rsp+0h] [rbp-D8h]
  void *v83; // [rsp+0h] [rbp-D8h]
  bool v84; // [rsp+0h] [rbp-D8h]
  bool v85; // [rsp+0h] [rbp-D8h]
  void **v86; // [rsp+8h] [rbp-D0h]
  void **v87; // [rsp+8h] [rbp-D0h]
  void **v88; // [rsp+8h] [rbp-D0h]
  __m128i *v89; // [rsp+8h] [rbp-D0h]
  __m128i *v90; // [rsp+8h] [rbp-D0h]
  void **v91; // [rsp+10h] [rbp-C8h]
  void **v92; // [rsp+10h] [rbp-C8h]
  void **v93; // [rsp+10h] [rbp-C8h]
  __m128i *v94; // [rsp+10h] [rbp-C8h]
  __m128i *v95; // [rsp+10h] [rbp-C8h]
  __m128i *v96; // [rsp+10h] [rbp-C8h]
  __m128i *v97; // [rsp+10h] [rbp-C8h]
  void **v98; // [rsp+10h] [rbp-C8h]
  void **v99; // [rsp+18h] [rbp-C0h]
  char v100[8]; // [rsp+28h] [rbp-B0h] BYREF
  void *v101[2]; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v102; // [rsp+40h] [rbp-98h] BYREF
  void *v103; // [rsp+50h] [rbp-88h] BYREF
  void **v104; // [rsp+58h] [rbp-80h]
  __m128i v105; // [rsp+60h] [rbp-78h] BYREF
  void *v106[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v107[2]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v108; // [rsp+90h] [rbp-48h]

  sub_C23620((__int64)v101, (__int64 *)(a1 + 328));
  *(_OWORD *)v106 = 0;
  v103 = v101[0];
  v107[0] = 0;
  v104 = (void **)v101[1];
  *(_OWORD *)v101 = 0;
  v105.m128i_i64[0] = v102.m128i_i64[0];
  v102.m128i_i64[0] = 0;
  sub_12FD200((unsigned __int64 **)v106, (__int64)v100, (__int64)v100);
  v6 = sub_130B900((__int64 *)&v103, (__int64 *)v106);
  v7 = (void **)v106[1];
  v71 = v6;
  v8 = (void **)v106[0];
  if ( v106[1] != v106[0] )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        v99 = v8;
        v91 = v7;
        operator delete(*v8);
        v7 = v91;
        v8 = v99 + 4;
        if ( v91 == v99 + 4 )
          goto LABEL_4;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_4:
    v8 = (void **)v106[0];
  }
  if ( v8 )
    operator delete(v8);
  if ( !v71 )
    sub_130CE90((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 3155, (__int64 *)&v103);
  v9 = v104;
  v10 = (void **)v103;
  if ( v104 != v103 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        v92 = v10;
        v72 = v9;
        operator delete(*v10);
        v9 = v72;
        v10 = v92 + 4;
        if ( v72 == v92 + 4 )
          goto LABEL_12;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_12:
    v10 = (void **)v103;
  }
  if ( v10 )
    operator delete(v10);
  v11 = (void **)v101[1];
  v12 = (void **)v101[0];
  if ( v101[1] != v101[0] )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        v93 = v12;
        v73 = v11;
        operator delete(*v12);
        v11 = v73;
        v12 = v93 + 4;
        if ( v73 == v93 + 4 )
          goto LABEL_18;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_18:
    v12 = (void **)v101[0];
  }
  if ( v12 )
    operator delete(v12);
  if ( *(_BYTE *)(a1 + 353) )
  {
    LOBYTE(v106[0]) = 1;
    sub_12FD380((__int64)v106, a2, a3, 9529, 1);
  }
  v13 = *(_DWORD *)(a1 + 360);
  if ( v13 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 52485, 2u, v13);
  if ( *(_BYTE *)(a1 + 352) )
  {
    LOBYTE(v106[0]) = 1;
    sub_12FD380((__int64)v106, a2, a3, 14368, 1);
  }
  v14 = *(_BYTE **)(a1 + 368);
  v15 = *(_QWORD *)(a1 + 376);
  v101[0] = &v102;
  sub_12FAA20(v101, v14, (__int64)&v14[v15]);
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v104 = (void **)v101[1];
  v101[0] = &v102;
  v101[1] = nullptr;
  sub_12FAAE0(v106, "default", (__int64)"");
  v16 = sub_1302CC0((__int64)&v103, (__int64)v106);
  if ( v106[0] != v107 )
  {
    v74 = v16;
    operator delete(v106[0]);
    v16 = v74;
  }
  v17 = (__m128i *)v103;
  if ( v16 )
  {
    v106[0] = v107;
    sub_12FAA20(v106, v103, (__int64)v104 + (_QWORD)v103);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 45480, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v17 = (__m128i *)v103;
  }
  if ( v17 != &v105 )
    operator delete(v17);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v18 = *(_QWORD *)(a1 + 400);
  if ( v18 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 47271, v18);
  v19 = *(_DWORD *)(a1 + 192);
  if ( v19 != 1 )
    sub_12FD670((__int64 (__fastcall *)(__int64, _BYTE **))a2, a3, 45862, 0x25u, v19);
  v20 = *(_DWORD *)(a1 + 356);
  if ( v20 != 600 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 45516, 0x26u, v20);
  v21 = *(_BYTE **)(a1 + 160);
  v22 = *(_QWORD *)(a1 + 168);
  v101[0] = &v102;
  sub_12FAA20(v101, v21, (__int64)&v21[v22]);
  v23 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v23 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v94 = v23;
  v104 = (void **)v101[1];
  v75 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v24 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v25 = v94;
  if ( v24 )
  {
    sub_12FAA20(v106, v94, (__int64)v75 + (_QWORD)v94);
    sub_12FD520(a2, a3, 59651, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v25 = (__m128i *)v103;
  }
  if ( v25 != &v105 )
    operator delete(v25);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v26 = *(_BYTE **)(a1 + 424);
  v27 = *(_QWORD *)(a1 + 432);
  v101[0] = &v102;
  sub_12FAA20(v101, v26, (__int64)&v26[v27]);
  v28 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v28 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v95 = v28;
  v104 = (void **)v101[1];
  v76 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v29 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v30 = v95;
  if ( v29 )
  {
    sub_12FAA20(v106, v95, (__int64)v76 + (_QWORD)v95);
    sub_12FD520(a2, a3, 4466, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v30 = (__m128i *)v103;
  }
  if ( v30 != &v105 )
    operator delete(v30);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v31 = *(_BYTE **)(a1 + 96);
  v32 = *(_QWORD *)(a1 + 104);
  v101[0] = &v102;
  sub_12FAA20(v101, v31, (__int64)&v31[v32]);
  v33 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v33 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v96 = v33;
  v104 = (void **)v101[1];
  v77 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v34 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v35 = v96;
  if ( v34 )
  {
    sub_12FAA20(v106, v96, (__int64)v77 + (_QWORD)v96);
    sub_12FD520(a2, a3, 59920, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v35 = (__m128i *)v103;
  }
  if ( v35 != &v105 )
    operator delete(v35);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v36 = *(_BYTE **)(a1 + 64);
  v37 = *(_QWORD *)(a1 + 72);
  v101[0] = &v102;
  sub_12FAA20(v101, v36, (__int64)&v36[v37]);
  v38 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v38 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v97 = v38;
  v104 = (void **)v101[1];
  v78 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v39 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v40 = v97;
  if ( v39 )
  {
    sub_12FAA20(v106, v97, (__int64)v78 + (_QWORD)v97);
    sub_12FD520(a2, a3, 59663, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v40 = (__m128i *)v103;
  }
  if ( v40 != &v105 )
    operator delete(v40);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  sub_C23620((__int64)v101, (__int64 *)(a1 + 232));
  v107[0] = 0;
  v103 = v101[0];
  v41 = (void **)v101[1];
  *(_OWORD *)v101 = 0;
  v104 = v41;
  *(_OWORD *)v106 = 0;
  v105.m128i_i64[0] = v102.m128i_i64[0];
  v102.m128i_i64[0] = 0;
  sub_12FD200((unsigned __int64 **)v106, (__int64)v100, (__int64)v100);
  v42 = sub_130B900((__int64 *)&v103, (__int64 *)v106);
  v43 = (void **)v106[1];
  v79 = v42;
  v44 = (void **)v106[0];
  if ( v106[1] != v106[0] )
  {
    do
    {
      while ( *v44 != v44 + 2 )
      {
        v98 = v44;
        v86 = v43;
        operator delete(*v44);
        v43 = v86;
        v44 = v98 + 4;
        if ( v86 == v98 + 4 )
          goto LABEL_73;
      }
      v44 += 4;
    }
    while ( v43 != v44 );
LABEL_73:
    v44 = (void **)v106[0];
  }
  if ( v44 )
    operator delete(v44);
  if ( !v79 )
    sub_12FDC40(a2, a3, 59675, &v103);
  v45 = v104;
  v46 = (void **)v103;
  if ( v104 != v103 )
  {
    do
    {
      while ( *v46 != v46 + 2 )
      {
        v87 = v46;
        v80 = v45;
        operator delete(*v46);
        v45 = v80;
        v46 = v87 + 4;
        if ( v87 + 4 == v80 )
          goto LABEL_81;
      }
      v46 += 4;
    }
    while ( v45 != v46 );
LABEL_81:
    v46 = (void **)v103;
  }
  if ( v46 )
    operator delete(v46);
  v47 = (void **)v101[1];
  v48 = (void **)v101[0];
  if ( v101[1] != v101[0] )
  {
    do
    {
      while ( *v48 != v48 + 2 )
      {
        v88 = v48;
        v81 = v47;
        operator delete(*v48);
        v47 = v81;
        v48 = v88 + 4;
        if ( v88 + 4 == v81 )
          goto LABEL_87;
      }
      v48 += 4;
    }
    while ( v47 != v48 );
LABEL_87:
    v48 = (void **)v101[0];
  }
  if ( v48 )
    operator delete(v48);
  v49 = *(_BYTE **)a1;
  v50 = *(_QWORD *)(a1 + 8);
  v101[0] = &v102;
  sub_12FAA20(v101, v49, (__int64)&v49[v50]);
  v51 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v51 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v52 = (void **)v101[1];
  v101[1] = nullptr;
  v101[0] = &v102;
  v104 = v52;
  v106[0] = v107;
  v102.m128i_i8[0] = 0;
  sub_12FAA20(v106, v51, (__int64)v52 + (_QWORD)v51);
  sub_12FD520(a2, a3, 59912, (__int64)v106);
  if ( v106[0] != v107 )
    operator delete(v106[0]);
  if ( v103 != &v105 )
    operator delete(v103);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v53 = *(_BYTE **)(a1 + 200);
  v54 = *(_QWORD *)(a1 + 208);
  v101[0] = &v102;
  sub_12FAA20(v101, v53, (__int64)&v53[v54]);
  v55 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v55 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v89 = v55;
  v104 = (void **)v101[1];
  v82 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v56 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v57 = v89;
  if ( v56 )
  {
    sub_12FAA20(v106, v89, (__int64)v82 + (_QWORD)v89);
    sub_12FD520(a2, a3, 59705, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v57 = (__m128i *)v103;
  }
  if ( v57 != &v105 )
    operator delete(v57);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v58 = *(_BYTE **)(a1 + 128);
  v59 = *(_QWORD *)(a1 + 136);
  v101[0] = &v102;
  sub_12FAA20(v101, v58, (__int64)&v58[v59]);
  v60 = (__m128i *)v101[0];
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v60 = &v105;
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v101[0] = &v102;
  v90 = v60;
  v104 = (void **)v101[1];
  v83 = v101[1];
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v106[1] = nullptr;
  LOBYTE(v107[0]) = 0;
  v61 = sub_1302CC0((__int64)&v103, (__int64)v106);
  v62 = v90;
  if ( v61 )
  {
    sub_12FAA20(v106, v90, (__int64)v83 + (_QWORD)v90);
    sub_12FD520(a2, a3, 46368, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v62 = (__m128i *)v103;
  }
  if ( v62 != &v105 )
    operator delete(v62);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v63 = *(_BYTE **)(a1 + 472);
  v64 = *(_QWORD *)(a1 + 480);
  v101[0] = &v102;
  sub_12FAA20(v101, v63, (__int64)&v63[v64]);
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v104 = (void **)v101[1];
  v101[0] = &v102;
  v101[1] = nullptr;
  sub_12FAAE0(v106, "1.8", (__int64)"");
  v65 = sub_1302CC0((__int64)&v103, (__int64)v106);
  if ( v106[0] != v107 )
  {
    v84 = v65;
    operator delete(v106[0]);
    v65 = v84;
  }
  v66 = (__m128i *)v103;
  if ( v65 )
  {
    v106[0] = v107;
    sub_12FAA20(v106, v103, (__int64)v104 + (_QWORD)v103);
    sub_12FD520(a2, a3, 60201, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v66 = (__m128i *)v103;
  }
  if ( v66 != &v105 )
    operator delete(v66);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v67 = *(_BYTE **)(a1 + 504);
  v68 = *(_QWORD *)(a1 + 512);
  v101[0] = &v102;
  sub_12FAA20(v101, v67, (__int64)&v67[v68]);
  v103 = &v105;
  if ( v101[0] == &v102 )
  {
    v105 = _mm_load_si128(&v102);
  }
  else
  {
    v103 = v101[0];
    v105.m128i_i64[0] = v102.m128i_i64[0];
  }
  v102.m128i_i8[0] = 0;
  v106[0] = v107;
  v104 = (void **)v101[1];
  v101[0] = &v102;
  v101[1] = nullptr;
  sub_12FAAE0(v106, "main", (__int64)"");
  v69 = sub_1302CC0((__int64)&v103, (__int64)v106);
  if ( v106[0] != v107 )
  {
    v85 = v69;
    operator delete(v106[0]);
    v69 = v85;
  }
  v70 = (__m128i *)v103;
  if ( v69 )
  {
    v106[0] = v107;
    sub_12FAA20(v106, v103, (__int64)v104 + (_QWORD)v103);
    sub_12FD520(a2, a3, 42777, (__int64)v106);
    if ( v106[0] != v107 )
      operator delete(v106[0]);
    v70 = (__m128i *)v103;
  }
  if ( v70 != &v105 )
    operator delete(v70);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  if ( *(_DWORD *)(a1 + 408)
    || (*(_DWORD *)(a1 + 412) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 416) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 420) & 0x7FFFFFFF) != 0 )
  {
    sub_2257830(&v103, a1 + 408);
    v108 = 260;
    v106[0] = &v103;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xCFFu, (const __m128i *)v106);
    if ( v103 != &v105 )
      operator delete(v103);
  }
  if ( *(_DWORD *)(a1 + 456)
    || (*(_DWORD *)(a1 + 460) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 464) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 468) & 0x7FFFFFFF) != 0 )
  {
    sub_2257830(&v103, a1 + 456);
    v106[0] = &v103;
    v108 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x103u, (const __m128i *)v106);
    if ( v103 != &v105 )
      operator delete(v103);
  }
}
