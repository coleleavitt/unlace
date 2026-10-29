__int64 __fastcall sub_5297C0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD *a6)
{
  char **exception; // r14
  __int64 *v9; // r15
  __int64 v10; // r13
  __int64 **v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // r8d
  __int64 *v16; // rcx
  unsigned int v17; // edx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rax
  __int64 v26; // r15
  __int64 v27; // r13
  char *v28; // rax
  int v29; // r9d
  __int64 *v30; // r15
  unsigned int v31; // r9d
  __int64 v32; // r8
  __int64 v33; // rax
  char *v34; // rdx
  __int64 **v35; // rdi
  char *v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // r13d
  __int64 v41; // rax
  unsigned int v42; // r15d
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // r9
  _QWORD *v47; // rdx
  unsigned int v48; // r10d
  const __m128i *v49; // r8
  const __m128i *i; // r13
  __int64 v51; // rdx
  _QWORD *v52; // rsi
  __int64 **v53; // rdi
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  const __m128i *v58; // rcx
  const __m128i *j; // r13
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 **v62; // rdi
  __m128i v63; // xmm0
  _OWORD *v64; // rax
  void *v65; // r13
  __int64 *v66; // r14
  __int64 v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // r15
  unsigned int v72; // eax
  __int64 v73; // rsi
  int v74; // eax
  __int64 *v75; // rsi
  __int64 v76; // rdi
  __int64 *v77; // rax
  __int64 result; // rax
  unsigned int v79; // r8d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  _QWORD *v84; // rax
  void *v87; // [rsp+40h] [rbp-1E0h]
  int v88; // [rsp+48h] [rbp-1D8h]
  void *v89; // [rsp+48h] [rbp-1D8h]
  void *v90; // [rsp+60h] [rbp-1C0h]
  __m128i *v91; // [rsp+68h] [rbp-1B8h]
  __m128i *v92; // [rsp+70h] [rbp-1B0h]
  unsigned int v93; // [rsp+80h] [rbp-1A0h]
  unsigned int ptr; // [rsp+88h] [rbp-198h]
  void *ptra; // [rsp+88h] [rbp-198h]
  char *v96; // [rsp+90h] [rbp-190h]
  __int64 **v97; // [rsp+98h] [rbp-188h]
  int v98[2]; // [rsp+A8h] [rbp-178h] BYREF
  void *v99[2]; // [rsp+B0h] [rbp-170h] BYREF
  int v100; // [rsp+C0h] [rbp-160h]
  _QWORD v101[2]; // [rsp+D0h] [rbp-150h] BYREF
  int v102; // [rsp+E0h] [rbp-140h]
  char *v103; // [rsp+F0h] [rbp-130h] BYREF
  int v104; // [rsp+F8h] [rbp-128h]
  int v105; // [rsp+FCh] [rbp-124h]
  int v106; // [rsp+100h] [rbp-120h]
  __m128i *v107; // [rsp+110h] [rbp-110h] BYREF
  __int64 v108; // [rsp+118h] [rbp-108h]
  int v109; // [rsp+120h] [rbp-100h]
  __m128i *v110; // [rsp+130h] [rbp-F0h] BYREF
  __int64 v111; // [rsp+138h] [rbp-E8h]
  int v112; // [rsp+140h] [rbp-E0h]
  _QWORD v113[2]; // [rsp+150h] [rbp-D0h] BYREF
  int v114; // [rsp+160h] [rbp-C0h]
  void *v115; // [rsp+170h] [rbp-B0h] BYREF
  unsigned int v116; // [rsp+178h] [rbp-A8h]
  int v117; // [rsp+17Ch] [rbp-A4h]
  int v118; // [rsp+180h] [rbp-A0h]
  void *v119; // [rsp+190h] [rbp-90h] BYREF
  unsigned int v120; // [rsp+198h] [rbp-88h]
  unsigned int v121; // [rsp+19Ch] [rbp-84h]
  int v122; // [rsp+1A0h] [rbp-80h]
  int v123[2]; // [rsp+1B0h] [rbp-70h] BYREF
  __int64 v124; // [rsp+1B8h] [rbp-68h]
  int v125; // [rsp+1C0h] [rbp-60h]
  __int64 v126[10]; // [rsp+1D0h] [rbp-50h] BYREF

  v97 = a1;
  if ( *(_DWORD *)(a4 + 12) )
  {
    v9 = *(__int64 **)a2;
    v10 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
    if ( *(_QWORD *)a2 != v10 )
    {
      v12 = a1;
      while ( (unsigned __int64)*v9 <= 1 )
      {
        if ( (__int64 *)v10 == ++v9 )
          goto LABEL_118;
      }
      v97 = a1;
      if ( (__int64 *)v10 != v9 )
      {
        v13 = *v9;
        while ( 1 )
        {
          v14 = *(unsigned int *)(a4 + 8);
          v15 = *(_DWORD *)(v13 + 12);
          v16 = *(__int64 **)a4;
          v17 = v14 - 1;
          v14 *= 16;
          v18 = (__int64 *)(*(_QWORD *)a4 + v14);
          v19 = 16LL * (v15 & v17);
          v20 = (__int64 *)(*(_QWORD *)a4 + v19);
          if ( v19 != v14 )
            break;
LABEL_109:
          while ( v20 != v16 )
          {
            v83 = *v16;
            if ( (unsigned __int64)*v16 > 1 )
            {
              if ( *(_DWORD *)(v83 + 12) == v15 && v13 == v83 )
                goto LABEL_120;
            }
            else if ( !v83 )
            {
              break;
            }
            v16 += 2;
          }
LABEL_15:
          v23 = v9 + 1;
          if ( (__int64 *)v10 == v9 + 1 )
            goto LABEL_20;
          while ( 1 )
          {
            v13 = *v23;
            v9 = v23;
            if ( (unsigned __int64)*v23 > 1 )
              break;
            if ( (__int64 *)v10 == ++v23 )
            {
              v12 = v97;
LABEL_118:
              v97 = v12;
              goto LABEL_20;
            }
          }
          if ( (__int64 *)v10 == v23 )
            goto LABEL_20;
        }
        v21 = (__int64 *)(*(_QWORD *)a4 + v19);
        while ( 1 )
        {
          v22 = *v21;
          if ( (unsigned __int64)*v21 > 1 )
          {
            if ( *(_DWORD *)(v22 + 12) == v15 && v22 == v13 )
            {
LABEL_120:
              sub_1872CE0("");
              sub_1873130(107, 1139);
            }
          }
          else if ( !v22 )
          {
            goto LABEL_15;
          }
          v21 += 2;
          if ( v18 == v21 )
            goto LABEL_109;
        }
      }
    }
  }
LABEL_20:
  *(_QWORD *)v98 = 0;
  v24 = (_OWORD *)sub_186B270(0x40u);
  v99[0] = v24;
  *v24 = 0;
  v24[1] = 0;
  v24[2] = 0;
  v24[3] = 0;
  v99[1] = &byte_8;
  v100 = 0;
  sub_51CCF0((__int64)v97, a2, (unsigned int **)v98, (__int64)v99);
  v25 = (_OWORD *)sub_186B270(0x40u);
  v26 = *(unsigned int *)(a2 + 8);
  v90 = v25;
  *v25 = 0;
  v27 = 8 * v26;
  v25[1] = 0;
  v25[2] = 0;
  v25[3] = 0;
  v101[1] = 8;
  v102 = 0;
  v104 = v26;
  v28 = (char *)sub_186B270(8 * v26);
  v29 = v26;
  v96 = v28;
  if ( (_DWORD)v26 )
  {
    memset(v28, 0, 8 * v26);
    v29 = v26;
  }
  v30 = *(__int64 **)a2;
  v31 = v29 - 1;
  v32 = *(_QWORD *)a2 + v27;
  if ( *(_QWORD *)a2 != v32 )
  {
    do
    {
      while ( (unsigned __int64)*v30 <= 1 )
      {
        if ( (__int64 *)v32 == ++v30 )
          goto LABEL_31;
      }
      v33 = 8LL * (*(_DWORD *)(*v30 + 12) & v31);
      v34 = &v96[v33];
      if ( v27 == v33 )
      {
LABEL_87:
        v36 = v96;
        if ( v96 == v34 )
        {
LABEL_107:
          sub_1872CE0("");
          sub_1873130(114, 181);
        }
        v35 = v97;
        while ( *(_QWORD *)v36 )
        {
          v36 += 8;
          if ( v34 == v36 )
            goto LABEL_107;
        }
      }
      else
      {
        v35 = v97;
        v36 = &v96[v33];
        while ( *(_QWORD *)v36 )
        {
          v36 += 8;
          if ( &v96[v27] == v36 )
            goto LABEL_87;
        }
      }
      v37 = *v30++;
      v97 = v35;
      *(_QWORD *)v36 = v37;
    }
    while ( (__int64 *)v32 != v30 );
  }
LABEL_31:
  v38 = *(_DWORD *)(a2 + 12);
  v106 = 0;
  v105 = v38;
  v39 = sub_186B270(0x80u);
  *(_QWORD *)v39 = 0;
  *(_DWORD *)(v39 + 8) = 0;
  *(_QWORD *)(v39 + 16) = 0;
  *(_DWORD *)(v39 + 24) = 0;
  *(_QWORD *)(v39 + 32) = 0;
  *(_DWORD *)(v39 + 40) = 0;
  *(_QWORD *)(v39 + 48) = 0;
  *(_DWORD *)(v39 + 56) = 0;
  *(_QWORD *)(v39 + 64) = 0;
  *(_DWORD *)(v39 + 72) = 0;
  *(_QWORD *)(v39 + 80) = 0;
  *(_DWORD *)(v39 + 88) = 0;
  *(_QWORD *)(v39 + 96) = 0;
  *(_DWORD *)(v39 + 104) = 0;
  *(_QWORD *)(v39 + 112) = 0;
  *(_DWORD *)(v39 + 120) = 0;
  v107 = (__m128i *)v39;
  v103 = v96;
  v109 = 0;
  v108 = 8;
  sub_51D2B0((__int64)v97, (__int64)&v103, (__int64)&v107);
  v40 = v108;
  v91 = v107;
  v88 = HIDWORD(v108);
  v41 = sub_186B270(0x80u);
  *(_QWORD *)v41 = 0;
  *(_DWORD *)(v41 + 8) = 0;
  *(_QWORD *)(v41 + 16) = 0;
  *(_DWORD *)(v41 + 24) = 0;
  *(_QWORD *)(v41 + 32) = 0;
  *(_DWORD *)(v41 + 40) = 0;
  *(_QWORD *)(v41 + 48) = 0;
  *(_DWORD *)(v41 + 56) = 0;
  *(_QWORD *)(v41 + 64) = 0;
  *(_DWORD *)(v41 + 72) = 0;
  *(_QWORD *)(v41 + 80) = 0;
  *(_DWORD *)(v41 + 88) = 0;
  *(_QWORD *)(v41 + 96) = 0;
  *(_DWORD *)(v41 + 104) = 0;
  *(_QWORD *)(v41 + 112) = 0;
  *(_DWORD *)(v41 + 120) = 0;
  v110 = (__m128i *)v41;
  v111 = 8;
  v112 = 0;
  sub_51D2B0((__int64)v97, (__int64)&v103, (__int64)&v110);
  v42 = v111;
  v92 = v110;
  ptr = HIDWORD(v111);
  v43 = sub_186B270(0x80u);
  *(_QWORD *)v43 = 0;
  *(_DWORD *)(v43 + 8) = 0;
  *(_QWORD *)(v43 + 16) = 0;
  *(_DWORD *)(v43 + 24) = 0;
  *(_QWORD *)(v43 + 32) = 0;
  *(_DWORD *)(v43 + 40) = 0;
  *(_QWORD *)(v43 + 48) = 0;
  *(_DWORD *)(v43 + 56) = 0;
  *(_QWORD *)(v43 + 64) = 0;
  *(_DWORD *)(v43 + 72) = 0;
  *(_QWORD *)(v43 + 80) = 0;
  *(_DWORD *)(v43 + 88) = 0;
  *(_QWORD *)(v43 + 96) = 0;
  *(_DWORD *)(v43 + 104) = 0;
  *(_QWORD *)(v43 + 112) = 0;
  *(_DWORD *)(v43 + 120) = 0;
  v113[0] = v43;
  v113[1] = 8;
  v114 = 0;
  v101[0] = v90;
  sub_51D2B0((__int64)v97, (__int64)v101, (__int64)v113);
  v116 = v40;
  v87 = (void *)v113[0];
  v44 = (_QWORD *)sub_186B270(16LL * v40);
  v45 = v44;
  v46 = 16LL * v40;
  v47 = &v44[(unsigned __int64)v46 / 8];
  if ( v40 )
  {
    do
    {
      *v44 = 0;
      v44 += 2;
      *((_DWORD *)v44 - 2) = 0;
    }
    while ( v47 != v44 );
  }
  v48 = v40 - 1;
  v49 = &v91[(unsigned __int64)v46 / 0x10];
  for ( i = v91; v49 != i; *(__m128i *)v47 = v54 )
  {
    while ( 1 )
    {
      v47 = (_QWORD *)i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
        break;
      if ( v49 == ++i )
        goto LABEL_42;
    }
    v51 = 16LL * (*((_DWORD *)v47 + 3) & v48);
    v52 = &v45[(unsigned __int64)v51 / 8];
    if ( v46 == v51 )
    {
LABEL_92:
      if ( v45 == v52 )
      {
LABEL_106:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v53 = v97;
      v47 = v45;
      while ( *v47 )
      {
        v47 += 2;
        if ( v52 == v47 )
          goto LABEL_106;
      }
    }
    else
    {
      v53 = v97;
      v47 = &v45[(unsigned __int64)v51 / 8];
      while ( *v47 )
      {
        v47 += 2;
        if ( &v45[(unsigned __int64)v46 / 8] == v47 )
          goto LABEL_92;
      }
    }
    v54 = _mm_loadu_si128(i++);
    v97 = v53;
  }
LABEL_42:
  v118 = 0;
  v115 = v45;
  v117 = v88;
  sub_52C2E0(&v115, v113, v47, v45, v49);
  v120 = v42;
  v89 = v115;
  v55 = sub_186B270(16LL * v42);
  v56 = v55;
  v57 = 16LL * v42;
  if ( v42 )
  {
    do
    {
      *(_QWORD *)v56 = 0;
      v56 += 16;
      *(_DWORD *)(v56 - 8) = 0;
    }
    while ( v55 + 16LL * v42 != v56 );
  }
  v58 = &v92[(unsigned __int64)v57 / 0x10];
  for ( j = v92; v58 != j; *(__m128i *)v56 = v63 )
  {
    while ( 1 )
    {
      v56 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
        break;
      if ( v58 == ++j )
        goto LABEL_53;
    }
    v60 = 16LL * (*(_DWORD *)(v56 + 12) & (v42 - 1));
    v61 = v55 + v60;
    if ( v57 == v60 )
    {
LABEL_97:
      if ( v55 == v61 )
      {
LABEL_105:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v62 = v97;
      v56 = v55;
      while ( *(_QWORD *)v56 )
      {
        v56 += 16;
        if ( v61 == v56 )
          goto LABEL_105;
      }
    }
    else
    {
      v62 = v97;
      v56 = v55 + v60;
      while ( *(_QWORD *)v56 )
      {
        v56 += 16;
        if ( v55 + v57 == v56 )
          goto LABEL_97;
      }
    }
    v63 = _mm_loadu_si128(j++);
    v97 = v62;
  }
LABEL_53:
  v122 = 0;
  v119 = (void *)v55;
  v121 = ptr;
  sub_52C2E0(&v119, v113, v56, ptr, v57);
  ptra = v119;
  v64 = (_OWORD *)sub_186B270(0x40u);
  v124 = 8;
  *v64 = 0;
  v64[1] = 0;
  v65 = v64;
  v64[2] = 0;
  v64[3] = 0;
  v125 = 0;
  sub_529420((__int64)v97, v98, (__m128)0LL, (__int64)v123, a3, (__int64)&v107, a6);
  if ( (unsigned __int8)sub_64B1A0(*v97) )
  {
    sub_528E40(
      v97,
      (_QWORD **)v98,
      (__int64)&v103,
      (__int64)&v110,
      (__int64)&v107,
      (__int64)v113,
      (__m128)0LL,
      (__int64)a6);
  }
  else
  {
    *(_QWORD *)v123 = v65;
    sub_528E40(
      v97,
      (_QWORD **)v98,
      (__int64)v123,
      (__int64)&v110,
      (__int64)&v107,
      (__int64)v113,
      (__m128)0LL,
      (__int64)a6);
  }
  if ( a5 )
  {
    v66 = *(__int64 **)a2;
    v67 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
    if ( v66 != (__int64 *)v67 )
    {
      while ( (unsigned __int64)*v66 <= 1 )
      {
        if ( (__int64 *)v67 == ++v66 )
          goto LABEL_72;
      }
      if ( (__int64 *)v67 != v66 )
      {
        v68 = *v66;
        do
        {
          v69 = sub_4DB350(**v97, v68);
          v70 = (_QWORD *)*a6;
          v71 = v69;
          if ( *a6 )
          {
            v72 = *((_DWORD *)v70 - 1);
            if ( v72 == *((_DWORD *)v70 - 2) )
            {
              v79 = (3 * v72 + 1) >> 1;
              v80 = 8 * v79 + 8;
              if ( 8 * v72 + 8 >= (unsigned int)v80 || v72 >= v79 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v126, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v126);
                sub_233E40((__int64)v126);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v93 = (3 * v72 + 1) >> 1;
              v81 = (unsigned int *)sub_186B300(v70 - 1, v80);
              v82 = v81[1];
              v70 = v81 + 2;
              *a6 = v81 + 2;
              *v81 = v93;
              LODWORD(v81) = v82;
              v75 = &v70[v82];
              v74 = (_DWORD)v81 + 1;
            }
            else
            {
              v73 = v72;
              v74 = v72 + 1;
              v75 = &v70[v73];
            }
          }
          else
          {
            v84 = (_QWORD *)sub_186B270(0x18u);
            v70 = v84 + 1;
            *v84 = 2;
            v74 = 1;
            *a6 = v70;
            v75 = v70;
          }
          v76 = a6[1];
          *v75 = v71;
          *((_DWORD *)v70 - 1) = v74;
          if ( v76 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 16LL))(v76, v71);
          v77 = v66 + 1;
          if ( (__int64 *)v67 == v66 + 1 )
            break;
          while ( 1 )
          {
            v68 = *v77;
            v66 = v77;
            if ( (unsigned __int64)*v77 > 1 )
              break;
            if ( (__int64 *)v67 == ++v77 )
              goto LABEL_72;
          }
        }
        while ( (__int64 *)v67 != v77 );
      }
    }
  }
LABEL_72:
  sub_186B220(v65);
  if ( ptra )
    sub_186B220(ptra);
  if ( v89 )
    sub_186B220(v89);
  if ( v87 )
    sub_186B220(v87);
  if ( v92 )
    sub_186B220(v92);
  if ( v91 )
    sub_186B220(v91);
  sub_186B220(v96);
  sub_186B220(v90);
  if ( v99[0] )
    sub_186B220(v99[0]);
  result = *(_QWORD *)v98;
  if ( *(_QWORD *)v98 )
    return sub_186B220((void *)(*(_QWORD *)v98 - 8LL));
  return result;
}

