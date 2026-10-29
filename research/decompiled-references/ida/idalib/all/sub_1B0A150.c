const __m128i *__fastcall sub_1B0A150(
        __int64 *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  const __m128i *v7; // rbp
  char *v8; // rbp
  __m128i *v9; // rbx
  __int64 *v10; // r12
  char *v11; // rbx
  char *v12; // r15
  char v13; // r8
  char v14; // r12
  __int64 *v15; // r10
  __int64 v17; // r14
  _DWORD *v18; // rsi
  char v19; // r13
  __int64 v21; // r14
  size_t v22; // r15
  unsigned int v23; // eax
  int v24; // eax
  __int64 *v25; // rsi
  __int64 *v26; // r15
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned int v29; // edx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  void *v35; // r14
  size_t v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 *v40; // rcx
  __int64 v41; // r15
  unsigned int *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 *v48; // rcx
  __int64 v49; // r15
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  void *v58; // [rsp+10h] [rbp-168h]
  __int64 *v59; // [rsp+10h] [rbp-168h]
  __int64 *v60; // [rsp+10h] [rbp-168h]
  unsigned int v61; // [rsp+10h] [rbp-168h]
  unsigned int v62; // [rsp+10h] [rbp-168h]
  __int64 *v64; // [rsp+18h] [rbp-160h]
  __int64 *v65; // [rsp+18h] [rbp-160h]
  unsigned int v68; // [rsp+30h] [rbp-148h]
  __int64 v69; // [rsp+30h] [rbp-148h]
  char v70; // [rsp+3Fh] [rbp-139h]
  __int64 *v71; // [rsp+48h] [rbp-130h] BYREF
  void *v72; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-120h]
  char v74; // [rsp+5Ch] [rbp-11Ch]
  void *v75; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v76; // [rsp+68h] [rbp-110h]
  char v77; // [rsp+6Ch] [rbp-10Ch]
  __int64 v78; // [rsp+70h] [rbp-108h]
  void *v79; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v80; // [rsp+80h] [rbp-F8h]
  char v81; // [rsp+84h] [rbp-F4h]
  void *v82[2]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v83[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *src; // [rsp+B0h] [rbp-C8h] BYREF
  size_t n; // [rsp+B8h] [rbp-C0h]
  _BYTE v86[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v7 = (const __m128i *)(&dword_0 + 1);
  if ( !a5 )
    return v7;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v73 = 1;
  v72 = nullptr;
  v74 = 0;
  if ( &a3[8 * a4] == a3 )
  {
    v68 = 0;
    v19 = 0;
    goto LABEL_16;
  }
  v11 = &a3[8 * a4];
  v12 = a3;
  v13 = 0;
  v14 = 0;
  v15 = a1;
  v68 = 0;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)v12;
      if ( *(_DWORD *)(*(_QWORD *)v12 + 8LL) == 42 )
        break;
LABEL_4:
      v12 += 8;
      if ( v11 == v12 )
        goto LABEL_9;
    }
    if ( a2->m128i_i64[0] )
    {
      v18 = *(_DWORD **)(v17 + 16);
      if ( ((*v18 >> 14) & 0xE) != 0 )
        goto LABEL_8;
LABEL_31:
      v70 = v13;
      v60 = v15;
      v31 = sub_168B6C0((__int64)v15);
      sub_C3DC60((__int64)&src, (unsigned __int64)v18, v31, 0, v32, v33);
      v15 = v60;
      v13 = v70;
      if ( v73 > 0x40 && v72 )
      {
        operator delete[](v72);
        v15 = v60;
        v13 = v70;
      }
      v72 = src;
      v73 = n;
      v74 = BYTE4(n);
      v68 = *(_DWORD *)v17;
      goto LABEL_4;
    }
    v59 = v15;
    sub_168B9F0((__int64)&src, v15, *(_DWORD *)v17, 0x1197u, 0);
    sub_15F7200(&src);
    v18 = *(_DWORD **)(v17 + 16);
    v13 = 1;
    v15 = v59;
    if ( ((*v18 >> 14) & 0xE) == 0 )
      goto LABEL_31;
LABEL_8:
    v12 += 8;
    v14 = 1;
  }
  while ( v11 != v12 );
LABEL_9:
  v9 = a2;
  v8 = a3;
  v19 = v14;
  v10 = v15;
  if ( v13 )
  {
    v7 = (const __m128i *)(&dword_0 + 1);
    goto LABEL_11;
  }
LABEL_16:
  v21 = v10[1];
  sub_B87650((__int64)&src, v9->m128i_i64);
  v22 = n;
  v58 = src;
  v23 = sub_2244B30(src, n);
  v24 = sub_2244E60(v21 + 27480, v58, v22, v23);
  if ( v24 == -1 )
    v25 = (__int64 *)(*(_QWORD *)(v21 + 27480) + 8LL * *(unsigned int *)(v21 + 27488));
  else
    v25 = (__int64 *)(*(_QWORD *)(v21 + 27480) + 8LL * v24);
  sub_1AF92C0((__int64 **)v82, v25, 1);
  v26 = (__int64 *)v82[0];
  if ( src != v86 )
    operator delete(src);
  sub_1AF92C0((__int64 **)&src, (__int64 *)(*(_QWORD *)(v21 + 27480) + 8LL * *(unsigned int *)(v21 + 27488)), 1);
  if ( v26 == src )
  {
    v78 = 0;
    v80 = 1;
    v79 = nullptr;
    v81 = 0;
  }
  else
  {
    v27 = *v26;
    v28 = *(_QWORD *)(*v26 + 8);
    v29 = *(_DWORD *)(*v26 + 24);
    v78 = v28;
    v80 = v29;
    if ( v29 > 0x40 )
    {
      sub_2205510(&v79);
      v28 = v78;
    }
    else
    {
      v79 = *(void **)(v27 + 16);
    }
    v81 = *(_BYTE *)(v27 + 28);
    if ( v28 && v9->m128i_i64[0] && !v19 && (unsigned int)sub_98E2D0((__int64 *)&v72, (__int64 *)&v79) )
    {
      sub_168B9F0((__int64)&src, v10, a6, 0x1165u, 0);
      sub_15F7200(&src);
      if ( v68 )
      {
        sub_168B9F0((__int64)&src, v10, v68, 0x1814u, 0);
        LODWORD(v75) = 0;
        v41 = sub_1587D10((__int64)&src, (int *)&v75);
        sub_C1DEB0(v82, (int)&v72, 10, 0, 0, 1u, 0);
        sub_1682AF0(v41, (__int64)v82);
        if ( v82[0] != v83 )
          operator delete(v82[0]);
        sub_15F7200(&src);
      }
      else
      {
        sub_168B9F0((__int64)&src, v10, a6, 0x1815u, 0);
        LODWORD(v82[0]) = 0;
        sub_1587D10((__int64)&src, (int *)v82);
        sub_15F7200(&src);
      }
      v42 = *(unsigned int **)(v78 + 24);
      if ( !v42 )
        goto LABEL_61;
      v43 = (__int64)&v42[2 * *v42 + 4];
      if ( v42 + 4 == (unsigned int *)v43 )
        goto LABEL_61;
      v44 = *((_QWORD *)v42 + 2);
      if ( *(_DWORD *)(v44 + 8) == 42 )
      {
LABEL_70:
        sub_168B9F0((__int64)&src, v10, *(_DWORD *)v44, 0x1814u, 0);
        LODWORD(v71) = 1;
        v52 = sub_1587D10((__int64)&src, (int *)&v71);
        v53 = *(_QWORD *)(v44 + 16);
        v69 = v52;
        v54 = sub_168B6C0((__int64)v10);
        sub_C3DC60((__int64)&v75, v53, v54, 0, v55, v56);
        sub_C1DEB0(v82, (int)&v75, 10, 0, 0, 1u, 0);
        sub_1682AF0(v69, (__int64)v82);
        if ( v82[0] != v83 )
          operator delete(v82[0]);
        if ( v76 > 0x40 && v75 )
          operator delete[](v75);
        sub_15F7200(&src);
      }
      else
      {
        v45 = (__int64 *)(v42 + 6);
        while ( (__int64 *)v43 != v45 )
        {
          v44 = *v45++;
          if ( *(_DWORD *)(v44 + 8) == 42 )
            goto LABEL_70;
        }
LABEL_61:
        sub_168B9F0((__int64)&src, v10, *(_DWORD *)(v78 + 12), 0x1815u, 0);
        LODWORD(v82[0]) = 1;
        sub_1587D10((__int64)&src, (int *)v82);
        sub_15F7200(&src);
      }
    }
  }
  sub_15F2480(*v10);
  v30 = (_QWORD *)sub_168B6C0((__int64)v10);
  v7 = (const __m128i *)sub_F01080(v30, v9, a6, a7, v8, a4, a5);
  if ( !v78 && v9->m128i_i64[0] && !v19 )
  {
    v34 = v10[1];
    v76 = v73;
    if ( v73 > 0x40 )
      sub_2205510(&v75);
    else
      v75 = v72;
    *(__m128i *)v82 = _mm_loadu_si128(v7 + 2);
    v77 = v74;
    v83[0] = v7[3].m128i_i64[0];
    sub_B87650((__int64)&src, (__int64 *)v82);
    v35 = src;
    v36 = n;
    v37 = sub_2244B30(src, n);
    v38 = (unsigned int)sub_2244CB0(v34 + 27480, v35, v36, v37);
    v40 = (__int64 *)(*(_QWORD *)(v34 + 27480) + 8 * v38);
    if ( *v40 )
    {
      if ( *v40 != -8 )
      {
        sub_1AFEC20(&v71, v40, 0);
        goto LABEL_44;
      }
      --*(_DWORD *)(v34 + 27496);
    }
    v64 = v40;
    v61 = v38;
    v46 = sub_22300B0(v36 + 33, 8, v38, v40, v38, v39);
    v47 = v61;
    v48 = v64;
    v49 = v46;
    if ( v36 )
    {
      memcpy((void *)(v46 + 32), v35, v36);
      v48 = v64;
      v47 = v61;
    }
    v50 = v76;
    *(_BYTE *)(v49 + v36 + 32) = 0;
    *(_QWORD *)v49 = v36;
    *(_QWORD *)(v49 + 8) = v7;
    *(_DWORD *)(v49 + 24) = v50;
    if ( v50 > 0x40 )
    {
      v65 = v48;
      v62 = v47;
      sub_2205510(v49 + 16);
      v48 = v65;
      v47 = v62;
    }
    else
    {
      *(_QWORD *)(v49 + 16) = v75;
    }
    *(_BYTE *)(v49 + 28) = v77;
    *v48 = v49;
    ++*(_DWORD *)(v34 + 27492);
    v51 = sub_22450D0(v34 + 27480, v47);
    sub_1AFEC20(&v71, (__int64 *)(*(_QWORD *)(v34 + 27480) + 8LL * v51), 0);
LABEL_44:
    if ( src != v86 )
      operator delete(src);
    if ( v76 > 0x40 && v75 )
      operator delete[](v75);
  }
  if ( v80 > 0x40 && v79 )
    operator delete[](v79);
LABEL_11:
  if ( v73 > 0x40 && v72 )
    operator delete[](v72);
  return v7;
}
