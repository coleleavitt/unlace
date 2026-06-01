void __fastcall sub_16EFD60(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 *v16; // rax
  char v17; // al
  _QWORD *v18; // rax
  unsigned __int64 v19; // r15
  __int64 *v20; // r12
  bool v21; // zf
  __int64 *v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // r15
  __int64 *v25; // r12
  bool v26; // zf
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  __int64 *v34; // r12
  bool v35; // zf
  __int64 *v36; // rax
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rbp
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 *i; // rax
  const void *v43; // r14
  size_t v44; // rbp
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r10
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // r11d
  _QWORD *v55; // r10
  _QWORD *v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 *j; // rax
  const void *v60; // r14
  size_t v61; // rbp
  unsigned int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // r10
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // r11d
  _QWORD *v72; // r10
  _QWORD *v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 *k; // rax
  _BYTE *v77; // r14
  signed __int64 v78; // rbx
  __int64 *v79; // r15
  unsigned int v80; // eax
  int v81; // eax
  __int64 *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r15
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r15
  __int64 v96; // rax
  _QWORD *v97; // rax
  unsigned int v99; // [rsp+14h] [rbp-11Ch]
  unsigned int v100; // [rsp+18h] [rbp-118h]
  unsigned int v101; // [rsp+18h] [rbp-118h]
  char *v102; // [rsp+20h] [rbp-110h]
  char *v103; // [rsp+20h] [rbp-110h]
  _QWORD *v104; // [rsp+30h] [rbp-100h]
  _QWORD *v105; // [rsp+30h] [rbp-100h]
  __int64 v106; // [rsp+40h] [rbp-F0h] BYREF
  void *ptr; // [rsp+48h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-E0h]
  __int64 *v109[2]; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+78h] [rbp-B8h]
  unsigned __int8 *v111[11]; // [rsp+88h] [rbp-A8h] BYREF
  char v112; // [rsp+E0h] [rbp-50h]
  unsigned int v113; // [rsp+E8h] [rbp-48h]
  char v114; // [rsp+ECh] [rbp-44h]

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v3 == 3 )
    return;
  if ( v3 <= 1 )
    return;
  v99 = (unsigned int)a2;
  v4 = sub_15F16E0(a1);
  v9 = v4;
  if ( !v4 || (*(_BYTE *)(v4 + 29) & 1) == 0 )
    return;
  v10 = sub_B8C3D0(v4, (__int64)a2, v5, v6, v7, v8);
  v13 = *v10;
  v14 = (__int64 *)(*v10 + 8LL * *((unsigned int *)v10 + 2));
  if ( *v10 < (unsigned __int64)v14 )
  {
    v16 = (__int64 *)*v10;
    while ( 1 )
    {
      v13 = *v16;
      if ( *(_WORD *)(*v16 + 36) == 207 )
        break;
      if ( v14 == ++v16 )
        return;
    }
    if ( v14 == v16 )
      return;
  }
  else
  {
    if ( (__int64 *)v13 == v14 )
      return;
    if ( *(_WORD *)(*v14 + 36) != 207 )
    {
      v15 = (__int64 **)(v14 + 1);
      do
      {
        if ( v15 == (__int64 **)v13 )
          return;
        v14 = *v15++;
      }
      while ( *((_WORD *)v14 + 18) != 207 );
    }
  }
  ptr = nullptr;
  v17 = *(_BYTE *)(a3 + 29);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  if ( (v17 & 1) == 0 )
    goto LABEL_27;
  v18 = sub_B8C3D0(a3, (__int64)a2, v13, (__int64)v14, v11, v12);
  v13 = *((unsigned int *)v18 + 2);
  v19 = *v18 + 8 * v13;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v20 = (__int64 *)*sub_B8C3D0(a3, (__int64)a2, v13, (__int64)v14, v11, v12);
  else
    v20 = nullptr;
  v21 = v20 == (__int64 *)v19;
  if ( (unsigned __int64)v20 >= v19 )
    goto LABEL_55;
LABEL_23:
  v22 = v20;
  while ( 1 )
  {
    v13 = *v22;
    if ( *(_WORD *)(*v22 + 36) == 207 )
      break;
    if ( (__int64 *)v19 == ++v22 )
      goto LABEL_26;
  }
  do
  {
LABEL_49:
    v41 = *v20;
    for ( i = v20 + 1; *(_WORD *)(v41 + 36) != 207; ++i )
    {
      v41 = *i;
      v20 = i;
    }
    v43 = *(const void **)(v41 + 48);
    v44 = *(unsigned int *)(v41 + 40);
    v45 = sub_2244B30(v43, v44);
    v46 = sub_2244CB0(&ptr, v43, v44, v45);
    v50 = (__int64 *)((char *)ptr + 8 * v46);
    if ( *v50 )
    {
      if ( *v50 != -8 )
      {
        a2 = (__int64 *)((char *)ptr + 8 * v46);
        sub_A45C10(v109, v50, 0);
        goto LABEL_54;
      }
      --si128.m128i_i32[2];
    }
    v102 = (char *)ptr + 8 * v46;
    v100 = v46;
    v53 = sub_22300B0(v44 + 9, 8, v46, v47, v48, v49);
    v54 = v100;
    v55 = v102;
    v56 = (_QWORD *)v53;
    if ( v44 )
    {
      v104 = (_QWORD *)v53;
      memcpy((void *)(v53 + 8), v43, v44);
      v56 = v104;
      v55 = v102;
      v54 = v100;
    }
    *((_BYTE *)v56 + v44 + 8) = 0;
    *v56 = v44;
    *v55 = v56;
    ++si128.m128i_i32[1];
    v57 = sub_22450D0(&ptr, v54);
    a2 = (__int64 *)((char *)ptr + 8 * v57);
    sub_A45C10(v109, a2, 0);
LABEL_54:
    v21 = ++v20 == (__int64 *)v19;
    if ( (unsigned __int64)v20 < v19 )
      goto LABEL_23;
LABEL_55:
    if ( v21 )
      goto LABEL_26;
    v51 = (__int64 *)(v19 + 8);
  }
  while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 207 );
  while ( 1 )
  {
    v13 = (__int64)v51;
    if ( v20 == v51 )
      break;
    v52 = *v51++;
    if ( *(_WORD *)(v52 + 36) == 207 )
      goto LABEL_49;
  }
LABEL_26:
  v17 = *(_BYTE *)(a3 + 29);
LABEL_27:
  if ( (v17 & 1) == 0 )
    goto LABEL_34;
  v23 = sub_B8C3D0(a3, (__int64)a2, v13, (__int64)v14, v11, v12);
  v13 = *((unsigned int *)v23 + 2);
  v24 = *v23 + 8 * v13;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v25 = (__int64 *)*sub_B8C3D0(a3, (__int64)a2, v13, (__int64)v14, v11, v12);
  else
    v25 = nullptr;
  v26 = v25 == (__int64 *)v24;
  if ( (unsigned __int64)v25 >= v24 )
    goto LABEL_71;
  while ( 2 )
  {
    v27 = v25;
    while ( 1 )
    {
      v13 = *v27;
      if ( *(_WORD *)(*v27 + 36) == 208 )
        break;
      if ( (__int64 *)v24 == ++v27 )
        goto LABEL_34;
    }
LABEL_65:
    v58 = *v25;
    for ( j = v25 + 1; *(_WORD *)(v58 + 36) != 208; ++j )
    {
      v58 = *j;
      v25 = j;
    }
    v60 = *(const void **)(v58 + 48);
    v61 = *(unsigned int *)(v58 + 40);
    v62 = sub_2244B30(v60, v61);
    v63 = sub_2244CB0(&ptr, v60, v61, v62);
    v67 = (__int64 *)((char *)ptr + 8 * v63);
    if ( *v67 )
    {
      if ( *v67 != -8 )
      {
        a2 = (__int64 *)((char *)ptr + 8 * v63);
        sub_A45C10(v109, v67, 0);
        goto LABEL_70;
      }
      --si128.m128i_i32[2];
    }
    v103 = (char *)ptr + 8 * v63;
    v101 = v63;
    v70 = sub_22300B0(v61 + 9, 8, v63, v64, v65, v66);
    v71 = v101;
    v72 = v103;
    v73 = (_QWORD *)v70;
    if ( v61 )
    {
      v105 = (_QWORD *)v70;
      memcpy((void *)(v70 + 8), v60, v61);
      v73 = v105;
      v72 = v103;
      v71 = v101;
    }
    *((_BYTE *)v73 + v61 + 8) = 0;
    *v73 = v61;
    *v72 = v73;
    ++si128.m128i_i32[1];
    v74 = sub_22450D0(&ptr, v71);
    a2 = (__int64 *)((char *)ptr + 8 * v74);
    sub_A45C10(v109, a2, 0);
LABEL_70:
    v26 = ++v25 == (__int64 *)v24;
    if ( (unsigned __int64)v25 < v24 )
      continue;
    break;
  }
LABEL_71:
  if ( v26 )
    goto LABEL_34;
  v68 = (__int64 *)(v24 + 8);
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 208 )
    goto LABEL_65;
  while ( 1 )
  {
    v13 = (__int64)v68;
    if ( v25 == v68 )
      break;
    v69 = *v68++;
    if ( *(_WORD *)(v69 + 36) == 208 )
      goto LABEL_65;
  }
LABEL_34:
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_41;
  v28 = sub_B8C3D0(v9, (__int64)a2, v13, (__int64)v14, v11, v12);
  v32 = *((unsigned int *)v28 + 2);
  v33 = *v28 + 8 * v32;
  if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
    v34 = (__int64 *)*sub_B8C3D0(v9, (__int64)a2, v32, v29, v30, v31);
  else
    v34 = nullptr;
  v35 = v34 == (__int64 *)v33;
  if ( (unsigned __int64)v34 >= v33 )
    goto LABEL_90;
  while ( 2 )
  {
    v36 = v34;
    while ( *(_WORD *)(*v36 + 36) != 207 )
    {
      if ( (__int64 *)v33 == ++v36 )
        goto LABEL_41;
    }
LABEL_81:
    v75 = *v34;
    for ( k = v34 + 1; *(_WORD *)(v75 + 36) != 207; ++k )
    {
      v75 = *k;
      v34 = k;
    }
    v77 = *(_BYTE **)(v75 + 48);
    v78 = *(unsigned int *)(v75 + 40);
    sub_105CB60(v109, (__int64 *)ptr + si128.m128i_u32[0], 1);
    v79 = v109[0];
    v80 = sub_2244B30(v77, v78);
    v81 = sub_2244E60(&ptr, v77, v78, v80);
    if ( v81 == -1 )
      sub_105CB60(v109, (__int64 *)ptr + si128.m128i_u32[0], 1);
    else
      sub_105CB60(v109, (__int64 *)ptr + v81, 1);
    if ( v79 == v109[0] )
    {
      sub_168B9F0((__int64)v109, (__int64 *)(a1 + 8), v99, 0x1D01u, 0);
      if ( v112 )
      {
        sub_16B73F0(v111, a3);
      }
      else
      {
        if ( !v114 )
          goto LABEL_88;
        v88 = sub_168B9E0(v109);
        v89 = v110;
        if ( v110 )
          v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
        v106 = v89;
        v90 = sub_1587BC0(v88, &v106, v84, v85, v86, v87);
        sub_16B73F0((unsigned __int8 **)(*v90 + 32LL * v113 + 8), a3);
      }
      if ( v112 )
      {
        sub_AEC220(v111, v77, v78);
      }
      else if ( v114 )
      {
        v95 = sub_168B9E0(v109);
        v96 = v110;
        if ( v110 )
          v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
        v106 = v96;
        v97 = sub_1587BC0(v95, &v106, v91, v92, v93, v94);
        sub_AEC220((unsigned __int8 **)(*v97 + 32LL * v113 + 8), v77, v78);
      }
LABEL_88:
      sub_15F7200(v109);
    }
    v35 = ++v34 == (__int64 *)v33;
    if ( (unsigned __int64)v34 < v33 )
      continue;
    break;
  }
LABEL_90:
  if ( v35 )
    goto LABEL_41;
  v82 = (__int64 *)(v33 + 8);
  if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 207 )
    goto LABEL_81;
  while ( v34 != v82 )
  {
    v83 = *v82++;
    if ( *(_WORD *)(v83 + 36) == 207 )
      goto LABEL_81;
  }
LABEL_41:
  v37 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v38 = 0;
    v39 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v40 = *(_QWORD **)&v37[v38];
      if ( v40 )
      {
        if ( v40 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v37[v38], *v40 + 9LL, 8);
          v37 = (char *)ptr;
        }
      }
      v38 += 8;
    }
    while ( v38 != v39 );
  }
  free(v37);
}
