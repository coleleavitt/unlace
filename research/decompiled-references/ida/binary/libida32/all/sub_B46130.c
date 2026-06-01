__m128i *__fastcall sub_B46130(
        __int64 a1,
        __int32 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // r14
  int *v12; // r12
  int v13; // r13d
  int v14; // edx
  int *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __m128i *v21; // r8
  signed __int64 v22; // rcx
  __m128i *result; // rax
  __m128i *v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rax
  int *v28; // rdi
  int v29; // eax
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __m128 *v35; // rsi
  __int64 v36; // rdi
  _BYTE *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  int v43; // r10d
  int *v44; // rdi
  _DWORD *v45; // rdx
  int *v46; // rdx
  int i; // r13d
  int v48; // ecx
  unsigned int v49; // r9d
  _DWORD *v50; // r8
  int v51; // r11d
  int v52; // ecx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rcx
  int v59; // r10d
  int *v60; // rdi
  _DWORD *v61; // rdx
  int *v62; // rdx
  int v63; // r14d
  int v64; // ecx
  unsigned int v65; // r9d
  _DWORD *v66; // r8
  int v67; // r11d
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  unsigned int v71; // edx
  int v72; // edi
  int v73; // r9d
  int *v74; // r8
  unsigned __int64 v75; // rbp
  __int64 v76; // rdi
  int v77; // ecx
  int v78; // ecx
  unsigned int v79; // r13d
  int v80; // edx
  int v81; // r8d
  int *v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rdx
  int *v87; // rdx
  __int64 v88; // rdx
  int *v89; // rdx
  int v90; // r15d
  _DWORD *v91; // r14
  _DWORD *v92; // r15
  int v93; // [rsp+4h] [rbp-134h]
  __m128 v94; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+90h] [rbp-A8h]
  _BYTE v96[160]; // [rsp+98h] [rbp-A0h] BYREF

  v11 = *(unsigned int *)(a1 + 16);
  v12 = *(int **)a1;
  if ( !(_DWORD)v11 )
    goto LABEL_55;
  a4 = (unsigned int)(v11 - 1);
  v13 = 37 * a2;
  v14 = a4 & (37 * a2);
  v15 = &v12[2 * v14];
  v16 = *v15;
  if ( *v15 == a2 )
  {
LABEL_3:
    sub_B45DC0(&v94, v15, &v12[2 * v11], a1, 1);
    v17 = *(unsigned int *)(v94.m128_u64[0] + 4);
    goto LABEL_4;
  }
  a5 = 1;
  v28 = nullptr;
  if ( v16 != -1 )
  {
    while ( 1 )
    {
      if ( !v28 && v16 == -2 )
        v28 = v15;
      a6 = (unsigned int)(a5 + 1);
      v14 = a4 & (a5 + v14);
      v15 = &v12[2 * v14];
      v16 = *v15;
      if ( *v15 == a2 )
        goto LABEL_3;
      if ( v16 == -1 )
        break;
      a5 = (unsigned int)a6;
    }
    if ( v28 )
      v15 = v28;
  }
  v29 = *(_DWORD *)(a1 + 8) + 1;
  if ( 4 * v29 >= (unsigned int)(3 * v11) )
  {
LABEL_55:
    v38 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v39 = ((v38 >> 16) | v38) + 1;
    if ( (unsigned int)v39 < 0x40 )
      LODWORD(v39) = 64;
    *(_DWORD *)(a1 + 16) = v39;
    v40 = sub_220C370(8LL * (unsigned int)v39, 4, 64, a4, a5, a6);
    *(_QWORD *)a1 = v40;
    if ( v12 )
    {
      v41 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v42 = (_DWORD *)(v40 + 8 * v41);
      v43 = v41;
      v44 = &v12[2 * (unsigned int)v11];
      v45 = (_DWORD *)v40;
      if ( (_DWORD *)v40 != v42 )
      {
        do
        {
          *v45 = -1;
          v45 += 2;
        }
        while ( v42 != v45 );
      }
      v46 = v12;
      for ( i = v43 - 1; v44 != v46; v46 += 2 )
      {
        v48 = *v46;
        if ( (unsigned int)(*v46 + 2) > 1 )
        {
          if ( !v43 )
          {
            dword_0 = 0;
            BUG();
          }
          v49 = i & (37 * v48);
          v50 = (_DWORD *)(v40 + 8LL * v49);
          v51 = *v50;
          if ( *v50 != v48 )
          {
            v90 = 1;
            v91 = nullptr;
            if ( v51 != -1 )
            {
              while ( 1 )
              {
                if ( v51 == -2 && !v91 )
                  v91 = v50;
                v49 = i & (v90 + v49);
                v50 = (_DWORD *)(v40 + 8LL * v49);
                v51 = *v50;
                if ( v48 == *v50 )
                  break;
                if ( v51 == -1 )
                {
                  if ( v91 )
                    v50 = v91;
                  break;
                }
                ++v90;
              }
            }
          }
          *v50 = v48;
          v52 = v46[1];
          ++*(_DWORD *)(a1 + 8);
          v50[1] = v52;
        }
      }
      operator delete();
      v12 = *(int **)a1;
      v69 = *(_DWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v86 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v12 = (int *)(v40 + 8 * v86);
      v69 = v86;
      if ( (int *)v40 != v12 )
      {
        v87 = (int *)v40;
        do
        {
          *v87 = -1;
          v87 += 2;
        }
        while ( v12 != v87 );
        v12 = (int *)v40;
      }
      v29 = 1;
    }
    if ( v69 )
    {
      v70 = v69 - 1;
      v71 = v70 & (37 * a2);
      v15 = &v12[2 * v71];
      v72 = *v15;
      if ( *v15 != a2 )
      {
        v73 = 1;
        v74 = nullptr;
        if ( v72 != -1 )
        {
          while ( 1 )
          {
            if ( !v74 && v72 == -2 )
              v74 = v15;
            v71 = v70 & (v73 + v71);
            v15 = &v12[2 * v71];
            v72 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v72 == -1 )
            {
              if ( v74 )
                v15 = v74;
              goto LABEL_37;
            }
            ++v73;
          }
        }
      }
      goto LABEL_37;
    }
    goto LABEL_156;
  }
  if ( (int)v11 - *(_DWORD *)(a1 + 12) - v29 <= (unsigned int)v11 >> 3 )
  {
    v53 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
    v54 = v53 >> 8;
    v55 = (((v54 | v53) >> 16) | v54 | v53) + 1;
    if ( (unsigned int)v55 < 0x40 )
      LODWORD(v55) = 64;
    *(_DWORD *)(a1 + 16) = v55;
    v56 = sub_220C370(8LL * (unsigned int)v55, 4, 64, v54, a5, a6);
    *(_QWORD *)a1 = v56;
    if ( v12 )
    {
      v57 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v58 = (_DWORD *)(v56 + 8 * v57);
      v59 = v57;
      v60 = &v12[2 * (unsigned int)v11];
      v61 = (_DWORD *)v56;
      if ( (_DWORD *)v56 != v58 )
      {
        do
        {
          *v61 = -1;
          v61 += 2;
        }
        while ( v58 != v61 );
      }
      v62 = v12;
      v63 = v59 - 1;
      do
      {
        v64 = *v62;
        if ( (unsigned int)(*v62 + 2) > 1 )
        {
          if ( !v59 )
          {
            dword_0 = 0;
            BUG();
          }
          v65 = v63 & (37 * v64);
          v66 = (_DWORD *)(v56 + 8LL * v65);
          v67 = *v66;
          if ( *v66 != v64 && v67 != -1 )
          {
            v93 = 1;
            v92 = nullptr;
            while ( 1 )
            {
              if ( v67 == -2 && !v92 )
                v92 = v66;
              v65 = v63 & (v93 + v65);
              v66 = (_DWORD *)(v56 + 8LL * v65);
              v67 = *v66;
              if ( v64 == *v66 )
                break;
              if ( v67 == -1 )
              {
                if ( v92 )
                  v66 = v92;
                break;
              }
              ++v93;
            }
          }
          *v66 = v64;
          v68 = v62[1];
          ++*(_DWORD *)(a1 + 8);
          v66[1] = v68;
        }
        v62 += 2;
      }
      while ( v60 != v62 );
      operator delete();
      v12 = *(int **)a1;
      v77 = *(_DWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v88 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v12 = (int *)(v56 + 8 * v88);
      v77 = v88;
      if ( (int *)v56 != v12 )
      {
        v89 = (int *)v56;
        do
        {
          *v89 = -1;
          v89 += 2;
        }
        while ( v12 != v89 );
        v12 = (int *)v56;
      }
      v29 = 1;
    }
    if ( v77 )
    {
      v78 = v77 - 1;
      v79 = v78 & v13;
      v15 = &v12[2 * v79];
      v80 = *v15;
      if ( *v15 != a2 )
      {
        v81 = 1;
        v82 = nullptr;
        if ( v80 != -1 )
        {
          while ( 1 )
          {
            if ( v80 == -2 && !v82 )
              v82 = v15;
            v79 = v78 & (v81 + v79);
            v15 = &v12[2 * v79];
            v80 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v80 == -1 )
            {
              if ( v82 )
                v15 = v82;
              goto LABEL_37;
            }
            ++v81;
          }
        }
      }
      goto LABEL_37;
    }
LABEL_156:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_37:
  *(_DWORD *)(a1 + 8) = v29;
  if ( *v15 != -1 )
    --*(_DWORD *)(a1 + 12);
  *v15 = a2;
  v15[1] = 0;
  sub_B45DC0(&v94, v15, &v12[2 * *(unsigned int *)(a1 + 16)], a1, 1);
  v30 = v94.m128_u64[0];
  v95 = 0x400000000LL;
  v31 = *(unsigned int *)(a1 + 32);
  v94.m128_u64[1] = (unsigned __int64)v96;
  v32 = *(unsigned int *)(a1 + 36);
  v33 = v31 + 1;
  v94.m128_i32[0] = a2;
  if ( v31 + 1 > v32 )
  {
    v75 = *(_QWORD *)(a1 + 24);
    v76 = a1 + 24;
    if ( v75 > (unsigned __int64)&v94 || (unsigned __int64)&v94 >= v75 + 120 * v31 )
    {
      sub_B46000(v76, v33);
      v34 = *(_QWORD *)(a1 + 24);
      v31 = *(unsigned int *)(a1 + 32);
      v35 = &v94;
    }
    else
    {
      sub_B46000(v76, v33);
      v34 = *(_QWORD *)(a1 + 24);
      v31 = *(unsigned int *)(a1 + 32);
      v35 = (__m128 *)((char *)&v94 + v34 - v75);
    }
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 24);
    v35 = &v94;
  }
  v36 = v34 + 120 * v31;
  *(_DWORD *)v36 = v35->m128_i32[0];
  *(_QWORD *)(v36 + 8) = v36 + 24;
  *(_QWORD *)(v36 + 16) = 0x400000000LL;
  if ( v35[1].m128_i32[0] )
    sub_B45E20((char ***)(v36 + 8), (char ***)&v35->m128_u64[1]);
  v17 = *(unsigned int *)(a1 + 32);
  v37 = (_BYTE *)v94.m128_u64[1];
  *(_DWORD *)(a1 + 32) = v17 + 1;
  if ( v37 != v96 )
  {
    free(v37);
    v17 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  }
  *(_DWORD *)(v30 + 4) = v17;
LABEL_4:
  v18 = *(_QWORD *)(a1 + 24) + 120 * v17;
  v19 = *(unsigned int *)(v18 + 16);
  v20 = *(_QWORD *)(v18 + 8);
  v21 = (__m128i *)(v20 + 24 * v19);
  v22 = 0xAAAAAAAAAAAAAAABLL * ((24 * v19) >> 3);
  if ( v22 >> 2 )
  {
    result = *(__m128i **)(v18 + 8);
    v24 = (__m128i *)(v20 + 96 * (v22 >> 2));
    while ( result->m128i_i64[0] != a7 || result->m128i_i32[2] != a8 || result[1].m128i_i64[0] != a9 )
    {
      if ( a7 == result[1].m128i_i64[1] && a8 == result[2].m128i_i32[0] && a9 == result[2].m128i_i64[1] )
      {
        result = (__m128i *)((char *)result + 24);
        break;
      }
      if ( a7 == result[3].m128i_i64[0] && a8 == result[3].m128i_i32[2] && a9 == result[4].m128i_i64[0] )
      {
        result += 3;
        break;
      }
      if ( a7 == result[4].m128i_i64[1] && a8 == result[5].m128i_i32[0] && a9 == result[5].m128i_i64[1] )
      {
        result = (__m128i *)((char *)result + 72);
        break;
      }
      result += 6;
      if ( v24 == result )
      {
        v22 = 0xAAAAAAAAAAAAAAABLL * (((char *)v21 - (char *)result) >> 3);
        goto LABEL_25;
      }
    }
LABEL_13:
    if ( v21 != result )
      return result;
    goto LABEL_32;
  }
  result = *(__m128i **)(v18 + 8);
LABEL_25:
  if ( v22 == 2 )
  {
    v25 = a7;
LABEL_79:
    if ( result->m128i_i64[0] == v25 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
      goto LABEL_13;
    result = (__m128i *)((char *)result + 24);
    goto LABEL_29;
  }
  if ( v22 == 3 )
  {
    v25 = a7;
    if ( result->m128i_i64[0] == a7 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
      goto LABEL_13;
    result = (__m128i *)((char *)result + 24);
    goto LABEL_79;
  }
  if ( v22 != 1 )
    goto LABEL_32;
  v25 = a7;
LABEL_29:
  if ( result->m128i_i64[0] == v25 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
    goto LABEL_13;
LABEL_32:
  v26 = v19 + 1;
  v27 = (const __m128i *)&a7;
  if ( v26 > *(unsigned int *)(v18 + 20) )
  {
    v83 = v18 + 8;
    v84 = v18 + 24;
    if ( v20 > (unsigned __int64)&a7 || v21 <= (__m128i *)&a7 )
    {
      sub_22134E0(v83, v84, v26, 24);
      v21 = (__m128i *)(*(_QWORD *)(v18 + 8) + 24LL * *(unsigned int *)(v18 + 16));
      v27 = (const __m128i *)&a7;
    }
    else
    {
      sub_22134E0(v83, v84, v26, 24);
      v85 = *(_QWORD *)(v18 + 8);
      v27 = (const __m128i *)((char *)&a7 + v85 - v20);
      v21 = (__m128i *)(v85 + 24LL * *(unsigned int *)(v18 + 16));
    }
  }
  *v21 = _mm_loadu_si128(v27);
  result = (__m128i *)v27[1].m128i_i64[0];
  v21[1].m128i_i64[0] = (__int64)result;
  ++*(_DWORD *)(v18 + 16);
  return result;
}

