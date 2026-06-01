char **__fastcall sub_21C4990(char **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  bool v6; // cc
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  char *v12; // rax
  int v14; // esi
  _QWORD *v15; // r13
  _QWORD *v16; // rax
  __m128 *v17; // rax
  __int64 v18; // rcx
  __m128 *v19; // r15
  _QWORD *v20; // rax
  __m128 v21; // xmm0
  int v22; // edx
  __int64 v23; // r13
  _QWORD *v24; // rcx
  _QWORD *v25; // r15
  _QWORD *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // r13
  _QWORD *v30; // r15
  _QWORD *v31; // rdi
  __int64 v32; // r15
  unsigned __int64 v33; // rbp
  __int64 v34; // r13
  __m128 *v35; // rax
  void *v36; // rdi
  __m128 v37; // xmm0
  __int64 v38; // r15
  unsigned __int64 v39; // rbp
  __int64 v40; // r13
  __m128 *v41; // rax
  void *v42; // rdi
  __m128 v43; // xmm0
  __int64 v44; // [rsp+8h] [rbp-360h] BYREF
  __int64 v45; // [rsp+10h] [rbp-358h] BYREF
  __int64 v46; // [rsp+18h] [rbp-350h]
  __int64 v47; // [rsp+20h] [rbp-348h]
  __int64 v48; // [rsp+28h] [rbp-340h]
  _QWORD *v49; // [rsp+30h] [rbp-338h]
  double v50[2]; // [rsp+38h] [rbp-330h] BYREF
  _QWORD *v51; // [rsp+48h] [rbp-320h] BYREF
  char *v52[30]; // [rsp+50h] [rbp-318h] BYREF
  char v53; // [rsp+140h] [rbp-228h]
  unsigned __int64 v54; // [rsp+150h] [rbp-218h]
  void *v55; // [rsp+158h] [rbp-210h] BYREF
  __int64 v56; // [rsp+160h] [rbp-208h]
  _BYTE v57[224]; // [rsp+168h] [rbp-200h] BYREF
  void *ptr; // [rsp+248h] [rbp-120h] BYREF
  __int64 v59; // [rsp+250h] [rbp-118h]
  _BYTE v60[168]; // [rsp+258h] [rbp-110h] BYREF
  _BYTE *v61; // [rsp+300h] [rbp-68h] BYREF
  __int64 v62; // [rsp+308h] [rbp-60h]
  _BYTE v63[88]; // [rsp+310h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a2 <= 1u;
  v51 = a4;
  v7 = *a4;
  v51 = a4 + 1;
  v8 = a4[1];
  v44 = a3;
  v46 = v8;
  v51 = a4 + 2;
  v45 = a4[2];
  v51 = a4 + 3;
  if ( v6 )
  {
    v48 = 0;
    v47 = 0;
  }
  else
  {
    v47 = a4[3];
    v9 = a4 + 4;
    v10 = a4 + 5;
    v51 = v9;
    v11 = *(v10 - 1);
    v51 = v10;
    v48 = v11;
  }
  sub_21E6EB0(v52, &v51);
  if ( (v53 & 1) != 0 )
  {
    v12 = v52[0];
    v52[0] = nullptr;
    *a1 = v12;
  }
  else
  {
    sub_21C38A0((void **)(a2 + 16), v52);
    v14 = *(_DWORD *)(a2 + 24);
    v54 = *(_QWORD *)a2;
    v55 = v57;
    v56 = 0x1C00000000LL;
    if ( v14 )
      sub_21C38A0(&v55, (char **)(a2 + 16));
    v15 = v51;
    ptr = v60;
    v59 = 0x100000000LL;
    v62 = 0x100000000LL;
    v61 = v63;
    v16 = *(_QWORD **)(v44 + v7);
    *(_QWORD *)&v50[1] = v44 + v7;
    v49 = v16;
    v50[0] = *(double *)(v44 + v7 + 8);
    v17 = (__m128 *)operator new(0x208u);
    v18 = v44 + v7;
    v19 = v17;
    *v17 = _mm_loadh_ps(v50);
    v20 = (_QWORD *)(v18 + 16);
    LODWORD(v18) = v56;
    v49 = v20;
    v19[2].m128_u64[0] = v54;
    v21 = _mm_loadh_ps((const double *)&v44);
    v19[2].m128_u64[1] = (unsigned __int64)&v19[3].m128_u64[1];
    v19[1] = v21;
    v19[3].m128_u64[0] = 0x1C00000000LL;
    if ( (_DWORD)v18 )
      sub_21C38A0((void **)&v19[2].m128_u64[1], (char **)&v55);
    v22 = v59;
    v19[17].m128_u64[1] = (unsigned __int64)&v19[18].m128_u64[1];
    v19[18].m128_u64[0] = 0x100000000LL;
    if ( v22 )
      sub_21C3B50(&v19[17].m128_i64[1], (__int64 *)&ptr);
    v19[29].m128_u64[0] = (unsigned __int64)&v19[30];
    v19[29].m128_u64[1] = 0x100000000LL;
    if ( (_DWORD)v62 )
      sub_21C3D70((__int64)&v19[29], (__int64 *)&v61);
    v19[32].m128_u64[0] = (unsigned __int64)v15;
    v23 = *(_QWORD *)(a2 + 256);
    *(_QWORD *)(a2 + 256) = v19;
    if ( v23 )
    {
      v24 = *(_QWORD **)(v23 + 464);
      v25 = &v24[4 * *(unsigned int *)(v23 + 472)];
      if ( v24 != v25 )
      {
        do
        {
          while ( 1 )
          {
            v25 -= 4;
            v26 = (_QWORD *)v25[1];
            if ( v26 == v25 + 3 )
              break;
            v49 = v24;
            free(v26);
            v24 = v49;
            if ( v49 == v25 )
              goto LABEL_19;
          }
        }
        while ( v24 != v25 );
LABEL_19:
        v25 = *(_QWORD **)(v23 + 464);
      }
      if ( v25 != (_QWORD *)(v23 + 480) )
        free(v25);
      v27 = *(void **)(v23 + 280);
      if ( v27 != (void *)(v23 + 296) )
        free(v27);
      v28 = *(void **)(v23 + 40);
      if ( v28 != (void *)(v23 + 56) )
        free(v28);
      operator delete((void *)v23, 0x208u);
    }
    v29 = (__int64)v61;
    v30 = &v61[32 * (unsigned int)v62];
    if ( v61 != (_BYTE *)v30 )
    {
      do
      {
        while ( 1 )
        {
          v30 -= 4;
          v31 = (_QWORD *)v30[1];
          if ( v31 == v30 + 3 )
            break;
          free(v31);
          if ( (_QWORD *)v29 == v30 )
            goto LABEL_30;
        }
      }
      while ( (_QWORD *)v29 != v30 );
LABEL_30:
      v30 = v61;
    }
    if ( v30 != (_QWORD *)v63 )
      free(v30);
    if ( ptr != v60 )
      free(ptr);
    if ( v55 != v57 )
      free(v55);
    v32 = v44 + v45;
    v33 = v44 + v46;
    v34 = *(_QWORD *)(v44 + v45 + 8);
    v45 = *(_QWORD *)(v44 + v45);
    v35 = (__m128 *)operator new(0x30u);
    v45 = v34;
    v36 = *(void **)(a2 + 264);
    v35[2].m128_u64[1] = v33;
    *(_QWORD *)(a2 + 264) = v35;
    v37 = _mm_loadh_ps((const double *)&v45);
    v45 = v32 + 16;
    *v35 = v37;
    v35[1] = _mm_loadh_ps((const double *)&v44);
    if ( v36 )
      operator delete(v36, 0x30u);
    if ( *(_QWORD *)a2 > 1u )
    {
      v38 = v44 + v48;
      v39 = v44 + v47;
      v40 = *(_QWORD *)(v44 + v48 + 8);
      v45 = *(_QWORD *)(v44 + v48);
      v41 = (__m128 *)operator new(0x30u);
      v45 = v40;
      v42 = *(void **)(a2 + 272);
      v41[2].m128_u64[1] = v39;
      *(_QWORD *)(a2 + 272) = v41;
      v43 = _mm_loadh_ps((const double *)&v45);
      v45 = v38 + 16;
      *v41 = v43;
      v41[1] = _mm_loadh_ps((const double *)&v44);
      if ( v42 )
        operator delete(v42, 0x30u);
    }
    *a1 = nullptr;
  }
  sub_21C3860((__int64)v52);
  return a1;
}
