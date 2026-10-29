__int64 __fastcall sub_44A1A0(__int64 *a1, _QWORD *a2, void *a3, __int64 a4)
{
  char **exception; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rbp
  __int64 v10; // r14
  _QWORD *v11; // r13
  __int64 v12; // r15
  char v13; // al
  int v14; // edx
  __int64 v15; // rbx
  char *v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  bool v29; // zf
  __int64 v30; // r10
  int v31; // edi
  __int64 *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 *v35; // rsi
  __int64 v36; // rdx
  __int64 *v37; // r9
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _QWORD *v45; // rcx
  int v46; // eax
  _QWORD *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int *v51; // rax
  _QWORD *v52; // rbx
  _QWORD *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // rdi
  char *v57; // rcx
  char *v58; // rax
  __int64 v59; // rdx
  __int64 *v60; // rbx
  unsigned __int64 v61; // rbp
  __int64 v62; // rsi
  _QWORD *v63; // rbx
  void *v64; // rdi
  __int64 *v65; // rbx
  unsigned __int64 v66; // rbp
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 result; // rax
  __int64 *v70; // rbx
  unsigned __int64 v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rbx
  unsigned __int64 v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  int v80; // [rsp+0h] [rbp-1E8h]
  int v81[2]; // [rsp+0h] [rbp-1E8h]
  std::ios_base *v82; // [rsp+8h] [rbp-1E0h]
  int v83; // [rsp+10h] [rbp-1D8h]
  void *v84; // [rsp+18h] [rbp-1D0h]
  int v85[2]; // [rsp+20h] [rbp-1C8h]
  int v86; // [rsp+30h] [rbp-1B8h]
  unsigned int v87; // [rsp+34h] [rbp-1B4h]
  int v89[2]; // [rsp+60h] [rbp-188h] BYREF
  int v90[2]; // [rsp+68h] [rbp-180h]
  __int64 v91[4]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v92[2]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-148h]
  __int64 v94; // [rsp+A8h] [rbp-140h]
  __int64 v95; // [rsp+B0h] [rbp-138h]
  int v96[2]; // [rsp+B8h] [rbp-130h]
  int v97[2]; // [rsp+C0h] [rbp-128h]
  int v98[2]; // [rsp+C8h] [rbp-120h]
  int v99[2]; // [rsp+D0h] [rbp-118h]
  int v100[2]; // [rsp+D8h] [rbp-110h]
  void *s; // [rsp+E0h] [rbp-108h]
  int v102[2]; // [rsp+E8h] [rbp-100h]
  void *v103; // [rsp+F0h] [rbp-F8h]
  char v104[8]; // [rsp+F8h] [rbp-F0h]
  int v105; // [rsp+100h] [rbp-E8h]
  int v106[2]; // [rsp+108h] [rbp-E0h]
  int v107[2]; // [rsp+110h] [rbp-D8h] BYREF
  void *ptr; // [rsp+120h] [rbp-C8h]
  __int64 v109; // [rsp+128h] [rbp-C0h]
  __int64 v110[23]; // [rsp+130h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
    v86 = *(_DWORD *)(v6 - 4);
  else
    v86 = 0;
  v7 = a1[5];
  v93 = 0;
  v95 = 0;
  *(_QWORD *)v85 = v7;
  v94 = v7;
  *(_QWORD *)v99 = v7;
  *(_QWORD *)v89 = v7;
  *(_QWORD *)v96 = 0;
  v8 = *a2;
  *(_QWORD *)v97 = 0;
  *(_QWORD *)v98 = 0;
  *(_QWORD *)v100 = 0;
  s = v107;
  *(_QWORD *)v102 = 1;
  v103 = nullptr;
  *(_QWORD *)v104 = 0;
  v105 = 1065353216;
  *(_QWORD *)v106 = 0;
  *(_QWORD *)v107 = 0;
  *(_QWORD *)v90 = 0;
  *(__m128i *)v92 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  sub_3D9C10(v8, (int)v89, v80, a4, v83, a3);
  v9 = *(__int64 **)v90;
  ptr = v110;
  v109 = 0x1000000000LL;
  if ( *(_QWORD *)v90 )
  {
    v10 = *(_QWORD *)v90 + 8LL * *(unsigned int *)(*(_QWORD *)v90 - 4LL);
    if ( *(_QWORD *)v90 != v10 )
    {
      do
      {
        v12 = *v9;
        v13 = *(_BYTE *)(*v9 + 6);
        if ( (v13 & 2) == 0 )
        {
          *(_BYTE *)(v12 + 6) = v13 | 2;
          v14 = v109;
          if ( (unsigned int)v109 < HIDWORD(v109) )
          {
            v11 = ptr;
          }
          else
          {
            v15 = (unsigned int)(2 * HIDWORD(v109));
            v16 = (char *)sub_186B270(8 * v15);
            v14 = v109;
            v17 = (__int64 *)ptr;
            v11 = v16;
            if ( (_DWORD)v109 )
            {
              if ( (unsigned int)(v109 - 1) <= 2 || v16 == (char *)ptr + 8 )
              {
                v78 = 0;
                v79 = 8LL * (unsigned int)v109;
                do
                {
                  v11[v78 / 8] = v17[v78 / 8];
                  v78 += 8LL;
                }
                while ( v78 != v79 );
              }
              else
              {
                v18 = 0;
                v19 = 16LL * ((unsigned int)v109 >> 1);
                do
                {
                  *(__m128i *)&v11[v18 / 8] = _mm_loadu_si128((const __m128i *)&v17[v18 / 8]);
                  v18 += 16LL;
                }
                while ( v19 != v18 );
                if ( (v14 & 1) != 0 )
                  v11[v14 & 0xFFFFFFFE] = v17[v14 & 0xFFFFFFFE];
              }
            }
            if ( v17 != v110 && v17 )
            {
              sub_186B220(v17);
              v14 = v109;
            }
            ptr = v11;
            HIDWORD(v109) = v15;
          }
          v11[v14] = v12;
          LODWORD(v109) = v14 + 1;
        }
        ++v9;
      }
      while ( (__int64 *)v10 != v9 );
    }
  }
  v20 = a1[15];
  if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), !(_DWORD)v21) )
  {
    v23 = 0;
    v24 = 0;
    goto LABEL_67;
  }
  v22 = 0;
  v23 = 0;
  v24 = 0;
  *(_QWORD *)v81 = 8 * v21;
  while ( 2 )
  {
    v25 = *(_QWORD *)(v20 + v22);
    if ( (*(_BYTE *)(v25 + 6) & 2) == 0 )
      goto LABEL_45;
    v26 = sub_15D1F10(*(_QWORD *)(v20 + v22));
    v27 = sub_421050(a1[5], v86, v26);
    v28 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    if ( v24 )
    {
      v29 = (*(_DWORD *)(v24 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(*(_QWORD *)v85, v24);
    }
    v30 = *(_QWORD *)(v25 + 16);
    v31 = *(_DWORD *)(v30 + 12);
    v32 = *(__int64 **)(*(_QWORD *)v84 + 24LL);
    v33 = *(unsigned int *)(*(_QWORD *)v84 + 32LL);
    v34 = v33 - 1;
    v33 *= 24;
    v35 = (__int64 *)((char *)v32 + v33);
    v36 = 24LL * (v31 & v34);
    v37 = &v32[(unsigned __int64)v36 / 8];
    if ( v36 == v33 )
    {
LABEL_55:
      while ( v37 != v32 )
      {
        v48 = *v32;
        if ( (unsigned __int64)*v32 > 1 )
        {
          if ( *(_DWORD *)(v48 + 12) == v31 && v30 == v48 )
          {
            v38 = v32;
            goto LABEL_48;
          }
        }
        else if ( !v48 )
        {
          break;
        }
        v32 += 3;
      }
LABEL_38:
      if ( v23 )
      {
        v29 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(*(_QWORD *)v85, v23);
      }
      v23 = 0;
      v40 = 0;
      v41 = *((_QWORD **)v82 + 1);
      if ( !v41 )
        goto LABEL_54;
      goto LABEL_42;
    }
    v38 = &v32[(unsigned __int64)v36 / 8];
    while ( 1 )
    {
      v39 = *v38;
      if ( (unsigned __int64)*v38 > 1 )
        break;
      if ( !v39 )
        goto LABEL_38;
LABEL_35:
      v38 += 3;
      if ( v35 == v38 )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(v39 + 12) != v31 || v30 != v39 )
      goto LABEL_35;
LABEL_48:
    v40 = v38[2];
    if ( !v40 )
      goto LABEL_38;
    v46 = *(_DWORD *)(v40 + 8) + 1;
    *(_DWORD *)(v40 + 8) = v46;
    if ( v23 )
    {
      v29 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(*(_QWORD *)v85, v23);
      v46 = *(_DWORD *)(v40 + 8);
    }
    v23 = v40;
    *(_DWORD *)(v40 + 8) = v46 + 1;
    v41 = *((_QWORD **)v82 + 1);
    if ( !v41 )
    {
LABEL_54:
      v47 = (_QWORD *)sub_186B270(0x18u);
      v41 = v47 + 1;
      *v47 = 2;
      v45 = v47 + 1;
      *((_QWORD *)v82 + 1) = v47 + 1;
      v44 = 1;
      goto LABEL_44;
    }
LABEL_42:
    v42 = *((_DWORD *)v41 - 1);
    if ( v42 == *((_DWORD *)v41 - 2) )
    {
      v49 = (3 * v42 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v42 + 8 >= (unsigned int)v50 || v42 >= v49 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v91, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v91);
        sub_233E40((__int64)v91);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (3 * v42 + 1) >> 1;
      v51 = (unsigned int *)sub_186B300(v41 - 1, v50);
      v41 = v51 + 2;
      *((_QWORD *)v82 + 1) = v51 + 2;
      *v51 = v87;
      LODWORD(v51) = v51[1];
      v45 = &v41[(unsigned int)v51];
      v44 = (_DWORD)v51 + 1;
    }
    else
    {
      v43 = v42;
      v44 = v42 + 1;
      v45 = &v41[v43];
    }
LABEL_44:
    *v45 = v40;
    *((_DWORD *)v41 - 1) = v44;
    sub_14EA0D0(v92, v25, v28);
    v24 = v28;
LABEL_45:
    ++v86;
    v22 += 8;
    if ( *(_QWORD *)v81 != v22 )
    {
      v20 = a1[15];
      continue;
    }
    break;
  }
LABEL_67:
  sub_14EA2A0(v92, *a2, a2);
  v52 = (_QWORD *)a1[15];
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v52 >= v53 )
      goto LABEL_75;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = a1[14];
          v29 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_74;
      }
      sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_74:
    v52 = (_QWORD *)a1[15];
    if ( v52 )
LABEL_75:
      *((_DWORD *)v52 - 1) = 0;
  }
  v56 = (__int64 *)ptr;
  v57 = (char *)ptr + 8 * (unsigned int)v109;
  v58 = (char *)ptr;
  if ( ptr != v57 )
  {
    do
    {
      v59 = *(_QWORD *)v58;
      v58 += 8;
      *(_BYTE *)(v59 + 6) &= ~2u;
    }
    while ( v57 != v58 );
  }
  LODWORD(v109) = 0;
  if ( v56 != v110 && v56 )
    sub_186B220(v56);
  v60 = *(__int64 **)v90;
  if ( *(_QWORD *)v90 )
  {
    v61 = *(_QWORD *)v90 + 8LL * *(unsigned int *)(*(_QWORD *)v90 - 4LL);
    if ( *(_QWORD *)v90 >= v61 )
      goto LABEL_89;
    do
    {
      while ( 1 )
      {
        v62 = *v60;
        if ( *v60 )
        {
          v29 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( (unsigned __int64)++v60 >= v61 )
          goto LABEL_88;
      }
      sub_15D7BC0(*(_QWORD *)v89, v62);
      ++v60;
    }
    while ( (unsigned __int64)v60 < v61 );
LABEL_88:
    v60 = *(__int64 **)v90;
    if ( *(_QWORD *)v90 )
LABEL_89:
      sub_186B220(v60 - 1);
  }
  v63 = v103;
  if ( v103 )
  {
    do
    {
      v64 = v63;
      v63 = (_QWORD *)*v63;
      operator delete(v64, 0x18u);
    }
    while ( v63 );
  }
  memset(s, 0, 8LL * *(_QWORD *)v102);
  *(_QWORD *)v104 = 0;
  v103 = nullptr;
  if ( s != v107 )
    operator delete(s, 8LL * *(_QWORD *)v102);
  v65 = *(__int64 **)v100;
  if ( *(_QWORD *)v100 )
  {
    v66 = *(_QWORD *)v100 + 8LL * *(unsigned int *)(*(_QWORD *)v100 - 4LL);
    if ( *(_QWORD *)v100 >= v66 )
      goto LABEL_102;
    do
    {
      while ( 1 )
      {
        v67 = *v65;
        if ( *v65 )
        {
          v68 = *(_QWORD *)v99;
          v29 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( (unsigned __int64)++v65 >= v66 )
          goto LABEL_101;
      }
      sub_15D7BC0(v68, v67);
      ++v65;
    }
    while ( (unsigned __int64)v65 < v66 );
LABEL_101:
    v65 = *(__int64 **)v100;
    if ( *(_QWORD *)v100 )
LABEL_102:
      sub_186B220(v65 - 1);
  }
  if ( *(_QWORD *)v98 )
    sub_186B220((void *)(*(_QWORD *)v98 - 8LL));
  if ( *(_QWORD *)v97 )
    sub_186B220((void *)(*(_QWORD *)v97 - 8LL));
  result = *(_QWORD *)v96;
  if ( *(_QWORD *)v96 )
    result = sub_186B220((void *)(*(_QWORD *)v96 - 8LL));
  v70 = (__int64 *)v95;
  if ( v95 )
  {
    result = *(unsigned int *)(v95 - 4);
    v71 = v95 + 8 * result;
    if ( v95 >= v71 )
      goto LABEL_117;
    do
    {
      while ( 1 )
      {
        v72 = *v70;
        if ( *v70 )
        {
          v73 = v94;
          v29 = (*(_DWORD *)(v72 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( (unsigned __int64)++v70 >= v71 )
          goto LABEL_116;
      }
      result = sub_15D7BC0(v73, v72);
      ++v70;
    }
    while ( (unsigned __int64)v70 < v71 );
LABEL_116:
    v70 = (__int64 *)v95;
    if ( v95 )
LABEL_117:
      result = sub_186B220(v70 - 1);
  }
  v74 = (__int64 *)v93;
  if ( v93 )
  {
    result = *(unsigned int *)(v93 - 4);
    v75 = v93 + 8 * result;
    if ( v93 >= v75 )
      goto LABEL_126;
    do
    {
      while ( 1 )
      {
        v76 = *v74;
        if ( *v74 )
        {
          v77 = v92[1];
          v29 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( (unsigned __int64)++v74 >= v75 )
          goto LABEL_125;
      }
      result = sub_15D7BC0(v77, v76);
      ++v74;
    }
    while ( (unsigned __int64)v74 < v75 );
LABEL_125:
    v74 = (__int64 *)v93;
    if ( v93 )
LABEL_126:
      result = sub_186B220(v74 - 1);
  }
  if ( v23 )
  {
    v29 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v29 )
      result = sub_15D7BC0(*(_QWORD *)v85, v23);
  }
  if ( v24 )
  {
    v29 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v29 )
      return sub_15D7BC0(*(_QWORD *)v85, v24);
  }
  return result;
}

