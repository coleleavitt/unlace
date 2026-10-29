__m128i *__fastcall sub_14E8550(__m128i *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r13d
  __int8 v6; // r12
  char v8; // al
  __int64 v9; // rcx
  __m128i si128; // xmm3
  __m128i v11; // xmm4
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r12
  int v19; // eax
  void **v20; // rbp
  unsigned __int64 v21; // rax
  void **v22; // r12
  void **v23; // rbx
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // rbx
  void **v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r12
  int v31; // eax
  void **v32; // r12
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r12
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rbx
  void *v44; // rdi
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // rbx
  void **v48; // r12
  _QWORD *v49; // rax
  __int64 v50; // r12
  int v51; // eax
  void **v52; // rbx
  unsigned __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rbp
  void *v56; // rdi
  void **v57; // rdi
  void **v58; // rdi
  void **v59; // rbp
  void **v60; // r12
  _QWORD *v61; // rax
  __int64 v62; // r12
  int v63; // eax
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned int v66; // esi
  _QWORD *v67; // rax
  __int64 v68; // r12
  int v69; // eax
  __int64 v70; // rdx
  unsigned int v71; // [rsp+0h] [rbp-100h]
  unsigned __int32 v72; // [rsp+4h] [rbp-FCh]
  unsigned __int8 v74; // [rsp+1Ah] [rbp-E6h]
  __int8 v75; // [rsp+1Bh] [rbp-E5h]
  unsigned __int32 v76; // [rsp+1Ch] [rbp-E4h]
  unsigned __int8 v77; // [rsp+22h] [rbp-DEh]
  __int8 v78; // [rsp+23h] [rbp-DDh]
  __m128i v80; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+38h] [rbp-C8h]
  __m128i v82[3]; // [rsp+48h] [rbp-B8h] BYREF
  void *v83; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v84; // [rsp+80h] [rbp-80h]
  __int64 v85; // [rsp+88h] [rbp-78h]
  void *v86; // [rsp+98h] [rbp-68h]
  _BYTE v87[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v88; // [rsp+B8h] [rbp-48h]

  v5 = 0;
  v6 = 0;
  v71 = 0;
  v78 = 0;
  v77 = 0;
  v76 = 0;
  v75 = 0;
  v74 = 0;
  v72 = 0;
  memset(v82, 0, 44);
  while ( 1 )
  {
    LODWORD(v83) = 9;
    if ( sub_14E3360(a2, &v83, 1) )
    {
LABEL_10:
      v82[0].m128i_i64[0] = __PAIR64__(v71, v5);
      v82[0].m128i_i8[8] = v6;
      a1[2].m128i_i8[12] = 1;
      v82[0].m128i_i32[3] = v72;
      si128 = _mm_load_si128(v82);
      v82[1].m128i_i8[0] = v74;
      *a1 = si128;
      v82[1].m128i_i8[8] = v75;
      v82[1].m128i_i32[3] = v76;
      v11 = _mm_load_si128(&v82[1]);
      v82[2].m128i_i8[0] = v77;
      a1[1] = v11;
      v82[2].m128i_i8[8] = v78;
      a1[2].m128i_i64[0] = v82[2].m128i_i64[0];
      a1[2].m128i_i32[2] = v82[2].m128i_i32[2];
      return a1;
    }
    LODWORD(v83) = a4;
    if ( sub_14E3360(a2, &v83, 1) )
    {
      sub_13DF9D0(&v80, a2 + 24);
      *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v80);
      *(_QWORD *)(a2 + 104) = v81;
      if ( !v6 )
      {
        v5 = dword_26188A0[*(_DWORD *)(a2 + 88) - 4];
        v13 = sub_14E15D0(a2);
        if ( !BYTE4(v13) )
          goto LABEL_13;
        v71 = v13;
        v6 = 1;
        v82[0].m128i_i64[0] = __PAIR64__(v13, v5);
        v82[0].m128i_i8[8] = 1;
        goto LABEL_9;
      }
      v17 = *(_QWORD **)(a2 + 80);
      v18 = v17[6];
      v19 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v17[11], v17[7], v17[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v83, v18, v19, 1694);
      sub_14DC730(&v83, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v88 )
      {
        sub_FC7790(v85, (__int64 *)&v83, SHIBYTE(v88));
        v85 = 0;
        v88 = 0;
      }
      if ( v86 != v87 )
        operator delete(v86);
      v20 = (void **)v83;
      if ( !v83 )
        goto LABEL_13;
      v21 = v84;
      if ( !v84 )
        goto LABEL_13;
      if ( (unsigned __int64)v83 >= v84 && (unsigned __int64)v83 <= v84 + 14848 )
        goto LABEL_83;
      v22 = *((void ***)v83 + 66);
      v23 = &v22[8 * (unsigned __int64)*((unsigned int *)v83 + 134)];
      if ( v22 != v23 )
      {
        do
        {
          while ( 1 )
          {
            v23 -= 8;
            v24 = (void **)v23[3];
            if ( v24 == v23 + 5 )
              break;
            operator delete(v24);
            if ( v22 == v23 )
              goto LABEL_41;
          }
        }
        while ( v22 != v23 );
LABEL_41:
        v23 = (void **)v20[66];
      }
      if ( v23 != v20 + 68 )
        free(v23);
      v25 = (void **)v20[52];
      if ( v25 != v20 + 54 )
        free(v25);
      v26 = v20 + 48;
      v27 = v20 + 8;
      do
      {
        while ( *v26 != v26 + 2 )
        {
          operator delete(*v26);
          v26 -= 4;
          if ( v27 == v26 )
            goto LABEL_49;
        }
        v26 -= 4;
      }
      while ( v27 != v26 );
      goto LABEL_49;
    }
    LODWORD(v83) = 28;
    if ( (unsigned __int8)sub_14E53D0(a2, &v83, 1) )
    {
      if ( !v74 )
      {
        if ( (unsigned __int8)sub_14E12E0(a2) )
          goto LABEL_13;
        LODWORD(v83) = 40;
        v8 = sub_14E53D0(a2, &v83, 1);
        v74 = 1;
        v9 = 0;
        v72 = -1;
        if ( !v8 )
        {
          v9 = sub_14E34C0(a2);
          v72 = v9;
          v74 = BYTE4(v9);
          if ( !BYTE4(v9) )
            goto LABEL_13;
        }
        *(__int64 *)((char *)&v82[0].m128i_i64[1] + 4) = ((unsigned __int64)v74 << 32) | v72 | v9 & 0xFFFFFF0000000000LL;
        goto LABEL_9;
      }
      v29 = *(_QWORD **)(a2 + 80);
      v30 = v29[6];
      v31 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v29[11], v29[7], v29[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v83, v30, v31, 1694);
      sub_14DC730(&v83, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v88 )
      {
        sub_FC7790(v85, (__int64 *)&v83, SHIBYTE(v88));
        v85 = 0;
        v88 = 0;
      }
      if ( v86 != v87 )
        operator delete(v86);
      v20 = (void **)v83;
      if ( v83 )
      {
        v21 = v84;
        if ( v84 )
        {
          if ( (unsigned __int64)v83 >= v84 && (unsigned __int64)v83 <= v84 + 14848 )
          {
LABEL_83:
            v38 = *(unsigned int *)(v21 + 14976);
            *(_DWORD *)(v21 + 14976) = v38 + 1;
            *(_QWORD *)(v21 + 8 * v38 + 14848) = v20;
            goto LABEL_13;
          }
          v32 = *((void ***)v83 + 66);
          v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v83 + 134)];
          if ( v32 != v33 )
          {
            do
            {
              while ( 1 )
              {
                v33 -= 8;
                v34 = (void **)v33[3];
                if ( v34 == v33 + 5 )
                  break;
                operator delete(v34);
                if ( v32 == v33 )
                  goto LABEL_65;
              }
            }
            while ( v32 != v33 );
LABEL_65:
            v33 = (void **)v20[66];
          }
          if ( v33 != v20 + 68 )
            free(v33);
          v35 = (void **)v20[52];
          v36 = v20 + 52;
          if ( v35 != v20 + 54 )
            free(v35);
          v37 = v20 + 12;
          do
          {
            while ( 1 )
            {
              v36 -= 4;
              if ( *v36 == v36 + 2 )
                break;
              operator delete(*v36);
              if ( v36 == v37 )
                goto LABEL_49;
            }
          }
          while ( v36 != v37 );
          goto LABEL_49;
        }
      }
LABEL_13:
      a1[2].m128i_i8[12] = 0;
      return a1;
    }
    LODWORD(v83) = 25;
    if ( (unsigned __int8)sub_14E53D0(a2, &v83, 1) )
    {
      if ( !v75 )
      {
        if ( (unsigned __int8)sub_14E12E0(a2) )
          goto LABEL_13;
        v14 = sub_14E34C0(a2);
        v75 = BYTE4(v14);
        if ( !BYTE4(v14) )
          goto LABEL_13;
        *(__int64 *)((char *)v82[1].m128i_i64 + 4) = v14;
        goto LABEL_9;
      }
      v39 = *(_QWORD **)(a2 + 80);
      v40 = v39[6];
      v41 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v39[11], v39[7], v39[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v83, v40, v41, 1694);
      sub_14DC730(&v83, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v88 )
      {
        sub_FC7790(v85, (__int64 *)&v83, SHIBYTE(v88));
        v85 = 0;
        v88 = 0;
      }
      if ( v86 != v87 )
        operator delete(v86);
      v20 = (void **)v83;
      if ( !v83 )
        goto LABEL_13;
      v21 = v84;
      if ( !v84 )
        goto LABEL_13;
      if ( (unsigned __int64)v83 >= v84 && (unsigned __int64)v83 <= v84 + 14848 )
        goto LABEL_83;
      v42 = *((_QWORD *)v83 + 66);
      v43 = v42 + ((unsigned __int64)*((unsigned int *)v83 + 134) << 6);
      while ( v42 != v43 )
      {
        while ( 1 )
        {
          v43 -= 64;
          v44 = *(void **)(v43 + 24);
          if ( v44 == (void *)(v43 + 40) )
            break;
          operator delete(v44);
          if ( v42 == v43 )
            goto LABEL_95;
        }
      }
LABEL_95:
      v45 = (void **)v20[66];
      if ( v45 != v20 + 68 )
        free(v45);
      v46 = (void **)v20[52];
      v47 = v20 + 52;
      if ( v46 != v20 + 54 )
        free(v46);
      v48 = v20 + 12;
      do
      {
        while ( 1 )
        {
          v47 -= 4;
          if ( *v47 == v47 + 2 )
            break;
          operator delete(*v47);
          if ( v47 == v48 )
            goto LABEL_49;
        }
      }
      while ( v47 != v48 );
LABEL_49:
      operator delete(v20, 0x3A0u);
      goto LABEL_13;
    }
    LODWORD(v83) = 29;
    if ( !(unsigned __int8)sub_14E53D0(a2, &v83, 1) )
      break;
    if ( v77 )
    {
      v49 = *(_QWORD **)(a2 + 80);
      v50 = v49[6];
      v51 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v49[11], v49[7], v49[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v83, v50, v51, 1694);
      sub_14DC730(&v83, *(unsigned int *)(a2 + 88));
      if ( (_BYTE)v88 )
      {
        sub_FC7790(v85, (__int64 *)&v83, SHIBYTE(v88));
        v85 = 0;
        v88 = 0;
      }
      if ( v86 != v87 )
        operator delete(v86);
      v52 = (void **)v83;
      if ( v83 )
      {
        v53 = v84;
        if ( v84 )
        {
          if ( (unsigned __int64)v83 < v84 || (unsigned __int64)v83 > v84 + 14848 )
          {
            v54 = *((_QWORD *)v83 + 66);
            v55 = v54 + ((unsigned __int64)*((unsigned int *)v83 + 134) << 6);
            while ( v54 != v55 )
            {
              while ( 1 )
              {
                v55 -= 64;
                v56 = *(void **)(v55 + 24);
                if ( v56 == (void *)(v55 + 40) )
                  break;
                operator delete(v56);
                if ( v54 == v55 )
                  goto LABEL_118;
              }
            }
LABEL_118:
            v57 = (void **)v52[66];
            if ( v57 != v52 + 68 )
              free(v57);
            v58 = (void **)v52[52];
            if ( v58 != v52 + 54 )
              free(v58);
            v59 = v52 + 48;
            v60 = v52 + 8;
            do
            {
              while ( *v59 != v59 + 2 )
              {
                operator delete(*v59);
                v59 -= 4;
                if ( v59 == v60 )
                  goto LABEL_125;
              }
              v59 -= 4;
            }
            while ( v60 != v59 );
LABEL_125:
            operator delete(v52, 0x3A0u);
          }
          else
          {
            v70 = *(unsigned int *)(v84 + 14976);
            *(_DWORD *)(v84 + 14976) = v70 + 1;
            *(_QWORD *)(v53 + 8 * v70 + 14848) = v52;
          }
        }
      }
      goto LABEL_13;
    }
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_13;
    LODWORD(v83) = 41;
    v15 = sub_14E53D0(a2, &v83, 1);
    v77 = 1;
    v16 = 0;
    v76 = -1;
    if ( !v15 )
    {
      v16 = sub_14E34C0(a2);
      v76 = v16;
      v77 = BYTE4(v16);
      if ( !BYTE4(v16) )
        goto LABEL_13;
    }
    *(__int64 *)((char *)&v82[1].m128i_i64[1] + 4) = ((unsigned __int64)v77 << 32) | v76 | v16 & 0xFFFFFF0000000000LL;
LABEL_9:
    LODWORD(v83) = 10;
    if ( !sub_14E3360(a2, &v83, 1) )
      goto LABEL_10;
    sub_13DF9D0(&v80, a2 + 24);
    *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v80);
    *(_QWORD *)(a2 + 104) = v81;
  }
  LODWORD(v83) = 27;
  if ( !(unsigned __int8)sub_14E53D0(a2, &v83, 1) )
  {
    sub_13DF9D0(&v80, a2 + 24);
    v65 = *(_QWORD *)(a2 + 16);
    *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v80);
    v66 = *(_DWORD *)(a2 + 92);
    *(_QWORD *)(a2 + 104) = v81;
    v67 = *(_QWORD **)(a2 + 80);
    v68 = v67[6];
    v69 = sub_C07A10(v65, v66, v67[11], v67[7], v67[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v83, v68, v69, 1688);
    sub_AE9DF0((unsigned __int8 **)&v83, 0, 2u);
    v64 = a3;
    goto LABEL_129;
  }
  if ( !v78 )
  {
    if ( (unsigned __int8)sub_14E12E0(a2) )
      goto LABEL_13;
    v28 = sub_14E3F10(a2, 0x1Bu);
    v78 = BYTE4(v28);
    if ( !BYTE4(v28) )
      goto LABEL_13;
    *(__int64 *)((char *)v82[2].m128i_i64 + 4) = v28;
    goto LABEL_9;
  }
  v61 = *(_QWORD **)(a2 + 80);
  v62 = v61[6];
  v63 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v61[11], v61[7], v61[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v83, v62, v63, 1694);
  v64 = *(unsigned int *)(a2 + 88);
LABEL_129:
  sub_14DC730(&v83, v64);
  sub_AEA040((__int64)&v83);
  a1[2].m128i_i8[12] = 0;
  return a1;
}
