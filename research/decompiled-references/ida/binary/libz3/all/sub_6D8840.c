__int64 __fastcall sub_6D8840(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char **v5; // rax
  _QWORD *v6; // rbx
  char **v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  _DWORD *v17; // rax
  __int64 v18; // r14
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  int v21; // eax
  __m128d v22; // xmm0
  __m128d v23; // xmm0
  __int64 result; // rax
  __int64 *v25; // r15
  __int64 v26; // rax
  char *v27; // r14
  char *v28; // rsi
  __int64 v29; // rdi
  char *v30; // rdx
  _DWORD *v31; // rax
  int v32; // edi
  size_t v33; // r15
  char *v34; // r14
  __int64 v35; // rsi
  char *v36; // r8
  char *v37; // rcx
  __int64 v38; // rsi
  char *v39; // r8
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  char **v44; // rsi
  char **v45; // rax
  char **v46; // rdi
  char *v47; // rdx
  char *v48; // rdx
  char *j; // rcx
  __int64 v50; // rsi
  int v51; // r14d
  char *v52; // r15
  unsigned int v53; // r8d
  unsigned int v54; // ecx
  int v55; // esi
  __int64 v56; // rax
  char *v57; // rdx
  char *v58; // rax
  _QWORD *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // r10
  char *v62; // rax
  int v63; // ecx
  char *v64; // r10
  size_t v65; // rdx
  char *v66; // rax
  char *v67; // r9
  char *v68; // rcx
  __int64 v69; // rdx
  char *v70; // rsi
  char *v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 *v75; // r9
  __int64 v76; // r11
  __int64 *i; // rcx
  __int64 *v78; // rcx
  __int64 *v79; // r8
  __int64 v80; // r9
  __int64 v81; // r10
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // r10
  int v85; // [rsp+0h] [rbp-178h]
  __int64 v86; // [rsp+8h] [rbp-170h]
  __int64 v87; // [rsp+10h] [rbp-168h]
  __int64 *v88; // [rsp+18h] [rbp-160h]
  int v89; // [rsp+20h] [rbp-158h]
  __int64 v90; // [rsp+20h] [rbp-158h]
  char *v91; // [rsp+20h] [rbp-158h]
  char *v92; // [rsp+20h] [rbp-158h]
  unsigned int v93; // [rsp+28h] [rbp-150h]
  int v94; // [rsp+2Ch] [rbp-14Ch]
  void *v95; // [rsp+30h] [rbp-148h] BYREF
  char *v96; // [rsp+38h] [rbp-140h]
  char *v97; // [rsp+40h] [rbp-138h]
  unsigned __int64 v98; // [rsp+48h] [rbp-130h]
  __int64 v99; // [rsp+58h] [rbp-120h] BYREF
  __int64 v100; // [rsp+60h] [rbp-118h] BYREF
  __int64 v101; // [rsp+68h] [rbp-110h] BYREF
  __int64 v102; // [rsp+70h] [rbp-108h] BYREF
  __int64 v103; // [rsp+78h] [rbp-100h] BYREF
  __int64 v104; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v105; // [rsp+88h] [rbp-F0h]
  char *v106; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+98h] [rbp-E0h]
  __m128 v108; // [rsp+A0h] [rbp-D8h]
  void *ptr[2]; // [rsp+B0h] [rbp-C8h]
  _BYTE src[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v86 = a2;
  v5 = (char **)sub_186B270(0x40u);
  v6 = (_QWORD *)a3[1];
  v103 = 0;
  v7 = v5;
  *(_OWORD *)v5 = 0;
  *((_OWORD *)v5 + 1) = 0;
  *((_OWORD *)v5 + 2) = 0;
  *((_OWORD *)v5 + 3) = 0;
  v8 = *a1;
  v104 = 0;
  v102 = v8;
  v105 = v8;
  v106 = nullptr;
  v107 = v8;
  if ( v6 )
  {
    v9 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v9 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v10 = *v6;
        if ( *v6 )
        {
          v11 = *a3;
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v6 >= v9 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v10);
      ++v6;
    }
    while ( v6 < v9 );
LABEL_8:
    v6 = (_QWORD *)a3[1];
    if ( v6 )
LABEL_9:
      *((_DWORD *)v6 - 1) = 0;
  }
  v13 = *(_QWORD *)(v86 + 16);
  if ( !v13 || (v14 = *(unsigned int *)(v13 - 4), !(_DWORD)v14) )
  {
    sub_6BFE30((__int64)v106, v107);
    sub_6BFE30(v104, v105);
    sub_2334C0(&v102);
    return sub_186B220(v7);
  }
  v89 = 0;
  v87 = 8 * v14;
  v15 = 0;
  v93 = 8;
  v88 = &v104;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v13 + v15);
    if ( *(_WORD *)(v16 + 4) )
      goto LABEL_14;
    v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( !v17 )
      goto LABEL_14;
    if ( *v17 )
    {
      if ( *v17 != 5 )
        goto LABEL_14;
    }
    else
    {
      if ( v17[1] != 2 || *(_DWORD *)(v16 + 24) != 2 )
        goto LABEL_14;
      v18 = *(_QWORD *)(v16 + 32);
      v95 = *(void **)(v16 + 40);
      v19 = *(_DWORD **)(sub_15D1F10(v18) + 24);
      if ( v19 && *v19 == 5 && v19[1] == 1
        || (v20 = *(_DWORD **)(sub_15D1F10(v18) + 24)) != nullptr && *v20 == 5 && !v20[1] )
      {
        v108 = _mm_loadh_ps((const double *)&v95);
        sub_150B360((_DWORD)a1 + 664, v85, v86, v87, (int)v88, v89, v93, v95, (int)v96, (__int64)v97);
        sub_14B9B80(a1 + 4, &v104);
        v99 = v104;
        if ( v104 )
          ++*(_DWORD *)(v104 + 8);
        sub_6C01B0(a3 + 1, &v99);
        goto LABEL_14;
      }
      if ( *(_WORD *)(v16 + 4) )
        goto LABEL_14;
      v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( !v17 || *v17 != 5 )
        goto LABEL_14;
    }
    v21 = v17[1];
    if ( v21 == 2 )
    {
      if ( *(_DWORD *)(v16 + 24) != 2 )
        goto LABEL_14;
      v23 = (__m128d)_mm_loadu_si128((const __m128i *)(v16 + 32));
    }
    else
    {
      if ( v21 != 3 || *(_DWORD *)(v16 + 24) != 2 )
        goto LABEL_14;
      v22 = (__m128d)_mm_loadu_si128((const __m128i *)(v16 + 32));
      v23 = _mm_shuffle_pd(v22, v22, 1);
    }
    v25 = v88;
    *(__m128d *)ptr = v23;
    sub_150B360((_DWORD)a1 + 664, v85, v86, v87, (int)v88, v89, v93, v95, (int)v96, (__int64)v97);
    sub_6D8500((__int64)a1, v25);
    v26 = sub_15E1A70(a1[2]);
    v27 = (char *)v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v28 = v106;
    if ( v106 )
    {
      v29 = v107;
      v12 = (*((_DWORD *)v106 + 2))-- == 1;
      if ( v12 )
        sub_15D7BC0(v29, v28);
    }
    v106 = v27;
    sub_14B9B80(a1 + 4, &v106);
    v30 = v106;
    if ( !*((_WORD *)v106 + 2) )
    {
      v31 = *(_DWORD **)(*((_QWORD *)v106 + 2) + 24LL);
      if ( v31 )
      {
        if ( *v31 == 5 && v31[1] == 6 )
        {
          v51 = *((_DWORD *)v106 + 6);
          v52 = src;
          v95 = src;
          ptr[0] = src;
          ptr[1] = (void *)0x1000000000LL;
          if ( v51 )
          {
            v53 = 16;
            v54 = 0;
            v55 = 0;
            while ( 1 )
            {
              v57 = *(char **)&v30[8 * v55 + 32];
              if ( v54 >= v53 )
              {
                LODWORD(v98) = v55;
                LODWORD(v96) = 2 * v53;
                v97 = v57;
                v58 = (char *)sub_186B270(16LL * v53);
                v54 = (unsigned int)ptr[1];
                v59 = ptr[0];
                v52 = v58;
                v53 = (unsigned int)v96;
                v57 = v97;
                v55 = v98;
                if ( LODWORD(ptr[1]) )
                {
                  if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v58 == (char *)ptr[0] + 8 )
                  {
                    v83 = 0;
                    v84 = 8LL * LODWORD(ptr[1]);
                    do
                    {
                      *(_QWORD *)&v52[v83] = v59[v83 / 8];
                      v83 += 8LL;
                    }
                    while ( v83 != v84 );
                  }
                  else
                  {
                    v60 = 0;
                    v61 = 16LL * (LODWORD(ptr[1]) >> 1);
                    do
                    {
                      *(__m128i *)&v52[v60] = _mm_loadu_si128((const __m128i *)&v59[v60 / 8]);
                      v60 += 16LL;
                    }
                    while ( v60 != v61 );
                    if ( (v54 & 1) != 0 )
                      *(_QWORD *)&v52[8 * (v54 & 0xFFFFFFFE)] = v59[v54 & 0xFFFFFFFE];
                  }
                }
                if ( v59 != v95 && v59 )
                {
                  LODWORD(v98) = v53;
                  LODWORD(v97) = v55;
                  v96 = v57;
                  sub_186B220(v59);
                  v54 = (unsigned int)ptr[1];
                  v53 = v98;
                  v55 = (int)v97;
                  v57 = v96;
                }
                ptr[0] = v52;
                HIDWORD(ptr[1]) = v53;
              }
              v56 = v54;
              ++v55;
              ++v54;
              *(_QWORD *)&v52[8 * v56] = v57;
              LODWORD(ptr[1]) = v54;
              if ( v51 == v55 )
                break;
              v30 = v106;
            }
            v73 = 8LL * v54;
            if ( &v52[v73] != v52 )
            {
              v98 = 8LL * v54;
              _BitScanReverse64(&v74, v73 >> 3);
              v97 = (char *)(a1 + 2);
              v96 = &v52[v73];
              sub_6D7980(v52, &v52[v73], 2LL * (int)v74, (__int64)(a1 + 2));
              if ( v98 <= 0x80 )
              {
                sub_6D72A0(v52, v96);
              }
              else
              {
                v97 = v96;
                v96 = v52 + 128;
                sub_6D72A0(v52, v52 + 128);
                v75 = (__int64 *)v96;
                do
                {
                  v76 = *v75;
                  for ( i = v75; sub_6BFEB0(v76, *(i - 1)); i = v78 - 1 )
                    *v78 = v81;
                  v75 = (__int64 *)(v80 + 8);
                  *v78 = v76;
                }
                while ( v79 != v75 );
              }
              v52 = (char *)ptr[0];
              v54 = (unsigned int)ptr[1];
            }
            if ( v54 == 1 )
            {
              v82 = *(_QWORD *)v52;
              if ( !*(_WORD *)(*(_QWORD *)v52 + 4LL) )
                goto LABEL_145;
            }
          }
          v82 = sub_15E1AF0(a1[2]);
          if ( v82 )
LABEL_145:
            ++*(_DWORD *)(v82 + 8);
          v96 = (char *)v82;
          sub_6BFE30((__int64)v106, v107);
          v30 = v96;
          v106 = v96;
          if ( ptr[0] != v95 && ptr[0] )
          {
            sub_186B220(ptr[0]);
            v30 = v106;
          }
        }
      }
    }
    v32 = *((_DWORD *)v30 + 3);
    v33 = 8LL * v93;
    v34 = (char *)&v7[v33 / 8];
    v35 = 8LL * ((v93 - 1) & v32);
    v36 = (char *)&v7[(unsigned __int64)v35 / 8];
    v37 = (char *)&v7[(unsigned __int64)v35 / 8];
    if ( v35 != v33 )
    {
      do
      {
        v38 = *(_QWORD *)v37;
        if ( *(_QWORD *)v37 > 1u )
        {
          if ( *(_DWORD *)(v38 + 12) == v32 && (char *)v38 == v30 )
          {
LABEL_77:
            v100 = v104;
            if ( v104 )
              ++*(_DWORD *)(v104 + 8);
            sub_6C01B0(a3 + 1, &v100);
            goto LABEL_14;
          }
        }
        else if ( !v38 )
        {
          goto LABEL_56;
        }
        v37 += 8;
      }
      while ( v34 != v37 );
    }
    if ( v7 != (char **)v36 )
    {
      for ( j = (char *)v7; v36 != j; j += 8 )
      {
        v50 = *(_QWORD *)j;
        if ( *(_QWORD *)j > 1u )
        {
          if ( *(_DWORD *)(v50 + 12) == v32 && (char *)v50 == v30 )
            goto LABEL_77;
        }
        else if ( !v50 )
        {
          break;
        }
      }
    }
LABEL_56:
    v101 = v104;
    if ( v104 )
      ++*(_DWORD *)(v104 + 8);
    LODWORD(v95) = v93 - 1;
    sub_6C01B0(&v103, &v101);
    v39 = (char *)v104;
    v40 = 2 * v93;
    v41 = (unsigned int)v95;
    if ( 3 * v93 < 4 * (v89 + v94) )
    {
      v96 = (char *)v104;
      v33 = 8LL * v40;
      LODWORD(v95) = 2 * v93;
      v93 *= 2;
      v90 = v40;
      v62 = (char *)sub_186B270(v33);
      v63 = (int)v95;
      v64 = v62;
      v39 = v96;
      if ( (_DWORD)v95 )
      {
        v65 = 8 * v90;
        v91 = v96;
        v66 = (char *)memset(v62, 0, v65);
        v39 = v91;
        v63 = (int)v95;
        v64 = v66;
      }
      v41 = v63 - 1;
      v67 = &v64[v33];
      v68 = (char *)v7;
      if ( v7 != (char **)v34 )
      {
        do
        {
          while ( *(_QWORD *)v68 <= 1u )
          {
            v68 += 8;
            if ( v34 == v68 )
              goto LABEL_119;
          }
          v69 = 8LL * (*(_DWORD *)(*(_QWORD *)v68 + 12LL) & v41);
          v70 = &v64[v69];
          if ( v33 == v69 )
          {
LABEL_122:
            if ( v64 == v70 )
            {
LABEL_127:
              v98 = (unsigned __int64)&v64[v33];
              v97 = v64;
              LODWORD(v96) = v41;
              v95 = v39;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v71 = v64;
            while ( *(_QWORD *)v71 )
            {
              v71 += 8;
              if ( v70 == v71 )
                goto LABEL_127;
            }
          }
          else
          {
            v71 = &v64[v69];
            while ( *(_QWORD *)v71 )
            {
              v71 += 8;
              if ( v67 == v71 )
                goto LABEL_122;
            }
          }
          v72 = *(_QWORD *)v68;
          v68 += 8;
          *(_QWORD *)v71 = v72;
        }
        while ( v34 != v68 );
      }
LABEL_119:
      if ( v7 )
      {
        v97 = &v64[v33];
        v96 = v64;
        LODWORD(v95) = v41;
        v92 = v39;
        sub_186B220(v7);
        v67 = v97;
        v64 = v96;
        v41 = (unsigned int)v95;
        v39 = v92;
      }
      v89 = 0;
      v34 = v67;
      v7 = (char **)v64;
    }
    v42 = *((_DWORD *)v39 + 3);
    v43 = 8LL * (v42 & v41);
    v44 = &v7[(unsigned __int64)v43 / 8];
    if ( v43 == v33 )
    {
      v46 = nullptr;
LABEL_67:
      if ( v7 != v44 )
      {
        v45 = v7;
        do
        {
          while ( 1 )
          {
            v48 = *v45;
            if ( (unsigned __int64)*v45 <= 1 )
              break;
            if ( *((_DWORD *)v48 + 3) == v42 && v39 == v48 )
              goto LABEL_128;
            if ( v44 == ++v45 )
              goto LABEL_75;
          }
          if ( !v48 )
            goto LABEL_88;
          v46 = v45++;
        }
        while ( v44 != v45 );
      }
LABEL_75:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v45 = &v7[(unsigned __int64)v43 / 8];
    v46 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v47 = *v45;
        if ( (unsigned __int64)*v45 <= 1 )
          break;
        if ( *((_DWORD *)v47 + 3) == v42 && v39 == v47 )
        {
LABEL_128:
          *v45 = v39;
          goto LABEL_14;
        }
        if ( ++v45 == (char **)v34 )
          goto LABEL_67;
      }
      if ( !v47 )
        break;
      v46 = v45++;
      if ( v45 == (char **)v34 )
        goto LABEL_67;
    }
LABEL_88:
    if ( v46 )
      --v89;
    else
      v46 = v45;
    *v46 = v39;
LABEL_14:
    v15 += 8;
    if ( v15 == v87 )
      break;
    v13 = *(_QWORD *)(v86 + 16);
  }
  sub_6BFE30((__int64)v106, v107);
  sub_6BFE30(v104, v105);
  result = sub_2334C0(&v102);
  if ( v7 )
    return sub_186B220(v7);
  return result;
}

