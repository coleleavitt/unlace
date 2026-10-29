void __fastcall sub_1F19970(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // r14
  unsigned int v23; // r12d
  int v24; // eax
  int v25; // r13d
  __int64 *v26; // rbp
  __int64 v27; // rbx
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // r15
  int v31; // r14d
  __int64 v32; // rax
  int v33; // r15d
  unsigned __int64 v34; // rax
  _QWORD *v35; // r14
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char *v43; // rsi
  int v44; // r13d
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // r12d
  int v50; // r13d
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r15
  int v56; // r14d
  int v57; // r15d
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rbp
  __int64 v62; // rsi
  bool v63; // r13
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  unsigned __int64 *v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rdx
  void *v75; // rdi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rsi
  char *v78; // rcx
  __m128i v79; // xmm1
  unsigned __int64 v80; // r12
  unsigned __int64 *v81; // rcx
  __m128i v82; // [rsp+0h] [rbp-548h] BYREF
  void **v83; // [rsp+10h] [rbp-538h]
  __int64 v84; // [rsp+18h] [rbp-530h]
  void **v85; // [rsp+20h] [rbp-528h]
  void **v86; // [rsp+28h] [rbp-520h]
  void **v87; // [rsp+30h] [rbp-518h]
  void **v88; // [rsp+38h] [rbp-510h]
  __int64 v89; // [rsp+40h] [rbp-508h]
  __int64 v90; // [rsp+48h] [rbp-500h]
  __m128i v91; // [rsp+50h] [rbp-4F8h] BYREF
  __int64 v92; // [rsp+60h] [rbp-4E8h]
  void *v93; // [rsp+70h] [rbp-4D8h] BYREF
  __int64 v94; // [rsp+78h] [rbp-4D0h]
  _BYTE v95[64]; // [rsp+80h] [rbp-4C8h] BYREF
  void *v96; // [rsp+C0h] [rbp-488h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-480h]
  _BYTE v98[128]; // [rsp+D0h] [rbp-478h] BYREF
  void *v99; // [rsp+150h] [rbp-3F8h] BYREF
  __int64 v100; // [rsp+158h] [rbp-3F0h]
  _BYTE v101[128]; // [rsp+160h] [rbp-3E8h] BYREF
  void *v102; // [rsp+1E0h] [rbp-368h] BYREF
  __int64 v103; // [rsp+1E8h] [rbp-360h]
  _BYTE v104[128]; // [rsp+1F0h] [rbp-358h] BYREF
  void *v105; // [rsp+270h] [rbp-2D8h] BYREF
  __int64 v106; // [rsp+278h] [rbp-2D0h]
  _BYTE v107[128]; // [rsp+280h] [rbp-2C8h] BYREF
  void *ptr[2]; // [rsp+300h] [rbp-248h] BYREF
  __int64 v109; // [rsp+310h] [rbp-238h]

  v2 = (__int64)a2;
  v3 = a1;
  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  a2[3] = v4;
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  a2[20] = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  v7 = sub_1EE7490(v5);
  v8 = *v3;
  a2[22] = v7;
  v9 = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  a2[21] = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9);
  v10 = sub_1EE7490(v8);
  v11 = *v3;
  a2[23] = v10;
  v16.m128i_i64[0] = sub_1F194E0(v11, (__int64)a2, v12, v13, v14, v15);
  v17 = *v3;
  v82 = v16;
  *(__m128i *)(v2 + 40) = _mm_load_si128(&v82);
  sub_1F194A0((__int64)&v91, v17);
  v18 = v92;
  v19 = _mm_load_si128(&v91);
  v20 = *v3;
  *(_QWORD *)(v2 + 72) = v92;
  *(__m128i *)(v2 + 56) = v19;
  *(__m128i *)ptr = v19;
  v109 = v18;
  v21 = sub_1EE7490(v20);
  v22 = *(unsigned int *)(v2 + 16);
  v23 = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 96) = v21;
  v24 = *(_DWORD *)(v2 + 24);
  v25 = v22;
  v96 = v98;
  LODWORD(v84) = v24;
  LODWORD(v89) = *(_DWORD *)(v2 + 28);
  v87 = &v96;
  v97 = 0x1000000000LL;
  if ( v22 > 0x10 )
  {
    sub_2237220(v87, v98, v22, 8);
    v83 = (void **)(v2 + 104);
  }
  else
  {
    v83 = (void **)(v2 + 104);
    if ( !(_DWORD)v22 )
    {
      ptr[0] = v96;
      ptr[1] = (void *)(unsigned int)v97;
      v82.m128i_i64[0] = (__int64)ptr;
      sub_EB8020((__int64)ptr, (char *)(v2 + 104));
      v88 = &v99;
      v99 = v101;
      v100 = 0x1000000000LL;
      goto LABEL_9;
    }
  }
  v82.m128i_i64[0] = v2;
  v26 = v3;
  v27 = (__int64)v87;
  v28 = 0;
  do
  {
    ++v28;
    v29 = sub_1F61940(*(_QWORD *)(*v26 + 8));
    sub_14B7B40(v27, v29);
  }
  while ( v28 != (_DWORD)v22 );
  v3 = v26;
  v2 = v82.m128i_i64[0];
  ptr[0] = v96;
  ptr[1] = (void *)(unsigned int)v97;
  v82.m128i_i64[0] = (__int64)ptr;
  sub_EB8020((__int64)ptr, (char *)v83);
  v88 = &v99;
  v99 = v101;
  v100 = 0x1000000000LL;
  if ( v22 > 0x10 )
    sub_2237220(v88, v101, v22, 8);
  v30 = (__int64)v88;
  v31 = 0;
  do
  {
    ++v31;
    v32 = sub_1F61940(*(_QWORD *)(*v3 + 8));
    sub_14B7B40(v30, v32);
  }
  while ( v31 != v25 );
LABEL_9:
  ptr[0] = v99;
  ptr[1] = (void *)(unsigned int)v100;
  sub_EB8020(v82.m128i_i64[0], (char *)(v2 + 8LL * *(unsigned int *)(v2 + 16) + 104));
  v83 = &v102;
  v102 = v104;
  v103 = 0x1000000000LL;
  if ( v23 <= 0x10uLL )
  {
    if ( v23 )
      goto LABEL_11;
LABEL_58:
    v34 = (unsigned int)v103;
    goto LABEL_15;
  }
  sub_2237220(v83, v104, v23, 8);
  if ( !v23 )
    goto LABEL_58;
LABEL_11:
  v33 = 0;
  v85 = v83 + 2;
  do
  {
    while ( 1 )
    {
      v35 = *(_QWORD **)(*v3 + 8);
      v36 = sub_1EE13A0((__int64)v35, *(_QWORD *)(*v3 + 16), (__int64 *)(*v3 + 32), (_DWORD *)(*v3 + 24));
      v41 = sub_1EDB980(v35, v36, v37, v38, v39, v40);
      v42 = (unsigned int)v103 + 1LL;
      if ( v42 > HIDWORD(v103) )
        break;
      ++v33;
      *((_QWORD *)v102 + (unsigned int)v103) = v41;
      v34 = (unsigned int)(v103 + 1);
      LODWORD(v103) = v103 + 1;
      if ( v33 == v23 )
        goto LABEL_15;
    }
    v86 = (void **)v41;
    ++v33;
    sub_2237220(v83, v85, v42, 8);
    *((_QWORD *)v102 + (unsigned int)v103) = v86;
    v34 = (unsigned int)(v103 + 1);
    LODWORD(v103) = v103 + 1;
  }
  while ( v23 != v33 );
LABEL_15:
  ptr[1] = (void *)v34;
  v43 = (char *)(v2 + 8LL * (unsigned int)(2 * *(_DWORD *)(v2 + 16)) + 104);
  ptr[0] = v102;
  sub_1EB4E80(v82.m128i_i64[0], v43);
  v85 = &v93;
  v93 = v95;
  v94 = 0x1000000000LL;
  if ( v23 > 0x10uLL )
    sub_2237220(v85, v95, v23, 4);
  v44 = 0;
  v45 = (__int64)v85;
  if ( v23 )
  {
    do
    {
      v46 = *v3;
      ++v44;
      v47 = *(unsigned int *)(*v3 + 24);
      *(_DWORD *)(v46 + 24) = v47 + 1;
      sub_9B7040(v45, *(_QWORD *)(*(_QWORD *)(v46 + 32) + 8 * v47));
    }
    while ( v44 != v23 );
  }
  v48 = *(unsigned int *)(v2 + 20);
  ptr[0] = v93;
  ptr[1] = (void *)(unsigned int)v94;
  sub_1EB4EB0(v82.m128i_i64[0], (char *)(v2 + 8 * (v48 + (unsigned int)(2 * *(_DWORD *)(v2 + 16))) + 104));
  v86 = &v105;
  v105 = v107;
  v106 = 0x2000000000LL;
  if ( (unsigned int)v84 > 0x20uLL )
    sub_2237220(v86, v107, (unsigned int)v84, 4);
  v49 = 0;
  if ( (_DWORD)v84 )
  {
    v50 = v84;
    v51 = (__int64)v86;
    do
    {
      v52 = *v3;
      ++v49;
      v53 = *(unsigned int *)(*v3 + 24);
      *(_DWORD *)(v52 + 24) = v53 + 1;
      sub_9B7040(v51, *(_QWORD *)(*(_QWORD *)(v52 + 32) + 8 * v53));
    }
    while ( v49 != v50 );
  }
  v54 = *(unsigned int *)(v2 + 20);
  v55 = v82.m128i_i64[0];
  ptr[0] = v105;
  ptr[1] = (void *)(unsigned int)v106;
  sub_1EB4EB0(v82.m128i_i64[0], (char *)(v2 + 12 * v54 + 104 + 8LL * (unsigned int)(2 * *(_DWORD *)(v2 + 16))));
  ptr[0] = (void *)(v55 + 16);
  ptr[1] = (void *)0x2000000000LL;
  if ( (unsigned int)v89 <= 0x20uLL )
  {
    v56 = v89;
    if ( (_DWORD)v89 )
      goto LABEL_26;
LABEL_56:
    v73 = LODWORD(ptr[1]);
    goto LABEL_33;
  }
  sub_2237220(v82.m128i_i64[0], v55 + 16, (unsigned int)v89, 16);
  v56 = v89;
  if ( !(_DWORD)v89 )
    goto LABEL_56;
LABEL_26:
  v84 = v2;
  v57 = 0;
  v89 = v82.m128i_i64[0] + 16;
  do
  {
    v58 = sub_1F61940(*(_QWORD *)(*v3 + 8));
    v59 = *v3;
    v60 = *(unsigned int *)(*v3 + 24);
    v61 = *(_QWORD **)(*v3 + 8);
    v62 = *(_QWORD *)(*v3 + 16);
    *(_DWORD *)(v59 + 24) = v60 + 1;
    v63 = *(_QWORD *)(*(_QWORD *)(v59 + 32) + 8 * v60) != 0;
    v64 = sub_1EE13A0((__int64)v61, v62, (__int64 *)(v59 + 32), (_DWORD *)(v59 + 24));
    v69 = sub_1EDB980(v61, v64, v65, v66, v67, v68);
    v70 = LODWORD(ptr[1]);
    v71 = HIDWORD(ptr[1]);
    if ( LODWORD(ptr[1]) >= (unsigned __int64)HIDWORD(ptr[1]) )
    {
      v80 = (2LL * v63) | v58 & 0xFFFFFFFFFFFFFFFDLL;
      if ( v69 )
      {
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
        v70 = LODWORD(ptr[1]);
        v71 = HIDWORD(ptr[1]);
      }
      if ( v70 + 1 > v71 )
      {
        v90 = v69;
        sub_2237220(v82.m128i_i64[0], v89, v70 + 1, 16);
        v70 = LODWORD(ptr[1]);
        v69 = v90;
      }
      v81 = (unsigned __int64 *)((char *)ptr[0] + 16 * v70);
      *v81 = v80;
      v81[1] = v69;
      v73 = (unsigned int)++LODWORD(ptr[1]);
    }
    else
    {
      v72 = (unsigned __int64 *)((char *)ptr[0] + 16 * LODWORD(ptr[1]));
      *v72 = (2LL * v63) | v58 & 0xFFFFFFFFFFFFFFFDLL;
      if ( v69 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v72[1] = v69;
      v73 = (unsigned int)++LODWORD(ptr[1]);
    }
    ++v57;
  }
  while ( v57 != v56 );
  v2 = v84;
LABEL_33:
  v74 = 16 * v73;
  v75 = ptr[0];
  v76 = (v2
       + 4LL * (unsigned int)(*(_DWORD *)(v2 + 24) + *(_DWORD *)(v2 + 20))
       + 104
       + 8 * (*(unsigned int *)(v2 + 20) + (unsigned __int64)(unsigned int)(2 * *(_DWORD *)(v2 + 16)))
       + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  v77 = v76 + v74;
  v78 = (char *)ptr[0] - v76;
  if ( v74 )
  {
    do
    {
      v79 = _mm_loadu_si128((const __m128i *)&v78[v76]);
      v76 += 16LL;
      *(__m128i *)(v76 - 16) = v79;
    }
    while ( v76 != v77 );
  }
  if ( v75 != (void *)(v82.m128i_i64[0] + 16) )
    free(v75);
  if ( v105 != v86 + 2 )
    free(v105);
  if ( v93 != v85 + 2 )
    free(v93);
  if ( v102 != v83 + 2 )
    free(v102);
  if ( v99 != v88 + 2 )
    free(v99);
  if ( v96 != v87 + 2 )
    free(v96);
}
