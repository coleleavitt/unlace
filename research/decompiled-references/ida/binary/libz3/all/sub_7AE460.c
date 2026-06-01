char __fastcall sub_7AE460(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // r14
  __int64 v9; // r12
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // r11
  __int64 v13; // rax
  _DWORD *v14; // r8
  unsigned int v15; // edi
  char *v16; // r13
  __int64 v17; // rdx
  char *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // r8
  char *v21; // r15
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  _DWORD *v25; // r9
  unsigned int v26; // edi
  __int64 v27; // rdx
  char *v28; // rsi
  __int64 v29; // r11
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rdx
  __int64 *v33; // rbx
  char *v34; // r15
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __m128i v39; // xmm0
  unsigned __int64 v40; // rdx
  __int64 *v41; // rdi
  __int64 *v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 *v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 v50; // rsi
  char *v51; // rbx
  __int64 v52; // rdx
  __m128i v53; // xmm0
  unsigned __int64 v54; // rdx
  __int64 *v55; // rcx
  __int64 *v56; // rdx
  __int64 v57; // rsi
  unsigned int v58; // r15d
  unsigned int v59; // r15d
  __int64 i; // rdx
  __int64 v61; // rsi
  __int64 *v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // r11
  unsigned int v66; // ecx
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __m128i v70; // xmm0
  unsigned __int64 v71; // rax
  char *v72; // rdx
  char *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r9
  signed __int64 v78; // rdx
  char *v79; // rdx
  char *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 *v84; // [rsp+8h] [rbp-70h]
  __int64 v85; // [rsp+8h] [rbp-70h]
  __int64 v86; // [rsp+8h] [rbp-70h]
  bool v87; // [rsp+16h] [rbp-62h]
  bool v88; // [rsp+17h] [rbp-61h]
  __int64 v90; // [rsp+20h] [rbp-58h]
  __int64 v91; // [rsp+20h] [rbp-58h]
  __int64 v92; // [rsp+20h] [rbp-58h]
  __int64 v93; // [rsp+28h] [rbp-50h]
  __int64 v94; // [rsp+28h] [rbp-50h]
  __int64 v95; // [rsp+28h] [rbp-50h]
  char *v96; // [rsp+30h] [rbp-48h]
  char *v97; // [rsp+30h] [rbp-48h]
  __int64 v98; // [rsp+30h] [rbp-48h]
  char *v99; // [rsp+38h] [rbp-40h]

  LOBYTE(v5) = a4 == 0 || a5 == 0;
  if ( (_BYTE)v5 )
    return v5;
  v7 = a4;
  v9 = a5;
LABEL_3:
  if ( v7 + v9 != 2 )
  {
    if ( v7 <= v9 )
    {
      v24 = (a2 - a1) >> 3;
      v16 = &a2[8 * (v9 / 2)];
      v20 = v9 / 2;
      v25 = *(_DWORD **)v16;
      if ( a2 - a1 <= 0 )
      {
        v87 = 0;
        v11 = a1;
        v12 = 0;
      }
      else
      {
        v26 = v25[6];
        v11 = a1;
        do
        {
          while ( 1 )
          {
            v27 = v24 >> 1;
            v28 = &v11[8 * (v24 >> 1)];
            v29 = *(_QWORD *)v28;
            if ( v26 < *(_DWORD *)(*(_QWORD *)v28 + 24LL) )
              break;
            if ( v26 == *(_DWORD *)(*(_QWORD *)v28 + 24LL) )
            {
              v59 = *(_DWORD *)(v29 + 28);
              if ( v25[7] < v59 || v25[7] == v59 && v25[8] < *(_DWORD *)(v29 + 32) )
                break;
            }
            v11 = v28 + 8;
            v24 = v24 - v27 - 1;
            if ( v24 <= 0 )
              goto LABEL_22;
          }
          v24 >>= 1;
        }
        while ( v27 > 0 );
LABEL_22:
        v7 -= (v11 - a1) >> 3;
        v12 = (v11 - a1) >> 3;
        v87 = v7 == 0;
      }
      v9 -= v9 / 2;
      v88 = v9 == 0;
      if ( a2 == v11 )
      {
LABEL_12:
        a2 = v16;
        v21 = v16;
        goto LABEL_65;
      }
    }
    else
    {
      v10 = v7 / 2;
      v11 = &a1[8 * (v7 / 2)];
      v12 = v7 / 2;
      v13 = (a3 - (__int64)a2) >> 3;
      v14 = *(_DWORD **)v11;
      if ( a3 - (__int64)a2 <= 0 )
      {
        v7 -= v10;
        v88 = 0;
        v21 = v11;
        v87 = v7 == 0;
        v20 = 0;
        goto LABEL_65;
      }
      v15 = v14[6];
      v16 = a2;
      do
      {
        while ( 1 )
        {
          v17 = v13 >> 1;
          v18 = &v16[8 * (v13 >> 1)];
          v19 = *(_QWORD *)v18;
          if ( *(_DWORD *)(*(_QWORD *)v18 + 24LL) < v15 )
            break;
          if ( *(_DWORD *)(*(_QWORD *)v18 + 24LL) == v15 )
          {
            v58 = v14[7];
            if ( *(_DWORD *)(v19 + 28) < v58 || *(_DWORD *)(v19 + 28) == v58 && *(_DWORD *)(v19 + 32) < v14[8] )
              break;
          }
          v13 >>= 1;
          if ( v17 <= 0 )
            goto LABEL_11;
        }
        v16 = v18 + 8;
        v13 = v13 - v17 - 1;
      }
      while ( v13 > 0 );
LABEL_11:
      v9 -= (v16 - a2) >> 3;
      v20 = (v16 - a2) >> 3;
      v88 = v9 == 0;
      v7 -= v10;
      v87 = v7 == 0;
      if ( a2 == v11 )
        goto LABEL_12;
    }
    if ( a2 == v16 )
    {
      v21 = v11;
      goto LABEL_65;
    }
    v30 = (v16 - v11) >> 3;
    v31 = (a2 - v11) >> 3;
    if ( v31 == v30 - v31 )
    {
      v67 = a2 - 8 - v11;
      if ( v67 <= 8 || (unsigned __int64)(a2 + 15 - v11) <= 0x1E )
      {
        v79 = a2;
        v80 = v11;
        do
        {
          v81 = *(_QWORD *)v79;
          v82 = *(_QWORD *)v80;
          v80 += 8;
          v79 += 8;
          *((_QWORD *)v80 - 1) = v81;
          *((_QWORD *)v79 - 1) = v82;
        }
        while ( a2 != v80 );
      }
      else
      {
        v68 = 0;
        v69 = (v67 >> 3) + 1;
        do
        {
          v70 = _mm_loadu_si128((const __m128i *)&v11[v68]);
          *(__m128i *)&v11[v68] = _mm_loadu_si128((const __m128i *)&a2[v68]);
          *(__m128i *)&a2[v68] = v70;
          v68 += 16;
        }
        while ( 16 * (v69 >> 1) != v68 );
        if ( (v69 & 1) != 0 )
        {
          v71 = 8 * (v69 & 0xFFFFFFFFFFFFFFFELL);
          v72 = &a2[v71];
          v73 = &v11[v71];
          v74 = *(_QWORD *)v73;
          *(_QWORD *)v73 = *(_QWORD *)v72;
          *(_QWORD *)v72 = v74;
        }
      }
      v21 = a2;
      a2 = v16;
      goto LABEL_65;
    }
    v90 = v12;
    v32 = (char *)(v16 - a2);
    v93 = v20;
    v33 = (__int64 *)v11;
    v96 = &v32[(_QWORD)v11];
    v34 = v11;
    while ( 1 )
    {
      v35 = v30 - v31;
      if ( v31 < (__int64)(v30 - v31) )
      {
        while ( v31 != 1 )
        {
          v36 = (unsigned __int64)&v33[v31];
          if ( (__int64)v35 > 0 )
          {
            if ( v35 - 1 <= 1 || v36 < (unsigned __int64)(v33 + 2) && 8 * v31 + 16 > 0 )
            {
              for ( i = 0; i != v35; ++i )
              {
                v61 = v33[i];
                v33[i] = *(_QWORD *)(v36 + 8 * i);
                *(_QWORD *)(v36 + 8 * i) = v61;
              }
            }
            else
            {
              v37 = 0;
              v38 = 0;
              do
              {
                v39 = _mm_loadu_si128((const __m128i *)&v33[v37]);
                ++v38;
                *(__m128i *)&v33[v37] = _mm_loadu_si128((const __m128i *)(v36 + v37 * 8));
                *(__m128i *)(v36 + v37 * 8) = v39;
                v37 += 2;
              }
              while ( v35 >> 1 != v38 );
              if ( (v35 & 1) != 0 )
              {
                v40 = v35 & 0xFFFFFFFFFFFFFFFELL;
                v41 = (__int64 *)(v40 * 8 + v36);
                v42 = &v33[v40];
                v43 = *v42;
                *v42 = *v41;
                *v41 = v43;
              }
            }
            v33 += v35;
          }
          v44 = v30 % v31;
          if ( !(v30 % v31) )
            goto LABEL_63;
          v30 = v31;
          v31 -= v44;
          v35 = v30 - v31;
          if ( v31 >= (__int64)(v30 - v31) )
            goto LABEL_40;
        }
        v11 = v34;
        v12 = v90;
        v76 = *v33;
        v77 = 8 * v30;
        v20 = v93;
        v21 = v96;
        v78 = 8 * v30 - 8;
        if ( v78 <= 8 )
        {
          if ( 8 * v30 == 16 )
            *v33 = v33[1];
        }
        else
        {
          v99 = a1;
          v98 = 8 * v30;
          v95 = *v33;
          v92 = v20;
          v86 = v12;
          memmove(v33, v33 + 1, v78);
          v12 = v86;
          v20 = v92;
          v76 = v95;
          v77 = v98;
          a1 = v99;
        }
        *(__int64 *)((char *)v33 + v77 - 8) = v76;
LABEL_64:
        a2 = v16;
LABEL_65:
        LOBYTE(v5) = sub_7AE460(a1, v11, v21, v12, v20);
        if ( v87 || v88 )
          return v5;
        a1 = v21;
        goto LABEL_3;
      }
LABEL_40:
      v45 = 8 * v30;
      v46 = &v33[v30];
      if ( v35 == 1 )
      {
        v11 = v34;
        v12 = v90;
        v20 = v93;
        v21 = v96;
        v75 = v33[(unsigned __int64)v45 / 8 - 1];
        if ( v45 - 8 <= 8 )
        {
          if ( v45 == 16 )
            *(v46 - 1) = *v33;
        }
        else
        {
          v97 = a1;
          v94 = v33[(unsigned __int64)v45 / 8 - 1];
          v91 = v20;
          v85 = v12;
          memmove(v33 + 1, v33, v45 - 8);
          v12 = v85;
          v20 = v91;
          v75 = v94;
          a1 = v97;
        }
        *v33 = v75;
        goto LABEL_64;
      }
      v47 = 8 * v31;
      v84 = &v33[v31];
      if ( v31 > 0 )
        break;
      v33 += v31;
      v31 = v30 % v35;
      if ( !(v30 % v35) )
      {
LABEL_63:
        v11 = v34;
        v12 = v90;
        v20 = v93;
        v21 = v96;
        goto LABEL_64;
      }
LABEL_50:
      v30 = v35;
    }
    if ( (unsigned __int64)(v31 - 1) <= 1 )
    {
      v62 = &v33[v31];
      v63 = 0;
    }
    else
    {
      v48 = v45 - 16;
      if ( v45 <= v47 - 16 || v47 <= v48 )
      {
        v49 = &v33[(unsigned __int64)v47 / 8 - 2];
        v50 = 0;
        v51 = (char *)v33 + v48;
        v52 = 0;
        do
        {
          v53 = _mm_loadu_si128((const __m128i *)&v49[v52]);
          ++v50;
          *(__m128i *)&v49[v52] = _mm_loadu_si128((const __m128i *)&v51[v52 * 8]);
          *(__m128i *)&v51[v52 * 8] = v53;
          v52 -= 2;
        }
        while ( v50 != (unsigned __int64)v31 >> 1 );
        if ( (v31 & 1) != 0 )
        {
          v54 = -8LL * (v31 & 0xFFFFFFFFFFFFFFFELL) - 8;
          v55 = (__int64 *)((char *)v84 + v54);
          v56 = (__int64 *)((char *)v46 + v54);
          v57 = *v55;
          *v55 = *v56;
          *v56 = v57;
        }
LABEL_49:
        v33 = &v84[v47 / 0xFFFFFFFFFFFFFFF8LL];
        v31 = v30 % v35;
        if ( !(v30 % v35) )
          goto LABEL_63;
        goto LABEL_50;
      }
      v62 = &v33[v31];
      v63 = 0;
    }
    do
    {
      v64 = *(v62 - 1);
      v65 = *(v46 - 1);
      ++v63;
      --v62;
      --v46;
      *v62 = v65;
      *v46 = v64;
    }
    while ( v31 != v63 );
    goto LABEL_49;
  }
  v5 = *(_QWORD *)a1;
  v22 = *(_QWORD *)a2;
  v23 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 24LL) < v23
    || *(_DWORD *)(*(_QWORD *)a2 + 24LL) == v23
    && ((v66 = *(_DWORD *)(v5 + 28), *(_DWORD *)(v22 + 28) < v66)
     || *(_DWORD *)(v22 + 28) == v66 && *(_DWORD *)(v22 + 32) < *(_DWORD *)(v5 + 32)) )
  {
    *(_QWORD *)a1 = v22;
    *(_QWORD *)a2 = v5;
  }
  return v5;
}

