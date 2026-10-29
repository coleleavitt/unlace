int *__fastcall sub_4A4700(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // rbp
  int v5; // r12d
  __int64 v6; // rbx
  int *result; // rax
  int v8; // edx
  _QWORD *p_ptr; // r12
  unsigned __int64 v10; // rax
  __int16 v11; // dx
  _QWORD *v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // r12d
  int v18; // eax
  int *v19; // rsi
  int v20; // edi
  __int16 v21; // ax
  __int64 v22; // rsi
  __int64 v23; // r12
  _DWORD *v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // r9d
  _QWORD *v29; // rbx
  __int64 v30; // r8
  unsigned int v31; // r10d
  __int64 v32; // rbp
  int v33; // ecx
  __int64 v34; // r10
  _QWORD *v35; // rsi
  _QWORD *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  unsigned int *v42; // r14
  bool v43; // cc
  unsigned int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // rdx
  unsigned int **v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // r10
  __int64 v53; // r9
  int v54; // edi
  __int64 *v55; // r12
  unsigned int v56; // eax
  __int64 v57; // r9
  __int64 *v58; // rax
  int v59; // r8d
  __int64 v60; // rdx
  __int64 *v61; // r11
  __int64 *v62; // rdx
  __int64 *v63; // r9
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int **v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // r8
  __int64 *v72; // r11
  __int64 v73; // rdx
  __int64 *v74; // rsi
  __int64 *v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned int **v79; // rax
  __int64 v80; // rbp
  _QWORD *v81; // rax
  int v82; // r9d
  _QWORD *v83; // rax
  _QWORD *v84; // rcx
  __int64 v85; // rdx
  _QWORD *v86; // rsi
  _QWORD *v87; // rdx
  __int64 v88; // rax
  unsigned int *v89; // [rsp+8h] [rbp-190h]
  unsigned int v90; // [rsp+8h] [rbp-190h]
  unsigned int v91; // [rsp+8h] [rbp-190h]
  unsigned int *v92; // [rsp+8h] [rbp-190h]
  size_t v93; // [rsp+8h] [rbp-190h]
  unsigned int v94; // [rsp+8h] [rbp-190h]
  unsigned int *v95; // [rsp+8h] [rbp-190h]
  unsigned int v97; // [rsp+18h] [rbp-180h]
  int v98; // [rsp+18h] [rbp-180h]
  __int64 v99; // [rsp+18h] [rbp-180h]
  __int64 v100; // [rsp+20h] [rbp-178h]
  int v101; // [rsp+20h] [rbp-178h]
  __int64 v102; // [rsp+28h] [rbp-170h]
  __int64 v103; // [rsp+28h] [rbp-170h]
  __int64 v104; // [rsp+30h] [rbp-168h]
  __int64 v105; // [rsp+30h] [rbp-168h]
  char *v106; // [rsp+38h] [rbp-160h]
  _QWORD *v107; // [rsp+50h] [rbp-148h]
  __int64 v108; // [rsp+58h] [rbp-140h]
  _DWORD *ptr; // [rsp+60h] [rbp-138h] BYREF
  int v110; // [rsp+68h] [rbp-130h]

  v4 = a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
    }
    else
    {
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
      if ( (v5 & *result) != 0 )
        return result;
    }
    *result = v5 | v8;
  }
  p_ptr = &ptr;
  ptr = v4;
  v107 = &ptr;
  v110 = 0;
  v108 = 0x1000000001LL;
  LODWORD(v10) = 0;
  while ( 1 )
  {
LABEL_8:
    v11 = *((_WORD *)v4 + 2);
    v12 = &p_ptr[2 * (unsigned int)v10];
    if ( v11 == 1 )
      goto LABEL_39;
    if ( v11 != 2 )
      break;
    v39 = v4[18];
    v40 = *((_DWORD *)v12 + 2);
    v41 = v39 + v4[19] + 1;
    if ( v40 >= v41 )
    {
LABEL_38:
      LODWORD(v10) = v108 - 1;
LABEL_39:
      LODWORD(v108) = v10;
      goto LABEL_40;
    }
    if ( !v40 )
    {
      v42 = *((unsigned int **)v4 + 3);
      goto LABEL_51;
    }
    while ( 1 )
    {
      v68 = v40 - 1;
      if ( v39 < v40 )
        v68 = (unsigned int)v68 - v39;
      v42 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v68];
LABEL_51:
      ++v40;
      v43 = v42[2] <= 1;
      *((_DWORD *)v12 + 2) = v40;
      if ( v43 )
        break;
      v44 = *v42;
      if ( *v42 >= *(_DWORD *)(a2 + 8) )
      {
        v90 = *v42;
        sub_186B510(a2 + 8, v44 + 1, 0);
        v45 = *(_QWORD *)(a2 + 16);
        v44 = v90;
LABEL_54:
        *(_DWORD *)(v45 + 4LL * (v44 >> 5)) |= 1 << v44;
        break;
      }
      v45 = *(_QWORD *)(a2 + 16);
      if ( (*(_DWORD *)(v45 + 4LL * (v44 >> 5)) & (1 << v44)) == 0 )
        goto LABEL_54;
      if ( v40 >= v41 )
        goto LABEL_38;
      v39 = v4[18];
    }
    v46 = (unsigned int)v108;
    if ( (unsigned int)v108 >= HIDWORD(v108) )
    {
      p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
      v69 = 0;
      v46 = (unsigned int)v108;
      if ( (_DWORD)v108 )
      {
        do
        {
          *(__m128i *)&p_ptr[v69] = _mm_loadu_si128((const __m128i *)&v107[v69]);
          v69 += 2;
        }
        while ( v69 != 2LL * (unsigned int)v108 );
      }
      if ( v107 != &ptr && v107 )
      {
        sub_186B220(v107);
        v46 = (unsigned int)v108;
      }
      v107 = p_ptr;
      HIDWORD(v108) *= 2;
    }
    else
    {
      p_ptr = v107;
    }
    v47 = (unsigned int **)&p_ptr[2 * v46];
    *v47 = v42;
    *((_DWORD *)v47 + 2) = 0;
    v48 = (unsigned int)v108;
    v49 = v108 + 1;
LABEL_58:
    LODWORD(v108) = v49;
    LODWORD(v10) = v49 - 1;
    v4 = (_DWORD *)p_ptr[2 * v48];
  }
  if ( v11 )
  {
    v38 = 100;
    sub_1872CE0("");
    goto LABEL_43;
  }
  v13 = v4[6];
  v14 = *((_DWORD *)v12 + 2);
  if ( v14 < v13 )
  {
    while ( 1 )
    {
      v15 = v14++;
      v16 = *(unsigned int **)&v4[2 * v15 + 8];
      *((_DWORD *)v12 + 2) = v14;
      if ( v16[2] > 1 )
      {
        v17 = *v16;
        if ( *v16 < *(_DWORD *)(a2 + 8) )
        {
          v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
          v20 = *v19;
          v18 = 1 << v17;
          if ( ((1 << v17) & *v19) != 0 )
            goto LABEL_22;
        }
        else
        {
          v89 = v16;
          sub_186B510(a2 + 8, v17 + 1, 0);
          v16 = v89;
          v18 = 1 << v17;
          v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
          v20 = *v19;
        }
        *v19 = v20 | v18;
      }
      v21 = *((_WORD *)v16 + 2);
      if ( v21 == 1 )
      {
LABEL_21:
        v14 = *((_DWORD *)v12 + 2);
        goto LABEL_22;
      }
      if ( v21 == 2 )
      {
        v66 = (unsigned int)v108;
        if ( (unsigned int)v108 >= HIDWORD(v108) )
        {
          v92 = v16;
          p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
          v70 = 0;
          v16 = v92;
          v66 = (unsigned int)v108;
          if ( (_DWORD)v108 )
          {
            do
            {
              *(__m128i *)&p_ptr[v70] = _mm_loadu_si128((const __m128i *)&v107[v70]);
              v70 += 2;
            }
            while ( v70 != 2LL * (unsigned int)v108 );
          }
          if ( v107 != &ptr && v107 )
          {
            sub_186B220(v107);
            v66 = (unsigned int)v108;
            v16 = v92;
          }
          v107 = p_ptr;
          HIDWORD(v108) *= 2;
        }
        else
        {
          p_ptr = v107;
        }
        v67 = (unsigned int **)&p_ptr[2 * v66];
        *v67 = v16;
        *((_DWORD *)v67 + 2) = 0;
        v48 = (unsigned int)v108;
        v49 = v108 + 1;
        goto LABEL_58;
      }
      if ( v21 )
      {
        v22 = 73;
        sub_1872CE0("");
        goto LABEL_20;
      }
      if ( v16[6] )
      {
        v78 = (unsigned int)v108;
        if ( (unsigned int)v108 >= HIDWORD(v108) )
        {
          v95 = v16;
          p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
          v88 = 0;
          v16 = v95;
          v78 = (unsigned int)v108;
          if ( (_DWORD)v108 )
          {
            do
            {
              *(__m128i *)&p_ptr[v88] = _mm_loadu_si128((const __m128i *)&v107[v88]);
              v88 += 2;
            }
            while ( v88 != 2LL * (unsigned int)v108 );
          }
          if ( v107 != &ptr && v107 )
          {
            sub_186B220(v107);
            v78 = (unsigned int)v108;
            v16 = v95;
          }
          v107 = p_ptr;
          HIDWORD(v108) *= 2;
        }
        else
        {
          p_ptr = v107;
        }
        v79 = (unsigned int **)&p_ptr[2 * v78];
        *((_DWORD *)v79 + 2) = 0;
        v48 = (unsigned int)v108;
        *v79 = v16;
        v49 = v108 + 1;
        goto LABEL_58;
      }
      v50 = *((_QWORD *)v16 + 2);
      v51 = *(_DWORD **)(v50 + 24);
      if ( v51 && *v51 != -1 )
        goto LABEL_21;
      v52 = *a1;
      v53 = *(unsigned int *)(*a1 + 8);
      v54 = *(_DWORD *)(*a1 + 16);
      v97 = 2 * v53;
      if ( 3 * (int)v53 < (unsigned int)(4 * (v54 + *(_DWORD *)(*a1 + 12))) )
      {
        v104 = *a1;
        v102 = *((_QWORD *)v16 + 2);
        v55 = (__int64 *)sub_186B270(8LL * v97);
        v57 = 8LL * v97;
        v50 = v102;
        v52 = v104;
        if ( v97 )
        {
          memset(v55, 0, 8LL * v97);
          v50 = v102;
          v52 = v104;
          v57 = 8LL * v97;
        }
        v71 = *(__int64 **)v52;
        v91 = v97 - 1;
        v72 = (__int64 *)(*(_QWORD *)v52 + 8LL * *(unsigned int *)(v52 + 8));
        v58 = (__int64 *)((char *)v55 + v57);
        if ( *(__int64 **)v52 != v72 )
        {
          do
          {
            while ( (unsigned __int64)*v71 <= 1 )
            {
              if ( v72 == ++v71 )
                goto LABEL_112;
            }
            v73 = 8LL * (*(_DWORD *)(*v71 + 12) & v91);
            v74 = &v55[(unsigned __int64)v73 / 8];
            if ( v57 == v73 )
            {
LABEL_116:
              if ( v55 == v74 )
              {
LABEL_132:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v75 = v55;
              while ( *v75 )
              {
                if ( v74 == ++v75 )
                  goto LABEL_132;
              }
            }
            else
            {
              v75 = &v55[(unsigned __int64)v73 / 8];
              while ( *v75 )
              {
                if ( v58 == ++v75 )
                  goto LABEL_116;
              }
            }
            v76 = *v71++;
            *v75 = v76;
          }
          while ( v72 != v71 );
LABEL_112:
          v72 = *(__int64 **)v52;
        }
        if ( v72 )
        {
          v106 = (char *)v55 + v57;
          v105 = v57;
          v103 = v52;
          v100 = v50;
          sub_186B220(v72);
          v58 = (__int64 *)v106;
          v57 = v105;
          v52 = v103;
          v50 = v100;
        }
        *(_QWORD *)v52 = v55;
        *(_DWORD *)(v52 + 16) = 0;
        *(_DWORD *)(v52 + 8) = v97;
        v54 = 0;
      }
      else
      {
        v55 = *(__int64 **)v52;
        v56 = v53 - 1;
        v57 = 8 * v53;
        v91 = v56;
        v58 = (__int64 *)(*(_QWORD *)v52 + v57);
      }
      v59 = *(_DWORD *)(v50 + 12);
      v60 = 8LL * (v59 & v91);
      v61 = &v55[(unsigned __int64)v60 / 8];
      if ( v60 != v57 )
      {
        v62 = &v55[(unsigned __int64)v60 / 8];
        v63 = nullptr;
        while ( 1 )
        {
          v64 = *v62;
          if ( (unsigned __int64)*v62 > 1 )
          {
            if ( *(_DWORD *)(v64 + 12) == v59 && v50 == v64 )
            {
              *v62 = v50;
              v14 = *((_DWORD *)v12 + 2);
              goto LABEL_22;
            }
          }
          else
          {
            if ( !v64 )
            {
              if ( v63 )
                goto LABEL_122;
              v63 = v62;
              goto LABEL_123;
            }
            v63 = v62;
          }
          if ( ++v62 == v58 )
            goto LABEL_75;
        }
      }
      v63 = nullptr;
      while ( 1 )
      {
LABEL_75:
        if ( v61 == v55 )
        {
          v22 = 405;
          sub_1872CE0("");
LABEL_20:
          sub_1873130(114, v22);
        }
        v65 = *v55;
        if ( (unsigned __int64)*v55 <= 1 )
          break;
        if ( *(_DWORD *)(v65 + 12) == v59 && v50 == v65 )
        {
          *v55 = v50;
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_22;
        }
LABEL_74:
        ++v55;
      }
      if ( v65 )
        break;
      if ( v63 )
LABEL_122:
        *(_DWORD *)(v52 + 16) = v54 - 1;
      else
        v63 = v55;
LABEL_123:
      *v63 = v50;
      v14 = *((_DWORD *)v12 + 2);
      ++*(_DWORD *)(v52 + 12);
LABEL_22:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v108 - 1;
        goto LABEL_24;
      }
    }
    v63 = v55;
    goto LABEL_74;
  }
LABEL_24:
  v23 = *((_QWORD *)v4 + 2);
  LODWORD(v108) = v10;
  v24 = *(_DWORD **)(v23 + 24);
  if ( v24 && *v24 != -1 )
  {
    p_ptr = v107;
    if ( (_DWORD)v10 )
      goto LABEL_41;
    goto LABEL_45;
  }
  v25 = *a1;
  v26 = *(unsigned int *)(*a1 + 8);
  v27 = *(_DWORD *)(*a1 + 16);
  v28 = 2 * v26;
  if ( 3 * (int)v26 < (unsigned int)(4 * (v27 + *(_DWORD *)(*a1 + 12))) )
  {
    v80 = v28;
    v98 = 2 * v26;
    v93 = 8LL * v28;
    v81 = (_QWORD *)sub_186B270(v93);
    v82 = v98;
    v30 = v93;
    v29 = v81;
    if ( v98 )
    {
      memset(v81, 0, 8 * v80);
      v30 = v93;
      v82 = v98;
    }
    v83 = *(_QWORD **)v25;
    v31 = v82 - 1;
    v32 = (__int64)v29 + v30;
    v84 = (_QWORD *)(*(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8));
    if ( *(_QWORD **)v25 != v84 )
    {
      do
      {
        if ( *v83 > 1u )
        {
          v85 = 8LL * (*(_DWORD *)(*v83 + 12LL) & v31);
          v86 = &v29[(unsigned __int64)v85 / 8];
          if ( v30 == v85 )
          {
LABEL_154:
            if ( v29 == v86 )
            {
LABEL_171:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v87 = v29;
            while ( *v87 )
            {
              if ( v86 == ++v87 )
                goto LABEL_171;
            }
          }
          else
          {
            v87 = &v29[(unsigned __int64)v85 / 8];
            while ( *v87 )
            {
              if ( (_QWORD *)v32 == ++v87 )
                goto LABEL_154;
            }
          }
          *v87 = *v83;
        }
        ++v83;
      }
      while ( v84 != v83 );
      v84 = *(_QWORD **)v25;
    }
    if ( v84 )
    {
      v101 = v82;
      v99 = v30;
      v94 = v82 - 1;
      sub_186B220(v84);
      v82 = v101;
      v30 = v99;
      v31 = v94;
    }
    *(_QWORD *)v25 = v29;
    v27 = 0;
    *(_DWORD *)(v25 + 8) = v82;
    *(_DWORD *)(v25 + 16) = 0;
  }
  else
  {
    v29 = *(_QWORD **)v25;
    v30 = 8 * v26;
    v31 = v26 - 1;
    v32 = *(_QWORD *)v25 + 8 * v26;
  }
  v33 = *(_DWORD *)(v23 + 12);
  v34 = v33 & v31;
  v35 = &v29[v34];
  if ( 8 * v34 != v30 )
  {
    v10 = (unsigned __int64)&v29[v34];
    v36 = nullptr;
    while ( 1 )
    {
      v37 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 > 1u )
      {
        if ( *(_DWORD *)(v37 + 12) == v33 && v23 == v37 )
        {
          *(_QWORD *)v10 = v23;
          LODWORD(v10) = v108;
          p_ptr = v107;
          goto LABEL_40;
        }
      }
      else
      {
        if ( !v37 )
        {
          if ( v36 )
            goto LABEL_161;
          v36 = (_QWORD *)v10;
          goto LABEL_162;
        }
        v36 = (_QWORD *)v10;
      }
      v10 += 8LL;
      if ( v10 == v32 )
        goto LABEL_127;
    }
  }
  v36 = nullptr;
  while ( 1 )
  {
LABEL_127:
    if ( v35 == v29 )
    {
      v38 = 405;
      sub_1872CE0("");
LABEL_43:
      sub_1873130(114, v38);
    }
    v77 = *v29;
    if ( *v29 <= 1u )
      break;
    if ( *(_DWORD *)(v77 + 12) == v33 && v23 == v77 )
    {
      *v29 = v23;
      LODWORD(v10) = v108;
      p_ptr = v107;
      goto LABEL_40;
    }
LABEL_126:
    ++v29;
  }
  if ( v77 )
  {
    v36 = v29;
    goto LABEL_126;
  }
  if ( v36 )
LABEL_161:
    *(_DWORD *)(v25 + 16) = v27 - 1;
  else
    v36 = v29;
LABEL_162:
  *v36 = v23;
  LODWORD(v10) = v108;
  ++*(_DWORD *)(v25 + 12);
  p_ptr = v107;
LABEL_40:
  if ( (_DWORD)v10 )
  {
LABEL_41:
    v10 = (unsigned int)(v10 - 1);
    v4 = (_DWORD *)p_ptr[2 * v10];
    goto LABEL_8;
  }
LABEL_45:
  result = (int *)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return (int *)sub_186B220(p_ptr);
  }
  return result;
}

