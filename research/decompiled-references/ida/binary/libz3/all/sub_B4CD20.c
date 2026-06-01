__int64 __fastcall sub_B4CD20(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  __m128i *v10; // rbp
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // esi
  int v20; // r9d
  __int64 v21; // r8
  __m128i *v22; // rbx
  __int64 v23; // rax
  __m128i *v24; // rsi
  int v25; // edx
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // edi
  unsigned int v30; // eax
  unsigned int v31; // esi
  int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  int v35; // ecx
  __int64 v36; // r9
  __m128i *v37; // rsi
  __m128i *v38; // rax
  __m128i *v39; // rcx
  int v40; // edx
  __m128i v41; // xmm0
  unsigned int v42; // edx
  __int32 v43; // eax
  __m128i v44; // xmm0
  __int32 v45; // eax
  __int32 v46; // eax
  __int64 v47; // rbx
  __m128i *v48; // rax
  int v49; // ecx
  __m128i *v50; // r10
  __m128i *v51; // rax
  const __m128i *v52; // rax
  __m128i *v53; // r11
  __int64 v54; // rdx
  __m128i *v55; // rsi
  __m128i *v56; // rdx
  size_t v57; // [rsp+0h] [rbp-88h]
  int v58; // [rsp+0h] [rbp-88h]
  int v59; // [rsp+8h] [rbp-80h]
  size_t v60; // [rsp+8h] [rbp-80h]
  int v61; // [rsp+10h] [rbp-78h]
  __m128i v62; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-48h]

  result = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned __int16)(result - 1) <= 1u || !(_WORD)result && (*(_BYTE *)(a2 + 30) & 1) != 0 )
    return result;
  v9 = *(_DWORD *)a2;
  v10 = *(__m128i **)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 56);
  v12 = *(_DWORD *)a2;
  if ( a3 )
  {
    v13 = (v12 - *a3 - a4) ^ (a4 >> 13);
    v14 = (*a3 - a4 - v13) ^ (v13 << 8);
    v15 = (a4 - v13 - v14) ^ (v14 >> 13);
    v16 = (v13 - v14 - v15) ^ (v15 >> 12);
    v17 = (v14 - v15 - v16) ^ (v16 << 16);
    v18 = (v15 - v16 - v17) ^ (v17 >> 5);
    v19 = (v16 - v17 - v18) ^ (v18 >> 3);
    v12 = (v18 - v19 - ((v17 - v18 - v19) ^ (v19 << 10))) ^ (((v17 - v18 - v19) ^ (v19 << 10)) >> 15);
  }
  v20 = v11 - 1;
  v21 = 32LL * v11;
  v22 = (__m128i *)((char *)v10 + v21);
  v23 = 32LL * (v12 & (v11 - 1));
  v24 = &v10[(unsigned __int64)v23 / 0x10];
  if ( v23 != v21 )
  {
    result = (__int64)v10[(unsigned __int64)v23 / 0x10].m128i_i64;
    do
    {
      v25 = *(_DWORD *)(result + 4);
      if ( v25 == 2 )
      {
        if ( *(_DWORD *)result == v12
          && a2 == *(_QWORD *)(result + 8)
          && a3 == *(_DWORD **)(result + 16)
          && a4 == *(_DWORD *)(result + 24) )
        {
          return result;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_26;
      }
      result += 32;
    }
    while ( v22 != (__m128i *)result );
  }
  if ( v10 != v24 )
  {
    result = *(_QWORD *)(a1 + 48);
    do
    {
      v26 = *(_DWORD *)(result + 4);
      if ( v26 == 2 )
      {
        if ( *(_DWORD *)result == v12
          && a2 == *(_QWORD *)(result + 8)
          && a3 == *(_DWORD **)(result + 16)
          && a4 == *(_DWORD *)(result + 24) )
        {
          return result;
        }
      }
      else if ( !v26 )
      {
        break;
      }
      result += 32;
    }
    while ( v24 != (__m128i *)result );
  }
LABEL_26:
  v27 = 2 * v11;
  v28 = *(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64);
  v62.m128i_i64[0] = a2;
  v62.m128i_i64[1] = (__int64)a3;
  v63 = a4;
  if ( 3 * v11 < 4 * v28 )
  {
    v47 = v27;
    v59 = 2 * v11;
    v57 = 32LL * v27;
    v48 = (__m128i *)sub_186B270(v57);
    v21 = v57;
    v49 = v59;
    v10 = v48;
    v50 = &v48[v57 / 0x10];
    if ( v59 )
    {
      do
      {
        v48->m128i_i64[0] = 0;
        v48 += 2;
        v48[-2].m128i_i64[1] = 0;
        v48[-1].m128i_i64[0] = 0;
      }
      while ( v48 != v50 );
      v51 = v10;
      do
      {
        v51[1].m128i_i32[2] = 0;
        v51 += 4;
        v51[-1].m128i_i32[2] = 0;
      }
      while ( v51 != &v10[2 * v47] );
    }
    v52 = *(const __m128i **)(a1 + 48);
    v20 = v59 - 1;
    v22 = v50;
    v53 = (__m128i *)&v52[2 * *(unsigned int *)(a1 + 56)];
    if ( v52 != v53 )
    {
      do
      {
        if ( v52->m128i_i32[1] == 2 )
        {
          v54 = 32LL * (v52->m128i_i32[0] & (unsigned int)v20);
          v55 = &v10[(unsigned __int64)v54 / 0x10];
          if ( v54 == v57 )
          {
LABEL_73:
            if ( v55 == v10 )
            {
LABEL_80:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = v10;
            while ( v56->m128i_i32[1] )
            {
              v56 += 2;
              if ( v55 == v56 )
                goto LABEL_80;
            }
          }
          else
          {
            v56 = &v10[(unsigned __int64)v54 / 0x10];
            while ( v56->m128i_i32[1] )
            {
              v56 += 2;
              if ( v50 == v56 )
                goto LABEL_73;
            }
          }
          *v56 = _mm_loadu_si128(v52);
          v56[1] = _mm_loadu_si128(v52 + 1);
        }
        v52 += 2;
      }
      while ( v53 != v52 );
      v53 = *(__m128i **)(a1 + 48);
    }
    if ( v53 )
    {
      v61 = v59;
      v60 = v57;
      v58 = v49 - 1;
      sub_186B220(v53);
      v49 = v61;
      v21 = v60;
      v20 = v58;
    }
    *(_QWORD *)(a1 + 48) = v10;
    v9 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 56) = v49;
    *(_DWORD *)(a1 + 64) = 0;
  }
  if ( a3 )
  {
    v29 = (v9 - (a4 + *a3)) ^ (a4 >> 13);
    v30 = (*a3 - a4 - v29) ^ (v29 << 8);
    v31 = (a4 - v29 - v30) ^ (v30 >> 13);
    v32 = (v29 - v30 - v31) ^ (v31 >> 12);
    v33 = (v30 - v31 - v32) ^ (v32 << 16);
    v34 = (v31 - v32 - v33) ^ (v33 >> 5);
    v35 = (v34 >> 3) ^ (v32 - v33 - v34);
    v9 = (v34 - v35 - ((v33 - v34 - v35) ^ (v35 << 10))) ^ (((v33 - v34 - v35) ^ (v35 << 10)) >> 15);
  }
  v36 = 32LL * (v9 & v20);
  v37 = &v10[(unsigned __int64)v36 / 0x10];
  if ( v36 != v21 )
  {
    v38 = &v10[(unsigned __int64)v36 / 0x10];
    v39 = nullptr;
    while ( 1 )
    {
      v40 = v38->m128i_i32[1];
      if ( v40 == 2 )
      {
        if ( v38->m128i_i32[0] == v9
          && a2 == v38->m128i_i64[1]
          && a3 == (_DWORD *)v38[1].m128i_i64[0]
          && a4 == v38[1].m128i_i32[2] )
        {
          v41 = _mm_load_si128(&v62);
          v42 = v63;
          v38->m128i_i32[1] = 2;
          v38[1].m128i_i32[2] = v42;
          *(__m128i *)((char *)v38 + 8) = v41;
          return sub_B4D230(a1, a2, a3, a4);
        }
      }
      else
      {
        if ( !v40 )
        {
          if ( v39 )
            goto LABEL_51;
          v39 = v38;
          goto LABEL_52;
        }
        v39 = v38;
      }
      v38 += 2;
      if ( v38 == v22 )
        goto LABEL_43;
    }
  }
  v39 = nullptr;
  while ( 1 )
  {
LABEL_43:
    if ( v37 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v43 = v10->m128i_i32[1];
    if ( v43 != 2 )
      break;
    if ( v10->m128i_i32[0] == v9
      && a2 == v10->m128i_i64[1]
      && a3 == (_DWORD *)v10[1].m128i_i64[0]
      && a4 == v10[1].m128i_i32[2] )
    {
      v44 = _mm_load_si128(&v62);
      v45 = v63;
      v10->m128i_i32[1] = 2;
      v10[1].m128i_i32[2] = v45;
      *(__m128i *)((char *)v10 + 8) = v44;
      return sub_B4D230(a1, a2, a3, a4);
    }
LABEL_42:
    v10 += 2;
  }
  if ( v43 )
  {
    v39 = v10;
    goto LABEL_42;
  }
  if ( v39 )
LABEL_51:
    --*(_DWORD *)(a1 + 64);
  else
    v39 = v10;
LABEL_52:
  *(__m128i *)((char *)v39 + 8) = _mm_load_si128(&v62);
  v46 = v63;
  v39->m128i_i32[1] = 2;
  v39[1].m128i_i32[2] = v46;
  v39->m128i_i32[0] = v9;
  ++*(_DWORD *)(a1 + 60);
  return sub_B4D230(a1, a2, a3, a4);
}

