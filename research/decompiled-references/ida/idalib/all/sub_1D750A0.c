_BOOL8 __fastcall sub_1D750A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  char *v10; // rdi
  const __m128i *v11; // rsi
  __int64 v12; // rdx
  size_t v13; // r15
  unsigned __int64 v14; // r14
  int v15; // edx
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r9d
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  char *v24; // rsi
  char *i; // r8
  void *v26; // rdi
  const __m128i *v28; // rax
  char *v29; // rsi
  __int64 v30; // rdx
  const __m128i *v31; // r10
  __int64 v32; // r9
  int v33; // edx
  _BYTE *v34; // r8
  __m128i v35; // xmm1
  int v36; // r9d
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // dl
  int v44; // esi
  int v45; // r8d
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // eax
  unsigned int *v49; // rdx
  unsigned int *v50; // r8
  const __m128i *v51; // rax
  __int64 v52; // r12
  const __m128i *v53; // rbp
  __int64 v54; // rdi
  __int64 *v55; // rdi
  char v56; // al
  __int64 v57; // r13
  __int64 v58; // rbp
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rax
  _QWORD *v61; // r15
  _QWORD *v62; // rbx
  _QWORD *v63; // rdi
  void *v64; // rdi
  void **v65; // rbx
  void **v66; // r15
  __int64 v67; // rdx
  unsigned __int64 v68; // [rsp+8h] [rbp-300h]
  int v69; // [rsp+8h] [rbp-300h]
  _QWORD *v70; // [rsp+8h] [rbp-300h]
  bool v71; // [rsp+10h] [rbp-2F8h]
  int v72; // [rsp+10h] [rbp-2F8h]
  unsigned int v73; // [rsp+20h] [rbp-2E8h]
  int *v74; // [rsp+28h] [rbp-2E0h]
  __int64 v75; // [rsp+28h] [rbp-2E0h]
  const __m128i *v76; // [rsp+28h] [rbp-2E0h]
  unsigned int v77; // [rsp+30h] [rbp-2D8h]
  _QWORD *v78; // [rsp+30h] [rbp-2D8h]
  const __m128i *v79; // [rsp+30h] [rbp-2D8h]
  char v80; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v81; // [rsp+38h] [rbp-2D0h]
  char v82; // [rsp+40h] [rbp-2C8h]
  int v83; // [rsp+48h] [rbp-2C0h]
  __int64 v84; // [rsp+48h] [rbp-2C0h]
  int v85; // [rsp+54h] [rbp-2B4h] BYREF
  __int64 v86; // [rsp+58h] [rbp-2B0h] BYREF
  unsigned __int64 v87; // [rsp+60h] [rbp-2A8h] BYREF
  unsigned __int64 v88; // [rsp+68h] [rbp-2A0h] BYREF
  char v89[8]; // [rsp+70h] [rbp-298h] BYREF
  bool v90; // [rsp+78h] [rbp-290h]
  _QWORD v91[2]; // [rsp+80h] [rbp-288h] BYREF
  _QWORD v92[2]; // [rsp+90h] [rbp-278h] BYREF
  __m128i v93; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int64 *v94; // [rsp+B0h] [rbp-258h]
  _QWORD *v95; // [rsp+B8h] [rbp-250h]
  _QWORD *v96; // [rsp+C0h] [rbp-248h]
  void **v97; // [rsp+C8h] [rbp-240h]
  __int64 v98; // [rsp+D0h] [rbp-238h]
  unsigned __int64 *v99; // [rsp+D8h] [rbp-230h]
  void *v100; // [rsp+E0h] [rbp-228h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-220h]
  _BYTE v102[128]; // [rsp+F0h] [rbp-218h] BYREF
  void *ptr[2]; // [rsp+170h] [rbp-198h] BYREF
  __int64 v104; // [rsp+180h] [rbp-188h] BYREF
  int v105; // [rsp+188h] [rbp-180h]
  void *v106; // [rsp+200h] [rbp-108h] BYREF
  __int64 v107; // [rsp+208h] [rbp-100h]
  _BYTE dest[248]; // [rsp+210h] [rbp-F8h] BYREF

  v3 = a2;
  v6 = sub_BBFE00(a2);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL);
  if ( v7 == sub_6EE900 )
    v8 = *(_QWORD *)(v6 + 72);
  else
    v8 = v7(v6);
  sub_F22AA0((unsigned __int64 *)&v86, v8);
  v9 = sub_BC1290(*(__int64 **)(v6 + 56), *(_QWORD *)(a1 + 248));
  v10 = dest;
  v11 = (const __m128i *)dest;
  v13 = 24 * v12;
  v106 = dest;
  v107 = 0x800000000LL;
  v14 = 0xAAAAAAAAAAAAAAABLL * ((24 * v12) >> 3);
  v15 = 0;
  if ( v14 > 8 )
  {
    v70 = v9;
    sub_2237220(&v106, dest, v14, 24);
    v15 = v107;
    v9 = v70;
    v11 = (const __m128i *)v106;
    v10 = (char *)v106 + 24 * (unsigned int)v107;
  }
  if ( v13 )
  {
    memcpy(v10, v9, v13);
    v11 = (const __m128i *)v106;
    v15 = v107;
  }
  v16 = *(_QWORD **)(a1 + 248);
  LODWORD(v107) = v15 + v14;
  sub_AB70B0(v16, v11, (unsigned int)(v15 + v14));
  v68 = sub_A780B0(*(_QWORD *)(a1 + 248), v86, (__int64)v106, (unsigned int)v107);
  v17 = sub_A780B0(*(_QWORD *)(a1 + 248), v86, *(_QWORD *)(v3 + 128) + 8LL, **(unsigned int **)(v3 + 128));
  v87 = v6;
  v18 = v17;
  v19 = &v104;
  v88 = v6;
  ptr[1] = (void *)0x400000000LL;
  ptr[0] = &v104;
  v20 = *(_QWORD *)(v6 + 56);
  v21 = *(_DWORD *)(v20 + 20) & 0x1FFFFFFF;
  v22 = v21;
  if ( v21 )
  {
    if ( v21 > 4uLL )
    {
      v73 = *(_DWORD *)(v20 + 20) & 0x1FFFFFFF;
      sub_2237220(ptr, &v104, v73, 32);
      v23 = v87;
      v22 = v73;
      v19 = (__int64 *)ptr[0];
      v21 = v73;
      v24 = (char *)ptr[0] + 32 * LODWORD(ptr[1]);
    }
    else
    {
      v23 = v6;
      v24 = (char *)&v104;
    }
    for ( i = (char *)&v19[4 * v22]; i != v24; *((_QWORD *)v24 - 3) = 0 )
    {
      v24[24] = 0;
      *(_QWORD *)v24 &= 0xFFFFFFFE00000000LL;
      v24 += 32;
    }
    LODWORD(ptr[1]) = v21;
    v20 = *(_QWORD *)(v23 + 56);
  }
  if ( (unsigned int)sub_1D6C080(a1, v20, v68, v18, a3, (__int64 *)ptr, 0, 2, 0, nullptr) )
  {
    v26 = ptr[0];
    if ( ptr[0] == &v104 )
    {
LABEL_16:
      v71 = 0;
      goto LABEL_17;
    }
LABEL_15:
    free(v26);
    goto LABEL_16;
  }
  v28 = (const __m128i *)ptr[0];
  v29 = v102;
  v30 = 32LL * LODWORD(ptr[1]);
  v100 = v102;
  v31 = (const __m128i *)((char *)ptr[0] + v30);
  v101 = 0x400000000LL;
  v32 = v30 >> 5;
  if ( (unsigned __int64)v30 > 0x80 )
  {
    v79 = (const __m128i *)ptr[0];
    v76 = (const __m128i *)((char *)ptr[0] + v30);
    v72 = v30 >> 5;
    sub_2237220(&v100, v102, v30 >> 5, 24);
    LODWORD(v32) = v72;
    v31 = v76;
    v33 = v101;
    LODWORD(v34) = (_DWORD)v100;
    v28 = v79;
    v29 = (char *)v100 + 24 * (unsigned int)v101;
  }
  else
  {
    v33 = 0;
    v34 = v102;
  }
  if ( v28 != v31 )
  {
    do
    {
      v35 = _mm_loadu_si128(v28);
      v28 += 2;
      v29 += 24;
      *(__m128i *)(v29 - 24) = v35;
      *((_QWORD *)v29 - 1) = v28[-1].m128i_i64[0];
    }
    while ( v31 != v28 );
    LODWORD(v34) = (_DWORD)v100;
    v33 = v101;
  }
  v36 = v33 + v32;
  v37 = *(_DWORD *)(a3 + 16);
  LODWORD(v101) = v36;
  sub_1DC39A0((unsigned int)v89, a1, v37, v87, (_DWORD)v34, v36, a3, 0);
  v71 = v90;
  if ( v90 )
  {
    v71 = 0;
  }
  else
  {
    v38 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
    v39 = v38 + 48;
    v40 = *(unsigned int *)(v38 + 20);
    v91[0] = v39;
    v91[1] = v40;
    v41 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
    v42 = *(unsigned int *)(v41 + 20);
    v92[0] = v41 + 48;
    LODWORD(v41) = *(_DWORD *)(a1 + 11200);
    v92[1] = v42;
    v77 = v41;
    v80 = *(_BYTE *)(a1 + 12592);
    v82 = *(_BYTE *)(a1 + 11248);
    v83 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v43 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v44 = *(_DWORD *)(a3 + 16);
    v93.m128i_i64[0] = (__int64)&v85;
    v94 = &v88;
    v95 = v91;
    v96 = v92;
    v99 = &v87;
    v93.m128i_i64[1] = a1;
    v97 = ptr;
    v98 = a3;
    sub_15F0FC0(a1, v44, (__int64 (__fastcall *)(__int64))sub_1D69FC0, (__int64)&v93);
    v45 = v83;
    if ( !v85 )
      v71 = *(_DWORD *)(a1 + 11200) <= v77;
    *(_DWORD *)(a1 + 11200) = v77;
    *(_BYTE *)(a1 + 12592) = v80;
    *(_BYTE *)(a1 + 11248) = v82;
    v46 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v46 + 204) == 5 )
      *(_BYTE *)(v46 + 194) = 1;
    if ( v83 )
      v45 = 3;
    *(_DWORD *)(v46 + 204) = v45;
  }
  sub_1DBADA0(v89);
  if ( v100 != v102 )
    free(v100);
  if ( ptr[0] != &v104 )
    free(ptr[0]);
  if ( !v71 )
    goto LABEL_16;
  v47 = sub_BBFE00(v3);
  if ( (unsigned __int8)sub_1D74580(a1, v68, v18, v3, v47, a3) )
  {
    v48 = sub_1D368A0(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v48 != 1 )
    {
      if ( v48 == 2 )
        goto LABEL_16;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0 )
        goto LABEL_16;
      v49 = *(unsigned int **)(v3 + 144);
      v50 = *(unsigned int **)(v6 + 56);
      if ( (v49[5] & 0x1FFFFFFF) != (v50[5] & 0x1FFFFFFF) )
        goto LABEL_16;
      *(_OWORD *)ptr = 0;
      v104 = 0;
      v105 = 0;
      if ( !(unsigned __int8)sub_1CD38B0(a1, ptr, v49, nullptr, v50, 0, 0.0, 2, 0) )
        goto LABEL_16;
      v74 = *(int **)(v3 + 128);
      v78 = *(_QWORD **)(a1 + 248);
      v69 = *v74;
      v51 = (const __m128i *)sub_BC1290(*(__int64 **)(v6 + 56), (__int64)v78);
      if ( v69 )
      {
        v84 = a3;
        v52 = (__int64)(v74 + 2);
        v75 = (__int64)&v74[6 * (v69 - 1) + 8];
        v81 = v6;
        v53 = v51;
        while ( 1 )
        {
          v100 = v102;
          v101 = 0x2000000000LL;
          ptr[1] = (void *)0x2000000000LL;
          ptr[0] = &v104;
          sub_F1D660(v52, (__int64)&v100, (__int64)v78);
          sub_AB6BB0(&v93, v78, v53);
          sub_F1D660((__int64)&v93, (__int64)ptr, (__int64)v78);
          if ( !(unsigned __int8)sub_2222ED0(&v100, ptr) )
            break;
          if ( ptr[0] != &v104 )
            free(ptr[0]);
          if ( v100 == v102 )
          {
            v52 += 24;
            v53 = (const __m128i *)((char *)v53 + 24);
            if ( v75 == v52 )
            {
LABEL_53:
              v6 = v81;
              a3 = v84;
              goto LABEL_54;
            }
          }
          else
          {
            free(v100);
            v52 += 24;
            v53 = (const __m128i *)((char *)v53 + 24);
            if ( v75 == v52 )
              goto LABEL_53;
          }
        }
        if ( ptr[0] != &v104 )
          free(ptr[0]);
        v26 = v100;
        if ( v100 == v102 )
          goto LABEL_16;
        goto LABEL_15;
      }
LABEL_54:
      v54 = *(_QWORD *)(v3 + 144);
      ptr[0] = &v104;
      v100 = v102;
      v101 = 0x300000000LL;
      ptr[1] = (void *)0x300000000LL;
      sub_BBD810(v54, (__int64)&v100);
      sub_BBDAC0(v6, (__int64)ptr);
      if ( (unsigned __int8)sub_175BCD0(
                              a1,
                              v3,
                              (__int64)v100,
                              (unsigned int)v101,
                              v6,
                              (bool *)v92,
                              (__int64)ptr[0],
                              LODWORD(ptr[1])) )
      {
        v55 = (__int64 *)ptr[0];
        v3 = 0;
      }
      else
      {
        v55 = (__int64 *)ptr[0];
        if ( !LOBYTE(v92[0])
          || (v56 = sub_175BCD0(
                      a1,
                      v6,
                      (__int64)ptr[0],
                      LODWORD(ptr[1]),
                      v3,
                      (bool *)v93.m128i_i8,
                      (__int64)v100,
                      (unsigned int)v101),
              v55 = (__int64 *)ptr[0],
              v56)
          || v93.m128i_i8[0] == 1
          || !LOBYTE(v92[0]) )
        {
          v3 = 0;
        }
      }
      if ( v55 != &v104 )
        free(v55);
      if ( v100 != v102 )
        free(v100);
    }
    if ( !v3 )
      goto LABEL_16;
  }
  v57 = *(_QWORD *)(a3 + 32);
  v58 = v57 + 32LL * *(unsigned int *)(a3 + 40);
LABEL_65:
  while ( v57 != v58 )
  {
    while ( 1 )
    {
      v58 -= 32;
      v59 = *(_QWORD *)(v58 + 8);
      if ( !v59 )
        break;
      v60 = *(_QWORD *)(v58 + 16);
      if ( !v60 )
        break;
      if ( v59 >= v60 && v59 <= v60 + 14848 )
      {
        v67 = *(unsigned int *)(v60 + 14976);
        *(_DWORD *)(v60 + 14976) = v67 + 1;
        *(_QWORD *)(v60 + 8 * v67 + 14848) = v59;
        goto LABEL_65;
      }
      v61 = *(_QWORD **)(v59 + 528);
      v62 = &v61[8 * (unsigned __int64)*(unsigned int *)(v59 + 536)];
      if ( v61 != v62 )
      {
        do
        {
          while ( 1 )
          {
            v62 -= 8;
            v63 = (_QWORD *)v62[3];
            if ( v63 == v62 + 5 )
              break;
            operator delete(v63);
            if ( v61 == v62 )
              goto LABEL_72;
          }
        }
        while ( v61 != v62 );
LABEL_72:
        v62 = *(_QWORD **)(v59 + 528);
      }
      if ( v62 != (_QWORD *)(v59 + 544) )
        free(v62);
      v64 = *(void **)(v59 + 416);
      v65 = (void **)(v59 + 416);
      if ( v64 != (void *)(v59 + 432) )
        free(v64);
      v66 = (void **)(v59 + 96);
      do
      {
        while ( 1 )
        {
          v65 -= 4;
          if ( *v65 == v65 + 2 )
            break;
          operator delete(*v65);
          if ( v66 == v65 )
            goto LABEL_80;
        }
      }
      while ( v66 != v65 );
LABEL_80:
      operator delete((void *)v59, 0x3A0u);
      if ( v57 == v58 )
        goto LABEL_81;
    }
  }
LABEL_81:
  *(_DWORD *)(a3 + 40) = 0;
  *(_BYTE *)(a3 + 20) = 0;
LABEL_17:
  if ( v106 != dest )
    free(v106);
  return v71;
}
