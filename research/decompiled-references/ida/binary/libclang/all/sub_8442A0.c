__int64 __fastcall sub_8442A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rbx
  _BYTE *v17; // rdx
  char *v18; // rax
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // r13d
  __int64 v24; // rax
  char v25; // r9
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  int *p_ptr; // rdi
  __int64 v29; // rax
  char v30; // r9
  int *v31; // r14
  int *v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // r15
  int *v35; // rsi
  __int64 v36; // rdi
  int *v37; // rbx
  int v38; // eax
  int i; // ebx
  int v40; // ecx
  char v41; // al
  unsigned int v42; // r10d
  void *v43; // r11
  char v44; // r9
  int *v45; // rax
  __int64 v46; // rbp
  int *v47; // rbx
  __int32 v48; // r13d
  __int64 v49; // r12
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  _QWORD *v53; // rbp
  _QWORD *v54; // rax
  int *v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  bool v58; // cc
  int *v59; // r15
  int *v60; // rbx
  _BYTE *v62; // rdi
  __int64 v63; // rbx
  int *v64; // r15
  int *v65; // r12
  int *v66; // rsi
  __int64 v67; // rdi
  int *v68; // rbx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rcx
  int *v75; // r15
  int *v76; // r14
  int *v77; // rsi
  __int64 v78; // rdi
  int *v79; // r13
  int v80; // eax
  char *v81; // rdx
  char *v82; // rax
  char v83; // cl
  char v84; // si
  __int64 v85; // [rsp+0h] [rbp-208h]
  int v86; // [rsp+10h] [rbp-1F8h]
  __int64 *v87; // [rsp+10h] [rbp-1F8h]
  char v88; // [rsp+18h] [rbp-1F0h]
  unsigned int v89; // [rsp+18h] [rbp-1F0h]
  __int64 v90; // [rsp+18h] [rbp-1F0h]
  __int64 v92; // [rsp+20h] [rbp-1E8h]
  char v93; // [rsp+28h] [rbp-1E0h]
  char v94; // [rsp+28h] [rbp-1E0h]
  int v95; // [rsp+28h] [rbp-1E0h]
  __int64 v97; // [rsp+48h] [rbp-1C0h]
  int v98; // [rsp+48h] [rbp-1C0h]
  __int64 v99; // [rsp+50h] [rbp-1B8h]
  int *v100; // [rsp+50h] [rbp-1B8h]
  _BYTE *v101; // [rsp+58h] [rbp-1B0h]
  char v102; // [rsp+58h] [rbp-1B0h]
  int v103; // [rsp+58h] [rbp-1B0h]
  unsigned int v104; // [rsp+64h] [rbp-1A4h]
  void *v105; // [rsp+68h] [rbp-1A0h]
  __int64 v106; // [rsp+78h] [rbp-190h] BYREF
  void *v107; // [rsp+80h] [rbp-188h] BYREF
  unsigned int v108; // [rsp+88h] [rbp-180h]
  char v109; // [rsp+8Ch] [rbp-17Ch]
  void *v110; // [rsp+90h] [rbp-178h] BYREF
  unsigned int v111; // [rsp+98h] [rbp-170h]
  void *ptr; // [rsp+A0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-160h]
  _BYTE v114[32]; // [rsp+B8h] [rbp-150h] BYREF
  char v115; // [rsp+D8h] [rbp-130h]
  int *v116; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v117; // [rsp+E8h] [rbp-120h]
  _BYTE v118[280]; // [rsp+F0h] [rbp-118h] BYREF

  v6 = *(_DWORD *)(a3 + 20);
  v85 = *(_QWORD *)(a3 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 57
    && (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v8 + 16) == 13)
    && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v86 = 1;
  }
  else
  {
    v86 = sub_6F6DE0(*(_QWORD *)(*a2 + 16), *(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL));
  }
  v116 = (int *)v118;
  v117 = 0x400000000LL;
  if ( v6 > 4 )
  {
    v90 = sub_25D5F70(&v116, v118, v6, 56, &ptr);
    v63 = v90;
    v64 = &v116[14 * (unsigned int)v117];
    if ( v116 != v64 )
    {
      v65 = v116;
      do
      {
        v66 = v65;
        v67 = v63;
        v65 += 14;
        v63 += 56;
        sub_69F700(v67, v66);
      }
      while ( v64 != v65 );
      v64 = &v116[14 * (unsigned int)v117];
      if ( v116 != v64 )
      {
        v68 = v116;
        do
        {
          v64 -= 14;
          if ( (unsigned int)*v64 > 1 )
            sub_69F740((__int64)v64);
        }
        while ( v68 != v64 );
        v64 = v116;
      }
    }
    v69 = (int)ptr;
    if ( v64 != (int *)v118 )
    {
      v95 = (int)ptr;
      free(v64);
      v69 = v95;
    }
    v70 = *a2;
    HIDWORD(v117) = v69;
    v71 = *(_QWORD *)(a3 + 8);
    v116 = (int *)v90;
    v9 = *(_QWORD *)(v70 + 16);
    v10 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 57 )
    {
      v21 = sub_70E2F0(v9, v85);
      goto LABEL_19;
    }
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(*a2 + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 57 )
  {
LABEL_8:
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) == 13 && ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      v12 = v6 >> 3;
      v13 = *(_BYTE *)(*(_QWORD *)(v9 + 17288) + 272LL);
      ptr = v114;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9A0);
      v88 = v13;
      if ( v6 > 0x47 )
      {
        sub_25D6230(&ptr, v114, v6 >> 3, 1);
        v14 = a2[1];
        v15 = a4 + v12;
        goto LABEL_12;
      }
      v14 = a2[1];
      v15 = a4 + v12;
      if ( v15 != a4 )
      {
LABEL_12:
        v16 = a4;
        while ( 1 )
        {
          v18 = (char *)(*(_QWORD *)v14 + 2 * v16);
          if ( !v18[1] )
            break;
          v19 = *v18;
          v20 = si128.m128i_i64[0];
          if ( si128.m128i_i64[1] >= (unsigned __int64)(si128.m128i_i64[0] + 1) )
          {
            v17 = ptr;
          }
          else
          {
            sub_25D6230(&ptr, v114, si128.m128i_i64[0] + 1, 1);
            v17 = ptr;
            v20 = si128.m128i_i64[0];
          }
          ++v16;
          v17[v20] = v19;
          ++si128.m128i_i64[0];
          if ( v15 == v16 )
            goto LABEL_42;
        }
        v62 = ptr;
        *(_BYTE *)(a1 + 56) = 0;
        if ( v62 != v114 )
        {
          free(v62);
          v59 = v116;
          v24 = (unsigned int)v117;
          goto LABEL_65;
        }
LABEL_64:
        v59 = v116;
        v24 = (unsigned int)v117;
        goto LABEL_65;
      }
LABEL_42:
      if ( *(_BYTE *)(v14 + 88)
        || (v81 = (char *)ptr, ptr == (char *)ptr + si128.m128i_i64[0])
        || (v82 = (char *)ptr + si128.m128i_i64[0] - 1, ptr >= v82) )
      {
        v108 = v6;
        if ( v6 > 0x40 )
        {
LABEL_105:
          sub_2585A50(&v107, 0, 0);
          v109 = 1;
          sub_2592D00(&v107, ptr, si128.m128i_u32[0]);
          goto LABEL_45;
        }
      }
      else
      {
        do
        {
          v83 = *v81;
          v84 = *v82;
          ++v81;
          --v82;
          *(v81 - 1) = v84;
          v82[1] = v83;
        }
        while ( v81 < v82 );
        v108 = v6;
        if ( v6 > 0x40 )
          goto LABEL_105;
      }
      v107 = nullptr;
      v109 = 1;
      sub_2592D00(&v107, ptr, si128.m128i_u32[0]);
      if ( !v6 )
      {
LABEL_54:
        if ( v108 > 0x40 && v107 )
          operator delete[](v107);
        if ( ptr != v114 )
          free(ptr);
        goto LABEL_57;
      }
LABEL_45:
      for ( i = 0; i != v6; ++i )
      {
        v40 = v6 - 1 - i;
        if ( !v88 )
          v40 = i;
        sub_2586ED0(&v110, &v107, 1, (unsigned int)(v86 * v40));
        v41 = sub_B100B0(*(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL));
        v42 = v111;
        v111 = 0;
        v43 = v110;
        v44 = v41 ^ 1;
        if ( (unsigned int)v117 >= (unsigned __int64)HIDWORD(v117) )
        {
          v105 = v110;
          v104 = v42;
          v102 = v41 ^ 1;
          v72 = sub_25D5F70(&v116, v118, 0, 56, &v106);
          v100 = (int *)v72;
          v73 = v72 + 56LL * (unsigned int)v117;
          *(_BYTE *)(v73 + 4) &= ~1u;
          *(_DWORD *)v73 = 2;
          *(_QWORD *)(v73 + 8) = v105;
          v74 = (unsigned int)v117;
          *(_DWORD *)(v73 + 16) = v104;
          *(_BYTE *)(v73 + 20) = v102;
          v75 = &v116[14 * v74];
          if ( v116 != v75 )
          {
            v76 = v116;
            do
            {
              v77 = v76;
              v78 = v72;
              v76 += 14;
              v72 += 56;
              sub_69F700(v78, v77);
            }
            while ( v75 != v76 );
            v75 = &v116[14 * (unsigned int)v117];
            if ( v116 != v75 )
            {
              v79 = v116;
              do
              {
                v75 -= 14;
                if ( (unsigned int)*v75 > 1 )
                  sub_69F740((__int64)v75);
              }
              while ( v79 != v75 );
              v75 = v116;
            }
          }
          v80 = v106;
          if ( v75 != (int *)v118 )
          {
            v103 = v106;
            free(v75);
            v80 = v103;
          }
          LODWORD(v117) = v117 + 1;
          HIDWORD(v117) = v80;
          v116 = v100;
        }
        else
        {
          v45 = &v116[14 * (unsigned int)v117];
          *((_BYTE *)v45 + 4) &= ~1u;
          *v45 = 2;
          *((_QWORD *)v45 + 1) = v43;
          LODWORD(v117) = v117 + 1;
          v45[4] = v42;
          *((_BYTE *)v45 + 20) = v44;
        }
        if ( v111 > 0x40 && v110 )
          operator delete[](v110);
      }
      goto LABEL_54;
    }
  }
  v21 = sub_70E2F0(v9, v85);
  if ( !v6 )
  {
LABEL_57:
    v46 = (unsigned int)v117;
    BYTE4(ptr) &= ~1u;
    si128.m128i_i64[0] = 0;
    v47 = v116;
    v48 = v117;
    si128.m128i_i32[2] = 0;
    LODWORD(ptr) = 8;
    v49 = 14LL * (unsigned int)v117;
    v50 = (_QWORD *)operator new[](v49 * 4 + 8);
    *v50 = v46;
    v51 = v50 + 1;
    if ( v46 )
    {
      v52 = &v50[(unsigned __int64)v49 / 2 + 1];
      v53 = v50 + 1;
      v54 = v50 + 1;
      do
      {
        *((_BYTE *)v54 + 4) &= ~1u;
        v54 += 7;
        *((_DWORD *)v54 - 14) = 0;
      }
      while ( v54 != v52 );
      si128.m128i_i64[0] = (__int64)v51;
      v55 = &v47[v49];
      si128.m128i_i32[2] = v48;
      do
      {
        v56 = (__int64)v47;
        v57 = (__int64)v53;
        v47 += 14;
        v53 += 7;
        sub_6A63E0(v57, v56);
      }
      while ( v55 != v47 );
    }
    else
    {
      si128.m128i_i64[0] = (__int64)(v50 + 1);
      si128.m128i_i32[2] = 0;
    }
    sub_69F700(a1, (int *)&ptr);
    v58 = (unsigned int)ptr <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v58 )
      sub_69F740((__int64)&ptr);
    goto LABEL_64;
  }
LABEL_19:
  v22 = a4;
  v89 = v6;
  v23 = 0;
  v92 = v21;
  v87 = a2;
  sub_8425B0((__int64)&ptr, a2, v85, v22);
  while ( 1 )
  {
    v24 = (unsigned int)v117;
    v25 = v115;
    v26 = (unsigned int)v117;
    v27 = v116;
    if ( !v115 )
      break;
    p_ptr = (int *)&ptr;
    if ( HIDWORD(v117) < (unsigned __int64)(unsigned int)v117 + 1 )
    {
      if ( &ptr < (void **)v116 || &ptr >= (void **)&v116[14 * (unsigned int)v117] )
      {
        v99 = -1;
        v25 = 0;
      }
      else
      {
        v99 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&ptr - (char *)v116) >> 3);
      }
      v93 = v25;
      v29 = sub_25D5F70(&v116, v118, (unsigned int)v117 + 1LL, 56, &v110);
      v30 = v93;
      v27 = (_BYTE *)v29;
      v31 = &v116[14 * (unsigned int)v117];
      if ( v116 != v31 )
      {
        v97 = v22;
        v32 = v116;
        v33 = v29;
        v34 = v29;
        do
        {
          v35 = v32;
          v36 = v33;
          v32 += 14;
          v33 += 56;
          sub_69F700(v36, v35);
        }
        while ( v31 != v32 );
        v27 = (_BYTE *)v34;
        v30 = v93;
        v22 = v97;
        v31 = &v116[14 * (unsigned int)v117];
        if ( v116 != v31 )
        {
          v37 = v116;
          do
          {
            v31 -= 14;
            if ( (unsigned int)*v31 > 1 )
              sub_69F740((__int64)v31);
          }
          while ( v37 != v31 );
          v22 = v97;
          v31 = v116;
          v30 = v93;
          v27 = (_BYTE *)v34;
        }
      }
      v38 = (int)v110;
      if ( v31 != (int *)v118 )
      {
        v101 = v27;
        v98 = (int)v110;
        v94 = v30;
        free(v31);
        v27 = v101;
        v38 = v98;
        v30 = v94;
      }
      v116 = (int *)v27;
      v26 = (unsigned int)v117;
      p_ptr = (int *)&ptr;
      HIDWORD(v117) = v38;
      if ( v30 )
        p_ptr = (int *)&v27[56 * v99];
    }
    sub_69F700((__int64)&v27[56 * v26], p_ptr);
    LODWORD(v117) = v117 + 1;
    if ( v115 )
    {
      v115 = 0;
      if ( (unsigned int)ptr > 1 )
        sub_69F740((__int64)&ptr);
    }
    ++v23;
    v22 += v92;
    if ( v23 == v89 )
      goto LABEL_57;
    sub_8425B0((__int64)&ptr, v87, v85, v22);
  }
  v59 = v116;
  *(_BYTE *)(a1 + 56) = 0;
LABEL_65:
  v60 = &v59[14 * v24];
  if ( v59 != v60 )
  {
    do
    {
      v60 -= 14;
      if ( (unsigned int)*v60 > 1 )
        sub_69F740((__int64)v60);
    }
    while ( v59 != v60 );
    v60 = v116;
  }
  if ( v60 != (int *)v118 )
    free(v60);
  return a1;
}

