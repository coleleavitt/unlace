__m128i *__fastcall sub_14E9130(__m128i *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r13d
  __int8 v6; // r12
  __int64 v8; // rax
  __m128i si128; // xmm3
  __m128i v10; // xmm4
  __int32 v11; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r12
  int v18; // eax
  void **v19; // rbp
  unsigned __int64 v20; // rax
  void **v21; // r12
  void **v22; // rbx
  void **v23; // rdi
  void **v24; // rdi
  void **v25; // rbx
  void **v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // r12
  int v29; // eax
  void **v30; // r12
  void **v31; // rbx
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // rbx
  void **v35; // r12
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // r12
  int v39; // eax
  __int64 v40; // r12
  __int64 v41; // rbx
  void *v42; // rdi
  void **v43; // rdi
  void **v44; // rdi
  void **v45; // rbx
  void **v46; // r12
  __int64 v47; // rdi
  unsigned int v48; // esi
  _QWORD *v49; // rax
  __int64 v50; // r12
  int v51; // eax
  unsigned __int8 *v52; // rbx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  void **v55; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rbp
  void *v59; // rdi
  void **v60; // rdi
  void **v61; // rdi
  void **v62; // rbp
  void **v63; // r12
  _QWORD *v64; // rax
  __int64 v65; // r12
  int v66; // eax
  __int64 v67; // r12
  __int64 v68; // rbp
  void *v69; // rdi
  void **v70; // rdi
  void **v71; // rdi
  void **v72; // rbp
  void **v73; // r12
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // r13
  __int64 v80; // r12
  void *v81; // rdi
  __int64 v82; // [rsp+0h] [rbp-F8h]
  unsigned int v83; // [rsp+Ch] [rbp-ECh]
  __int8 v85; // [rsp+19h] [rbp-DFh]
  __int8 v86; // [rsp+1Ah] [rbp-DEh]
  __int8 v87; // [rsp+1Bh] [rbp-DDh]
  __m128i v89; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+30h] [rbp-C8h]
  __m128i v91[3]; // [rsp+40h] [rbp-B8h] BYREF
  void *v92; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v93; // [rsp+78h] [rbp-80h]
  __int64 v94; // [rsp+80h] [rbp-78h]
  void *v95; // [rsp+90h] [rbp-68h]
  _BYTE v96[16]; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v97; // [rsp+B0h] [rbp-48h]

  v5 = 0;
  v6 = 0;
  v83 = 0;
  v87 = 0;
  v86 = 0;
  v85 = 0;
  v82 = a2 + 24;
  memset(v91, 0, 36);
  while ( 1 )
  {
    LODWORD(v92) = 9;
    if ( sub_14E3360(a2, &v92, 1) )
    {
LABEL_10:
      v91[0].m128i_i64[0] = __PAIR64__(v83, v5);
      v91[0].m128i_i8[8] = v6;
      si128 = _mm_load_si128(v91);
      a1[2].m128i_i8[4] = 1;
      v91[1].m128i_i8[0] = v85;
      *a1 = si128;
      v91[1].m128i_i8[8] = v86;
      v10 = _mm_load_si128(&v91[1]);
      v91[2].m128i_i8[0] = v87;
      v11 = v91[2].m128i_i32[0];
      a1[1] = v10;
      a1[2].m128i_i32[0] = v11;
      return a1;
    }
    LODWORD(v92) = a4;
    if ( sub_14E3360(a2, &v92, 1) )
    {
      sub_13DF9D0(&v89, v82);
      *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v89);
      *(_QWORD *)(a2 + 104) = v90;
      if ( !v6 )
      {
        v5 = dword_26188A0[*(_DWORD *)(a2 + 88) - 4];
        v13 = sub_14E15D0(a2);
        if ( !BYTE4(v13) )
          goto LABEL_13;
        v83 = v13;
        v6 = 1;
        v91[0].m128i_i64[0] = __PAIR64__(v13, v5);
        v91[0].m128i_i8[8] = 1;
        goto LABEL_9;
      }
      v16 = *(_QWORD **)(a2 + 80);
      v17 = v16[6];
      v18 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v16[11], v16[7], v16[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v92, v17, v18, 1694);
      sub_14DC730(&v92, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v97 )
      {
        sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v97));
        v94 = 0;
        v97 = 0;
      }
      if ( v95 != v96 )
        operator delete(v95);
      v19 = (void **)v92;
      if ( !v92 )
        goto LABEL_13;
      v20 = v93;
      if ( !v93 )
        goto LABEL_13;
      if ( (unsigned __int64)v92 >= v93 && (unsigned __int64)v92 <= v93 + 14848 )
        goto LABEL_74;
      v21 = *((void ***)v92 + 66);
      v22 = &v21[8 * (unsigned __int64)*((unsigned int *)v92 + 134)];
      if ( v21 != v22 )
      {
        do
        {
          while ( 1 )
          {
            v22 -= 8;
            v23 = (void **)v22[3];
            if ( v23 == v22 + 5 )
              break;
            operator delete(v23);
            if ( v21 == v22 )
              goto LABEL_37;
          }
        }
        while ( v21 != v22 );
LABEL_37:
        v22 = (void **)v19[66];
      }
      if ( v22 != v19 + 68 )
        free(v22);
      v24 = (void **)v19[52];
      if ( v24 != v19 + 54 )
        free(v24);
      v25 = v19 + 48;
      v26 = v19 + 8;
      do
      {
        while ( *v25 != v25 + 2 )
        {
          operator delete(*v25);
          v25 -= 4;
          if ( v25 == v26 )
            goto LABEL_45;
        }
        v25 -= 4;
      }
      while ( v25 != v26 );
      goto LABEL_45;
    }
    LODWORD(v92) = 25;
    if ( (unsigned __int8)sub_14E53D0(a2, &v92, 1) )
    {
      if ( !v85 )
      {
        if ( (unsigned __int8)sub_14E12E0(a2) )
          goto LABEL_13;
        v8 = sub_14E34C0(a2);
        v85 = BYTE4(v8);
        if ( !BYTE4(v8) )
          goto LABEL_13;
        *(__int64 *)((char *)&v91[0].m128i_i64[1] + 4) = v8;
        goto LABEL_9;
      }
      v27 = *(_QWORD **)(a2 + 80);
      v28 = v27[6];
      v29 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v27[11], v27[7], v27[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v92, v28, v29, 1694);
      sub_14DC730(&v92, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v97 )
      {
        sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v97));
        v97 = 0;
        v94 = 0;
      }
      if ( v95 != v96 )
        operator delete(v95);
      v19 = (void **)v92;
      if ( !v92 )
        goto LABEL_13;
      v20 = v93;
      if ( !v93 )
        goto LABEL_13;
      if ( (unsigned __int64)v92 >= v93 && (unsigned __int64)v92 <= v93 + 14848 )
      {
LABEL_74:
        v36 = *(unsigned int *)(v20 + 14976);
        *(_DWORD *)(v20 + 14976) = v36 + 1;
        *(_QWORD *)(v20 + 8 * v36 + 14848) = v19;
        goto LABEL_13;
      }
      v30 = *((void ***)v92 + 66);
      v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v92 + 134)];
      if ( v30 != v31 )
      {
        do
        {
          while ( 1 )
          {
            v31 -= 8;
            v32 = (void **)v31[3];
            if ( v32 == v31 + 5 )
              break;
            operator delete(v32);
            if ( v30 == v31 )
              goto LABEL_56;
          }
        }
        while ( v30 != v31 );
LABEL_56:
        v31 = (void **)v19[66];
      }
      if ( v31 != v19 + 68 )
        free(v31);
      v33 = (void **)v19[52];
      if ( v33 != v19 + 54 )
        free(v33);
      v34 = v19 + 48;
      v35 = v19 + 8;
      do
      {
        while ( *v34 != v34 + 2 )
        {
          operator delete(*v34);
          v34 -= 4;
          if ( v35 == v34 )
            goto LABEL_45;
        }
        v34 -= 4;
      }
      while ( v35 != v34 );
LABEL_45:
      operator delete(v19, 0x3A0u);
      goto LABEL_13;
    }
    LODWORD(v92) = 26;
    if ( !(unsigned __int8)sub_14E53D0(a2, &v92, 1) )
      break;
    if ( v86 )
    {
      v37 = *(_QWORD **)(a2 + 80);
      v38 = v37[6];
      v39 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v37[11], v37[7], v37[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v92, v38, v39, 1694);
      sub_14DC730(&v92, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v97 )
      {
        sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v97));
        v94 = 0;
        v97 = 0;
      }
      if ( v95 != v96 )
        operator delete(v95);
      v19 = (void **)v92;
      if ( !v92 )
        goto LABEL_13;
      v20 = v93;
      if ( !v93 )
        goto LABEL_13;
      if ( (unsigned __int64)v92 >= v93 && (unsigned __int64)v92 <= v93 + 14848 )
        goto LABEL_74;
      v40 = *((_QWORD *)v92 + 66);
      v41 = v40 + ((unsigned __int64)*((unsigned int *)v92 + 134) << 6);
      while ( v40 != v41 )
      {
        while ( 1 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 == (void *)(v41 + 40) )
            break;
          operator delete(v42);
          if ( v40 == v41 )
            goto LABEL_86;
        }
      }
LABEL_86:
      v43 = (void **)v19[66];
      if ( v43 != v19 + 68 )
        free(v43);
      v44 = (void **)v19[52];
      if ( v44 != v19 + 54 )
        free(v44);
      v45 = v19 + 48;
      v46 = v19 + 8;
      do
      {
        while ( *v45 != v45 + 2 )
        {
          operator delete(*v45);
          v45 -= 4;
          if ( v45 == v46 )
            goto LABEL_45;
        }
        v45 -= 4;
      }
      while ( v45 != v46 );
      goto LABEL_45;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_13;
    v14 = sub_14E61D0(a2, 0x1Au);
    v86 = BYTE4(v14);
    if ( !BYTE4(v14) )
      goto LABEL_13;
    *(__int64 *)((char *)v91[1].m128i_i64 + 4) = v14;
LABEL_9:
    LODWORD(v92) = 10;
    if ( !sub_14E3360(a2, &v92, 1) )
      goto LABEL_10;
    sub_13DF9D0(&v89, v82);
    *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v89);
    *(_QWORD *)(a2 + 104) = v90;
  }
  LODWORD(v92) = 27;
  if ( (unsigned __int8)sub_14E53D0(a2, &v92, 1) )
  {
    if ( v87 )
    {
      v64 = *(_QWORD **)(a2 + 80);
      v65 = v64[6];
      v66 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v64[11], v64[7], v64[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v92, v65, v66, 1694);
      sub_14DC730(&v92, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v97 )
      {
        sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v97));
        v94 = 0;
        v97 = 0;
      }
      if ( v95 != v96 )
        operator delete(v95);
      v55 = (void **)v92;
      if ( v92 )
      {
        v56 = v93;
        if ( v93 )
        {
          if ( (unsigned __int64)v92 >= v93 && (unsigned __int64)v92 <= v93 + 14848 )
            goto LABEL_142;
          v67 = *((_QWORD *)v92 + 66);
          v68 = v67 + ((unsigned __int64)*((unsigned int *)v92 + 134) << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              operator delete(v69);
              if ( v67 == v68 )
                goto LABEL_131;
            }
          }
LABEL_131:
          v70 = (void **)v55[66];
          if ( v70 != v55 + 68 )
            free(v70);
          v71 = (void **)v55[52];
          if ( v71 != v55 + 54 )
            free(v71);
          v72 = v55 + 48;
          v73 = v55 + 8;
          do
          {
            while ( *v72 != v72 + 2 )
            {
              operator delete(*v72);
              v72 -= 4;
              if ( v72 == v73 )
                goto LABEL_117;
            }
            v72 -= 4;
          }
          while ( v72 != v73 );
LABEL_117:
          operator delete(v55, 0x3A0u);
        }
      }
      goto LABEL_13;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_13;
    v15 = sub_14E3740(a2, 0x1Bu);
    v87 = BYTE4(v15);
    if ( !BYTE4(v15) )
      goto LABEL_13;
    *(__int64 *)((char *)&v91[1].m128i_i64[1] + 4) = v15;
    goto LABEL_9;
  }
  sub_13DF9D0(&v89, a2 + 24);
  v47 = *(_QWORD *)(a2 + 16);
  *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v89);
  v48 = *(_DWORD *)(a2 + 92);
  *(_QWORD *)(a2 + 104) = v90;
  v49 = *(_QWORD **)(a2 + 80);
  v50 = v49[6];
  v51 = sub_C07A10(v47, v48, v49[11], v49[7], v49[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v92, v50, v51, 1688);
  v52 = (unsigned __int8 *)v92;
  if ( !v92 )
  {
    v75 = v93;
    v76 = *(_DWORD *)(v93 + 14976);
    if ( v76 )
    {
      v77 = (unsigned int)(v76 - 1);
      *(_DWORD *)(v93 + 14976) = v77;
      v52 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
      v78 = *((unsigned int *)v52 + 134);
      *v52 = 0;
      v79 = *((_QWORD *)v52 + 66);
      *((_DWORD *)v52 + 106) = 0;
      v80 = v79 + (v78 << 6);
      while ( v79 != v80 )
      {
        while ( 1 )
        {
          v80 -= 64;
          v81 = *(void **)(v80 + 24);
          if ( v81 == (void *)(v80 + 40) )
            break;
          operator delete(v81);
          if ( v79 == v80 )
            goto LABEL_152;
        }
      }
LABEL_152:
      *((_DWORD *)v52 + 134) = 0;
    }
    else
    {
      v52 = (unsigned __int8 *)operator new(0x3A0u);
      *v52 = 0;
      *((_QWORD *)v52 + 12) = v52 + 112;
      *((_QWORD *)v52 + 16) = v52 + 144;
      *((_QWORD *)v52 + 20) = v52 + 176;
      *((_QWORD *)v52 + 24) = v52 + 208;
      *((_QWORD *)v52 + 28) = v52 + 240;
      *((_QWORD *)v52 + 32) = v52 + 272;
      *((_QWORD *)v52 + 36) = v52 + 304;
      *((_QWORD *)v52 + 40) = v52 + 336;
      *((_QWORD *)v52 + 44) = v52 + 368;
      *((_QWORD *)v52 + 48) = v52 + 400;
      *((_QWORD *)v52 + 52) = v52 + 432;
      v52[112] = 0;
      *((_QWORD *)v52 + 13) = 0;
      *((_QWORD *)v52 + 17) = 0;
      v52[144] = 0;
      *((_QWORD *)v52 + 21) = 0;
      v52[176] = 0;
      *((_QWORD *)v52 + 25) = 0;
      v52[208] = 0;
      *((_QWORD *)v52 + 29) = 0;
      v52[240] = 0;
      *((_QWORD *)v52 + 33) = 0;
      v52[272] = 0;
      *((_QWORD *)v52 + 37) = 0;
      v52[304] = 0;
      *((_QWORD *)v52 + 41) = 0;
      v52[336] = 0;
      *((_QWORD *)v52 + 45) = 0;
      v52[368] = 0;
      *((_QWORD *)v52 + 49) = 0;
      v52[400] = 0;
      *((_QWORD *)v52 + 53) = 0x800000000LL;
      *((_QWORD *)v52 + 66) = v52 + 544;
      *((_QWORD *)v52 + 67) = 0x600000000LL;
    }
    v92 = v52;
  }
  v52[*v52 + 1] = 2;
  v53 = v92;
  v54 = *(unsigned __int8 *)v92;
  *(_BYTE *)v92 = v54 + 1;
  v53[v54 + 2] = 0;
  sub_14DC730(&v92, a3);
  if ( (_BYTE)v97 )
  {
    sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v97));
    v94 = 0;
    v97 = 0;
  }
  if ( v95 != v96 )
    operator delete(v95);
  v55 = (void **)v92;
  if ( v92 )
  {
    v56 = v93;
    if ( v93 )
    {
      if ( (unsigned __int64)v92 < v93 || (unsigned __int64)v92 > v93 + 14848 )
      {
        v57 = *((_QWORD *)v92 + 66);
        v58 = v57 + ((unsigned __int64)*((unsigned int *)v92 + 134) << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            operator delete(v59);
            if ( v57 == v58 )
              goto LABEL_110;
          }
        }
LABEL_110:
        v60 = (void **)v55[66];
        if ( v60 != v55 + 68 )
          free(v60);
        v61 = (void **)v55[52];
        if ( v61 != v55 + 54 )
          free(v61);
        v62 = v55 + 48;
        v63 = v55 + 8;
        do
        {
          while ( *v62 != v62 + 2 )
          {
            operator delete(*v62);
            v62 -= 4;
            if ( v62 == v63 )
              goto LABEL_117;
          }
          v62 -= 4;
        }
        while ( v62 != v63 );
        goto LABEL_117;
      }
LABEL_142:
      v74 = *(unsigned int *)(v56 + 14976);
      *(_DWORD *)(v56 + 14976) = v74 + 1;
      *(_QWORD *)(v56 + 8 * v74 + 14848) = v55;
    }
  }
LABEL_13:
  a1[2].m128i_i8[4] = 0;
  return a1;
}
