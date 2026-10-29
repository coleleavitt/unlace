unsigned __int64 __fastcall sub_79DDC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  const __m128i *v18; // rdx
  __m128d v19; // xmm1
  __m128d v20; // xmm0
  __int64 v21; // r8
  unsigned __int64 *v22; // rsi
  unsigned __int64 *v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  const __m128i *v33; // rdx
  unsigned __int64 v34; // rdi
  __m128d v35; // xmm0
  __m128d v36; // xmm1
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  unsigned int **v39; // rdi
  unsigned int **v40; // rbp
  unsigned int *v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _DWORD **v45; // rdi
  _DWORD **v46; // rbp
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdi
  int v54; // eax
  _DWORD *v55; // rdi
  int v56; // eax
  unsigned __int64 v57; // [rsp+8h] [rbp-20h]
  unsigned __int64 v58; // [rsp+8h] [rbp-20h]

  *(_DWORD *)(a2 + 8) = 0;
  LODWORD(v3) = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 40);
    v25 = *(_QWORD *)(v24 + 72);
    result = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) == 0 )
    {
      if ( result <= 3 )
      {
        if ( result )
          return result;
        goto LABEL_32;
      }
      v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      v27 = (__int64)v26;
      if ( (result & 2) == 0 )
        goto LABEL_45;
      v28 = sub_6D4E90(v26, v24);
      result = v28 & 0xFFFFFFFFFFFFFFFELL;
      v25 = v28 | 1;
      *(_QWORD *)(v24 + 72) = v25;
    }
    if ( !result )
    {
LABEL_32:
      v3 = *(unsigned int *)(a2 + 8);
      goto LABEL_33;
    }
    v29 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = v29;
    if ( (result & 4) != 0 )
    {
      if ( !v29 )
        goto LABEL_32;
      v52 = *(_QWORD *)v29;
      result = *(unsigned int *)(*(_QWORD *)v29 + 12LL);
      if ( *(_DWORD *)(v29 + 8) != (_DWORD)result )
      {
        *(_DWORD *)(v29 + 8) = result;
        v57 = v29;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 144LL))(v52, v24);
        v29 = v57;
      }
      v27 = *(_QWORD *)(v29 + 16);
    }
    v3 = *(unsigned int *)(a2 + 8);
    if ( !v27 )
    {
LABEL_33:
      v13 = *(unsigned __int64 **)a2;
      v30 = 8 * v3;
      v31 = *(_QWORD *)a2 + v30;
      if ( *(_QWORD *)a2 == v31 )
        return result;
      v15 = (unsigned __int64 *)(v31 - 8);
      if ( v13 >= v15 )
        return result;
      if ( (unsigned __int64)(v30 - 9) <= 0x1F
        || (v32 = (unsigned __int64)(v30 - 9) >> 4,
            v17 = v32 + 1,
            (__int64)(v30 - 8 * v32 - 8) < (__int64)(8 * (v32 + 1))) )
      {
        do
        {
          result = *v13;
          v37 = *v15;
          ++v13;
          --v15;
          *(v13 - 1) = v37;
          v15[1] = result;
        }
        while ( v13 < v15 );
        return result;
      }
      result = (unsigned __int64)&v13[(unsigned __int64)v30 / 8 - 2];
      v33 = *(const __m128i **)a2;
      v34 = result - 16 * (v17 >> 1);
      do
      {
        v35 = (__m128d)_mm_loadu_si128(v33);
        v36 = (__m128d)_mm_loadu_si128((const __m128i *)result);
        result -= 16LL;
        ++v33;
        v33[-1] = (const __m128i)_mm_shuffle_pd(v36, v36, 1);
        *(__m128d *)(result + 16) = _mm_shuffle_pd(v35, v35, 1);
      }
      while ( v34 != result );
      goto LABEL_23;
    }
    while ( 1 )
    {
LABEL_45:
      v3 = (unsigned int)v3;
      if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(unsigned int)v3 + 1 )
      {
        sub_25D6060(a2, a2 + 16, (unsigned int)v3 + 1LL, 8);
        v3 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v3) = v27 + 40;
      result = *(unsigned int *)(a2 + 8);
      v3 = (unsigned int)(result + 1);
      *(_DWORD *)(a2 + 8) = v3;
      v38 = *(_QWORD *)(v27 + 72);
      if ( (v38 & 1) != 0 )
        goto LABEL_33;
      result = v38 >> 1;
      if ( (v38 & 2) != 0 )
        goto LABEL_33;
      if ( (v38 & 1) != 0 )
        break;
      if ( (v38 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        goto LABEL_33;
      v47 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (result & 1) != 0 )
      {
        v49 = sub_6D4E90(v47, v27);
        v50 = v49 | 1;
        *(_QWORD *)(v27 + 72) = v49 | 1;
        result = v49 & 0xFFFFFFFFFFFFFFFELL;
        if ( !result )
          goto LABEL_32;
        v39 = (unsigned int **)(v50 & 0xFFFFFFFFFFFFFFF8LL);
        v40 = v39;
        if ( (result & 4) == 0 )
        {
LABEL_70:
          v3 = *(unsigned int *)(a2 + 8);
          v27 = (__int64)v39;
          goto LABEL_44;
        }
LABEL_51:
        if ( !v39 )
          goto LABEL_32;
        v41 = *v39;
        result = v41[3];
        if ( *((_DWORD *)v40 + 2) != (_DWORD)result )
        {
          *((_DWORD *)v40 + 2) = result;
          result = (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v41 + 144LL))(v41, v27);
        }
        v27 = (__int64)v40[2];
        v3 = *(unsigned int *)(a2 + 8);
LABEL_44:
        if ( !v27 )
          goto LABEL_33;
      }
      else
      {
        v27 = (__int64)v47;
      }
    }
    v39 = (unsigned int **)(v38 & 0xFFFFFFFFFFFFFFF8LL);
    result = *(_QWORD *)(v27 + 72) & 0xFFFFFFFFFFFFFFFELL;
    v40 = v39;
    if ( (*(_BYTE *)(v27 + 72) & 4) == 0 )
      goto LABEL_70;
    goto LABEL_51;
  }
  if ( (_DWORD)v3 != 22 )
  {
    result = 0;
    if ( !*(_DWORD *)(a2 + 12) )
    {
      sub_25D6060(a2, a2 + 16, 1, 8);
      result = 8LL * *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + result) = a1;
    ++*(_DWORD *)(a2 + 8);
    return result;
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v5 + 80);
  result = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) == 0 )
  {
    if ( result <= 3 )
    {
      if ( result )
        return result;
      goto LABEL_61;
    }
    v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = (__int64)v7;
    if ( (result & 2) != 0 )
    {
      v9 = sub_6D4E90(v7, v5);
      result = v9 & 0xFFFFFFFFFFFFFFFELL;
      v6 = v9 | 1;
      *(_QWORD *)(v5 + 80) = v6;
      goto LABEL_11;
    }
    v11 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_14:
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v11 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v11 + 1, 8);
          v11 = *(unsigned int *)(a2 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v11) = v8 + 48;
        v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v11;
        v12 = *(_QWORD *)(v8 + 80);
        if ( (v12 & 1) != 0 )
          goto LABEL_17;
        v43 = v12 >> 1;
        if ( (v12 & 2) != 0 )
          goto LABEL_17;
        if ( (v12 & 1) == 0 )
          break;
        LOBYTE(v44) = v12 & 0xFE;
LABEL_59:
        v45 = (_DWORD **)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        v46 = v45;
        if ( (v44 & 4) != 0 )
        {
          if ( !v45 )
            goto LABEL_61;
          v55 = *v45;
          v56 = v55[3];
          if ( *((_DWORD *)v46 + 2) != v56 )
          {
            *((_DWORD *)v46 + 2) = v56;
            (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v55 + 144LL))(v55, v8, v43);
          }
          v8 = (__int64)v46[2];
          v11 = *(unsigned int *)(a2 + 8);
        }
        else
        {
          v11 = *(unsigned int *)(a2 + 8);
          v8 = (__int64)v45;
        }
        if ( !v8 )
          goto LABEL_17;
      }
      if ( (v12 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        goto LABEL_17;
      v48 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v43 & 1) != 0 )
      {
        v51 = sub_6D4E90(v48, v8);
        v12 = v51 | 1;
        *(_QWORD *)(v8 + 80) = v51 | 1;
        v44 = v51 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v44 )
          goto LABEL_61;
        goto LABEL_59;
      }
      v8 = (__int64)v48;
    }
  }
LABEL_11:
  if ( result )
  {
    v10 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v10;
    if ( (result & 4) == 0 )
      goto LABEL_13;
    if ( v10 )
    {
      v53 = *(_QWORD *)v10;
      v54 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
      if ( *(_DWORD *)(v10 + 8) != v54 )
      {
        *(_DWORD *)(v10 + 8) = v54;
        v58 = v10;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 144LL))(v53, v5);
        v10 = v58;
      }
      v8 = *(_QWORD *)(v10 + 16);
LABEL_13:
      v11 = *(unsigned int *)(a2 + 8);
      if ( v8 )
        goto LABEL_14;
      goto LABEL_17;
    }
  }
LABEL_61:
  v11 = *(unsigned int *)(a2 + 8);
LABEL_17:
  v13 = *(unsigned __int64 **)a2;
  result = 8 * v11;
  v14 = *(_QWORD *)a2 + result;
  if ( *(_QWORD *)a2 == v14 )
    return result;
  v15 = (unsigned __int64 *)(v14 - 8);
  if ( v13 >= v15 )
    return result;
  if ( result - 9 <= 0x1F
    || (v16 = (result - 9) >> 4, v17 = v16 + 1, (__int64)(8 * (v16 + 1)) > (__int64)(result - 8 * v16 - 8)) )
  {
    do
    {
      result = *v13;
      v42 = *v15;
      ++v13;
      --v15;
      *(v13 - 1) = v42;
      v15[1] = result;
    }
    while ( v13 < v15 );
    return result;
  }
  v18 = *(const __m128i **)a2;
  result = (unsigned __int64)v13 + result - 16;
  do
  {
    v19 = (__m128d)_mm_loadu_si128((const __m128i *)result);
    v20 = (__m128d)_mm_loadu_si128(v18++);
    result -= 16LL;
    v18[-1] = (const __m128i)_mm_shuffle_pd(v19, v19, 1);
    *(__m128d *)(result + 16) = _mm_shuffle_pd(v20, v20, 1);
  }
  while ( &v13[2 * (v17 >> 1)] != (unsigned __int64 *)v18 );
LABEL_23:
  if ( (v17 & 1) != 0 )
  {
    v21 = -(__int64)(v17 & 0xFFFFFFFFFFFFFFFELL);
    v22 = &v15[v21];
    v23 = &v13[-v21];
    result = *v23;
    *v23 = *v22;
    *v22 = result;
  }
  return result;
}

