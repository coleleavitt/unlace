char *__fastcall sub_5EBB20(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbx
  char **v5; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int *v15; // rbx
  _QWORD *v16; // rcx
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  char v26; // r13
  __int64 v27; // rax
  __int64 v28; // r9
  _DWORD *v29; // rax
  __int64 v30; // rax
  int v31; // edi
  __int64 *v32; // rcx
  unsigned int v33; // edx
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 *i; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  unsigned int v40; // edx
  _QWORD *v41; // r15
  unsigned int v42; // esi
  unsigned __int64 v43; // r8
  __m128i *v44; // r13
  int v45; // r10d
  __int64 v46; // rcx
  __m128i *v47; // r14
  int v48; // esi
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i *v51; // rdi
  __m128i *v52; // rax
  __m128i *v53; // rcx
  __int64 v54; // rdx
  _BYTE *v55; // rdi
  char *v56; // rcx
  char *result; // rax
  __int64 v58; // rdx
  unsigned int v59; // r12d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rcx
  int v63; // edx
  _QWORD *v64; // r14
  _QWORD *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  unsigned int **v69; // rcx
  __int64 v70; // rax
  unsigned int *v71; // r14
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // r13d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  int v80; // eax
  unsigned int *v81; // rsi
  __int64 v82; // rax
  _QWORD *v83; // rax
  unsigned int v84; // r13d
  unsigned int v85; // ecx
  unsigned int *v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // r13
  char *v90; // rax
  char *v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rcx
  char v94; // r13
  __int64 v95; // rax
  __m128i *v96; // rax
  __m128i *v97; // r9
  const __m128i *v98; // rax
  __m128i *v99; // r11
  __int64 v100; // rdx
  __m128i *v101; // rsi
  __m128i *v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rsi
  _QWORD *v105; // rdx
  unsigned int v106; // [rsp+8h] [rbp-130h]
  _QWORD *v107; // [rsp+8h] [rbp-130h]
  int v108; // [rsp+8h] [rbp-130h]
  unsigned __int64 v109; // [rsp+18h] [rbp-120h]
  __int64 v110; // [rsp+20h] [rbp-118h]
  __int64 v111[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+78h] [rbp-C0h]
  _BYTE v114[184]; // [rsp+80h] [rbp-B8h] BYREF

  v8 = *(_QWORD **)(a1 + 336);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v59 = (3 * v9 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v60 || v9 >= v59 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(v8 - 1, v60);
      v62 = v61[1];
      v8 = v61 + 2;
      *v61 = v59;
      *(_QWORD *)(a1 + 336) = v61 + 2;
      LODWORD(v61) = v62;
      v12 = &v8[v62];
      v11 = (_DWORD)v61 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v8[v10];
    }
  }
  else
  {
    v83 = (_QWORD *)sub_186B270(0x18u);
    v8 = v83 + 1;
    *v83 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 336) = v8;
    v12 = v8;
  }
  *v12 = a2;
  *((_DWORD *)v8 - 1) = v11;
  ptr = v114;
  v113 = 0x1000000000LL;
  while ( v8 )
  {
    do
    {
      v13 = *((_DWORD *)v8 - 1);
      if ( !v13 )
        goto LABEL_40;
      v14 = (unsigned int)(v13 - 1);
      v15 = (unsigned int *)v8[v14];
      *((_DWORD *)v8 - 1) = v14;
    }
    while ( (*((_BYTE *)v15 + 6) & 1) != 0 );
    v16 = *(_QWORD **)(a1 + 344);
    v17 = *v15;
    if ( v16 )
    {
      v18 = *((_DWORD *)v16 - 1);
      v106 = v18;
      if ( (unsigned int)v17 < v18 )
        goto LABEL_51;
      v19 = v17 + 1;
      if ( v18 >= (int)v17 + 1 )
      {
        *((_DWORD *)v16 - 1) = v19;
        v94 = *((_BYTE *)v15 + 6) & 1;
        goto LABEL_19;
      }
    }
    else
    {
      v19 = v17 + 1;
      if ( (_DWORD)v17 == -1 )
      {
LABEL_51:
        v16[v17] = v15;
LABEL_52:
        *((_BYTE *)v15 + 6) |= 1u;
        v63 = v113;
        if ( (unsigned int)v113 >= HIDWORD(v113) )
        {
          v89 = (unsigned int)(2 * HIDWORD(v113));
          v90 = (char *)sub_186B270(8 * v89);
          v63 = v113;
          v91 = (char *)ptr;
          v64 = v90;
          if ( (_DWORD)v113 )
          {
            if ( (unsigned int)(v113 - 1) <= 2 || v90 == (char *)ptr + 8 )
            {
              v103 = 0;
              v104 = 8LL * (unsigned int)v113;
              do
              {
                v64[v103 / 8] = *(_QWORD *)&v91[v103];
                v103 += 8LL;
              }
              while ( v103 != v104 );
            }
            else
            {
              v92 = 0;
              v93 = 16LL * ((unsigned int)v113 >> 1);
              do
              {
                *(__m128i *)&v64[v92 / 8] = _mm_loadu_si128((const __m128i *)&v91[v92]);
                v92 += 16LL;
              }
              while ( v92 != v93 );
              if ( (v63 & 1) != 0 )
                v64[v63 & 0xFFFFFFFE] = *(_QWORD *)&v91[8 * (v63 & 0xFFFFFFFE)];
            }
          }
          if ( v91 != v114 && v91 )
          {
            sub_186B220(v91);
            v63 = v113;
          }
          ptr = v64;
          HIDWORD(v113) = v89;
        }
        else
        {
          v64 = ptr;
        }
        v64[v63] = v15;
        LODWORD(v113) = v63 + 1;
        goto LABEL_20;
      }
      v88 = (_QWORD *)sub_186B270(0x18u);
      v16 = v88 + 1;
      *v88 = 2;
      *(_QWORD *)(a1 + 344) = v88 + 1;
      v106 = 0;
    }
    while ( 1 )
    {
      v24 = *((_DWORD *)v16 - 2);
      if ( v24 >= v19 )
        break;
      v20 = (3 * v24 + 1) >> 1;
      v21 = 8 * v20 + 8;
      v22 = v20;
      if ( 8 * v24 + 8 >= (unsigned int)v21 || v24 >= v20 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v111, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v111);
        sub_233E40((__int64)v111);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v16 - 1, v21);
      v16 = v23 + 2;
      *v23 = v22;
      *(_QWORD *)(a1 + 344) = v23 + 2;
    }
    *((_DWORD *)v16 - 1) = v19;
    v25 = 8LL * v19;
    v26 = *((_BYTE *)v15 + 6);
    v27 = 8LL * v106;
    if ( v27 != v25 )
    {
      v107 = v16;
      memset(&v16[(unsigned __int64)v27 / 8], 0, v25 - v27);
      v16 = v107;
    }
    v94 = v26 & 1;
LABEL_19:
    v16[v17] = v15;
    if ( !v94 )
      goto LABEL_52;
LABEL_20:
    if ( *((_WORD *)v15 + 2) )
      goto LABEL_49;
    v28 = *((_QWORD *)v15 + 2);
    v29 = *(_DWORD **)(v28 + 24);
    if ( v29 && !*v29 && v29[1] == 2 && v15[6] == 2 )
    {
      sub_5F18A0(a1 + 312, **((unsigned int **)v15 + 4), **((unsigned int **)v15 + 5));
      if ( *((_WORD *)v15 + 2) )
      {
LABEL_49:
        v8 = *(_QWORD **)(a1 + 336);
        continue;
      }
      v28 = *((_QWORD *)v15 + 2);
    }
    v30 = *(unsigned int *)(a1 + 368);
    v31 = *(_DWORD *)(v28 + 12);
    v32 = *(__int64 **)(a1 + 360);
    v33 = v30 - 1;
    v30 *= 16;
    v34 = (__int64 *)((char *)v32 + v30);
    v35 = 16LL * (v31 & v33);
    v36 = &v32[(unsigned __int64)v35 / 8];
    if ( v35 != v30 )
    {
      for ( i = &v32[(unsigned __int64)v35 / 8]; v34 != i; i += 2 )
      {
        v38 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v38 + 12) == v31 && v38 == v28 )
            goto LABEL_56;
        }
        else if ( !v38 )
        {
          goto LABEL_30;
        }
      }
    }
    for ( ; v36 != v32; v32 += 2 )
    {
      v82 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
      {
        if ( *(_DWORD *)(v82 + 12) == v31 && v82 == v28 )
        {
          i = v32;
LABEL_56:
          v41 = (_QWORD *)i[1];
          goto LABEL_57;
        }
      }
      else if ( !v82 )
      {
        break;
      }
    }
LABEL_30:
    v39 = (_QWORD *)sub_186B270(8u);
    v40 = *(_DWORD *)(a1 + 368);
    *v39 = 0;
    v41 = v39;
    v42 = 2 * v40;
    v43 = *((_QWORD *)v15 + 2);
    v108 = 2 * v40;
    if ( 3 * v40 < 4 * (*(_DWORD *)(a1 + 372) + *(_DWORD *)(a1 + 376)) )
    {
      v109 = *((_QWORD *)v15 + 2);
      v96 = (__m128i *)sub_186B270(16LL * v42);
      v46 = 16LL * v42;
      v43 = v109;
      v44 = v96;
      v97 = (__m128i *)((char *)v96 + v46);
      if ( v42 )
      {
        if ( ((16 * (_BYTE)v42) & 0x10) == 0 || (*v96 = 0, ++v96, v96 != v97) )
        {
          do
          {
            *v96 = 0;
            v96 += 2;
            v96[-1] = 0;
          }
          while ( v96 != v97 );
        }
      }
      v98 = *(const __m128i **)(a1 + 360);
      v47 = v97;
      v99 = (__m128i *)&v98[*(unsigned int *)(a1 + 368)];
      v45 = v108 - 1;
      if ( v98 != v99 )
      {
        do
        {
          if ( v98->m128i_i64[0] > 1uLL )
          {
            v100 = 16LL * (*(_DWORD *)(v98->m128i_i64[0] + 12) & (unsigned int)v45);
            v101 = &v44[(unsigned __int64)v100 / 0x10];
            if ( v46 == v100 )
            {
LABEL_120:
              if ( v44 == v101 )
              {
LABEL_134:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v102 = v44;
              while ( v102->m128i_i64[0] )
              {
                if ( v101 == ++v102 )
                  goto LABEL_134;
              }
            }
            else
            {
              v102 = &v44[(unsigned __int64)v100 / 0x10];
              while ( v102->m128i_i64[0] )
              {
                if ( v97 == ++v102 )
                  goto LABEL_120;
              }
            }
            *v102 = _mm_loadu_si128(v98);
          }
          ++v98;
        }
        while ( v99 != v98 );
        v99 = *(__m128i **)(a1 + 360);
      }
      if ( v99 )
      {
        v110 = v46;
        sub_186B220(v99);
        v46 = v110;
        v45 = v108 - 1;
        v43 = v109;
      }
      *(_QWORD *)(a1 + 360) = v44;
      *(_DWORD *)(a1 + 376) = 0;
      *(_DWORD *)(a1 + 368) = v108;
    }
    else
    {
      v44 = *(__m128i **)(a1 + 360);
      v45 = v40 - 1;
      v46 = 16LL * v40;
      v47 = (__m128i *)((char *)v44 + v46);
    }
    v48 = *(_DWORD *)(v43 + 12);
    v49 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(unsigned __int64)v41);
    v50 = 16LL * (v48 & (unsigned int)v45);
    v51 = &v44[(unsigned __int64)v50 / 0x10];
    if ( v50 != v46 )
    {
      v52 = &v44[(unsigned __int64)v50 / 0x10];
      v53 = nullptr;
      while ( 1 )
      {
        v54 = v52->m128i_i64[0];
        if ( v52->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v54 + 12) == v48 && v43 == v54 )
          {
            *v52 = v49;
            goto LABEL_57;
          }
        }
        else
        {
          if ( !v54 )
          {
            if ( v53 )
              goto LABEL_131;
            v53 = v52;
            goto LABEL_132;
          }
          v53 = v52;
        }
        if ( ++v52 == v47 )
          goto LABEL_96;
      }
    }
    v53 = nullptr;
    while ( 1 )
    {
LABEL_96:
      if ( v51 == v44 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v95 = v44->m128i_i64[0];
      if ( v44->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v95 + 12) == v48 && v43 == v95 )
      {
        *v44 = v49;
        goto LABEL_57;
      }
LABEL_95:
      ++v44;
    }
    if ( v95 )
    {
      v53 = v44;
      goto LABEL_95;
    }
    if ( v53 )
LABEL_131:
      --*(_DWORD *)(a1 + 376);
    else
      v53 = v44;
LABEL_132:
    *v53 = v49;
    ++*(_DWORD *)(a1 + 372);
LABEL_57:
    v65 = (_QWORD *)*v41;
    if ( *v41 )
    {
      v66 = *((_DWORD *)v65 - 1);
      if ( v66 == *((_DWORD *)v65 - 2) )
      {
        v84 = (3 * v66 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v66 + 8 >= v85 || v66 >= v84 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = (unsigned int *)sub_186B300(v65 - 1, v85);
        v87 = v86[1];
        v65 = v86 + 2;
        *v41 = v86 + 2;
        *v86 = v84;
        LODWORD(v86) = v87;
        v69 = (unsigned int **)&v65[v87];
        v68 = (_DWORD)v86 + 1;
      }
      else
      {
        v67 = v66;
        v68 = v66 + 1;
        v69 = (unsigned int **)&v65[v67];
      }
    }
    else
    {
      v105 = (_QWORD *)sub_186B270(0x18u);
      *v105 = 2;
      v68 = 1;
      v65 = v105 + 1;
      *v41 = v65;
      v69 = (unsigned int **)v65;
    }
    *v69 = v15;
    *((_DWORD *)v65 - 1) = v68;
    v70 = v15[6];
    v8 = *(_QWORD **)(a1 + 336);
    if ( (_DWORD)v70 )
    {
      v71 = &v15[2 * v70];
      if ( !v8 )
      {
        v79 = (_QWORD *)sub_186B270(0x18u);
        v8 = v79 + 1;
        *v79 = 2;
        v80 = 1;
        *(_QWORD *)(a1 + 336) = v8;
        v81 = (unsigned int *)v8;
        goto LABEL_64;
      }
      do
      {
        v74 = *((_DWORD *)v8 - 1);
        if ( v74 == *((_DWORD *)v8 - 2) )
        {
          v75 = (3 * v74 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v74 + 8 >= (unsigned int)v76 || v74 >= v75 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v111, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v111);
            sub_233E40((__int64)v111);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (unsigned int *)sub_186B300(v8 - 1, v76);
          v78 = v77[1];
          v8 = v77 + 2;
          *v77 = v75;
          *(_QWORD *)(a1 + 336) = v77 + 2;
          v81 = &v77[2 * v78 + 2];
          v80 = v78 + 1;
        }
        else
        {
          v72 = v74;
          v80 = v74 + 1;
          v81 = (unsigned int *)&v8[v72];
        }
LABEL_64:
        v73 = *((_QWORD *)v15 + 4);
        v15 += 2;
        *(_QWORD *)v81 = v73;
        *((_DWORD *)v8 - 1) = v80;
      }
      while ( v71 != v15 );
    }
  }
LABEL_40:
  v55 = ptr;
  v56 = (char *)ptr + 8 * (unsigned int)v113;
  result = (char *)ptr;
  if ( ptr != v56 )
  {
    do
    {
      v58 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v58 + 6) &= ~1u;
    }
    while ( result != v56 );
  }
  LODWORD(v113) = 0;
  if ( v55 != v114 && v55 )
    return (char *)sub_186B220(v55);
  return result;
}

