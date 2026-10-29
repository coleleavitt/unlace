_BOOL8 __fastcall sub_1D73B80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // bl
  __int64 *v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  char *v19; // rsi
  char *i; // r8
  void *v21; // rdi
  const __m128i *v23; // rax
  char *v24; // rsi
  __int64 v25; // rdx
  const __m128i *v26; // r10
  __int64 v27; // r9
  int v28; // edx
  _BYTE *v29; // r8
  __m128i v30; // xmm1
  int v31; // r9d
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // dl
  int v39; // esi
  int v40; // r8d
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  int v43; // eax
  unsigned int *v44; // rdx
  unsigned int *v45; // r8
  const __m128i *v46; // rax
  __int64 v47; // r14
  const __m128i *v48; // r13
  __int64 v49; // rdi
  __int64 *v50; // rdi
  char v51; // al
  __int64 v52; // r12
  __int64 v53; // rbp
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rax
  _QWORD *v56; // r15
  _QWORD *v57; // rbx
  _QWORD *v58; // rdi
  void *v59; // rdi
  void **v60; // rbx
  void **v61; // r15
  __int64 v62; // rdx
  unsigned __int64 v63; // [rsp+0h] [rbp-228h]
  int v64; // [rsp+0h] [rbp-228h]
  bool v65; // [rsp+8h] [rbp-220h]
  int v66; // [rsp+8h] [rbp-220h]
  unsigned int v67; // [rsp+10h] [rbp-218h]
  int *v68; // [rsp+18h] [rbp-210h]
  __int64 v69; // [rsp+18h] [rbp-210h]
  const __m128i *v70; // [rsp+18h] [rbp-210h]
  unsigned int v71; // [rsp+20h] [rbp-208h]
  _QWORD *v72; // [rsp+20h] [rbp-208h]
  const __m128i *v73; // [rsp+20h] [rbp-208h]
  char v74; // [rsp+28h] [rbp-200h]
  unsigned __int64 v75; // [rsp+28h] [rbp-200h]
  char v76; // [rsp+30h] [rbp-1F8h]
  int v77; // [rsp+38h] [rbp-1F0h]
  __int64 v78; // [rsp+38h] [rbp-1F0h]
  int v79; // [rsp+4Ch] [rbp-1DCh] BYREF
  unsigned __int64 v80; // [rsp+50h] [rbp-1D8h] BYREF
  unsigned __int64 v81; // [rsp+58h] [rbp-1D0h] BYREF
  char v82[8]; // [rsp+60h] [rbp-1C8h] BYREF
  bool v83; // [rsp+68h] [rbp-1C0h]
  _QWORD v84[2]; // [rsp+70h] [rbp-1B8h] BYREF
  _QWORD v85[2]; // [rsp+80h] [rbp-1A8h] BYREF
  __m128i v86; // [rsp+90h] [rbp-198h] BYREF
  unsigned __int64 *v87; // [rsp+A0h] [rbp-188h]
  _QWORD *v88; // [rsp+A8h] [rbp-180h]
  _QWORD *v89; // [rsp+B0h] [rbp-178h]
  void **v90; // [rsp+B8h] [rbp-170h]
  __int64 v91; // [rsp+C0h] [rbp-168h]
  unsigned __int64 *v92; // [rsp+C8h] [rbp-160h]
  void *v93; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-150h]
  _BYTE v95[128]; // [rsp+E0h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+170h] [rbp-B8h] BYREF
  int v98; // [rsp+178h] [rbp-B0h]

  v3 = a2;
  v5 = a1;
  v6 = sub_BBF290(a2);
  v7 = sub_BC3930(v6);
  v80 = v6;
  v81 = v6;
  v8 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  v9 = v8 | v7;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 32LL);
  v63 = v8 & 0xFFFFFFFFFFFFFFF8LL | v9 & 7;
  v11 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
  ptr[1] = (void *)0x400000000LL;
  v12 = v11 | v10;
  v13 = &v97;
  ptr[0] = &v97;
  v14 = *(_QWORD *)(v6 + 56);
  v15 = v11 & 0xFFFFFFFFFFFFFFF8LL | v12 & 7;
  v16 = *(_DWORD *)(v14 + 20) & 0x1FFFFFFF;
  v17 = v16;
  if ( v16 )
  {
    if ( v16 > 4uLL )
    {
      v67 = *(_DWORD *)(v14 + 20) & 0x1FFFFFFF;
      sub_2237220(ptr, &v97, v67, 32);
      v18 = v80;
      v17 = v67;
      v13 = (__int64 *)ptr[0];
      v16 = v67;
      v19 = (char *)ptr[0] + 32 * LODWORD(ptr[1]);
    }
    else
    {
      v18 = v6;
      v19 = (char *)&v97;
    }
    for ( i = (char *)&v13[4 * v17]; i != v19; *((_QWORD *)v19 - 3) = 0 )
    {
      v19[24] = 0;
      *(_QWORD *)v19 &= 0xFFFFFFFE00000000LL;
      v19 += 32;
    }
    LODWORD(ptr[1]) = v16;
    v14 = *(_QWORD *)(v18 + 56);
  }
  if ( (unsigned int)sub_1D6C080(a1, v14, v63, v15, a3, (__int64 *)ptr, 0, 2, 0, nullptr) )
  {
    v21 = ptr[0];
    if ( ptr[0] == &v97 )
      return 0;
LABEL_9:
    free(v21);
    return 0;
  }
  v23 = (const __m128i *)ptr[0];
  v24 = v95;
  v25 = 32LL * LODWORD(ptr[1]);
  v93 = v95;
  v26 = (const __m128i *)((char *)ptr[0] + v25);
  v94 = 0x400000000LL;
  v27 = v25 >> 5;
  if ( (unsigned __int64)v25 > 0x80 )
  {
    v73 = (const __m128i *)ptr[0];
    v70 = (const __m128i *)((char *)ptr[0] + v25);
    v66 = v25 >> 5;
    sub_2237220(&v93, v95, v25 >> 5, 24);
    LODWORD(v27) = v66;
    v26 = v70;
    v28 = v94;
    LODWORD(v29) = (_DWORD)v93;
    v23 = v73;
    v24 = (char *)v93 + 24 * (unsigned int)v94;
  }
  else
  {
    v28 = 0;
    v29 = v95;
  }
  if ( v23 != v26 )
  {
    do
    {
      v30 = _mm_loadu_si128(v23);
      v23 += 2;
      v24 += 24;
      *(__m128i *)(v24 - 24) = v30;
      *((_QWORD *)v24 - 1) = v23[-1].m128i_i64[0];
    }
    while ( v26 != v23 );
    LODWORD(v29) = (_DWORD)v93;
    v28 = v94;
  }
  v31 = v28 + v27;
  v32 = *(_DWORD *)(a3 + 16);
  LODWORD(v94) = v31;
  sub_1DC39A0((unsigned int)v82, a1, v32, v80, (_DWORD)v29, v31, a3, 0);
  v65 = v83;
  if ( v83 )
  {
    v65 = 0;
  }
  else
  {
    v33 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
    v34 = v33 + 48;
    v35 = *(unsigned int *)(v33 + 20);
    v84[0] = v34;
    v84[1] = v35;
    v36 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = *(unsigned int *)(v36 + 20);
    v85[0] = v36 + 48;
    LODWORD(v36) = *(_DWORD *)(a1 + 11200);
    v85[1] = v37;
    v71 = v36;
    v74 = *(_BYTE *)(a1 + 12592);
    v76 = *(_BYTE *)(a1 + 11248);
    v77 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v38 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v86.m128i_i64[0] = (__int64)&v79;
    v39 = *(_DWORD *)(a3 + 16);
    v87 = &v81;
    v88 = v84;
    v89 = v85;
    v92 = &v80;
    v86.m128i_i64[1] = a1;
    v90 = ptr;
    v91 = a3;
    sub_15F0FC0(a1, v39, (__int64 (__fastcall *)(__int64))sub_1D6A070, (__int64)&v86);
    v40 = v77;
    if ( !v79 )
      v65 = *(_DWORD *)(a1 + 11200) <= v71;
    *(_DWORD *)(a1 + 11200) = v71;
    *(_BYTE *)(a1 + 12592) = v74;
    *(_BYTE *)(a1 + 11248) = v76;
    v41 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v41 + 204) == 5 )
      *(_BYTE *)(v41 + 194) = 1;
    if ( v77 )
      v40 = 3;
    *(_DWORD *)(v41 + 204) = v40;
  }
  sub_1DBADA0(v82);
  if ( v93 != v95 )
    free(v93);
  if ( ptr[0] != &v97 )
    free(ptr[0]);
  if ( !v65 )
    return 0;
  v42 = sub_BBF290(v3);
  if ( (unsigned __int8)sub_1D730A0(a1, v63, v15, v3, v42, a3) )
  {
    v43 = sub_1D368A0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v43 != 1 )
    {
      if ( v43 == 2 )
        return 0;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0 )
        return 0;
      v44 = *(unsigned int **)(v3 + 184);
      v45 = *(unsigned int **)(v6 + 56);
      if ( (v44[5] & 0x1FFFFFFF) != (v45[5] & 0x1FFFFFFF) )
        return 0;
      *(_OWORD *)ptr = 0;
      v97 = 0;
      v98 = 0;
      if ( !(unsigned __int8)sub_1CD38B0(a1, ptr, v44, nullptr, v45, 0, 0.0, 2, 0) )
        return 0;
      v68 = *(int **)(v3 + 168);
      v72 = *(_QWORD **)(a1 + 248);
      v64 = *v68;
      v46 = (const __m128i *)sub_BC1290(*(__int64 **)(v6 + 56), (__int64)v72);
      if ( v64 )
      {
        v75 = v6;
        v47 = (__int64)(v68 + 2);
        v69 = (__int64)&v68[6 * (v64 - 1) + 8];
        v78 = a3;
        v48 = v46;
        while ( 1 )
        {
          v93 = v95;
          v94 = 0x2000000000LL;
          ptr[1] = (void *)0x2000000000LL;
          ptr[0] = &v97;
          sub_F1D660(v47, (__int64)&v93, (__int64)v72);
          sub_AB6BB0(&v86, v72, v48);
          sub_F1D660((__int64)&v86, (__int64)ptr, (__int64)v72);
          if ( !(unsigned __int8)sub_2222ED0(&v93, ptr) )
            break;
          if ( ptr[0] != &v97 )
            free(ptr[0]);
          if ( v93 == v95 )
          {
            v47 += 24;
            v48 = (const __m128i *)((char *)v48 + 24);
            if ( v69 == v47 )
            {
LABEL_45:
              v6 = v75;
              v5 = a1;
              a3 = v78;
              goto LABEL_46;
            }
          }
          else
          {
            free(v93);
            v47 += 24;
            v48 = (const __m128i *)((char *)v48 + 24);
            if ( v69 == v47 )
              goto LABEL_45;
          }
        }
        if ( ptr[0] != &v97 )
          free(ptr[0]);
        v21 = v93;
        if ( v93 == v95 )
          return 0;
        goto LABEL_9;
      }
LABEL_46:
      v49 = *(_QWORD *)(v3 + 184);
      ptr[0] = &v97;
      v93 = v95;
      v94 = 0x300000000LL;
      ptr[1] = (void *)0x300000000LL;
      sub_BBD810(v49, (__int64)&v93);
      sub_BBDAC0(v6, (__int64)ptr);
      if ( (unsigned __int8)sub_175BCD0(
                              v5,
                              v3,
                              (__int64)v93,
                              (unsigned int)v94,
                              v6,
                              (bool *)v85,
                              (__int64)ptr[0],
                              LODWORD(ptr[1])) )
      {
        v50 = (__int64 *)ptr[0];
        v3 = 0;
      }
      else
      {
        v50 = (__int64 *)ptr[0];
        if ( !LOBYTE(v85[0])
          || (v51 = sub_175BCD0(
                      v5,
                      v6,
                      (__int64)ptr[0],
                      LODWORD(ptr[1]),
                      v3,
                      (bool *)v86.m128i_i8,
                      (__int64)v93,
                      (unsigned int)v94),
              v50 = (__int64 *)ptr[0],
              v51)
          || v86.m128i_i8[0] == 1
          || !LOBYTE(v85[0]) )
        {
          v3 = 0;
        }
      }
      if ( v50 != &v97 )
        free(v50);
      if ( v93 != v95 )
        free(v93);
    }
    if ( !v3 )
      return 0;
  }
  v52 = *(_QWORD *)(a3 + 32);
  v53 = v52 + 32LL * *(unsigned int *)(a3 + 40);
LABEL_57:
  while ( v52 != v53 )
  {
    while ( 1 )
    {
      v53 -= 32;
      v54 = *(_QWORD *)(v53 + 8);
      if ( !v54 )
        break;
      v55 = *(_QWORD *)(v53 + 16);
      if ( !v55 )
        break;
      if ( v54 >= v55 && v54 <= v55 + 14848 )
      {
        v62 = *(unsigned int *)(v55 + 14976);
        *(_DWORD *)(v55 + 14976) = v62 + 1;
        *(_QWORD *)(v55 + 8 * v62 + 14848) = v54;
        goto LABEL_57;
      }
      v56 = *(_QWORD **)(v54 + 528);
      v57 = &v56[8 * (unsigned __int64)*(unsigned int *)(v54 + 536)];
      if ( v56 != v57 )
      {
        do
        {
          while ( 1 )
          {
            v57 -= 8;
            v58 = (_QWORD *)v57[3];
            if ( v58 == v57 + 5 )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_64;
          }
        }
        while ( v56 != v57 );
LABEL_64:
        v57 = *(_QWORD **)(v54 + 528);
      }
      if ( v57 != (_QWORD *)(v54 + 544) )
        free(v57);
      v59 = *(void **)(v54 + 416);
      v60 = (void **)(v54 + 416);
      if ( v59 != (void *)(v54 + 432) )
        free(v59);
      v61 = (void **)(v54 + 96);
      do
      {
        while ( 1 )
        {
          v60 -= 4;
          if ( *v60 == v60 + 2 )
            break;
          operator delete(*v60);
          if ( v61 == v60 )
            goto LABEL_72;
        }
      }
      while ( v61 != v60 );
LABEL_72:
      operator delete((void *)v54, 0x3A0u);
      if ( v52 == v53 )
        goto LABEL_73;
    }
  }
LABEL_73:
  *(_DWORD *)(a3 + 40) = 0;
  *(_BYTE *)(a3 + 20) = 0;
  return v65;
}
