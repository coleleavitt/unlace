void __fastcall sub_221CAB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __m128i *v5; // rcx
  void *v6; // rax
  void **v7; // rsi
  char *p_ptr; // rdi
  __int64 v9; // rax
  size_t v10; // rcx
  size_t v11; // r13
  unsigned __int64 v12; // rax
  _BYTE *v13; // r14
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  void *v19; // rdi
  int v20; // r12d
  unsigned int v21; // r14d
  _DWORD *v22; // r13
  unsigned __int64 v23; // rsi
  int v24; // r15d
  unsigned int v25; // ecx
  _DWORD *v26; // rdx
  int v27; // eax
  _DWORD *v28; // rdx
  __int64 v29; // rax
  __m128i *v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // rcx
  __m128i si128; // xmm0
  __int64 v34; // rax
  __m128i *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  __m128i *v38; // rdi
  unsigned __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  _DWORD *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rax
  _DWORD *v50; // r15
  _DWORD *i; // rdx
  _DWORD *j; // r14
  int v53; // ecx
  int v54; // eax
  int v55; // esi
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  int v58; // edi
  void *v59; // rbp
  _DWORD *v60; // rcx
  _DWORD *v61; // rdi
  void *v62; // rdi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  _DWORD *v66; // rax
  _DWORD *k; // rdx
  _DWORD *v68; // r14
  int v69; // edx
  int v70; // ecx
  int v71; // ecx
  __int64 v72; // rsi
  unsigned __int64 v73; // rax
  int v74; // edi
  void *v75; // r12
  _DWORD *v76; // rcx
  _DWORD *v77; // rdi
  void *v78; // rdi
  int v79; // esi
  int v80; // edi
  unsigned int v81; // esi
  int v82; // r8d
  int v83; // r10d
  _DWORD *v84; // r9
  int v85; // esi
  int v86; // esi
  unsigned int v87; // r15d
  int v88; // edi
  int v89; // r9d
  _DWORD *v90; // r8
  __int64 v91; // rcx
  _DWORD *v92; // rcx
  _DWORD *v93; // rdx
  __int64 v94; // rcx
  _DWORD *v95; // rcx
  _DWORD *v96; // rdx
  int v97; // r10d
  unsigned __int64 v98; // r9
  int v99; // r11d
  unsigned __int64 v100; // r9
  size_t n; // [rsp+0h] [rbp-D0h]
  size_t na; // [rsp+0h] [rbp-D0h]
  size_t nb; // [rsp+0h] [rbp-D0h]
  int v104; // [rsp+8h] [rbp-C8h]
  void *v105[2]; // [rsp+38h] [rbp-98h] BYREF
  _BYTE v106[16]; // [rsp+48h] [rbp-88h] BYREF
  void *ptr; // [rsp+58h] [rbp-78h] BYREF
  unsigned __int64 v108; // [rsp+60h] [rbp-70h]
  _BYTE v109[104]; // [rsp+68h] [rbp-68h] BYREF

  if ( !a2[1] )
    return;
  v4 = sub_227D6D0(a1, a2);
  v5 = *(__m128i **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v5 > 0x4Cu )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABA00);
    qmemcpy(&v5[4], " is a no-op.\n", 13);
    *v5 = si128;
    v5[1] = _mm_load_si128((const __m128i *)&xmmword_23ABA10);
    v5[2] = _mm_load_si128((const __m128i *)&xmmword_23ABA20);
    v5[3] = _mm_load_si128((const __m128i *)&xmmword_23ABA30);
    *(_QWORD *)(v4 + 32) += 77LL;
  }
  else
  {
    sub_227BF10(v4, "Requested --debug-counter in LLVM build without assertions. This is a no-op.\n", 77);
  }
  v6 = (void *)*a2;
  v7 = v105;
  p_ptr = (char *)&ptr;
  LOBYTE(v105[0]) = 61;
  ptr = v6;
  v108 = a2[1];
  v9 = sub_2246AB0(&ptr, v105, 1, 0);
  v10 = v9;
  if ( v9 == -1
    || (v11 = v108, v12 = v9 + 1, v12 > v108)
    || (v13 = ptr, p_ptr = (char *)ptr + v12, v7 = (void **)(v108 - v12), v108 == v12) )
  {
    v29 = sub_227D6D0(p_ptr, v7);
    v30 = *(__m128i **)(v29 + 32);
    if ( *(_QWORD *)(v29 + 24) - (_QWORD)v30 > 0x13u )
    {
      v41 = _mm_load_si128((const __m128i *)&xmmword_23ABA40);
      v30[1].m128i_i32[0] = 540701295;
      *v30 = v41;
      *(_QWORD *)(v29 + 32) += 20LL;
    }
    else
    {
      v29 = sub_227BF10(v29, "DebugCounter Error: ", 20);
    }
    v31 = sub_227BF10(v29, *a2, a2[1]);
    v32 = *(__m128i **)(v31 + 32);
    if ( *(_QWORD *)(v31 + 24) - (_QWORD)v32 > 0x19u )
    {
      v42 = _mm_load_si128((const __m128i *)&xmmword_23ABA50);
      qmemcpy(&v32[1], "n = in it\n", 10);
      *v32 = v42;
      *(_QWORD *)(v31 + 32) += 26LL;
    }
    else
    {
      sub_227BF10(v31, " does not have an = in it\n", 26);
    }
    return;
  }
  n = v10;
  ptr = v109;
  v108 = 0x300000000LL;
  if ( (unsigned __int8)sub_221B2F0(p_ptr, (size_t)v7, (char *)&ptr) )
    goto LABEL_8;
  if ( n <= v11 )
    v11 = n;
  v105[0] = v106;
  sub_221A510(v105, v13, (__int64)&v13[v11]);
  v15 = sub_221BB50(a1 + 24, (__int64)v105);
  v18 = (unsigned __int64)v106;
  if ( v15 == a1 + 32 )
  {
    v19 = v105[0];
    if ( v105[0] != v106 )
      operator delete(v105[0]);
    goto LABEL_28;
  }
  v19 = v105[0];
  v20 = *(_DWORD *)(v15 + 64);
  if ( v105[0] != v106 )
    operator delete(v105[0]);
  if ( !v20 )
  {
LABEL_28:
    v34 = sub_227D6D0(v19, v105);
    v35 = *(__m128i **)(v34 + 32);
    v36 = v34;
    if ( *(_QWORD *)(v34 + 24) - (_QWORD)v35 > 0x13u )
    {
      v40 = _mm_load_si128((const __m128i *)&xmmword_23ABA40);
      v35[1].m128i_i32[0] = 540701295;
      *v35 = v40;
      v38 = (__m128i *)(*(_QWORD *)(v34 + 32) + 20LL);
      *(_QWORD *)(v34 + 32) = v38;
    }
    else
    {
      v37 = sub_227BF10(v34, "DebugCounter Error: ", 20);
      v38 = *(__m128i **)(v37 + 32);
      v36 = v37;
    }
    v39 = *(_QWORD *)(v36 + 24) - (_QWORD)v38;
    if ( v39 < v11 )
    {
      v43 = sub_227BF10(v36, v13, v11);
      v38 = *(__m128i **)(v43 + 32);
      v36 = v43;
      v39 = *(_QWORD *)(v43 + 24) - (_QWORD)v38;
    }
    else if ( v11 )
    {
      memcpy(v38, v13, v11);
      v44 = *(_QWORD *)(v36 + 24);
      v38 = (__m128i *)(v11 + *(_QWORD *)(v36 + 32));
      *(_QWORD *)(v36 + 32) = v38;
      v39 = v44 - (_QWORD)v38;
    }
    if ( v39 > 0x1C )
    {
      v45 = _mm_load_si128((const __m128i *)&xmmword_23ABA60);
      qmemcpy(&v38[1], "ered counter\n", 13);
      *v38 = v45;
      *(_QWORD *)(v36 + 32) += 29LL;
    }
    else
    {
      sub_227BF10(v36, " is not a registered counter\n", 29);
    }
LABEL_8:
    v14 = ptr;
    if ( ptr == v109 )
      return;
LABEL_20:
    free(v14);
    return;
  }
  if ( !(_BYTE)byte_2D0A7C0 && __cxa_guard_acquire(&byte_2D0A7C0) )
    sub_221A7A0((const char *)&byte_2D0A7C0);
  v21 = *(_DWORD *)(a1 + 16);
  v22 = *(_DWORD **)a1;
  LOBYTE(word_2D0A840) = 1;
  if ( !v21 )
    goto LABEL_48;
  v23 = v21 - 1;
  v24 = 37 * v20;
  v25 = v23 & (37 * v20);
  v26 = &v22[32 * (unsigned __int64)v25];
  v27 = *v26;
  if ( v20 == *v26 )
    goto LABEL_19;
  v16 = 1;
  v46 = nullptr;
  if ( v27 != -1 )
  {
    while ( 1 )
    {
      if ( v27 == -2 && !v46 )
        v46 = v26;
      v17 = (unsigned int)(v16 + 1);
      v25 = v23 & (v16 + v25);
      v26 = &v22[32 * (unsigned __int64)v25];
      v27 = *v26;
      if ( v20 == *v26 )
        goto LABEL_19;
      if ( v27 == -1 )
        break;
      v16 = (unsigned int)v17;
    }
    if ( v46 )
      v26 = v46;
  }
  v18 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  if ( 4 * (int)v18 >= 3 * v21 )
  {
LABEL_48:
    v47 = (((((((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
            | (2 * v21 - 1)
            | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 4)
          | (((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
          | (2 * v21 - 1)
          | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 8)
        | (((((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
          | (2 * v21 - 1)
          | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 4)
        | (((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
        | (2 * v21 - 1)
        | ((unsigned __int64)(2 * v21 - 1) >> 1);
    v48 = ((v47 >> 16) | v47) + 1;
    if ( (unsigned int)v48 < 0x40 )
      LODWORD(v48) = 64;
    *(_DWORD *)(a1 + 16) = v48;
    v49 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v48 << 7, 8, 64, v18, v16, v17);
    *(_QWORD *)a1 = v49;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      na = (unsigned __int64)v21 << 7;
      v50 = (_DWORD *)((char *)v22 + na);
      for ( i = &v49[32 * (unsigned __int64)*(unsigned int *)(a1 + 16)]; i != v49; v49 += 32 )
        *v49 = -1;
      for ( j = v22; v50 != j; j += 32 )
      {
        v53 = *j;
        if ( (unsigned int)(*j + 2) > 1 )
        {
          v54 = *(_DWORD *)(a1 + 16);
          if ( !v54 )
          {
            dword_0 = 0;
            BUG();
          }
          v55 = v54 - 1;
          LODWORD(v56) = (v54 - 1) & (37 * v53);
          v57 = *(_QWORD *)a1 + ((unsigned __int64)(unsigned int)v56 << 7);
          v58 = *(_DWORD *)v57;
          if ( *(_DWORD *)v57 != v53 )
          {
            v97 = 1;
            v98 = 0;
            if ( v58 != -1 )
            {
              while ( 1 )
              {
                if ( v58 == -2 && !v98 )
                  v98 = v57;
                v56 = v55 & (unsigned int)(v56 + v97);
                v57 = *(_QWORD *)a1 + (v56 << 7);
                v58 = *(_DWORD *)v57;
                if ( v53 == *(_DWORD *)v57 )
                  break;
                if ( v58 == -1 )
                {
                  if ( v98 )
                    v57 = v98;
                  break;
                }
                ++v97;
              }
            }
          }
          *(_DWORD *)v57 = v53;
          v59 = j + 12;
          *(_QWORD *)(v57 + 8) = *((_QWORD *)j + 1);
          *(_QWORD *)(v57 + 16) = *((_QWORD *)j + 2);
          *(_BYTE *)(v57 + 24) = *((_BYTE *)j + 24);
          *(_QWORD *)(v57 + 32) = v57 + 48;
          v60 = *((_DWORD **)j + 4);
          if ( v60 == j + 12 )
          {
            *(__m128i *)(v57 + 48) = _mm_loadu_si128((const __m128i *)j + 3);
          }
          else
          {
            *(_QWORD *)(v57 + 32) = v60;
            *(_QWORD *)(v57 + 48) = *((_QWORD *)j + 6);
          }
          *(_QWORD *)(v57 + 40) = *((_QWORD *)j + 5);
          *((_QWORD *)j + 4) = v59;
          *((_QWORD *)j + 5) = 0;
          *((_BYTE *)j + 48) = 0;
          *(_QWORD *)(v57 + 64) = v57 + 80;
          *(_QWORD *)(v57 + 72) = 0x300000000LL;
          if ( j[18] )
            sub_200E7A0((char ***)(v57 + 64), (char ***)j + 8);
          v61 = *((_DWORD **)j + 8);
          ++*(_DWORD *)(a1 + 8);
          if ( v61 != j + 20 )
            free(v61);
          v62 = *((void **)j + 4);
          if ( v62 != v59 )
            operator delete(v62);
        }
      }
      operator delete(v22, na, 8);
      v49 = *(_DWORD **)a1;
      v79 = *(_DWORD *)(a1 + 16);
      LODWORD(v18) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v91 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v79 = v91;
      v92 = &v49[32 * v91];
      if ( v49 != v92 )
      {
        v93 = v49;
        do
        {
          *v93 = -1;
          v93 += 32;
        }
        while ( v92 != v93 );
      }
      LODWORD(v18) = 1;
    }
    if ( v79 )
    {
      v80 = v79 - 1;
      v81 = (v79 - 1) & (37 * v20);
      v26 = &v49[32 * (unsigned __int64)v81];
      v82 = *v26;
      if ( v20 != *v26 )
      {
        v83 = 1;
        v84 = nullptr;
        if ( v82 != -1 )
        {
          while ( 1 )
          {
            if ( !v84 && v82 == -2 )
              v84 = v26;
            v81 = v80 & (v83 + v81);
            v26 = &v49[32 * (unsigned __int64)v81];
            v82 = *v26;
            if ( v20 == *v26 )
              break;
            if ( v82 == -1 )
            {
              if ( v84 )
                v26 = v84;
              goto LABEL_45;
            }
            ++v83;
          }
        }
      }
      goto LABEL_45;
    }
    goto LABEL_151;
  }
  if ( v21 - *(_DWORD *)(a1 + 12) - (unsigned int)v18 <= v21 >> 3 )
  {
    v63 = (v23 >> 1) | v23 | (((v23 >> 1) | v23) >> 2);
    v64 = (((v63 >> 4) | v63) >> 8) | (v63 >> 4) | v63;
    v65 = ((v64 >> 16) | v64) + 1;
    if ( (unsigned int)v65 < 0x40 )
      LODWORD(v65) = 64;
    *(_DWORD *)(a1 + 16) = v65;
    v66 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v65 << 7, 8, 64, v18, v16, v17);
    *(_QWORD *)a1 = v66;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      nb = (unsigned __int64)v21 << 7;
      for ( k = &v66[32 * (unsigned __int64)*(unsigned int *)(a1 + 16)]; k != v66; v66 += 32 )
        *v66 = -1;
      v68 = v22;
      v104 = v20;
      do
      {
        v69 = *v68;
        if ( (unsigned int)(*v68 + 2) > 1 )
        {
          v70 = *(_DWORD *)(a1 + 16);
          if ( !v70 )
          {
            dword_0 = 0;
            BUG();
          }
          v71 = v70 - 1;
          LODWORD(v72) = v71 & (37 * v69);
          v73 = *(_QWORD *)a1 + ((unsigned __int64)(unsigned int)v72 << 7);
          v74 = *(_DWORD *)v73;
          if ( *(_DWORD *)v73 != v69 )
          {
            v99 = 1;
            v100 = 0;
            if ( v74 != -1 )
            {
              while ( 1 )
              {
                if ( !v100 && v74 == -2 )
                  v100 = v73;
                v72 = v71 & (unsigned int)(v72 + v99);
                v73 = *(_QWORD *)a1 + (v72 << 7);
                v74 = *(_DWORD *)v73;
                if ( v69 == *(_DWORD *)v73 )
                  break;
                if ( v74 == -1 )
                {
                  if ( v100 )
                    v73 = v100;
                  break;
                }
                ++v99;
              }
            }
          }
          *(_DWORD *)v73 = v69;
          v75 = v68 + 12;
          *(_QWORD *)(v73 + 8) = *((_QWORD *)v68 + 1);
          *(_QWORD *)(v73 + 16) = *((_QWORD *)v68 + 2);
          *(_BYTE *)(v73 + 24) = *((_BYTE *)v68 + 24);
          *(_QWORD *)(v73 + 32) = v73 + 48;
          v76 = *((_DWORD **)v68 + 4);
          if ( v76 == v68 + 12 )
          {
            *(__m128i *)(v73 + 48) = _mm_loadu_si128((const __m128i *)v68 + 3);
          }
          else
          {
            *(_QWORD *)(v73 + 32) = v76;
            *(_QWORD *)(v73 + 48) = *((_QWORD *)v68 + 6);
          }
          *(_QWORD *)(v73 + 40) = *((_QWORD *)v68 + 5);
          *((_QWORD *)v68 + 4) = v75;
          *((_QWORD *)v68 + 5) = 0;
          *((_BYTE *)v68 + 48) = 0;
          *(_QWORD *)(v73 + 64) = v73 + 80;
          *(_QWORD *)(v73 + 72) = 0x300000000LL;
          if ( v68[18] )
            sub_200E7A0((char ***)(v73 + 64), (char ***)v68 + 8);
          v77 = *((_DWORD **)v68 + 8);
          ++*(_DWORD *)(a1 + 8);
          if ( v77 != v68 + 20 )
            free(v77);
          v78 = *((void **)v68 + 4);
          if ( v78 != v75 )
            operator delete(v78);
        }
        v68 += 32;
      }
      while ( (_DWORD *)((char *)v22 + nb) != v68 );
      v20 = v104;
      operator delete(v22, nb, 8);
      v66 = *(_DWORD **)a1;
      v85 = *(_DWORD *)(a1 + 16);
      LODWORD(v18) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v94 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v85 = v94;
      v95 = &v66[32 * v94];
      if ( v66 != v95 )
      {
        v96 = v66;
        do
        {
          *v96 = -1;
          v96 += 32;
        }
        while ( v95 != v96 );
      }
      LODWORD(v18) = 1;
    }
    if ( v85 )
    {
      v86 = v85 - 1;
      v87 = v86 & v24;
      v26 = &v66[32 * (unsigned __int64)v87];
      v88 = *v26;
      if ( *v26 != v20 )
      {
        v89 = 1;
        v90 = nullptr;
        if ( v88 != -1 )
        {
          while ( 1 )
          {
            if ( !v90 && v88 == -2 )
              v90 = v26;
            v87 = v86 & (v89 + v87);
            v26 = &v66[32 * (unsigned __int64)v87];
            v88 = *v26;
            if ( v20 == *v26 )
              break;
            if ( v88 == -1 )
            {
              if ( v90 )
                v26 = v90;
              goto LABEL_45;
            }
            ++v89;
          }
        }
      }
      goto LABEL_45;
    }
LABEL_151:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_45:
  *(_DWORD *)(a1 + 8) = v18;
  if ( *v26 != -1 )
    --*(_DWORD *)(a1 + 12);
  *v26 = v20;
  memset(v26 + 2, 0, 0x78u);
  *((_QWORD *)v26 + 4) = v26 + 12;
  *((_QWORD *)v26 + 8) = v26 + 20;
  *((_QWORD *)v26 + 9) = 0x300000000LL;
LABEL_19:
  v28 = v26 + 2;
  *((_BYTE *)v28 + 16) = 1;
  sub_200E7A0((char ***)v28 + 7, (char ***)&ptr);
  v14 = ptr;
  if ( ptr != v109 )
    goto LABEL_20;
}
