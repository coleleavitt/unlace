__int64 __fastcall sub_930640(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rdx
  unsigned int v3; // eax
  __int64 **v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bl
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  bool *v13; // rdx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  _QWORD *v19; // r12
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // ebp
  size_t v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r15
  _DWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _DWORD *v30; // r8
  _DWORD *v31; // rax
  int v32; // edi
  __int64 v33; // rdi
  __int64 v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  __int64 *v39; // r13
  _QWORD *v40; // rax
  _QWORD *v41; // r15
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // r12d
  size_t v45; // rdi
  unsigned int *v46; // rax
  __int64 v47; // r14
  unsigned int *v48; // rbx
  __int64 v49; // rax
  _QWORD *v50; // rdx
  _DWORD *v51; // rdi
  _DWORD *j; // rax
  int v53; // esi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rdi
  _QWORD *v58; // rdx
  __int64 v59; // rax
  _QWORD *v61; // rax
  unsigned int v62; // ebx
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int *v65; // rax
  unsigned int v66; // r14d
  unsigned int v67; // edx
  unsigned int *v68; // r15
  __int64 *v69; // r12
  __int64 v70; // r8
  __int64 *v71; // r9
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __m128i v75; // xmm0
  unsigned __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rbp
  __int64 v81; // rdi
  unsigned int v82; // ebx
  unsigned int v83; // edx
  unsigned int v84; // ebx
  unsigned int v85; // edx
  unsigned int *v86; // r12
  _QWORD *v87; // rdi
  __int64 v88; // rax
  _DWORD *v89; // rdx
  _QWORD *v90; // rsi
  _QWORD *i; // rax
  __int64 v92; // rcx
  unsigned int v93; // ebp
  unsigned int *v94; // rax
  __int64 v95; // rdx
  __int64 *v96; // rdx
  _DWORD *v97; // rcx
  __int64 v98; // r10
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  char **exception; // rbp
  _QWORD *v105; // [rsp+8h] [rbp-70h]
  unsigned int v106; // [rsp+8h] [rbp-70h]
  __int64 *v107; // [rsp+8h] [rbp-70h]
  unsigned int v109; // [rsp+18h] [rbp-60h]
  unsigned int v110; // [rsp+1Ch] [rbp-5Ch]
  __int64 v111[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_QWORD *)a1[4];
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1);
    v110 = v3;
    v109 = v3;
    if ( v3 == *((_DWORD *)v2 - 2) )
    {
      v62 = (3 * v3 + 1) >> 1;
      v63 = 8 * v3 + 8;
      v64 = 8 * v62 + 8;
      if ( v63 >= v64 || *((_DWORD *)v2 - 1) >= v62 )
        goto LABEL_107;
      v65 = (unsigned int *)sub_186B300(v2 - 1, v64);
      v2 = v65 + 2;
      *v65 = v62;
      a1[4] = v65 + 2;
      LODWORD(v65) = v65[1];
      v4 = (__int64 **)&v2[(unsigned int)v65];
      v5 = (_DWORD)v65 + 1;
    }
    else
    {
      v4 = (__int64 **)&v2[v3];
      v5 = v3 + 1;
    }
  }
  else
  {
    v100 = (_QWORD *)sub_186B270(0x18u);
    v110 = 0;
    *v100 = 2;
    v2 = v100 + 1;
    v109 = 0;
    a1[4] = v100 + 1;
    v4 = (__int64 **)(v100 + 1);
    v5 = 1;
  }
  *v4 = a2;
  v6 = *a2;
  v7 = 0;
  *((_DWORD *)v2 - 1) = v5;
  v8 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v8 && *v8 == 5 )
    v7 = v8[1] == 1;
  v9 = (_QWORD *)a1[26];
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v93 = (3 * v10 + 1) >> 1;
      if ( v10 + 8 >= v93 + 8 || v10 >= v93 )
        goto LABEL_107;
      v94 = (unsigned int *)sub_186B300(v9 - 1, v93 + 8);
      v95 = v94[1];
      v9 = v94 + 2;
      *v94 = v93;
      a1[26] = v94 + 2;
      LODWORD(v94) = v95;
      v13 = (bool *)v9 + v95;
      v12 = (_DWORD)v94 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = (bool *)v9 + v11;
    }
  }
  else
  {
    v102 = (_QWORD *)sub_186B270(0xAu);
    *v102 = 2;
    v9 = v102 + 1;
    a1[26] = v102 + 1;
    v13 = (bool *)(v102 + 1);
    v12 = 1;
  }
  *v13 = v7;
  *((_DWORD *)v9 - 1) = v12;
  v14 = (_QWORD *)a1[35];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v82 = 3 * v15 + 1;
      v83 = v82 & 0xFFFFFFFE;
      v84 = v82 >> 1;
      v85 = 4 * (v84 + v83) + 8;
      if ( 12 * (int)v15 + 8 >= v85 || (unsigned int)v15 >= v84 )
        goto LABEL_107;
      v86 = (unsigned int *)sub_186B270(v85);
      v14 = v86 + 2;
      v87 = (_QWORD *)a1[35];
      if ( v87 )
      {
        v88 = *((unsigned int *)v87 - 1);
        v89 = v86 + 2;
        v86[1] = v88;
        v90 = (_QWORD *)((char *)v87 + 12 * v88);
        for ( i = v87; v90 != i; *(v89 - 1) = *((_DWORD *)i - 1) )
        {
          v92 = *i;
          i = (_QWORD *)((char *)i + 12);
          v89 += 3;
          *(_QWORD *)(v89 - 3) = v92;
        }
        sub_186B220(v87 - 1);
        v16 = (_QWORD *)((char *)v14 + 12 * v86[1]);
      }
      else
      {
        v86[1] = 0;
        v16 = v86 + 2;
      }
      *v86 = v84;
      a1[35] = v14;
    }
    else
    {
      v16 = (_QWORD *)((char *)v14 + 12 * v15);
    }
  }
  else
  {
    v101 = (_QWORD *)sub_186B270(0x20u);
    *v101 = 2;
    v14 = v101 + 1;
    a1[35] = v101 + 1;
    v16 = v101 + 1;
  }
  *v16 = 0;
  *((_DWORD *)v16 + 2) = 0;
  ++*((_DWORD *)v14 - 1);
  v17 = a1[25];
  if ( !v17 )
    goto LABEL_101;
  v18 = *(_DWORD *)(v17 - 4);
  v105 = (_QWORD *)(v17 + 8LL * v18);
  if ( v105 == (_QWORD *)v17 )
    goto LABEL_36;
  v19 = (_QWORD *)a1[25];
  do
  {
    v21 = (_QWORD *)*v19;
    if ( *v19 )
    {
      v22 = *((unsigned int *)v21 - 1);
      if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
      {
        v23 = (unsigned int)(3 * v22 + 1) >> 1;
        v24 = 8 * (v23 + ((3 * (_DWORD)v22 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
          goto LABEL_107;
        v25 = sub_186B270(v24);
        v26 = (_QWORD *)*v19;
        v27 = (_DWORD *)v25;
        v21 = (_QWORD *)(v25 + 8);
        if ( *v19 )
        {
          v28 = *((unsigned int *)v26 - 1);
          v29 = v21;
          v27[1] = v28;
          v30 = &v26[3 * v28];
          v31 = v26;
          if ( v26 != (_QWORD *)v30 )
          {
            do
            {
              v32 = *v31;
              v31 += 6;
              v29 += 3;
              *((_DWORD *)v29 - 6) = v32;
              *(_QWORD *)((char *)v29 - 20) = *(_QWORD *)(v31 - 5);
              v33 = *((_QWORD *)v31 - 1);
              *((_QWORD *)v31 - 1) = 0;
              *(v29 - 1) = v33;
            }
            while ( v30 != v31 );
          }
          v34 = *((unsigned int *)v26 - 1);
          if ( (_DWORD)v34 )
          {
            v35 = &v26[3 * v34];
            do
            {
              while ( 1 )
              {
                v36 = v26[2];
                if ( !v36 )
                  break;
                v26 += 3;
                sub_186B220((void *)(v36 - 8));
                if ( v35 == v26 )
                  goto LABEL_29;
              }
              v26 += 3;
            }
            while ( v26 != v35 );
LABEL_29:
            v26 = (_QWORD *)*v19;
          }
          sub_186B220(v26 - 1);
          v20 = &v21[3 * (unsigned int)v27[1]];
        }
        else
        {
          *(_DWORD *)(v25 + 4) = 0;
          v20 = (_QWORD *)(v25 + 8);
        }
        *v19 = v21;
        *v27 = v23;
      }
      else
      {
        v20 = &v21[3 * v22];
      }
    }
    else
    {
      v61 = (_QWORD *)sub_186B270(0x38u);
      v21 = v61 + 1;
      *v61 = 2;
      *v19 = v61 + 1;
      v20 = v61 + 1;
    }
    v20[1] = 0;
    ++v19;
    v20[2] = 0;
    *v20 = 0xFFFFFFFFLL;
    ++*((_DWORD *)v21 - 1);
  }
  while ( v105 != v19 );
  v17 = a1[25];
  if ( !v17 )
  {
LABEL_101:
    v99 = (_QWORD *)sub_186B270(0x18u);
    v17 = (unsigned __int64)(v99 + 1);
    *v99 = 2;
    v39 = v99 + 1;
    a1[25] = v99 + 1;
    v38 = 1;
    goto LABEL_38;
  }
  v18 = *(_DWORD *)(v17 - 4);
LABEL_36:
  if ( *(_DWORD *)(v17 - 8) != v18 )
  {
    v37 = v18;
    v38 = v18 + 1;
    v39 = (__int64 *)(v17 + 8 * v37);
    goto LABEL_38;
  }
  v66 = (3 * v18 + 1) >> 1;
  v67 = 8 * v66 + 8;
  if ( 8 * v18 + 8 >= v67 || v18 >= v66 )
  {
LABEL_107:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(v111, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v111);
    sub_233E40((__int64)v111);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v68 = (unsigned int *)sub_186B270(v67);
  v17 = (unsigned __int64)(v68 + 2);
  v69 = (__int64 *)a1[25];
  if ( v69 )
  {
    v70 = *((unsigned int *)v69 - 1);
    v68[1] = v70;
    v71 = &v69[v70];
    if ( v69 != v71 )
    {
      v72 = 8 * v70 - 8;
      if ( v72 <= 8 || v17 < (unsigned __int64)(v69 + 2) && v69 < (__int64 *)v68 + 3 )
      {
        v96 = v69;
        v97 = v68 + 2;
        do
        {
          v98 = *v96;
          *v96++ = 0;
          v97 += 2;
          *((_QWORD *)v97 - 1) = v98;
        }
        while ( v96 != v71 );
      }
      else
      {
        v73 = (v72 >> 3) + 1;
        v74 = 0;
        do
        {
          v75 = _mm_loadu_si128((const __m128i *)&v69[v74 / 2]);
          *(_OWORD *)&v69[v74 / 2] = 0;
          *(__m128i *)&v68[v74 + 2] = v75;
          v74 += 4LL;
        }
        while ( 4 * (v73 >> 1) != v74 );
        if ( (v73 & 1) != 0 )
        {
          v76 = 2 * (v73 & 0xFFFFFFFFFFFFFFFELL);
          v77 = v69[v76 / 2];
          v69[v76 / 2] = 0;
          *(_QWORD *)&v68[v76 + 2] = v77;
        }
      }
    }
    v107 = &v69[v70];
    if ( (_DWORD)v70 )
    {
      do
      {
        v78 = *v69;
        if ( *v69 )
        {
          v79 = *(unsigned int *)(v78 - 4);
          if ( (_DWORD)v79 )
          {
            v80 = v78 + 24 * v79;
            do
            {
              while ( 1 )
              {
                v81 = *(_QWORD *)(v78 + 16);
                if ( !v81 )
                  break;
                v78 += 24;
                sub_186B220((void *)(v81 - 8));
                if ( v80 == v78 )
                  goto LABEL_80;
              }
              v78 += 24;
            }
            while ( v80 != v78 );
LABEL_80:
            v78 = *v69;
          }
          sub_186B220((void *)(v78 - 8));
        }
        ++v69;
      }
      while ( v69 != v107 );
      v69 = (__int64 *)a1[25];
    }
    sub_186B220(v69 - 1);
    v39 = (__int64 *)(v17 + 8LL * v68[1]);
    v38 = v68[1] + 1;
  }
  else
  {
    v68[1] = 0;
    v39 = (__int64 *)(v68 + 2);
    v38 = 1;
  }
  *v68 = v66;
  a1[25] = v17;
LABEL_38:
  *v39 = 0;
  *(_DWORD *)(v17 - 4) = v38;
  v106 = v109 + 1;
  if ( v109 != -1 )
  {
    v40 = (_QWORD *)sub_186B270(0x38u);
    v41 = v40 + 1;
    *v40 = 2;
    *v39 = (__int64)(v40 + 1);
    while ( 1 )
    {
      v42 = *((_DWORD *)v41 - 2);
      v43 = v106;
      if ( v42 >= v106 )
        break;
      while ( 1 )
      {
        v44 = (3 * v42 + 1) >> 1;
        v45 = 8 * (v44 + ((3 * v42 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
          goto LABEL_107;
        v46 = (unsigned int *)sub_186B270(v45);
        v47 = *v39;
        v48 = v46;
        v41 = v46 + 2;
        if ( !*v39 )
          break;
        v49 = *(unsigned int *)(v47 - 4);
        v50 = v41;
        v48[1] = v49;
        v51 = (_DWORD *)(v47 + 24 * v49);
        for ( j = (_DWORD *)v47; v51 != j; *(v50 - 1) = v54 )
        {
          v53 = *j;
          j += 6;
          v50 += 3;
          *((_DWORD *)v50 - 6) = v53;
          *(_QWORD *)((char *)v50 - 20) = *(_QWORD *)(j - 5);
          v54 = *((_QWORD *)j - 1);
          *((_QWORD *)j - 1) = 0;
        }
        v55 = *(unsigned int *)(v47 - 4);
        if ( (_DWORD)v55 )
        {
          v56 = v47 + 24 * v55;
          do
          {
            while ( 1 )
            {
              v57 = *(_QWORD *)(v47 + 16);
              if ( !v57 )
                break;
              v47 += 24;
              sub_186B220((void *)(v57 - 8));
              if ( v56 == v47 )
                goto LABEL_50;
            }
            v47 += 24;
          }
          while ( v56 != v47 );
LABEL_50:
          v47 = *v39;
        }
        sub_186B220((void *)(v47 - 8));
        *v39 = (__int64)v41;
        v43 = v106;
        *v48 = v44;
        v42 = *((_DWORD *)v41 - 2);
        if ( v42 >= v106 )
          goto LABEL_52;
      }
      v46[1] = 0;
      *v39 = (__int64)v41;
      *v46 = v44;
    }
LABEL_52:
    *((_DWORD *)v41 - 1) = v43;
    v58 = &v41[3 * v43];
    v17 = a1[25];
    do
    {
      *v41 = 0xFFFFFFFFLL;
      v41 += 3;
      *((_DWORD *)v41 - 4) = 0;
      *(v41 - 1) = 0;
    }
    while ( v58 != v41 );
  }
  v59 = *(_QWORD *)(v17 + 8LL * v110) + 24LL * v110;
  *(_QWORD *)v59 = 0;
  *(_DWORD *)(v59 + 8) = 0;
  sub_B66EF0(a1[2], a2, a1, v109);
  return v109;
}

