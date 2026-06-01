__int64 __fastcall sub_C05030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 result; // rax
  void *v17; // r13
  __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // r8
  unsigned int v21; // r9d
  _QWORD *v22; // r15
  int v23; // ecx
  __int64 v24; // r9
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 *v32; // r13
  unsigned int v33; // r9d
  __int64 v34; // r8
  char *v35; // r14
  int v36; // ecx
  __int64 v37; // r9
  __int64 *v38; // rdi
  _QWORD *v39; // rsi
  __int64 v40; // rdx
  __int64 *v41; // rax
  int v42; // r10d
  __m128i *v43; // rcx
  const __m128i *v44; // r15
  __m128i *v45; // r11
  __int64 v46; // rax
  __int64 *v47; // rdx
  __m128i *v48; // rax
  __m128i v49; // xmm0
  _QWORD *v50; // rax
  int v51; // r10d
  char *v52; // rcx
  char *v53; // r11
  __int64 v54; // rax
  _QWORD *v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 n; // [rsp+8h] [rbp-60h]
  unsigned int nb; // [rsp+8h] [rbp-60h]
  __int64 na; // [rsp+8h] [rbp-60h]
  unsigned int nc; // [rsp+8h] [rbp-60h]
  int v62; // [rsp+10h] [rbp-58h]
  __int64 v63; // [rsp+10h] [rbp-58h]
  int v64; // [rsp+10h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  int v66; // [rsp+18h] [rbp-50h]
  int v67; // [rsp+18h] [rbp-50h]

  v8 = *(unsigned int *)(a1 + 56);
  v9 = *(__int64 **)(a1 + 48);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = (__int64 *)((char *)v9 + v13);
  if ( v13 == v8 )
  {
LABEL_22:
    if ( v9 != v14 )
    {
      while ( 1 )
      {
        v29 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v29 + 12) == v10 && a2 == v29 )
          {
            v15 = v9;
            goto LABEL_10;
          }
        }
        else if ( !v29 )
        {
          return sub_135F980(a1, a2, a3);
        }
        v9 += 2;
        if ( v14 == v9 )
          return sub_135F980(a1, a2, a3);
      }
    }
    return sub_135F980(a1, a2, a3);
  }
  v15 = (__int64 *)((char *)v9 + v13);
  while ( 1 )
  {
    v13 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v13 )
      return sub_135F980(a1, a2, a3);
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_22;
  }
  if ( *(_DWORD *)(v13 + 12) != v10 || a2 != v13 )
    goto LABEL_5;
LABEL_10:
  v17 = (void *)v15[1];
  if ( !v17 )
    return sub_135F980(a1, a2, a3);
  if ( !a4 )
  {
    sub_13478D0(v15[1], v12, v13, v9, v14);
    sub_186B220(v17);
    goto LABEL_38;
  }
  sub_135F980(a1, a4, v15[1]);
  v18 = *(unsigned int *)(a1 + 128);
  if ( 3 * (int)v18 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    v64 = 2 * v18;
    na = 8LL * (unsigned int)(2 * v18);
    v50 = (_QWORD *)sub_186B270(na);
    v51 = v64;
    v20 = na;
    v19 = v50;
    if ( v64 )
    {
      memset(v50, 0, na);
      v20 = na;
      v51 = v64;
    }
    v52 = *(char **)(a1 + 120);
    v21 = v51 - 1;
    v22 = (_QWORD *)((char *)v19 + v20);
    v53 = &v52[8 * *(unsigned int *)(a1 + 128)];
    if ( v52 != v53 )
    {
      do
      {
        while ( *(_QWORD *)v52 <= 1u )
        {
          v52 += 8;
          if ( v53 == v52 )
            goto LABEL_93;
        }
        v54 = 8LL * (*(_DWORD *)(*(_QWORD *)v52 + 12LL) & v21);
        v55 = &v19[(unsigned __int64)v54 / 8];
        if ( v20 == v54 )
        {
LABEL_97:
          if ( v19 == v55 )
          {
LABEL_108:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v56 = v19;
          while ( *v56 )
          {
            if ( v55 == ++v56 )
              goto LABEL_108;
          }
        }
        else
        {
          v56 = &v19[(unsigned __int64)v54 / 8];
          while ( *v56 )
          {
            if ( v22 == ++v56 )
              goto LABEL_97;
          }
        }
        v57 = *(_QWORD *)v52;
        v52 += 8;
        *v56 = v57;
      }
      while ( v53 != v52 );
LABEL_93:
      v53 = *(char **)(a1 + 120);
    }
    if ( v53 )
    {
      v67 = v51;
      v65 = v20;
      nc = v51 - 1;
      sub_186B220(v53);
      v51 = v67;
      v20 = v65;
      v21 = nc;
    }
    *(_QWORD *)(a1 + 120) = v19;
    *(_DWORD *)(a1 + 128) = v51;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v19 = *(_QWORD **)(a1 + 120);
    v20 = 8 * v18;
    v21 = v18 - 1;
    v22 = &v19[v18];
  }
  v23 = *(_DWORD *)(a4 + 12);
  v24 = 8LL * (v23 & v21);
  v25 = &v19[(unsigned __int64)v24 / 8];
  if ( v24 != v20 )
  {
    v26 = &v19[(unsigned __int64)v24 / 8];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = *v26;
      if ( *v26 > 1u )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a4 == v28 )
        {
          *v26 = a4;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_103;
          v27 = v26;
          goto LABEL_104;
        }
        v27 = v26;
      }
      if ( ++v26 == v22 )
        goto LABEL_33;
    }
  }
  v27 = nullptr;
LABEL_33:
  while ( 2 )
  {
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = *v19;
    if ( *v19 > 1u )
    {
      if ( *(_DWORD *)(v30 + 12) == v23 && a4 == v30 )
      {
        *v19 = a4;
        goto LABEL_38;
      }
      goto LABEL_32;
    }
    if ( v30 )
    {
      v27 = v19;
LABEL_32:
      ++v19;
      continue;
    }
    break;
  }
  if ( v27 )
LABEL_103:
    --*(_DWORD *)(a1 + 136);
  else
    v27 = v19;
LABEL_104:
  *v27 = a4;
  ++*(_DWORD *)(a1 + 132);
LABEL_38:
  v31 = *(unsigned int *)(a1 + 56);
  if ( 3 * (int)v31 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v62 = 2 * v31;
    n = 16LL * (unsigned int)(2 * v31);
    v41 = (__int64 *)sub_186B270(n);
    v34 = n;
    v42 = v62;
    v32 = v41;
    v43 = (__m128i *)&v41[(unsigned __int64)n / 8];
    if ( v62 )
    {
      if ( (n & 0x10) == 0 || (*(_OWORD *)v41 = 0, v41 += 2, v43 != (__m128i *)v41) )
      {
        do
        {
          *(_OWORD *)v41 = 0;
          v41 += 4;
          *((_OWORD *)v41 - 1) = 0;
        }
        while ( v43 != (__m128i *)v41 );
      }
    }
    v44 = *(const __m128i **)(a1 + 48);
    v33 = v62 - 1;
    v35 = (char *)v43;
    v45 = (__m128i *)&v44[*(unsigned int *)(a1 + 56)];
    if ( v44 != v45 )
    {
      do
      {
        while ( v44->m128i_i64[0] <= 1uLL )
        {
          if ( v45 == ++v44 )
            goto LABEL_69;
        }
        v46 = 16LL * (*(_DWORD *)(v44->m128i_i64[0] + 12) & v33);
        v47 = &v32[(unsigned __int64)v46 / 8];
        if ( n == v46 )
        {
LABEL_73:
          if ( v32 == v47 )
          {
LABEL_105:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v48 = (__m128i *)v32;
          while ( v48->m128i_i64[0] )
          {
            if ( v47 == (__int64 *)++v48 )
              goto LABEL_105;
          }
        }
        else
        {
          v48 = (__m128i *)&v32[(unsigned __int64)v46 / 8];
          while ( v48->m128i_i64[0] )
          {
            if ( v43 == ++v48 )
              goto LABEL_73;
          }
        }
        v49 = _mm_loadu_si128(v44++);
        *v48 = v49;
      }
      while ( v45 != v44 );
LABEL_69:
      v45 = *(__m128i **)(a1 + 48);
    }
    if ( v45 )
    {
      v66 = v62;
      v63 = n;
      nb = v42 - 1;
      sub_186B220(v45);
      v42 = v66;
      v34 = v63;
      v33 = nb;
    }
    *(_QWORD *)(a1 + 48) = v32;
    *(_DWORD *)(a1 + 56) = v42;
    *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    v32 = *(__int64 **)(a1 + 48);
    v33 = v31 - 1;
    v34 = 16 * v31;
    v35 = (char *)v32 + v34;
  }
  v36 = *(_DWORD *)(a2 + 12);
  v37 = 16LL * (v36 & v33);
  v38 = &v32[(unsigned __int64)v37 / 8];
  if ( v37 != v34 )
  {
    result = (__int64)&v32[(unsigned __int64)v37 / 8];
    v39 = nullptr;
    while ( 1 )
    {
      v40 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v40 + 12) == v36 && a2 == v40 )
        {
          *(_QWORD *)result = a2;
          *(_QWORD *)(result + 8) = a3;
          return result;
        }
      }
      else
      {
        if ( !v40 )
        {
          if ( v39 )
            goto LABEL_79;
          v39 = (_QWORD *)result;
          goto LABEL_80;
        }
        v39 = (_QWORD *)result;
      }
      result += 16;
      if ( (char *)result == v35 )
        goto LABEL_51;
    }
  }
  v39 = nullptr;
LABEL_51:
  while ( 2 )
  {
    if ( v38 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *v32;
    if ( (unsigned __int64)*v32 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v36 && a2 == result )
      {
        *v32 = a2;
        v32[1] = a3;
        return result;
      }
      goto LABEL_50;
    }
    if ( result )
    {
      v39 = v32;
LABEL_50:
      v32 += 2;
      continue;
    }
    break;
  }
  if ( v39 )
LABEL_79:
    --*(_DWORD *)(a1 + 64);
  else
    v39 = v32;
LABEL_80:
  *v39 = a2;
  v39[1] = a3;
  ++*(_DWORD *)(a1 + 60);
  return result;
}

