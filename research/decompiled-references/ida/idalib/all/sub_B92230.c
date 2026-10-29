unsigned __int64 __fastcall sub_B92230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  unsigned __int64 *v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 *v31; // rdi
  const __m128i *v32; // rsi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  __m128d *v35; // rax
  const __m128i *v36; // rdx
  __m128d *v37; // r8
  __m128d v38; // xmm0
  __m128d v39; // xmm1
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned __int64 *v48; // rdi
  const __m128i *v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  const __m128i *v52; // rdx
  __m128d *v53; // rsi
  __m128d v54; // xmm1
  __m128d v55; // xmm0
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // [rsp+8h] [rbp-40h]
  unsigned __int64 v58[6]; // [rsp+18h] [rbp-30h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v7 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 40);
    v17 = *(_QWORD *)(v16 + 72);
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v17 & 1) == 0 )
    {
      v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v20 = v17 & 2;
        v21 = v19;
        if ( !(_DWORD)v20 )
          goto LABEL_19;
        v18 = sub_6E2500(v19, v16, v7, v20, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        v17 = v18 | 1;
        *(_QWORD *)(v16 + 72) = v18 | 1;
      }
    }
    v26 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = (_QWORD *)v26;
    if ( v18 && (v18 & 4) != 0 )
    {
      if ( !v26 )
      {
        v7 = *(unsigned int *)(a2 + 8);
        goto LABEL_33;
      }
      v27 = *(_QWORD *)v26;
      v28 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
      if ( *(_DWORD *)(v26 + 8) != v28 )
      {
        *(_DWORD *)(v26 + 8) = v28;
        v57 = v26;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 152LL))(v27, v16);
        v26 = v57;
      }
      v21 = *(_QWORD **)(v26 + 16);
    }
    v7 = *(unsigned int *)(a2 + 8);
    if ( v21 )
    {
      while ( 1 )
      {
LABEL_19:
        v22 = (unsigned int)v7;
        v23 = (unsigned int)v7 + 1LL;
        if ( v23 > *(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, a2 + 16, v23, 8);
          v22 = *(unsigned int *)(a2 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v22) = v21 + 5;
        v7 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v7;
        v24 = v21[9];
        if ( (v24 & 1) != 0 )
          break;
        if ( (v24 & 2) != 0 )
          break;
        v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v25 )
          break;
        v21 = (_QWORD *)v25;
      }
    }
LABEL_33:
    v29 = *(unsigned __int64 **)a2;
    v30 = v7;
    result = *(_QWORD *)a2 + v30 * 8;
    if ( *(_QWORD *)a2 == result )
      return result;
    v31 = (unsigned __int64 *)(result - 8);
    if ( (unsigned __int64)v29 >= result - 8 )
      return result;
    v32 = *(const __m128i **)a2;
    v33 = result - (_QWORD)v29 - 9;
    v34 = (v33 >> 4) + 1;
    if ( v30 > 0 && (__int64)(v30 * 8 - 8 * (v33 >> 4) - 8) < (__int64)(8 * v34) || v33 <= 0x1F )
    {
      do
      {
        result = *v29;
        v42 = *v31;
        ++v29;
        --v31;
        *(v29 - 1) = v42;
        v31[1] = result;
      }
      while ( v31 > v29 );
      return result;
    }
    v36 = (const __m128i *)&v29[v30 - 2];
    v35 = (__m128d *)v36;
    v37 = (__m128d *)&v36[-(v34 >> 1)];
    do
    {
      v38 = (__m128d)_mm_loadu_si128(v32);
      v39 = (__m128d)_mm_loadu_si128(v36);
      --v35;
      ++v32;
      --v36;
      v32[-1] = (const __m128i)_mm_shuffle_pd(v39, v39, 1);
      v35[1] = _mm_shuffle_pd(v38, v38, 1);
    }
    while ( v35 != v37 );
    v40 = &v29[v34 & 0xFFFFFFFFFFFFFFFELL];
    result = (unsigned __int64)&v31[-(v34 & 0xFFFFFFFFFFFFFFFELL)];
    if ( (v34 & 0xFFFFFFFFFFFFFFFELL) == v34 )
      return result;
LABEL_40:
    v41 = *v40;
    *v40 = *(_QWORD *)result;
    *(_QWORD *)result = v41;
    return result;
  }
  if ( (_DWORD)v7 == 24 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    v10 = *(_QWORD *)(v9 + 80);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) == 0 )
    {
      v43 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v44 = v10 & 2;
        v12 = v43;
        if ( !(_DWORD)v44 )
        {
          LODWORD(v13) = 0;
          goto LABEL_10;
        }
        v11 = sub_6E2500(v43, v9, v44, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(v9 + 80) = v11 | 1;
      }
    }
    v58[0] = v11;
    result = sub_B7BB70(v58);
    v12 = (_QWORD *)result;
    if ( !result )
    {
      v13 = *(unsigned int *)(a2 + 8);
LABEL_47:
      v45 = *(unsigned __int64 **)a2;
      v46 = v13;
      v47 = *(_QWORD *)a2 + v46 * 8;
      if ( *(_QWORD *)a2 == v47 )
        return result;
      v48 = (unsigned __int64 *)(v47 - 8);
      if ( (unsigned __int64)v45 >= v47 - 8 )
        return result;
      v49 = *(const __m128i **)a2;
      v50 = v47 - (_QWORD)v45 - 9;
      v51 = (v50 >> 4) + 1;
      if ( v46 > 0 && (__int64)(v46 * 8 - 8 * (v50 >> 4) - 8) < (__int64)(8 * v51) || v50 <= 0x1F )
      {
        do
        {
          result = *v45;
          v56 = *v48;
          ++v45;
          --v48;
          *(v45 - 1) = v56;
          v48[1] = result;
        }
        while ( v48 > v45 );
        return result;
      }
      v52 = (const __m128i *)&v45[v46 - 2];
      v53 = (__m128d *)v52;
      do
      {
        v54 = (__m128d)_mm_loadu_si128(v52);
        v55 = (__m128d)_mm_loadu_si128(v49++);
        --v52;
        --v53;
        v49[-1] = (const __m128i)_mm_shuffle_pd(v54, v54, 1);
        v53[1] = _mm_shuffle_pd(v55, v55, 1);
      }
      while ( &v45[2 * (v51 >> 1)] != (unsigned __int64 *)v49 );
      v40 = &v45[v51 & 0xFFFFFFFFFFFFFFFELL];
      result = (unsigned __int64)&v48[-(v51 & 0xFFFFFFFFFFFFFFFELL)];
      if ( v51 == (v51 & 0xFFFFFFFFFFFFFFFELL) )
        return result;
      goto LABEL_40;
    }
    LODWORD(v13) = *(_DWORD *)(a2 + 8);
    while ( 1 )
    {
LABEL_10:
      v14 = (unsigned int)v13;
      v15 = (unsigned int)v13 + 1LL;
      if ( v15 > *(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, v15, 8);
        v14 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v14) = v12 + 6;
      v13 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v13;
      result = v12[10];
      if ( (result & 1) != 0 )
        break;
      if ( (result & 2) != 0 )
        break;
      result &= 0xFFFFFFFFFFFFFFFCLL;
      if ( !result )
        break;
      v12 = (_QWORD *)result;
    }
    goto LABEL_47;
  }
  result = 0;
  if ( !*(_DWORD *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, 1, 8);
    result = 8LL * *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + result) = a1;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
