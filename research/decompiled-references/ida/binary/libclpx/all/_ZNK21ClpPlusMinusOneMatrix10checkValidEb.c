int __fastcall ClpPlusMinusOneMatrix::checkValid(ClpPlusMinusOneMatrix *this, char a2)
{
  __int64 (__fastcall *v3)(ClpPlusMinusOneMatrix *); // rax
  signed int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int *v8; // r8
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // edi
  int v12; // edi
  unsigned int v13; // edx
  int v14; // r9d
  unsigned int v15; // edi
  const __m128i *v16; // rcx
  __m128i v17; // xmm0
  unsigned int v18; // edi
  __m128i v19; // xmm1
  __m128i si128; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  unsigned int v24; // ecx
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __m128i v27; // xmm3
  __m128i v28; // xmm2
  __m128i v29; // xmm2
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  int v41; // ecx
  unsigned int v43; // [rsp+Ch] [rbp-1Ch]

  v3 = *(__int64 (__fastcall **)(ClpPlusMinusOneMatrix *))(*(_QWORD *)this + 16LL);
  if ( !*((_BYTE *)this + 136) )
  {
    v4 = *((_DWORD *)this + 33);
    if ( v3 == ClpPlusMinusOneMatrix::getNumElements )
    {
      v5 = *((int *)this + 32);
      goto LABEL_6;
    }
LABEL_74:
    LODWORD(v5) = v3(this);
    goto LABEL_8;
  }
  v4 = *((_DWORD *)this + 32);
  if ( v3 != ClpPlusMinusOneMatrix::getNumElements )
    goto LABEL_74;
  v5 = *((int *)this + 33);
LABEL_6:
  v6 = *((_QWORD *)this + 13);
  v7 = -1;
  if ( !v6 )
    goto LABEL_67;
  LODWORD(v5) = *(_DWORD *)(v6 + 4 * v5);
LABEL_8:
  v7 = -1;
  if ( (int)v5 <= 0 )
    goto LABEL_67;
  v8 = *((int **)this + 15);
  v9 = -(int)((unsigned __int64)v8 >> 2) & 3;
  if ( (unsigned int)(v5 - 1) <= 7 )
  {
    v24 = 0;
LABEL_28:
    v34 = v8[v24];
    if ( v7 < v34 )
      v7 = v8[v24];
    if ( v4 > v34 )
      v4 = v8[v24];
    if ( (int)v5 > (int)(v24 + 1) )
    {
      v35 = v8[v24 + 1];
      if ( v7 < v35 )
        v7 = v8[v24 + 1];
      if ( v4 > v35 )
        v4 = v8[v24 + 1];
      if ( (int)v5 > (int)(v24 + 2) )
      {
        v36 = v8[v24 + 2];
        if ( v7 < v36 )
          v7 = v8[v24 + 2];
        if ( v4 > v36 )
          v4 = v8[v24 + 2];
        if ( (int)v5 > (int)(v24 + 3) )
        {
          v37 = v8[v24 + 3];
          if ( v7 < v37 )
            v7 = v8[v24 + 3];
          if ( v4 > v37 )
            v4 = v8[v24 + 3];
          if ( (int)v5 > (int)(v24 + 4) )
          {
            v38 = v8[v24 + 4];
            if ( v7 < v38 )
              v7 = v8[v24 + 4];
            if ( v4 > v38 )
              v4 = v8[v24 + 4];
            if ( (int)v5 > (int)(v24 + 5) )
            {
              v39 = v8[v24 + 5];
              if ( v7 < v39 )
                v7 = v8[v24 + 5];
              if ( v4 > v39 )
                v4 = v8[v24 + 5];
              if ( (int)v5 > (int)(v24 + 6) )
              {
                v40 = v8[v24 + 6];
                if ( v7 < v40 )
                  v7 = v8[v24 + 6];
                if ( v4 > v40 )
                  v4 = v8[v24 + 6];
                v41 = v24 + 7;
                if ( (int)v5 > v41 )
                {
                  LODWORD(v5) = v8[v41];
                  if ( v7 < (int)v5 )
                    v7 = v8[v41];
                  if ( v4 > (int)v5 )
                    v4 = v8[v41];
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_67;
  }
  v10 = 0;
  if ( (_DWORD)v9 )
  {
    v10 = 1;
    if ( *v8 >= 0 )
      v7 = *v8;
    if ( v4 > *v8 )
      v4 = *v8;
    if ( (_DWORD)v9 != 1 )
    {
      v11 = v8[1];
      v10 = 2;
      if ( v7 < v11 )
        v7 = v8[1];
      if ( v4 > v11 )
        v4 = v8[1];
      if ( (_DWORD)v9 != 2 )
      {
        v12 = v8[2];
        v10 = 3;
        if ( v7 < v12 )
          v7 = v8[2];
        if ( v4 > v12 )
          v4 = v8[2];
      }
    }
  }
  v43 = v7;
  v13 = 0;
  v14 = v5 - v9;
  v15 = v5 - v9;
  v16 = (const __m128i *)&v8[v9];
  v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v43), 0);
  v18 = v15 >> 2;
  v19 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v4), 0);
  do
  {
    si128 = _mm_load_si128(v16);
    ++v13;
    ++v16;
    v21 = _mm_cmpgt_epi32(si128, v17);
    v17 = _mm_or_si128(_mm_andnot_si128(v21, v17), _mm_and_si128(si128, v21));
    v22 = _mm_cmpgt_epi32(si128, v19);
    v19 = _mm_or_si128(_mm_and_si128(v19, v22), _mm_andnot_si128(v22, si128));
  }
  while ( v13 < v18 );
  v23 = _mm_srli_si128(v19, 8);
  v24 = (v14 & 0xFFFFFFFC) + v10;
  v25 = _mm_cmpgt_epi32(v19, v23);
  v26 = _mm_or_si128(_mm_andnot_si128(v25, v19), _mm_and_si128(v23, v25));
  v27 = _mm_srli_si128(v26, 4);
  v28 = _mm_cmpgt_epi32(v26, v27);
  v4 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v28, v26), _mm_and_si128(v27, v28)));
  v29 = _mm_srli_si128(v17, 8);
  v30 = _mm_cmpgt_epi32(v17, v29);
  v31 = _mm_or_si128(_mm_and_si128(v17, v30), _mm_andnot_si128(v30, v29));
  v32 = _mm_srli_si128(v31, 4);
  v33 = _mm_cmpgt_epi32(v31, v32);
  v7 = _mm_cvtsi128_si32(_mm_or_si128(_mm_and_si128(v31, v33), _mm_andnot_si128(v33, v32)));
  if ( v14 != (v14 & 0xFFFFFFFC) )
    goto LABEL_28;
LABEL_67:
  if ( a2 )
  {
    if ( v4 > 0 )
      goto LABEL_72;
    LODWORD(v5) = *((_DWORD *)this + 33);
    if ( *((_BYTE *)this + 136) )
      LODWORD(v5) = *((_DWORD *)this + 32);
    if ( v7 + 1 < (int)v5 )
LABEL_72:
      LODWORD(v5) = printf("Not full range of indices - %d to %d\n", v4, v7);
  }
  return v5;
}

