__int64 *__fastcall sub_2091AB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 *v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // r12d
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // rax
  int v18; // edi
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 *v25; // r15
  _QWORD *j; // rdx
  __int64 *k; // r12
  __int64 v28; // rax
  int v29; // edx
  int v30; // esi
  __int64 v31; // rdi
  unsigned int v32; // ecx
  __int64 *v33; // rdx
  __int64 v34; // r8
  __int64 *v35; // rcx
  void *v36; // rax
  void *v37; // rdi
  int v38; // esi
  int v39; // r8d
  unsigned int v40; // edi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 *v45; // r15
  _QWORD *i; // rdx
  __int64 *v47; // r14
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // r9
  unsigned int v52; // esi
  __int64 *v53; // rdx
  __int64 v54; // rdi
  __int64 *v55; // rcx
  void *v56; // rax
  void *v57; // rdi
  int v58; // esi
  int v59; // edi
  unsigned int v60; // r12d
  __int64 *v61; // r8
  int v62; // r9d
  __int64 v63; // rdx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  int v69; // r10d
  __int64 *v70; // r9
  int v71; // r11d
  __int64 *v72; // r10
  __int64 *v73; // r9
  int v74; // r10d
  __int64 v75; // [rsp+8h] [rbp-40h]

  v7 = *a1;
  v8 = *(unsigned int *)(*a1 + 2920);
  v9 = *(__int64 **)(*a1 + 2904);
  if ( !(_DWORD)v8 )
    goto LABEL_20;
  v10 = a2;
  v11 = a2;
  v12 = (unsigned int)(v8 - 1);
  v13 = (v11 >> 9) ^ (v10 >> 4);
  v14 = v12 & v13;
  v15 = &v9[5 * ((unsigned int)v12 & v13)];
  v16 = *v15;
  if ( a2 != *v15 )
  {
    v18 = 1;
    a5 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v16 == -8192 )
          a5 = v15;
        a6 = (unsigned int)(v18 + 1);
        v14 = v12 & (v18 + v14);
        v15 = &v9[5 * v14];
        v16 = *v15;
        if ( a2 == *v15 )
          return v15 + 1;
        if ( v16 == -4096 )
          break;
        ++v18;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(v7 + 2912) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *(_DWORD *)(v7 + 2916) - (int)a4 > (unsigned int)v8 >> 3 )
      {
LABEL_7:
        v19 = *v15;
        goto LABEL_8;
      }
      v41 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v42 = ((v41 >> 16) | v41) + 1;
      if ( (unsigned int)v42 < 0x40 )
        LODWORD(v42) = 64;
      *(_DWORD *)(v7 + 2920) = v42;
      v43 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v42, 8, 64, a4, a5, a6);
      *(_QWORD *)(v7 + 2904) = v43;
      if ( v9 )
      {
        v44 = *(unsigned int *)(v7 + 2920);
        *(_QWORD *)(v7 + 2912) = 0;
        v75 = 40 * v8;
        v45 = &v9[5 * v8];
        for ( i = &v43[5 * v44]; i != v43; v43 += 5 )
          *v43 = -4096;
        v47 = v9;
        do
        {
          v48 = *v47;
          if ( *v47 != -4096 && v48 != -8192 )
          {
            v49 = *(_DWORD *)(v7 + 2920);
            if ( !v49 )
            {
              *(_QWORD *)&dword_0 = *v47;
              BUG();
            }
            v50 = v49 - 1;
            v51 = *(_QWORD *)(v7 + 2904);
            v52 = v50 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
            v53 = (__int64 *)(v51 + 40LL * v52);
            v54 = *v53;
            if ( v48 != *v53 )
            {
              v71 = 1;
              v72 = nullptr;
              if ( v54 != -4096 )
              {
                while ( 1 )
                {
                  if ( v54 == -8192 && !v72 )
                    v72 = v53;
                  v52 = v50 & (v71 + v52);
                  v53 = (__int64 *)(v51 + 40LL * v52);
                  v54 = *v53;
                  if ( v48 == *v53 )
                    break;
                  if ( v54 == -4096 )
                  {
                    if ( v72 )
                      v53 = v72;
                    break;
                  }
                  ++v71;
                }
              }
            }
            *v53 = v48;
            v53[1] = (__int64)(v53 + 3);
            v55 = (__int64 *)v47[1];
            v56 = v47 + 3;
            if ( v55 == v47 + 3 )
            {
              *(__m128i *)(v53 + 3) = _mm_loadu_si128((const __m128i *)(v47 + 3));
            }
            else
            {
              v53[1] = (__int64)v55;
              v53[3] = v47[3];
            }
            v53[2] = v47[2];
            v47[1] = (__int64)v56;
            v47[2] = 0;
            *((_BYTE *)v47 + 24) = 0;
            ++*(_DWORD *)(v7 + 2912);
            v57 = (void *)v47[1];
            if ( v57 != v56 )
              operator delete(v57);
          }
          v47 += 5;
        }
        while ( v45 != v47 );
        operator delete(v9, v75, 8);
        v43 = *(_QWORD **)(v7 + 2904);
        v58 = *(_DWORD *)(v7 + 2920);
        LODWORD(a4) = *(_DWORD *)(v7 + 2912) + 1;
      }
      else
      {
        v66 = *(unsigned int *)(v7 + 2920);
        *(_QWORD *)(v7 + 2912) = 0;
        v58 = v66;
        v67 = &v43[5 * v66];
        if ( v43 != v67 )
        {
          v68 = v43;
          do
          {
            *v68 = -4096;
            v68 += 5;
          }
          while ( v67 != v68 );
        }
        LODWORD(a4) = 1;
      }
      if ( v58 )
      {
        v59 = v58 - 1;
        v60 = (v58 - 1) & v13;
        v15 = &v43[5 * v60];
        v19 = *v15;
        if ( a2 != *v15 )
        {
          if ( v19 != -4096 )
          {
            v61 = &v43[5 * v60];
            v62 = 1;
            v15 = nullptr;
            while ( 1 )
            {
              if ( v19 == -8192 && !v15 )
                v15 = v61;
              v60 = v59 & (v62 + v60);
              v61 = &v43[5 * v60];
              v19 = *v61;
              if ( a2 == *v61 )
              {
                v15 = &v43[5 * v60];
                goto LABEL_8;
              }
              if ( v19 == -4096 )
                break;
              ++v62;
            }
            if ( v15 )
              goto LABEL_7;
            v15 = &v43[5 * v60];
          }
LABEL_39:
          *(_DWORD *)(v7 + 2912) = a4;
LABEL_10:
          *v15 = a2;
          v15[1] = (__int64)(v15 + 3);
          v15[2] = 0;
          *((_BYTE *)v15 + 24) = 0;
          return v15 + 1;
        }
        goto LABEL_8;
      }
      goto LABEL_109;
    }
LABEL_20:
    v20 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v21 = ((v20 >> 16) | v20) + 1;
    if ( (unsigned int)v21 < 0x40 )
      LODWORD(v21) = 64;
    *(_DWORD *)(v7 + 2920) = v21;
    v22 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v21, 8, 64, a4, a5, a6);
    *(_QWORD *)(v7 + 2904) = v22;
    if ( v9 )
    {
      v23 = *(unsigned int *)(v7 + 2920);
      *(_QWORD *)(v7 + 2912) = 0;
      v24 = 5 * v8;
      v25 = &v9[v24];
      for ( j = &v22[5 * v23]; j != v22; v22 += 5 )
        *v22 = -4096;
      for ( k = v9; v25 != k; k += 5 )
      {
        v28 = *k;
        if ( *k != -8192 && v28 != -4096 )
        {
          v29 = *(_DWORD *)(v7 + 2920);
          if ( !v29 )
          {
            *(_QWORD *)&dword_0 = *k;
            BUG();
          }
          v30 = v29 - 1;
          v31 = *(_QWORD *)(v7 + 2904);
          v32 = (v29 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v33 = (__int64 *)(v31 + 40LL * v32);
          v34 = *v33;
          if ( *v33 != v28 )
          {
            v69 = 1;
            v70 = nullptr;
            if ( v34 != -4096 )
            {
              while ( 1 )
              {
                if ( !v70 && v34 == -8192 )
                  v70 = v33;
                v32 = v30 & (v69 + v32);
                v33 = (__int64 *)(v31 + 40LL * v32);
                v34 = *v33;
                if ( v28 == *v33 )
                  break;
                if ( v34 == -4096 )
                {
                  if ( v70 )
                    v33 = v70;
                  break;
                }
                ++v69;
              }
            }
          }
          *v33 = v28;
          v33[1] = (__int64)(v33 + 3);
          v35 = (__int64 *)k[1];
          v36 = k + 3;
          if ( v35 == k + 3 )
          {
            *(__m128i *)(v33 + 3) = _mm_loadu_si128((const __m128i *)(k + 3));
          }
          else
          {
            v33[1] = (__int64)v35;
            v33[3] = k[3];
          }
          v33[2] = k[2];
          k[1] = (__int64)v36;
          k[2] = 0;
          *((_BYTE *)k + 24) = 0;
          ++*(_DWORD *)(v7 + 2912);
          v37 = (void *)k[1];
          if ( v37 != v36 )
            operator delete(v37);
        }
      }
      operator delete(v9, v24 * 8, 8);
      v22 = *(_QWORD **)(v7 + 2904);
      v38 = *(_DWORD *)(v7 + 2920);
      LODWORD(a4) = *(_DWORD *)(v7 + 2912) + 1;
    }
    else
    {
      v63 = *(unsigned int *)(v7 + 2920);
      *(_QWORD *)(v7 + 2912) = 0;
      v38 = v63;
      v64 = &v22[5 * v63];
      if ( v22 != v64 )
      {
        v65 = v22;
        do
        {
          *v65 = -4096;
          v65 += 5;
        }
        while ( v64 != v65 );
      }
      LODWORD(a4) = 1;
    }
    if ( v38 )
    {
      v39 = v38 - 1;
      v40 = (v38 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = &v22[5 * v40];
      v19 = *v15;
      if ( a2 != *v15 )
      {
        if ( v19 != -4096 )
        {
          v73 = &v22[5 * (v39 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v74 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v19 == -8192 && !v15 )
              v15 = v73;
            v40 = v39 & (v74 + v40);
            v73 = &v22[5 * v40];
            v19 = *v73;
            if ( a2 == *v73 )
            {
              v15 = &v22[5 * v40];
              goto LABEL_8;
            }
            if ( v19 == -4096 )
              break;
            ++v74;
          }
          if ( v15 )
            goto LABEL_7;
          v15 = &v22[5 * v40];
        }
        goto LABEL_39;
      }
LABEL_8:
      *(_DWORD *)(v7 + 2912) = a4;
      if ( v19 != -4096 )
        --*(_DWORD *)(v7 + 2916);
      goto LABEL_10;
    }
LABEL_109:
    ++*(_DWORD *)(v7 + 2912);
    BUG();
  }
  return v15 + 1;
}
