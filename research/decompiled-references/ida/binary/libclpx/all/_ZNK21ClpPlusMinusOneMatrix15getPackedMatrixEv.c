__int64 __fastcall ClpPlusMinusOneMatrix::getPackedMatrix(ClpPlusMinusOneMatrix *this)
{
  __int64 result; // rax
  int v2; // r12d
  int v3; // r15d
  unsigned __int64 v4; // rdi
  double *v5; // rbx
  ClpPlusMinusOneMatrix *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r9
  int v10; // eax
  int v11; // edx
  __int64 v12; // rsi
  int v13; // r11d
  unsigned __int64 v14; // rcx
  unsigned int v15; // r11d
  double *v16; // rsi
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rsi
  int v21; // r13d
  unsigned __int64 v22; // rcx
  unsigned int v23; // r13d
  double *v24; // rsi
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rdx
  __int64 (*v29)(void); // rax
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *(__fastcall *v32)(ClpPlusMinusOneMatrix *); // rax
  unsigned __int64 v33; // r13
  CoinPackedMatrix *v34; // r14
  void *v35; // rdi
  int v36; // r14d
  _DWORD *v37; // rdx
  int v38; // edi
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // r8d
  __int64 v42; // rsi
  unsigned int v43; // r11d
  __int64 v44; // rax
  unsigned int v45; // r11d
  char *v46; // r10
  char *v47; // r9
  unsigned __int64 v48; // rsi
  signed int v49; // edi
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  unsigned __int64 v53; // rax
  int v54; // [rsp-44h] [rbp-44h]

  result = *((_QWORD *)this + 11);
  if ( result )
    return result;
  v2 = *((_DWORD *)this + 32);
  v3 = *((_DWORD *)this + 33);
  if ( *((_BYTE *)this + 136) )
  {
    v2 = *((_DWORD *)this + 33);
    v3 = *((_DWORD *)this + 32);
  }
  v4 = *(int *)(*((_QWORD *)this + 13) + 4LL * v2);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
LABEL_71:
    __cxa_throw_bad_array_new_length();
  v5 = (double *)operator new[](8 * v4);
  v6 = this;
  if ( v2 <= 0 )
    goto LABEL_35;
  v7 = 0;
  v8 = *((_QWORD *)this + 14);
  v9 = *((_QWORD *)this + 13);
  v10 = 0;
  do
  {
    v11 = *(_DWORD *)(v8 + v7);
    if ( v10 >= v11 )
    {
      v11 = v10;
      goto LABEL_20;
    }
    v12 = v10;
    v13 = v11 - v10;
    v14 = ((unsigned __int64)&v5[v10] >> 3) & 1;
    if ( (unsigned int)(v11 - v10 - 1) <= 4 )
      goto LABEL_15;
    if ( (_DWORD)v14 )
      v5[v10++] = 1.0;
    v15 = v13 - v14;
    v16 = &v5[v12 + v14];
    v17 = 0;
    do
    {
      ++v17;
      v16 += 2;
      *((_OWORD *)v16 - 1) = xmmword_289DC0;
    }
    while ( v15 >> 1 > v17 );
    v10 += v15 & 0xFFFFFFFE;
    if ( v15 != (v15 & 0xFFFFFFFE) )
    {
      v12 = v10;
LABEL_15:
      v5[v12] = 1.0;
      if ( v11 > v10 + 1 )
      {
        v5[v10 + 1] = 1.0;
        if ( v11 > v10 + 2 )
        {
          v5[v10 + 2] = 1.0;
          v18 = v10 + 3;
          if ( v11 > v10 + 3 )
          {
            v19 = v10 + 4;
            v5[v18] = 1.0;
            if ( v11 > v19 )
              v5[v19] = 1.0;
          }
        }
      }
    }
LABEL_20:
    v10 = *(_DWORD *)(v9 + v7 + 4);
    if ( v11 >= v10 )
    {
      v10 = v11;
      goto LABEL_33;
    }
    v20 = v11;
    v21 = v10 - v11;
    v22 = ((unsigned __int64)&v5[v11] >> 3) & 1;
    if ( (unsigned int)(v10 - 1 - v11) <= 4 )
      goto LABEL_28;
    if ( (_DWORD)v22 )
      v5[v11++] = -1.0;
    v23 = v21 - v22;
    v24 = &v5[v20 + v22];
    v25 = 0;
    do
    {
      ++v25;
      v24 += 2;
      *((_OWORD *)v24 - 1) = xmmword_28D580;
    }
    while ( v23 >> 1 > v25 );
    v11 += v23 & 0xFFFFFFFE;
    if ( v23 != (v23 & 0xFFFFFFFE) )
    {
      v20 = v11;
LABEL_28:
      v5[v20] = -1.0;
      if ( v10 > v11 + 1 )
      {
        v5[v11 + 1] = -1.0;
        if ( v10 > v11 + 2 )
        {
          v5[v11 + 2] = -1.0;
          v26 = v11 + 3;
          if ( v10 > v11 + 3 )
          {
            v27 = v11 + 4;
            v5[v26] = -1.0;
            if ( v10 > v27 )
              v5[v27] = -1.0;
          }
        }
      }
    }
LABEL_33:
    v7 += 4;
  }
  while ( v7 != 4LL * (unsigned int)(v2 - 1) + 4 );
  v6 = this;
LABEL_35:
  v28 = *(_QWORD *)v6;
  v29 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v29 == (char *)ClpPlusMinusOneMatrix::getNumElements )
  {
    v30 = *((_QWORD *)v6 + 13);
    v31 = *((_DWORD *)v6 + 33);
    if ( !*((_BYTE *)v6 + 136) )
      v31 = *((_DWORD *)v6 + 32);
    v54 = 0;
    if ( v30 )
      v54 = *(_DWORD *)(v30 + 4LL * v31);
  }
  else
  {
    v52 = v29();
    v28 = *(_QWORD *)v6;
    v54 = v52;
  }
  v32 = *(_DWORD *(__fastcall **)(ClpPlusMinusOneMatrix *))(v28 + 64);
  if ( v32 != ClpPlusMinusOneMatrix::getVectorLengths )
  {
    v33 = (__int64)v32(this);
    goto LABEL_42;
  }
  v33 = *((_QWORD *)this + 12);
  if ( v33 )
    goto LABEL_42;
  v36 = *((_DWORD *)this + 33);
  if ( !*((_BYTE *)this + 136) )
    v36 = *((_DWORD *)this + 32);
  if ( (unsigned __int64)v36 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_71;
  v33 = operator new[](4LL * v36);
  *((_QWORD *)this + 12) = v33;
  if ( v36 > 0 )
  {
    v37 = *((_DWORD **)this + 13);
    if ( ((unsigned __int64)v37 >= v33 + 16 || v33 >= (unsigned __int64)(v37 + 5)) && (unsigned int)v36 > 8 )
    {
      v38 = 0;
      v39 = -(int)((unsigned __int64)(v37 + 1) >> 2) & 3;
      if ( v39 )
      {
        v38 = 1;
        *(_DWORD *)v33 = v37[1] - *v37;
        if ( v39 != 1 )
        {
          v38 = 2;
          *(_DWORD *)(v33 + 4) = v37[2] - v37[1];
          if ( v39 != 2 )
          {
            v38 = 3;
            *(_DWORD *)(v33 + 8) = v37[3] - v37[2];
          }
        }
      }
      v40 = 0;
      v41 = v36 - v39;
      v42 = 4LL * v39 + 4;
      v43 = v36 - v39;
      v44 = 0;
      v45 = v43 >> 2;
      v46 = (char *)v37 + v42;
      v42 -= 4;
      v47 = (char *)v37 + v42;
      v48 = v33 + v42;
      do
      {
        ++v40;
        *(__m128i *)(v48 + v44) = _mm_sub_epi32(
                                    _mm_load_si128((const __m128i *)&v46[v44]),
                                    _mm_loadu_si128((const __m128i *)&v47[v44]));
        v44 += 16;
      }
      while ( v45 > v40 );
      v49 = (v41 & 0xFFFFFFFC) + v38;
      if ( v41 != (v41 & 0xFFFFFFFC) )
      {
        v50 = v49 + 1LL;
        v51 = v50;
        *(_DWORD *)(v33 + 4 * v50 - 4) = v37[v50] - v37[v50 - 1];
        if ( v49 + 1 < v36 )
        {
          *(_DWORD *)(v33 + 4 * v50) = v37[v50 + 1] - v37[v50];
          if ( v36 > v49 + 2 )
          {
            *(_DWORD *)(v33 + v51 * 4 + 4) = v37[v51 + 2] - v37[v51 + 1];
            if ( v36 > v49 + 3 )
            {
              *(_DWORD *)(v33 + v51 * 4 + 8) = v37[v51 + 3] - v37[v51 + 2];
              if ( v36 > v49 + 4 )
              {
                *(_DWORD *)(v33 + v51 * 4 + 12) = v37[v51 + 4] - v37[v51 + 3];
                if ( v36 > v49 + 5 )
                  *(_DWORD *)(v33 + v51 * 4 + 16) = v37[v51 + 5] - v37[v51 + 4];
              }
            }
          }
        }
      }
    }
    else
    {
      v53 = 0;
      do
      {
        *(_DWORD *)(v33 + v53) = v37[v53 / 4 + 1] - v37[v53 / 4];
        v53 += 4LL;
      }
      while ( v53 != 4LL * (unsigned int)(v36 - 1) + 4 );
    }
  }
LABEL_42:
  v34 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(
    v34,
    *((_BYTE *)this + 136),
    v3,
    v2,
    v54,
    v5,
    *((const int **)this + 15),
    *((const int **)this + 13),
    (const int *)v33);
  *((_QWORD *)this + 11) = v34;
  operator delete[](v5);
  v35 = *((void **)this + 12);
  if ( v35 )
    operator delete[](v35);
  *((_QWORD *)this + 12) = 0;
  return *((_QWORD *)this + 11);
}

