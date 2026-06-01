__m128i *__fastcall sub_14E72C0(__m128i *a1, __int64 a2, __m128i a3)
{
  unsigned int v3; // r14d
  unsigned int v4; // r13d
  __int8 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  __m128i si128; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __int64 v13; // rax
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __m128i v16; // xmm6
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r12
  int v20; // eax
  void **v21; // rbp
  unsigned __int64 v22; // rax
  void **v23; // r12
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r12
  int v32; // eax
  void **v33; // r12
  void **v34; // rbx
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbx
  void **v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // r12
  int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rbx
  void *v46; // rdi
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // rbx
  void **v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r12
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int8 v63; // [rsp+24h] [rbp-124h]
  __int8 v64; // [rsp+25h] [rbp-123h]
  __int8 v65; // [rsp+26h] [rbp-122h]
  __int8 v66; // [rsp+27h] [rbp-121h]
  __int8 v67; // [rsp+28h] [rbp-120h]
  __int8 v68; // [rsp+29h] [rbp-11Fh]
  __int8 v69; // [rsp+2Ah] [rbp-11Eh]
  __int8 v70; // [rsp+2Bh] [rbp-11Dh]
  __int8 v71; // [rsp+2Ch] [rbp-11Ch]
  __int8 v72; // [rsp+2Dh] [rbp-11Bh]
  __int8 v73; // [rsp+2Eh] [rbp-11Ah]
  __int8 v74; // [rsp+2Fh] [rbp-119h]
  __m128i v75; // [rsp+30h] [rbp-118h] BYREF
  __int64 v76; // [rsp+40h] [rbp-108h]
  void *v77; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v78; // [rsp+58h] [rbp-F0h]
  __int64 v79; // [rsp+60h] [rbp-E8h]
  void *v80; // [rsp+70h] [rbp-D8h]
  _BYTE v81[16]; // [rsp+80h] [rbp-C8h] BYREF
  __int16 v82; // [rsp+90h] [rbp-B8h]
  __m128i v83[10]; // [rsp+A0h] [rbp-A8h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  memset(v83, 0, 108);
  v73 = 0;
  v68 = 0;
  v74 = 0;
  v72 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  while ( 1 )
  {
    LODWORD(v77) = 9;
    if ( sub_14E3360(a2, &v77, 1) )
    {
LABEL_19:
      v83[0].m128i_i64[0] = __PAIR64__(v3, v4);
      v83[1].m128i_i8[0] = v63;
      v83[0].m128i_i8[8] = v5;
      si128 = _mm_load_si128(v83);
      v83[1].m128i_i8[8] = v64;
      v11 = _mm_load_si128(&v83[1]);
      *a1 = si128;
      v83[2].m128i_i8[0] = v65;
      a1[1] = v11;
      v83[2].m128i_i8[8] = v66;
      v83[3].m128i_i8[0] = v67;
      v83[3].m128i_i8[8] = v69;
      v83[4].m128i_i8[0] = v70;
      v83[4].m128i_i8[8] = v71;
      v83[5].m128i_i8[0] = v72;
      v83[5].m128i_i8[8] = v74;
      v83[6].m128i_i8[0] = v68;
      v83[6].m128i_i8[8] = v73;
      v12 = _mm_load_si128(&v83[2]);
      v13 = v83[6].m128i_i64[0];
      a1[6].m128i_i8[12] = 1;
      v14 = _mm_load_si128(&v83[3]);
      a1[2] = v12;
      v15 = _mm_load_si128(&v83[4]);
      v16 = _mm_load_si128(&v83[5]);
      a1[6].m128i_i64[0] = v13;
      LODWORD(v13) = v83[6].m128i_i32[2];
      a1[3] = v14;
      a1[4] = v15;
      a1[6].m128i_i32[2] = v13;
      a1[5] = v16;
      return a1;
    }
    LODWORD(v77) = 7;
    if ( sub_14E3360(a2, &v77, 1) )
    {
      sub_13DF9D0(&v75, a2 + 24);
      a3 = _mm_loadu_si128(&v75);
      *(__m128i *)(a2 + 88) = a3;
      *(_QWORD *)(a2 + 104) = v76;
      if ( !v5 )
      {
        v4 = dword_26188A0[*(_DWORD *)(a2 + 88) - 4];
        v7 = sub_14E15D0(a2);
        if ( !BYTE4(v7) )
          goto LABEL_12;
        v3 = v7;
        v83[0].m128i_i64[0] = __PAIR64__(v7, v4);
        v5 = 1;
        v83[0].m128i_i8[8] = 1;
        goto LABEL_7;
      }
      v18 = *(_QWORD **)(a2 + 80);
      v19 = v18[6];
      v20 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v18[11], v18[7], v18[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v77, v19, v20, 1694);
      sub_14DC730(&v77, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v82 )
      {
        sub_FC7790(v79, (__int64 *)&v77, SHIBYTE(v82));
        v79 = 0;
        v82 = 0;
      }
      if ( v80 != v81 )
        operator delete(v80);
      v21 = (void **)v77;
      if ( !v77 || (v22 = v78) == 0 )
      {
LABEL_12:
        a1[6].m128i_i8[12] = 0;
        return a1;
      }
      if ( (unsigned __int64)v77 < v78 || (unsigned __int64)v77 > v78 + 14848 )
      {
        v23 = *((void ***)v77 + 66);
        v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v77 + 134)];
        if ( v23 != v24 )
        {
          do
          {
            while ( 1 )
            {
              v24 -= 8;
              v25 = (void **)v24[3];
              if ( v25 == v24 + 5 )
                break;
              operator delete(v25);
              if ( v23 == v24 )
                goto LABEL_36;
            }
          }
          while ( v23 != v24 );
LABEL_36:
          v24 = (void **)v21[66];
        }
        if ( v24 != v21 + 68 )
          free(v24);
        v26 = (void **)v21[52];
        if ( v26 != v21 + 54 )
          free(v26);
        v27 = v21 + 48;
        v28 = v21 + 8;
        do
        {
          while ( *v27 != v27 + 2 )
          {
            operator delete(*v27);
            v27 -= 4;
            if ( v28 == v27 )
              goto LABEL_44;
          }
          v27 -= 4;
        }
        while ( v28 != v27 );
LABEL_44:
        operator delete(v21, 0x3A0u);
        goto LABEL_12;
      }
      goto LABEL_83;
    }
    LODWORD(v77) = 30;
    if ( !(unsigned __int8)sub_14E53D0(a2, &v77, 1) )
      break;
    if ( v63 )
    {
      v30 = *(_QWORD **)(a2 + 80);
      v31 = v30[6];
      v32 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v30[11], v30[7], v30[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v77, v31, v32, 1694);
      sub_14DC730(&v77, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v82 )
      {
        sub_FC7790(v79, (__int64 *)&v77, SHIBYTE(v82));
        v79 = 0;
        v82 = 0;
      }
      if ( v80 != v81 )
        operator delete(v80);
      v21 = (void **)v77;
      if ( !v77 )
        goto LABEL_12;
      v22 = v78;
      if ( !v78 )
        goto LABEL_12;
      if ( (unsigned __int64)v77 < v78 || (unsigned __int64)v77 > v78 + 14848 )
      {
        v33 = *((void ***)v77 + 66);
        v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v77 + 134)];
        if ( v33 != v34 )
        {
          do
          {
            while ( 1 )
            {
              v34 -= 8;
              v35 = (void **)v34[3];
              if ( v35 == v34 + 5 )
                break;
              operator delete(v35);
              if ( v33 == v34 )
                goto LABEL_60;
            }
          }
          while ( v33 != v34 );
LABEL_60:
          v34 = (void **)v21[66];
        }
        if ( v34 != v21 + 68 )
          free(v34);
        v36 = (void **)v21[52];
        if ( v36 != v21 + 54 )
          free(v36);
        v37 = v21 + 48;
        v38 = v21 + 8;
        do
        {
          while ( *v37 != v37 + 2 )
          {
            operator delete(*v37);
            v37 -= 4;
            if ( v38 == v37 )
              goto LABEL_44;
          }
          v37 -= 4;
        }
        while ( v37 != v38 );
        goto LABEL_44;
      }
LABEL_83:
      v40 = *(unsigned int *)(v22 + 14976);
      *(_DWORD *)(v22 + 14976) = v40 + 1;
      *(_QWORD *)(v22 + 8 * v40 + 14848) = v21;
      goto LABEL_12;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v6 = sub_14E5A80(a2, 0x1Eu);
    v63 = BYTE4(v6);
    if ( !BYTE4(v6) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[0].m128i_i64[1] + 4) = v6;
LABEL_7:
    LODWORD(v77) = 10;
    if ( !(unsigned __int8)sub_14E53D0(a2, &v77, 1) )
      goto LABEL_19;
  }
  LODWORD(v77) = 32;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v64 )
    {
      v41 = *(_QWORD **)(a2 + 80);
      v42 = v41[6];
      v43 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v41[11], v41[7], v41[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v77, v42, v43, 1694);
      sub_14DC730(&v77, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v82 )
      {
        sub_FC7790(v79, (__int64 *)&v77, SHIBYTE(v82));
        v79 = 0;
        v82 = 0;
      }
      if ( v80 != v81 )
        operator delete(v80);
      v21 = (void **)v77;
      if ( !v77 )
        goto LABEL_12;
      v22 = v78;
      if ( !v78 )
        goto LABEL_12;
      if ( (unsigned __int64)v77 < v78 || (unsigned __int64)v77 > v78 + 14848 )
      {
        v44 = *((_QWORD *)v77 + 66);
        v45 = v44 + ((unsigned __int64)*((unsigned int *)v77 + 134) << 6);
        while ( v44 != v45 )
        {
          while ( 1 )
          {
            v45 -= 64;
            v46 = *(void **)(v45 + 24);
            if ( v46 == (void *)(v45 + 40) )
              break;
            operator delete(v46);
            if ( v44 == v45 )
              goto LABEL_95;
          }
        }
LABEL_95:
        v47 = (void **)v21[66];
        if ( v47 != v21 + 68 )
          free(v47);
        v48 = (void **)v21[52];
        if ( v48 != v21 + 54 )
          free(v48);
        v49 = v21 + 48;
        v50 = v21 + 8;
        do
        {
          while ( *v49 != v49 + 2 )
          {
            operator delete(*v49);
            v49 -= 4;
            if ( v50 == v49 )
              goto LABEL_44;
          }
          v49 -= 4;
        }
        while ( v50 != v49 );
        goto LABEL_44;
      }
      goto LABEL_83;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v9 = sub_14E4730(a2, 0x20u);
    v64 = BYTE4(v9);
    if ( !BYTE4(v9) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[1].m128i_i64 + 4) = v9;
    goto LABEL_7;
  }
  LODWORD(v77) = 33;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v65 )
      goto LABEL_112;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v17 = sub_14E4730(a2, 0x21u);
    v65 = BYTE4(v17);
    if ( !BYTE4(v17) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[1].m128i_i64[1] + 4) = v17;
    goto LABEL_7;
  }
  LODWORD(v77) = 34;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v66 )
    {
LABEL_112:
      v52 = *(_QWORD **)(a2 + 80);
      v53 = v52[6];
      v54 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v52[11], v52[7], v52[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v77, v53, v54, 1694);
      sub_14DC730(&v77, *(unsigned int *)(a2 + 88));
      sub_AEA040((__int64)&v77);
      a1[6].m128i_i8[12] = 0;
      return a1;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v29 = sub_14E4730(a2, 0x22u);
    v66 = BYTE4(v29);
    if ( !BYTE4(v29) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[2].m128i_i64 + 4) = v29;
    goto LABEL_7;
  }
  LODWORD(v77) = 31;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v67 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v39 = sub_14E6700(a2, a3);
    v67 = BYTE4(v39);
    if ( !BYTE4(v39) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[2].m128i_i64[1] + 4) = v39;
    goto LABEL_7;
  }
  LODWORD(v77) = 35;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v69 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v51 = sub_14E34C0(a2);
    v69 = BYTE4(v51);
    if ( !BYTE4(v51) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[3].m128i_i64 + 4) = v51;
    goto LABEL_7;
  }
  LODWORD(v77) = 36;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v70 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v55 = sub_14E5550(a2, 0x24u);
    v70 = BYTE4(v55);
    if ( !BYTE4(v55) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[3].m128i_i64[1] + 4) = v55;
    goto LABEL_7;
  }
  LODWORD(v77) = 37;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v71 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v57 = sub_14E4C40(a2, 0x25u);
    v71 = BYTE4(v57);
    if ( !BYTE4(v57) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[4].m128i_i64 + 4) = v57;
    goto LABEL_7;
  }
  LODWORD(v77) = 38;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v72 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v58 = sub_14E6700(a2, a3);
    v72 = BYTE4(v58);
    if ( !BYTE4(v58) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[4].m128i_i64[1] + 4) = v58;
    goto LABEL_7;
  }
  LODWORD(v77) = 39;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v74 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v59 = sub_14E6700(a2, a3);
    v74 = BYTE4(v59);
    if ( !BYTE4(v59) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[5].m128i_i64 + 4) = v59;
    goto LABEL_7;
  }
  LODWORD(v77) = 25;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v68 )
      goto LABEL_118;
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v60 = sub_14E34C0(a2);
    v68 = BYTE4(v60);
    if ( !BYTE4(v60) )
      goto LABEL_12;
    *(__int64 *)((char *)&v83[5].m128i_i64[1] + 4) = v60;
    goto LABEL_7;
  }
  LODWORD(v77) = 26;
  if ( (unsigned __int8)sub_14E53D0(a2, &v77, 1) )
  {
    if ( v73 )
    {
LABEL_118:
      sub_14E1510((__int64)&v77, a2, 1694);
      v56 = *(unsigned int *)(a2 + 88);
      goto LABEL_119;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_12;
    v61 = sub_14E61D0(a2, 0x1Au);
    v73 = BYTE4(v61);
    if ( !BYTE4(v61) )
      goto LABEL_12;
    *(__int64 *)((char *)v83[6].m128i_i64 + 4) = v61;
    goto LABEL_7;
  }
  sub_13DF9D0(&v75, a2 + 24);
  *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v75);
  *(_QWORD *)(a2 + 104) = v76;
  sub_14E1510((__int64)&v77, a2, 1688);
  sub_AE9DF0((unsigned __int8 **)&v77, 0, 2u);
  v56 = 19;
LABEL_119:
  sub_14DC730(&v77, v56);
  sub_AEA040((__int64)&v77);
  a1[6].m128i_i8[12] = 0;
  return a1;
}
