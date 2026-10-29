void __fastcall sub_1F1AA90(__int64 *a1, __int64 a2)
{
  char v2; // r13
  void **v3; // rbp
  __int64 *v4; // rbx
  _DWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  __m128i v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // r14
  __int32 v23; // eax
  int v24; // r12d
  __int64 *v25; // rbp
  __int64 v26; // rbx
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // r14d
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  int v33; // r14d
  char *v34; // r13
  unsigned __int64 v35; // rax
  _QWORD *v36; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  char *v44; // rsi
  int v45; // r12d
  __int32 v46; // r13d
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // r12d
  int v52; // r13d
  __int64 v53; // rdx
  __int64 v54; // rax
  void **v55; // r15
  int v56; // r13d
  int v57; // r15d
  unsigned __int64 v58; // r8
  unsigned __int64 *v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r12
  _QWORD *v63; // rbp
  unsigned __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  void **v73; // rdi
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rsi
  char *v76; // rcx
  __m128i v77; // xmm1
  __int64 v78; // rdx
  unsigned __int64 *v79; // rcx
  __m128i v80; // [rsp+0h] [rbp-548h] BYREF
  void **v81; // [rsp+10h] [rbp-538h]
  char *v82; // [rsp+18h] [rbp-530h]
  unsigned __int64 v83; // [rsp+20h] [rbp-528h]
  void **v84; // [rsp+28h] [rbp-520h]
  void **v85; // [rsp+30h] [rbp-518h]
  void **v86; // [rsp+38h] [rbp-510h]
  void **v87; // [rsp+40h] [rbp-508h]
  unsigned __int64 v88; // [rsp+48h] [rbp-500h]
  __m128i v89; // [rsp+50h] [rbp-4F8h] BYREF
  void *v90; // [rsp+60h] [rbp-4E8h]
  void *v91; // [rsp+70h] [rbp-4D8h] BYREF
  __int64 v92; // [rsp+78h] [rbp-4D0h]
  _BYTE v93[64]; // [rsp+80h] [rbp-4C8h] BYREF
  void *v94; // [rsp+C0h] [rbp-488h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-480h]
  _BYTE v96[128]; // [rsp+D0h] [rbp-478h] BYREF
  void *v97; // [rsp+150h] [rbp-3F8h] BYREF
  __int64 v98; // [rsp+158h] [rbp-3F0h]
  _BYTE v99[128]; // [rsp+160h] [rbp-3E8h] BYREF
  void *v100; // [rsp+1E0h] [rbp-368h] BYREF
  __int64 v101; // [rsp+1E8h] [rbp-360h]
  _BYTE v102[128]; // [rsp+1F0h] [rbp-358h] BYREF
  void *v103; // [rsp+270h] [rbp-2D8h] BYREF
  __int64 v104; // [rsp+278h] [rbp-2D0h]
  _BYTE v105[128]; // [rsp+280h] [rbp-2C8h] BYREF
  void *ptr[2]; // [rsp+300h] [rbp-248h] BYREF
  void *v107; // [rsp+310h] [rbp-238h]

  v2 = 0;
  v3 = (void **)a2;
  v4 = a1;
  v5 = (_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 12) = sub_1EE7490(*a1);
  do
  {
    v6 = *v4;
    v7 = *(unsigned int *)(*v4 + 24);
    *(_DWORD *)(v6 + 24) = v7 + 1;
    *v5 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
    v8 = sub_1EE7490(v6);
    v13 = *v5 == 10;
    v5[7] = v8;
    if ( v13 )
      v2 = 1;
    ++v5;
  }
  while ( (_DWORD *)(a2 + 108) != v5 );
  v14.m128i_i64[0] = sub_1F194E0(*v4, a2, v9, v10, v11, v12);
  v15 = *v4;
  v80 = v14;
  *(__m128i *)(v3 + 5) = _mm_load_si128(&v80);
  sub_1F194A0((__int64)&v89, v15);
  v16 = *v4;
  v17 = _mm_load_si128(&v89);
  v107 = v90;
  v3[9] = v90;
  v18 = *(unsigned int *)(v16 + 24);
  *(__m128i *)ptr = v17;
  *(__m128i *)(v3 + 7) = v17;
  *(_DWORD *)(v16 + 24) = v18 + 1;
  *((_DWORD *)v3 + 34) = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v18);
  v19 = sub_1EE7490(v16);
  v20 = *v4;
  *((_DWORD *)v3 + 36) = v19;
  v21 = sub_1EE7490(v20);
  v22 = *((unsigned int *)v3 + 4);
  *((_DWORD *)v3 + 37) = v21;
  v23 = *((_DWORD *)v3 + 5);
  v24 = v22;
  v94 = v96;
  v80.m128i_i32[0] = v23;
  LODWORD(v83) = *((_DWORD *)v3 + 6);
  LODWORD(v87) = *((_DWORD *)v3 + 7);
  v85 = &v94;
  v95 = 0x1000000000LL;
  if ( v22 > 0x10 )
    sub_2237220(v85, v96, v22, 8);
  v82 = (char *)(v3 + 19);
  if ( (_DWORD)v22 )
  {
    v81 = v3;
    v25 = v4;
    v26 = (__int64)v85;
    v27 = 0;
    do
    {
      ++v27;
      v28 = sub_1F6A0A0(*(_QWORD *)(*v25 + 8), *(_QWORD *)(*v25 + 16));
      sub_14B7B40(v26, v28);
    }
    while ( v27 != (_DWORD)v22 );
    v4 = v25;
    v3 = v81;
    ptr[0] = v94;
    ptr[1] = (void *)(unsigned int)v95;
    v81 = ptr;
    sub_EB8020((__int64)ptr, v82);
    v86 = &v97;
    v97 = v99;
    v98 = 0x1000000000LL;
    if ( v22 > 0x10 )
      sub_2237220(v86, v99, v22, 8);
    v29 = (__int64)v86;
    v30 = 0;
    do
    {
      ++v30;
      v31 = sub_1F6A0A0(*(_QWORD *)(*v4 + 8), *(_QWORD *)(*v4 + 16));
      sub_14B7B40(v29, v31);
    }
    while ( v30 != v24 );
  }
  else
  {
    ptr[0] = v94;
    ptr[1] = (void *)(unsigned int)v95;
    v81 = ptr;
    sub_EB8020((__int64)ptr, (char *)v3 + 152);
    v86 = &v97;
    v97 = v99;
    v98 = 0x1000000000LL;
  }
  ptr[0] = v97;
  ptr[1] = (void *)(unsigned int)v98;
  sub_EB8020((__int64)v81, (char *)&v3[*((unsigned int *)v3 + 4) + 19]);
  if ( v2 )
    v3[(unsigned int)(2 * *((_DWORD *)v3 + 4)) + 19] = (void *)sub_1F6A0A0(*(_QWORD *)(*v4 + 8), *(_QWORD *)(*v4 + 16));
  v32 = v80.m128i_u32[0];
  v82 = (char *)&v100;
  v100 = v102;
  v101 = 0x1000000000LL;
  if ( v80.m128i_u32[0] <= 0x10uLL )
  {
    if ( v80.m128i_i32[0] )
      goto LABEL_18;
LABEL_63:
    v35 = (unsigned int)v101;
    goto LABEL_22;
  }
  sub_2237220(v82, v102, v80.m128i_u32[0], 8);
  if ( !v80.m128i_i32[0] )
    goto LABEL_63;
LABEL_18:
  v33 = 0;
  v34 = v82 + 16;
  do
  {
    while ( 1 )
    {
      v36 = *(_QWORD **)(*v4 + 8);
      v37 = sub_1EE13A0((__int64)v36, *(_QWORD *)(*v4 + 16), (__int64 *)(*v4 + 32), (_DWORD *)(*v4 + 24));
      v42 = sub_1EDB980(v36, v37, v38, v39, v40, v41);
      v43 = (unsigned int)v101 + 1LL;
      if ( v43 > HIDWORD(v101) )
        break;
      ++v33;
      *((_QWORD *)v100 + (unsigned int)v101) = v42;
      v35 = (unsigned int)(v101 + 1);
      LODWORD(v101) = v101 + 1;
      if ( v33 == v80.m128i_i32[0] )
        goto LABEL_22;
    }
    ++v33;
    v84 = (void **)v42;
    sub_2237220(v82, v34, v43, 8);
    *((_QWORD *)v100 + (unsigned int)v101) = v84;
    v35 = (unsigned int)(v101 + 1);
    LODWORD(v101) = v101 + 1;
  }
  while ( v80.m128i_i32[0] != v33 );
LABEL_22:
  ptr[1] = (void *)v35;
  v44 = (char *)&v3[(unsigned int)(2 * *((_DWORD *)v3 + 4) + 1) + 19];
  ptr[0] = v100;
  sub_1EB4E80((__int64)v81, v44);
  v84 = &v91;
  v91 = v93;
  v92 = 0x1000000000LL;
  if ( v32 > 0x10 )
    sub_2237220(v84, v93, v32, 4);
  v45 = 0;
  v46 = v80.m128i_i32[0];
  v47 = (__int64)v84;
  if ( v80.m128i_i32[0] )
  {
    do
    {
      v48 = *v4;
      ++v45;
      v49 = *(unsigned int *)(*v4 + 24);
      *(_DWORD *)(v48 + 24) = v49 + 1;
      sub_9B7040(v47, *(_QWORD *)(*(_QWORD *)(v48 + 32) + 8 * v49));
    }
    while ( v45 != v46 );
  }
  v50 = *((unsigned int *)v3 + 5);
  ptr[0] = v91;
  ptr[1] = (void *)(unsigned int)v92;
  sub_1EB4EB0((__int64)v81, (char *)&v3[(unsigned int)(2 * *((_DWORD *)v3 + 4) + 1) + 19] + 8 * v50);
  v103 = v105;
  v104 = 0x2000000000LL;
  if ( (unsigned int)v83 > 0x20uLL )
    sub_2237220(&v103, v105, (unsigned int)v83, 4);
  v51 = 0;
  v52 = v83;
  if ( (_DWORD)v83 )
  {
    do
    {
      v53 = *v4;
      ++v51;
      v54 = *(unsigned int *)(*v4 + 24);
      *(_DWORD *)(v53 + 24) = v54 + 1;
      sub_9B7040((__int64)&v103, *(_QWORD *)(*(_QWORD *)(v53 + 32) + 8 * v54));
    }
    while ( v51 != v52 );
  }
  v55 = v81;
  ptr[0] = v103;
  ptr[1] = (void *)(unsigned int)v104;
  sub_1EB4EB0((__int64)v81, (char *)v3 + 12 * *((unsigned int *)v3 + 5) + 8 * (2 * *((_DWORD *)v3 + 4) + 1) + 152);
  ptr[0] = v55 + 2;
  ptr[1] = (void *)0x2000000000LL;
  if ( (unsigned int)v87 > 0x20uLL )
  {
    sub_2237220(v81, v55 + 2, (unsigned int)v87, 16);
    v56 = (int)v87;
    if ( (_DWORD)v87 )
      goto LABEL_32;
  }
  else
  {
    v56 = (int)v87;
    if ( (_DWORD)v87 )
    {
LABEL_32:
      v57 = 0;
      v80.m128i_i64[0] = (__int64)v3;
      v87 = v81 + 2;
      while ( 1 )
      {
        v62 = sub_1F6A0A0(*(_QWORD *)(*v4 + 8), *(_QWORD *)(*v4 + 16));
        v63 = *(_QWORD **)(*v4 + 8);
        v64 = sub_1EE13A0((__int64)v63, *(_QWORD *)(*v4 + 16), (__int64 *)(*v4 + 32), (_DWORD *)(*v4 + 24));
        v60 = sub_1EDB980(v63, v64, v65, v66, v67, v68);
        if ( v60 )
        {
          v58 = v62 & 0xFFFFFFFFFFFFFFFDLL;
          if ( HIDWORD(ptr[1]) <= LODWORD(ptr[1]) )
          {
            v78 = *(_QWORD *)v60;
            v83 = v62 & 0xFFFFFFFFFFFFFFFDLL;
            v60 = (*(__int64 (__fastcall **)(__int64))(v78 + 32))(v60);
            v69 = LODWORD(ptr[1]);
            v70 = HIDWORD(ptr[1]);
            v71 = v83;
LABEL_57:
            if ( v69 + 1 > v70 )
            {
              v88 = v71;
              v83 = v60;
              sub_2237220(v81, v87, v69 + 1, 16);
              v71 = v88;
              v60 = v83;
              v69 = LODWORD(ptr[1]);
            }
            v79 = (unsigned __int64 *)((char *)ptr[0] + 16 * v69);
            *v79 = v71;
            v79[1] = v60;
            v61 = (unsigned int)++LODWORD(ptr[1]);
            goto LABEL_36;
          }
          v59 = (unsigned __int64 *)((char *)ptr[0] + 16 * LODWORD(ptr[1]));
          *v59 = v58;
          v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
        }
        else
        {
          v69 = LODWORD(ptr[1]);
          v70 = HIDWORD(ptr[1]);
          v71 = v62 & 0xFFFFFFFFFFFFFFFDLL;
          if ( LODWORD(ptr[1]) >= (unsigned __int64)HIDWORD(ptr[1]) )
            goto LABEL_57;
          v59 = (unsigned __int64 *)((char *)ptr[0] + 16 * LODWORD(ptr[1]));
          *v59 = v71;
        }
        v59[1] = v60;
        v61 = (unsigned int)++LODWORD(ptr[1]);
LABEL_36:
        if ( ++v57 == v56 )
        {
          v3 = (void **)v80.m128i_i64[0];
          goto LABEL_41;
        }
      }
    }
  }
  v61 = LODWORD(ptr[1]);
LABEL_41:
  v72 = 16 * v61;
  v73 = (void **)ptr[0];
  v74 = ((unsigned __int64)&v3[(unsigned __int64)(unsigned int)(2 * *((_DWORD *)v3 + 4) + 1) + 19]
       + 8 * *((unsigned int *)v3 + 5)
       + 4 * (*((_DWORD *)v3 + 6) + *((_DWORD *)v3 + 5))
       + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  v75 = v74 + v72;
  v76 = (char *)ptr[0] - v74;
  if ( v72 )
  {
    do
    {
      v77 = _mm_loadu_si128((const __m128i *)&v76[v74]);
      v74 += 16LL;
      *(__m128i *)(v74 - 16) = v77;
    }
    while ( v74 != v75 );
  }
  if ( v73 != v81 + 2 )
    free(v73);
  if ( v103 != v105 )
    free(v103);
  if ( v91 != v84 + 2 )
    free(v91);
  if ( v100 != v82 + 16 )
    free(v100);
  if ( v97 != v86 + 2 )
    free(v97);
  if ( v94 != v85 + 2 )
    free(v94);
}
