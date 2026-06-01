__int64 __fastcall sub_423C20(__int64 ***a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // rbp
  int v5; // r13d
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  _QWORD *p_ptr; // r14
  unsigned __int64 v10; // rdx
  __int16 v11; // cx
  _QWORD *v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int *v16; // r15
  unsigned int v17; // ecx
  int v18; // edi
  int *v19; // rdx
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // rdi
  int v25; // esi
  __int64 *v26; // r8
  __int64 v27; // rsi
  __int64 *v28; // r9
  __int64 *j; // rcx
  __int64 v30; // rsi
  __int64 **v31; // r14
  __int64 v32; // rdx
  int v33; // r10d
  __int64 *v34; // rbp
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 *v37; // r9
  _QWORD *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // esi
  bool v44; // cc
  unsigned int v45; // ecx
  __int64 v46; // rdi
  __int64 v47; // rcx
  unsigned int **v48; // rcx
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rdx
  __int64 *v54; // rdi
  int v55; // eax
  unsigned int v56; // esi
  __int64 *v57; // r9
  __int64 v58; // rsi
  __int64 *v59; // r10
  __int64 *i; // rdx
  __int64 v61; // rsi
  __int64 **v62; // r15
  __int64 v63; // rdx
  int v64; // r8d
  __int64 *v65; // r9
  __int64 v66; // r10
  __int64 v67; // rdx
  __int64 *v68; // r11
  __int64 *v69; // rdx
  __int64 *v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // rax
  void *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned int **v82; // rdx
  __int64 v83; // rdx
  __int64 *v84; // rax
  __int64 *v85; // rax
  __int64 *v86; // rax
  __int64 *v87; // r11
  __int64 v88; // rdx
  __int64 *v89; // rsi
  __int64 *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 *v93; // rdi
  __int64 *v94; // rax
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 *v97; // rsi
  __int64 *v98; // rdx
  unsigned int v99; // [rsp+0h] [rbp-198h]
  size_t v100; // [rsp+0h] [rbp-198h]
  unsigned int v101; // [rsp+0h] [rbp-198h]
  size_t v102; // [rsp+0h] [rbp-198h]
  unsigned int v104; // [rsp+18h] [rbp-180h]
  unsigned int v105; // [rsp+18h] [rbp-180h]
  unsigned int v106; // [rsp+24h] [rbp-174h]
  unsigned int v107; // [rsp+24h] [rbp-174h]
  __int64 v108; // [rsp+28h] [rbp-170h]
  __int64 v109; // [rsp+28h] [rbp-170h]
  __int64 *v110; // [rsp+30h] [rbp-168h]
  __int64 *v111; // [rsp+38h] [rbp-160h]
  _QWORD *v112; // [rsp+50h] [rbp-148h]
  __int64 v113; // [rsp+58h] [rbp-140h]
  _DWORD *ptr; // [rsp+60h] [rbp-138h] BYREF
  int v115; // [rsp+68h] [rbp-130h]

  v4 = a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
    }
    else
    {
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
      if ( (v5 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v5 | v8;
  }
  result = 0x1000000001LL;
  p_ptr = &ptr;
  ptr = v4;
  LODWORD(v10) = 0;
  v112 = &ptr;
  v115 = 0;
  v113 = 0x1000000001LL;
  while ( 1 )
  {
LABEL_8:
    v11 = *((_WORD *)v4 + 2);
    v12 = &p_ptr[2 * (unsigned int)v10];
    if ( v11 == 1 )
      goto LABEL_46;
    if ( v11 != 2 )
      break;
    v41 = v4[18];
    v42 = *((_DWORD *)v12 + 2);
    v43 = v41 + v4[19] + 1;
    if ( v42 >= v43 )
    {
LABEL_45:
      result = (unsigned int)v113;
      LODWORD(v10) = v113 - 1;
LABEL_46:
      LODWORD(v113) = v10;
      goto LABEL_47;
    }
    if ( !v42 )
    {
      v16 = *((unsigned int **)v4 + 3);
      goto LABEL_58;
    }
    while ( 1 )
    {
      v76 = v42 - 1;
      if ( v41 < v42 )
        v76 = (unsigned int)v76 - v41;
      v16 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v76];
LABEL_58:
      ++v42;
      v44 = v16[2] <= 1;
      *((_DWORD *)v12 + 2) = v42;
      if ( v44 )
        break;
      v45 = *v16;
      if ( *v16 >= *(_DWORD *)(a2 + 8) )
      {
        v101 = *v16;
        sub_186B510(a2 + 8, v45 + 1, 0);
        v46 = *(_QWORD *)(a2 + 16);
        v45 = v101;
LABEL_61:
        result = v45 >> 5;
        *(_DWORD *)(v46 + 4 * result) |= 1 << v45;
        break;
      }
      v46 = *(_QWORD *)(a2 + 16);
      if ( (*(_DWORD *)(v46 + 4LL * (v45 >> 5)) & (1 << v45)) == 0 )
        goto LABEL_61;
      if ( v42 >= v43 )
        goto LABEL_45;
      v41 = v4[18];
    }
    v47 = (unsigned int)v113;
    if ( (unsigned int)v113 >= HIDWORD(v113) )
    {
      v72 = (unsigned int)(2 * HIDWORD(v113));
      result = sub_186B270(16 * v72);
      v74 = v112;
      p_ptr = (_QWORD *)result;
      v77 = 0;
      v47 = (unsigned int)v113;
      if ( (_DWORD)v113 )
      {
        do
        {
          *(__m128i *)(result + v77 * 8) = _mm_loadu_si128((const __m128i *)&v112[v77]);
          v77 += 2;
        }
        while ( v77 != 2LL * (unsigned int)v113 );
      }
      if ( v112 )
      {
        result = (__int64)&ptr;
        if ( v112 != &ptr )
          goto LABEL_91;
      }
      goto LABEL_92;
    }
LABEL_63:
    p_ptr = v112;
LABEL_64:
    v48 = (unsigned int **)&p_ptr[2 * v47];
    *v48 = v16;
    *((_DWORD *)v48 + 2) = 0;
    v49 = (unsigned int)v113;
    v50 = v113 + 1;
LABEL_65:
    LODWORD(v113) = v50;
    LODWORD(v10) = v50 - 1;
    v4 = (_DWORD *)p_ptr[2 * v49];
  }
  if ( v11 )
  {
    v40 = 100;
    sub_1872CE0("");
    goto LABEL_50;
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
          v18 = 1 << v17;
          v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
          v20 = *v19;
          if ( ((1 << v17) & *v19) != 0 )
            goto LABEL_22;
        }
        else
        {
          v99 = *v16;
          sub_186B510(a2 + 8, v17 + 1, 0);
          v18 = 1 << v99;
          v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v99 >> 5));
          v20 = *v19;
        }
        *v19 = v20 | v18;
      }
      result = *((unsigned __int16 *)v16 + 2);
      if ( (_WORD)result == 1 )
        goto LABEL_21;
      if ( (_WORD)result == 2 )
      {
        v47 = (unsigned int)v113;
        if ( (unsigned int)v113 < HIDWORD(v113) )
          goto LABEL_63;
        v72 = (unsigned int)(2 * HIDWORD(v113));
        v73 = sub_186B270(16 * v72);
        v74 = v112;
        p_ptr = (_QWORD *)v73;
        v75 = 0;
        v47 = (unsigned int)v113;
        if ( (_DWORD)v113 )
        {
          do
          {
            *(__m128i *)(v73 + v75 * 8) = _mm_loadu_si128((const __m128i *)&v112[v75]);
            v75 += 2;
          }
          while ( v75 != 2LL * (unsigned int)v113 );
        }
        result = (__int64)&ptr;
        if ( v112 != &ptr && v112 )
        {
LABEL_91:
          result = sub_186B220(v74);
          v47 = (unsigned int)v113;
        }
LABEL_92:
        v112 = p_ptr;
        HIDWORD(v113) = v72;
        goto LABEL_64;
      }
      if ( (_WORD)result )
      {
        v21 = 73;
        sub_1872CE0("");
        goto LABEL_20;
      }
      if ( v16[6] )
      {
        v81 = (unsigned int)v113;
        if ( (unsigned int)v113 >= HIDWORD(v113) )
        {
          v91 = sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v113)));
          p_ptr = (_QWORD *)v91;
          v92 = 0;
          v81 = (unsigned int)v113;
          if ( (_DWORD)v113 )
          {
            do
            {
              *(__m128i *)(v91 + v92 * 8) = _mm_loadu_si128((const __m128i *)&v112[v92]);
              v92 += 2;
            }
            while ( v92 != 2LL * (unsigned int)v113 );
          }
          result = (__int64)&ptr;
          if ( v112 != &ptr && v112 )
          {
            result = sub_186B220(v112);
            v81 = (unsigned int)v113;
          }
          v112 = p_ptr;
          HIDWORD(v113) *= 2;
        }
        else
        {
          p_ptr = v112;
        }
        v82 = (unsigned int **)&p_ptr[2 * v81];
        *((_DWORD *)v82 + 2) = 0;
        v49 = (unsigned int)v113;
        *v82 = v16;
        v50 = v113 + 1;
        goto LABEL_65;
      }
      v51 = *((_QWORD *)v16 + 2);
      v52 = *(_DWORD **)(v51 + 24);
      if ( v52 && *v52 != -1 )
        goto LABEL_21;
      v53 = *((unsigned int *)*a1 + 2);
      v54 = **a1;
      v55 = *(_DWORD *)(v51 + 12);
      v56 = v53 - 1;
      v53 *= 8;
      v57 = (__int64 *)((char *)v54 + v53);
      v58 = 8LL * (v55 & v56);
      v59 = &v54[(unsigned __int64)v58 / 8];
      if ( v58 != v53 )
      {
        for ( i = &v54[(unsigned __int64)v58 / 8]; v57 != i; ++i )
        {
          v61 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v61 + 12) == v55 && v51 == v61 )
              goto LABEL_21;
          }
          else if ( !v61 )
          {
            goto LABEL_76;
          }
        }
      }
      if ( v54 != v59 )
      {
        v78 = *v54;
        if ( (unsigned __int64)*v54 > 1 )
        {
LABEL_106:
          if ( *(_DWORD *)(v78 + 12) != v55 || v51 != v78 )
            goto LABEL_108;
LABEL_21:
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_22;
        }
        while ( v78 )
        {
LABEL_108:
          if ( v59 == ++v54 )
            break;
          v78 = *v54;
          if ( (unsigned __int64)*v54 > 1 )
            goto LABEL_106;
        }
      }
LABEL_76:
      v62 = a1[1];
      v63 = *((unsigned int *)v62 + 2);
      v64 = *((_DWORD *)v62 + 4);
      v107 = 2 * v63;
      if ( 3 * (int)v63 < (unsigned int)(4 * (v64 + *((_DWORD *)v62 + 3))) )
      {
        v108 = v51;
        v102 = 8LL * v107;
        v84 = (__int64 *)sub_186B270(v102);
        v51 = v108;
        v65 = v84;
        if ( v107 )
        {
          v85 = (__int64 *)memset(v84, 0, 8LL * v107);
          v51 = v108;
          v65 = v85;
        }
        v86 = *v62;
        v105 = v107 - 1;
        v87 = &(*v62)[*((unsigned int *)v62 + 2)];
        v66 = (__int64)&v65[v102 / 8];
        if ( *v62 != v87 )
        {
          do
          {
            if ( (unsigned __int64)*v86 > 1 )
            {
              v88 = 8LL * (*(_DWORD *)(*v86 + 12) & v105);
              v89 = &v65[(unsigned __int64)v88 / 8];
              if ( v102 == v88 )
              {
LABEL_149:
                if ( v65 == v89 )
                {
LABEL_167:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v90 = v65;
                while ( *v90 )
                {
                  if ( v89 == ++v90 )
                    goto LABEL_167;
                }
              }
              else
              {
                v90 = &v65[(unsigned __int64)v88 / 8];
                while ( *v90 )
                {
                  if ( (__int64 *)v66 == ++v90 )
                    goto LABEL_149;
                }
              }
              *v90 = *v86;
            }
            ++v86;
          }
          while ( v87 != v86 );
          v87 = *v62;
        }
        if ( v87 )
        {
          v111 = &v65[v102 / 8];
          v110 = v65;
          v109 = v51;
          sub_186B220(v87);
          v66 = (__int64)v111;
          v65 = v110;
          v51 = v109;
        }
        *v62 = v65;
        v64 = 0;
        *((_DWORD *)v62 + 4) = 0;
        *((_DWORD *)v62 + 2) = v107;
        v55 = *(_DWORD *)(v51 + 12);
      }
      else
      {
        v65 = *v62;
        v105 = v63 - 1;
        v102 = 8 * v63;
        v66 = (__int64)&(*v62)[v63];
      }
      v67 = 8LL * (v55 & v105);
      v68 = &v65[(unsigned __int64)v67 / 8];
      if ( v67 != v102 )
      {
        v69 = &v65[(unsigned __int64)v67 / 8];
        v70 = nullptr;
        while ( 1 )
        {
          v71 = *v69;
          if ( (unsigned __int64)*v69 > 1 )
          {
            if ( *(_DWORD *)(v71 + 12) == v55 && v51 == v71 )
            {
              *v69 = v51;
              v14 = *((_DWORD *)v12 + 2);
              goto LABEL_22;
            }
          }
          else
          {
            if ( !v71 )
            {
              if ( v70 )
                goto LABEL_159;
              v70 = v69;
              goto LABEL_160;
            }
            v70 = v69;
          }
          if ( ++v69 == (__int64 *)v66 )
            goto LABEL_115;
        }
      }
      v70 = nullptr;
      while ( 1 )
      {
LABEL_115:
        if ( v68 == v65 )
        {
          v21 = 405;
          sub_1872CE0("");
LABEL_20:
          sub_1873130(114, v21);
        }
        v79 = *v65;
        if ( (unsigned __int64)*v65 <= 1 )
          break;
        if ( *(_DWORD *)(v79 + 12) == v55 && v51 == v79 )
        {
          *v65 = v51;
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_22;
        }
LABEL_114:
        ++v65;
      }
      if ( v79 )
        break;
      if ( v70 )
LABEL_159:
        *((_DWORD *)v62 + 4) = v64 - 1;
      else
        v70 = v65;
LABEL_160:
      *v70 = v51;
      v14 = *((_DWORD *)v12 + 2);
      ++*((_DWORD *)v62 + 3);
LABEL_22:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v113 - 1;
        goto LABEL_24;
      }
    }
    v70 = v65;
    goto LABEL_114;
  }
LABEL_24:
  v22 = *((_QWORD *)v4 + 2);
  LODWORD(v113) = v10;
  result = *(_QWORD *)(v22 + 24);
  if ( result && *(_DWORD *)result != -1 )
  {
LABEL_51:
    p_ptr = v112;
    if ( (_DWORD)v10 )
      goto LABEL_48;
    goto LABEL_52;
  }
  v23 = *((unsigned int *)*a1 + 2);
  v24 = **a1;
  result = *(unsigned int *)(v22 + 12);
  v25 = v23 - 1;
  v23 *= 8;
  v26 = (__int64 *)((char *)v24 + v23);
  v27 = 8LL * ((unsigned int)result & v25);
  v28 = &v24[(unsigned __int64)v27 / 8];
  if ( v27 != v23 )
  {
    for ( j = &v24[(unsigned __int64)v27 / 8]; v26 != j; ++j )
    {
      v30 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v30 + 12) == (_DWORD)result && v22 == v30 )
          goto LABEL_51;
      }
      else if ( !v30 )
      {
        goto LABEL_33;
      }
    }
  }
  for ( ; v28 != v24; ++v24 )
  {
    v80 = *v24;
    if ( (unsigned __int64)*v24 > 1 )
    {
      if ( *(_DWORD *)(v80 + 12) == (_DWORD)result && v22 == v80 )
        goto LABEL_51;
    }
    else if ( !v80 )
    {
      break;
    }
  }
LABEL_33:
  v31 = a1[1];
  v32 = *((unsigned int *)v31 + 2);
  v33 = *((_DWORD *)v31 + 4);
  v104 = 2 * v32;
  if ( 3 * (int)v32 < (unsigned int)(4 * (v33 + *((_DWORD *)v31 + 3))) )
  {
    v100 = 8LL * v104;
    v34 = (__int64 *)sub_186B270(v100);
    if ( v104 )
      memset(v34, 0, 8LL * v104);
    v93 = *v31;
    v94 = *v31;
    v106 = v104 - 1;
    v95 = (__int64)&(*v31)[*((unsigned int *)v31 + 2)];
    v35 = (__int64)&v34[v100 / 8];
    if ( *v31 != (__int64 *)v95 )
    {
      do
      {
        if ( (unsigned __int64)*v94 > 1 )
        {
          v96 = 8LL * (*(_DWORD *)(*v94 + 12) & v106);
          v97 = &v34[(unsigned __int64)v96 / 8];
          if ( v100 == v96 )
          {
LABEL_185:
            if ( v34 == v97 )
            {
LABEL_198:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v98 = v34;
            while ( *v98 )
            {
              if ( v97 == ++v98 )
                goto LABEL_198;
            }
          }
          else
          {
            v98 = &v34[(unsigned __int64)v96 / 8];
            while ( *v98 )
            {
              if ( (__int64 *)v35 == ++v98 )
                goto LABEL_185;
            }
          }
          *v98 = *v94;
        }
        ++v94;
      }
      while ( (__int64 *)v95 != v94 );
      v93 = *v31;
    }
    if ( v93 )
      sub_186B220(v93);
    *v31 = v34;
    v33 = 0;
    *((_DWORD *)v31 + 4) = 0;
    *((_DWORD *)v31 + 2) = v104;
    result = *(unsigned int *)(v22 + 12);
  }
  else
  {
    v34 = *v31;
    v106 = v32 - 1;
    v100 = 8 * v32;
    v35 = (__int64)&(*v31)[v32];
  }
  v36 = 8LL * ((unsigned int)result & v106);
  v37 = &v34[(unsigned __int64)v36 / 8];
  if ( v36 == v100 )
  {
    v38 = nullptr;
LABEL_134:
    while ( v37 != v34 )
    {
      v83 = *v34;
      if ( (unsigned __int64)*v34 > 1 )
      {
        if ( *(_DWORD *)(v83 + 12) == (_DWORD)result && v22 == v83 )
        {
          LODWORD(v10) = v113;
          p_ptr = v112;
          *v34 = v22;
          goto LABEL_47;
        }
      }
      else
      {
        if ( !v83 )
        {
          if ( v38 )
            *((_DWORD *)v31 + 4) = v33 - 1;
          else
            v38 = v34;
          goto LABEL_196;
        }
        v38 = v34;
      }
      ++v34;
    }
    v40 = 405;
    sub_1872CE0("");
LABEL_50:
    sub_1873130(114, v40);
  }
  v10 = (unsigned __int64)&v34[(unsigned __int64)v36 / 8];
  v38 = nullptr;
  while ( 1 )
  {
    v39 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 <= 1u )
      break;
    if ( *(_DWORD *)(v39 + 12) == (_DWORD)result && v22 == v39 )
    {
      *(_QWORD *)v10 = v22;
      p_ptr = v112;
      LODWORD(v10) = v113;
      goto LABEL_47;
    }
LABEL_39:
    v10 += 8LL;
    if ( v10 == v35 )
      goto LABEL_134;
  }
  if ( v39 )
  {
    v38 = (_QWORD *)v10;
    goto LABEL_39;
  }
  if ( v38 )
  {
    result = (unsigned int)(v33 - 1);
    *((_DWORD *)v31 + 4) = result;
  }
  else
  {
    v38 = (_QWORD *)v10;
  }
LABEL_196:
  *v38 = v22;
  LODWORD(v10) = v113;
  ++*((_DWORD *)v31 + 3);
  p_ptr = v112;
LABEL_47:
  if ( (_DWORD)v10 )
  {
LABEL_48:
    v10 = (unsigned int)(v10 - 1);
    v4 = (_DWORD *)p_ptr[2 * v10];
    goto LABEL_8;
  }
LABEL_52:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

