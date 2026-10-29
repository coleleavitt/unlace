unsigned __int64 __fastcall sub_1713960(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char v5; // bp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r8
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __m128i v29; // rax
  _QWORD *v30; // rdi
  __m128i *v31; // rsi
  __int64 v32; // rbp
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 i; // r14
  char **v39; // rbx
  __m128i v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned int *v49; // rax
  __m128i v50; // rax
  const void ***v51; // rsi
  char **v53; // r13
  __m128i v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  char **v57; // rbx
  __m128i v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __m128 v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __m128i v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r9
  char *v71; // rax
  __int64 v72; // rax
  unsigned int *v73; // rax
  char **v74; // rbx
  __m128i v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v80; // [rsp+8h] [rbp-180h]
  __m128i v81; // [rsp+10h] [rbp-178h]
  __int64 v82; // [rsp+20h] [rbp-168h]
  __int64 v83; // [rsp+28h] [rbp-160h]
  __int64 *v84; // [rsp+30h] [rbp-158h]
  unsigned __int64 v85; // [rsp+38h] [rbp-150h]
  __int64 v86; // [rsp+48h] [rbp-140h] BYREF
  __m128i v87; // [rsp+50h] [rbp-138h] BYREF
  char *v88; // [rsp+60h] [rbp-128h]
  int v89; // [rsp+68h] [rbp-120h]
  int v90; // [rsp+70h] [rbp-118h]
  __int128 v91; // [rsp+78h] [rbp-110h]
  __int64 v92; // [rsp+88h] [rbp-100h]
  char v93; // [rsp+90h] [rbp-F8h]
  __int64 v94; // [rsp+98h] [rbp-F0h]
  __int64 v95; // [rsp+A0h] [rbp-E8h]
  __int64 v96; // [rsp+A8h] [rbp-E0h]
  __m128i v97; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-C8h]
  __int64 v99; // [rsp+C8h] [rbp-C0h]
  __int64 v100; // [rsp+D0h] [rbp-B8h]
  __int64 v101; // [rsp+D8h] [rbp-B0h]
  _QWORD *v102; // [rsp+E0h] [rbp-A8h]
  __int64 v103; // [rsp+E8h] [rbp-A0h]
  _QWORD v104[10]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v105; // [rsp+140h] [rbp-48h] BYREF

  v5 = a2;
  v79 = a4;
  v82 = a5;
  LOBYTE(v80) = a2;
  v7 = sub_15F1670(a1);
  if ( !v7 )
    return 0;
  v8 = v7;
  v13 = sub_BA85D0(v7);
  if ( !v13 )
    return 0;
  v14 = 0;
LABEL_4:
  v13 = sub_BAB630(v13, a2, v9, v10, v11, v12);
  if ( v13 )
  {
    while ( !v14 )
    {
      while ( 1 )
      {
        a2 = *(_QWORD *)(v8 + 40);
        v14 = sub_BAA9D0(v13, a2, (*(_QWORD *)(v8 + 56) >> 17) & 1LL, 0, v15, (__int64)v16);
        if ( v14 )
          goto LABEL_4;
        v17 = *(_QWORD *)(v13 + 120);
        if ( !v17 )
        {
          a2 = *(_QWORD *)(v13 + 96);
          sub_A794E0((__int64 *)(a2 + 88), a2, v9, v10, v11, v12);
          v17 = *(_QWORD *)(v13 + 120);
        }
        v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18 )
        {
          v9 = v18;
          if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
          {
            sub_BA8900(v13);
            v9 = *(_QWORD *)(v13 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v19 = *(_QWORD *)(v9 + 56);
          if ( v19 )
            break;
        }
        v13 = sub_BAB630(v13, a2, v9, v10, v11, v12);
        if ( !v13 )
          return 0;
      }
      while ( 1 )
      {
        a2 = *(_QWORD *)(v8 + 40);
        v14 = sub_BAA9D0(v19, a2, (*(_QWORD *)(v8 + 56) >> 17) & 1LL, 0, v11, v12);
        if ( v14 )
          break;
        v19 = *(_QWORD *)(v19 + 128);
        if ( !v19 )
          goto LABEL_4;
      }
      v13 = sub_BAB630(v13, a2, v9, v10, v11, v12);
      if ( !v13 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( !v14 )
      return 0;
  }
  v20 = *(unsigned int *)(v8 + 104);
  if ( (_DWORD)v20 != *(_DWORD *)(v14 + 104) )
    return 0;
  v21 = (*(_QWORD *)(v8 + 56) >> 18) & 1LL;
  if ( ((*(_QWORD *)(v8 + 56) & 0x40000LL) != 0) != ((*(_QWORD *)(v14 + 56) & 0x40000LL) != 0) )
    return 0;
  v22 = *(_QWORD *)(v8 + 96);
  v23 = *(_QWORD *)(v14 + 96);
  v24 = v22 + 8 * v20;
  if ( v22 != v24 )
  {
    while ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v22 + 48LL) & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v23 + 48LL)
                                                                              & 0xFFFFFFFFFFFFFFF0LL]
                                                           & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
      if ( (v21 & 7) != 0 || (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        break;
      v22 += 8;
      v23 += 8;
      if ( v24 == v22 )
        goto LABEL_25;
    }
    return 0;
  }
LABEL_25:
  v25 = *(_QWORD **)(a1 + 248);
  v98 = 0;
  v26 = *(_QWORD **)(a1 + 240);
  v99 = 0;
  v102 = v104;
  v27 = _mm_loadu_si128((const __m128i *)(v82 + 184));
  v103 = 0x400000000LL;
  v28 = *(_QWORD *)(v82 + 320);
  v104[8] = &v105;
  v83 = v28;
  v81 = v27;
  v97 = v27;
  v100 = 0;
  v101 = 0;
  v104[9] = 0x200000000LL;
  v29.m128i_i64[0] = sub_16FEC70(v26, v25, v21, v28, v24, v16);
  v30 = *(_QWORD **)(a1 + 248);
  v31 = &v87;
  v87 = v29;
  v81.m128i_i64[0] = (__int64)&v87;
  sub_1702F80(v30, &v87, v14, v83, (char ***)&v97);
  if ( v5 )
  {
    sub_15A2F70((__int64)&v97, (__int64)"super");
    v31 = (__m128i *)(&word_12 + 1);
    sub_15A3210((__int64)&v97, 19, (char *)&byte_22F0C30);
    v86 = *(_QWORD *)(v8 + 40);
    if ( (v86 & 3) == 1 )
    {
      v57 = (char **)v97.m128i_i64[0];
      v58.m128i_i64[0] = sub_FDE9A0(&v86, 0);
      LOWORD(v90) = 261;
      v87 = v58;
      v31 = (__m128i *)sub_15A4EB0(v57, (const void ***)v81.m128i_i64[0], v58.m128i_i64[1], v59, v60, v61);
      sub_15A2FD0((__int64)&v97, (__int64)v31);
      goto LABEL_44;
    }
    goto LABEL_27;
  }
  v86 = *(_QWORD *)(v8 + 40);
  if ( (v86 & 3) != 1 )
  {
LABEL_27:
    v32 = *(_QWORD *)(v8 + 96);
    v84 = &v86;
    v33 = sub_FDE930(&v86);
    if ( !v33 )
      goto LABEL_44;
    v85 = v14;
    v83 = (unsigned int)(v33 - 1);
    for ( i = 0; v79 >= i; ++i )
    {
      if ( v79 <= i )
      {
        v39 = (char **)v97.m128i_i64[0];
        if ( (_BYTE)v80 )
          goto LABEL_31;
        v68.m128i_i64[0] = sub_FDE9A0(v84, i);
        v87 = v68;
        LOWORD(v90) = 773;
        v88 = ":";
        v71 = sub_15A4EB0(v39, (const void ***)v81.m128i_i64[0], v68.m128i_i64[1], v69, 773, v70);
        sub_15A2F70((__int64)&v97, (__int64)v71);
        v72 = *(_QWORD *)(*(_QWORD *)(v32 + 8 * i) + 40LL);
        if ( (v72 & 7) != 0 )
          BUG();
        v45 = 261;
        v51 = (const void ***)v81.m128i_i64[0];
        v73 = *(unsigned int **)((v72 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v50.m128i_i64[1] = *v73;
        v50.m128i_i64[0] = (__int64)(v73 + 4);
        LOWORD(v90) = 261;
        v87 = v50;
LABEL_33:
        v31 = (__m128i *)sub_15A4EB0((char **)v97.m128i_i64[0], v51, v50.m128i_i64[1], v45, v46, v47);
        sub_15A3090((__int64)&v97, (__int64)v31);
        goto LABEL_34;
      }
      v53 = (char **)v97.m128i_i64[0];
      v54.m128i_i64[0] = sub_FDE9A0(v84, i);
      v87 = v54;
      LOWORD(v90) = 773;
      v88 = ":";
      v31 = (__m128i *)sub_15A4EB0(v53, (const void ***)v81.m128i_i64[0], v54.m128i_i64[1], v55, v56, 773);
      sub_15A30F0((__int64)&v97, (__int64)v31);
LABEL_34:
      if ( v83 == i )
      {
        v14 = v85;
        goto LABEL_44;
      }
    }
    sub_15A3210((__int64)&v97, 19, (char *)&byte_22F0C30);
    v39 = (char **)v97.m128i_i64[0];
LABEL_31:
    v40.m128i_i64[0] = sub_FDE9A0(v84, i);
    LOWORD(v90) = 773;
    v87 = v40;
    v88 = ":";
    v44 = sub_15A4EB0(v39, (const void ***)v81.m128i_i64[0], v40.m128i_i64[1], v41, v42, v43);
    sub_15A2FD0((__int64)&v97, (__int64)v44);
    v48 = *(_QWORD *)(*(_QWORD *)(v32 + 8 * i) + 40LL);
    if ( (v48 & 7) != 0 )
      BUG();
    v49 = *(unsigned int **)((v48 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v50.m128i_i64[1] = *v49;
    v50.m128i_i64[0] = (__int64)(v49 + 4);
    LOWORD(v90) = 261;
    v51 = (const void ***)v81.m128i_i64[0];
    v87 = v50;
    goto LABEL_33;
  }
  v74 = (char **)v97.m128i_i64[0];
  v75.m128i_i64[0] = sub_FDE9A0(&v86, 0);
  LOWORD(v90) = 261;
  v87 = v75;
  v31 = (__m128i *)sub_15A4EB0(v74, (const void ***)v81.m128i_i64[0], v75.m128i_i64[1], v76, v77, v78);
  sub_15A2F70((__int64)&v97, (__int64)v31);
LABEL_44:
  v80 = v14;
  v79 = sub_15A5CA0((__int64)&v97, (__int64)v31, v34, v35, v36, v37);
  v62 = v81.m128i_i64[0];
  v89 = 3;
  v88 = (char *)&dword_14;
  v63 = _mm_loadh_ps((const double *)&v79);
  v90 = 0;
  v87 = (__m128i)v63;
  v91 = 0;
  v93 = v93 & 0x80 | 0x40;
  v92 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  sub_15A3440((unsigned int *)v81.m128i_i64[0], 1, v64, v65, v66, v67);
  sub_1706C30(v82, v62);
  sub_1705410(v62 + 40);
  sub_1704B40(&v97);
  return v14;
}
