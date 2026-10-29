__int64 __fastcall sub_1DC3F20(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // r14
  unsigned int v12; // ebp
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // edx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int32 v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // eax
  _QWORD *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  char *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r14
  void **v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r13
  __int64 v49; // rax
  _QWORD *v50; // rax
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v56; // [rsp+18h] [rbp-20C0h]
  unsigned __int8 v57; // [rsp+18h] [rbp-20C0h]
  __int64 v58; // [rsp+18h] [rbp-20C0h]
  __int64 v60; // [rsp+30h] [rbp-20A8h]
  __int64 v61; // [rsp+38h] [rbp-20A0h]
  int v62; // [rsp+40h] [rbp-2098h]
  int v63; // [rsp+44h] [rbp-2094h]
  __int64 v64[2]; // [rsp+48h] [rbp-2090h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-2080h] BYREF
  __int64 v66; // [rsp+60h] [rbp-2078h]
  unsigned __int64 v67; // [rsp+68h] [rbp-2070h] BYREF
  char v68[8]; // [rsp+70h] [rbp-2068h] BYREF
  unsigned __int8 v69; // [rsp+78h] [rbp-2060h]
  unsigned __int8 v70; // [rsp+79h] [rbp-205Fh]
  __m128i v71[2]; // [rsp+80h] [rbp-2058h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-2030h]
  __m128 v73; // [rsp+C0h] [rbp-2018h] BYREF
  __m128 v74; // [rsp+D0h] [rbp-2008h]
  unsigned __int64 v75; // [rsp+E0h] [rbp-1FF8h]
  _QWORD v76[1021]; // [rsp+F0h] [rbp-1FE8h] BYREF

  v9 = a3;
  v10 = *(_QWORD *)(a3 + 16);
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v10 & 4) != 0 )
    v11 = (_QWORD *)*v11;
  if ( v11 )
    v11 -= 9;
  v65 = sub_B74810(a3);
  sub_18C74E0(a1, 6, v9, 4);
  sub_1DC3470((__int64)v68, a1, 2, a2, 0, v9, 0, *(_QWORD *)(*(_QWORD *)a4 + 8LL), *(_QWORD *)(*(_QWORD *)a4 + 16LL), 0);
  v12 = v69;
  if ( !v69 )
  {
    v12 = v70;
    if ( v70 )
    {
      v43 = sub_B73090(v9);
      sub_168B9F0((__int64)v76, (__int64 *)(a1 + 8), v43, 0x1322u, 0);
      if ( LOBYTE(v76[15]) )
      {
        sub_1DB86A0((unsigned __int8 **)&v76[4], (__int64)v11);
      }
      else if ( BYTE4(v76[16]) )
      {
        v48 = sub_168B9E0(v76);
        v49 = v76[2];
        if ( v76[2] )
          v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76[2] + 32LL))(v76[2]);
        v73.m128_u64[0] = v49;
        v50 = sub_1587BC0(v48, (__int64 *)&v73, v44, v45, v46, v47);
        sub_1DB86A0((unsigned __int8 **)(*v50 + 32LL * LODWORD(v76[16]) + 8), (__int64)v11);
      }
      sub_15F7200(v76);
      sub_B88650(v9, 1);
      goto LABEL_25;
    }
    v13 = v11 + 9;
    if ( !v11 )
      v13 = nullptr;
    v14 = *(_QWORD *)(a1 + 9944);
    v60 = *(_QWORD *)(a1 + 544);
    v15 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 544) = v13;
    v16 = *(_DWORD *)(a1 + 40);
    v72 = v14;
    LODWORD(v14) = *(_DWORD *)(a1 + 80);
    v61 = v15;
    LODWORD(v15) = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 80) = v16;
    v17 = *(_DWORD *)(a1 + 3688);
    v62 = v14;
    v66 = 0;
    *(_QWORD *)(a1 + 512) = 0;
    memset(v76, 0, 0x98u);
    v63 = v15;
    *(_QWORD *)(a1 + 9944) = 0;
    *(_DWORD *)(a1 + 2632) = v17;
    if ( a5 )
    {
      v76[0] = a1;
      v35 = &v76[2];
      v76[1] = 1;
      do
      {
        *v35 = -4096;
        v35 += 2;
      }
      while ( &v76[10] != v35 );
      v76[10] = &v76[12];
      v76[11] = 0x100000000LL;
      v36 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = v76;
      LOWORD(v76[14]) = 0;
      v76[13] = v36;
      BYTE2(v76[14]) = 0;
      v76[15] = 0;
      LOBYTE(v76[18]) = 1;
      v37 = sub_B7D580((__int64)v11, 0, -4096, (__int64)&v76[10]);
      v38 = sub_1E03DC0(a1, v11, v37, v76, a4);
      if ( (_BYTE)v38 )
      {
        if ( LOBYTE(v76[18]) )
        {
          v57 = v38;
          sub_1CB3BA0((__int64)v76);
          v12 = v57;
        }
        else
        {
          v12 = v38;
        }
LABEL_23:
        if ( v60 )
        {
          *(_QWORD *)(a1 + 544) = v60;
          *(_QWORD *)(a1 + 512) = v61;
          *(_QWORD *)(a1 + 9944) = v72;
          *(_DWORD *)(a1 + 80) = v62;
          *(_DWORD *)(a1 + 2632) = v63;
        }
LABEL_25:
        if ( !v69 )
          sub_1DBAC30(v68);
        goto LABEL_27;
      }
    }
    v18 = a2;
    v64[0] = (__int64)&v65;
    v73 = _mm_loadh_ps((const double *)v64);
    v64[0] = a1;
    a6 = _mm_loadh_ps((const double *)v64);
    v64[0] = (__int64)&v73;
    v74 = a6;
    sub_15F0FC0(a1, a2, (__int64 (__fastcall *)(__int64))sub_1DDCC50, (__int64)&v73);
    if ( LOBYTE(v76[18]) )
    {
      v39 = (char *)v76[10];
      if ( !LOBYTE(v76[14]) )
      {
        if ( LODWORD(v76[11]) )
        {
          v56 = v9;
          v40 = 0;
          v41 = 8LL * (unsigned int)(LODWORD(v76[11]) - 1) + 8;
          do
          {
            v42 = *(void ***)&v39[v40];
            if ( v42 )
            {
              if ( *v42 != v42 + 2 )
                free(*v42);
              v18 = 48;
              operator delete(v42, 0x30u);
              v39 = (char *)v76[10];
            }
            v40 += 8;
          }
          while ( v41 != v40 );
          v9 = v56;
        }
        v19 = v76[13];
        *(_QWORD *)(v76[0] + 11280LL) = v76[13];
        LOBYTE(v76[14]) = 1;
      }
      if ( v39 != (char *)&v76[12] )
        free(v39);
      if ( (v76[1] & 1) == 0 )
      {
        v18 = 16LL * LODWORD(v76[3]);
        operator delete(v76[2], v18, 8);
      }
    }
    v22 = v66;
    if ( v66 == 1 )
    {
LABEL_20:
      v12 = 1;
      goto LABEL_23;
    }
    if ( !a5 )
    {
      v33 = sub_EEB7E0(v65, v18, *(double *)a6.m128_u64);
      v66 = sub_183B1D0(a1, v9, v22 & 0xFFFFFFFFFFFFFFFELL, v33, a6, a7);
      v32 = v66;
      if ( v66 == 1 )
        goto LABEL_20;
      goto LABEL_22;
    }
    v23 = *(_QWORD **)(a1 + 248);
    v24 = *(_QWORD *)(v9 + 48);
    if ( (*(_BYTE *)(v23[290] + 107LL) & 4) == 0 || (*(_BYTE *)(v9 + 29) & 1) == 0 )
      goto LABEL_15;
    v58 = *(_QWORD *)(v9 + 48);
    v51 = sub_B8C3D0(v9, v18, v19, v24, v20, v21);
    v24 = v58;
    v52 = *v51;
    v53 = *v51 + 8LL * *((unsigned int *)v51 + 2);
    if ( v52 >= v53 )
    {
      if ( v52 == v53 )
      {
LABEL_15:
        v25 = 0;
        goto LABEL_16;
      }
      while ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 99 )
      {
        v53 += 8LL;
        if ( v52 == v53 )
          goto LABEL_15;
      }
    }
    else
    {
      v54 = v52;
      while ( 1 )
      {
        v52 = v54;
        if ( *(_WORD *)(*(_QWORD *)v54 + 36LL) == 99 )
          break;
        v54 += 8LL;
        if ( v53 == v54 )
          goto LABEL_15;
      }
    }
    v25 = 4LL * (v52 != v53);
LABEL_16:
    v73.m128_u64[1] = 0;
    v74.m128_i32[2] = 0;
    v73.m128_i32[0] = 1;
    v26 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    v27 = *(_QWORD *)(v26 + 8) & 7LL | (*(__int64 *)(v26 + 8) >> 3) & 1;
    if ( v27 )
      v28 = sub_F64F00(v24, v26, v27, v24, v20) & 0xFFFFFFFFFFFFFFF0LL;
    else
      v28 = v26 & 0xFFFFFFFFFFFFFFF0LL;
    v74.m128_u64[0] = sub_A73320(v23, v28);
    v75 = v9 & 0xFFFFFFFFFFFFFFFBLL | v25;
    v29 = sub_EEB7E0(v65, v28, *(double *)a6.m128_u64);
    v30 = *(_DWORD *)(v9 + 24);
    v71[0].m128i_i32[3] = v29;
    v71[0].m128i_i16[0] = 2;
    *(__int64 *)((char *)v71[0].m128i_i64 + 4) = __PAIR64__(v29, v30);
    v67 = v66 & 0xFFFFFFFFFFFFFFFELL;
    sub_1A19220((__int64)v76, a1, v64[0], v71, (__int64)&v67, 1, a6, a7, 0, 1u);
    v66 = sub_1A1D600((unsigned int)v76, a1, v64[0], (unsigned int)v71, (unsigned int)&v67, 1, 0);
    if ( v66 == 1 )
    {
      sub_1A0BB10((__int64)v76);
      v12 = a5;
      goto LABEL_23;
    }
    v31 = sub_B73090(v9);
    v66 = sub_19B4A30(a1, v66 & 0xFFFFFFFFFFFFFFFELL, v31, 0, 0, 0, a6, a7);
    sub_1A0BB10((__int64)v76);
    v32 = v66;
    if ( v66 == 1 )
      goto LABEL_20;
LABEL_22:
    sub_B74780(v9, v32 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_23;
  }
LABEL_27:
  sub_190D5E0(a1, a6);
  return v12;
}
