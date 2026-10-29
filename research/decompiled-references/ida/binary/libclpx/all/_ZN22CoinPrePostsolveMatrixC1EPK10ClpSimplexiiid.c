// Alternative name is '_ZN22CoinPrePostsolveMatrixC2EPK10ClpSimplexiiid'
void __fastcall CoinPrePostsolveMatrix::CoinPrePostsolveMatrix(
        CoinPrePostsolveMatrix *this,
        const ClpSimplex *a2,
        int a3,
        int a4,
        int a5,
        double a6)
{
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rax
  int v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r13
  __int64 v14; // xmm0_8
  int v15; // eax
  double v16; // xmm0_8
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edi
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // r15
  __int64 v24; // r13
  void *v25; // rax
  size_t v26; // r15
  const void *v27; // rax
  size_t v28; // r13
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned int v31; // esi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  __m128i *v34; // rdx
  __m128i si128; // xmm1
  __m128i v36; // xmm0
  unsigned int v37; // eax
  signed int v38; // edx
  int v39; // eax
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned int v42; // ecx
  __m128i *v43; // rdx
  unsigned int v44; // r8d
  unsigned int v45; // eax
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  unsigned int v48; // eax
  signed int v49; // edx
  int v50; // eax
  __int64 v51; // rdi
  void *desta; // [rsp+0h] [rbp-58h]
  void *destb; // [rsp+0h] [rbp-58h]
  char v55[64]; // [rsp+18h] [rbp-40h] BYREF

  *(_DWORD *)this = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 26);
  v9 = *((_QWORD **)a2 + 24);
  v10 = *(__int64 (**)(void))(*v9 + 16LL);
  if ( (char *)v10 == (char *)ClpPackedMatrix::getNumElements )
    v11 = *(_DWORD *)(v9[11] + 72LL);
  else
    v11 = v10();
  *((_DWORD *)this + 2) = v11;
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 4) = a4;
  *((double *)this + 4) = a6;
  v12 = a3 + 1;
  if ( v12 > 0x1FFFFFFFFFFFFFFELL
    || (v13 = 4 * v12,
        *((_QWORD *)this + 5) = operator new[](v13),
        *((_QWORD *)this + 6) = operator new[](v13),
        (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFLL)
    || (*((_QWORD *)this + 9) = operator new[](8LL * a3),
        *((_QWORD *)this + 11) = operator new[](8LL * a3),
        *((_QWORD *)this + 12) = operator new[](8LL * a3),
        (unsigned __int64)a4 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  *((_QWORD *)this + 13) = operator new[](8LL * a4);
  *((_QWORD *)this + 14) = operator new[](8LL * a4);
  *((_QWORD *)this + 15) = operator new[](v13 - 4);
  *((_QWORD *)this + 16) = operator new[](4LL * a4);
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 3);
  v14 = *(_QWORD *)a2;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 19) = v14;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_BYTE *)this + 216) = 0;
  CoinMessage::CoinMessage((char *)this + 224, 0);
  v15 = a5;
  if ( *((_DWORD *)this + 2) >= a5 )
    v15 = *((_DWORD *)this + 2);
  v16 = (double)v15 * *((double *)this + 4) + (double)a3;
  *((_DWORD *)this + 6) = (int)v16;
  v17 = a3 + (int)v16;
  if ( v17 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v18 = operator new[](4 * v17);
  v19 = *((_DWORD *)this + 6);
  *((_QWORD *)this + 7) = v18;
  v20 = a3 + v19;
  if ( v20 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v21 = operator new[](8 * v20);
  v22 = *((_BYTE *)this + 216) == 0;
  *((_QWORD *)this + 8) = v21;
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 5);
  v23 = *((int *)a2 + 27);
  v24 = *((int *)a2 + 26);
  v25 = *((void **)a2 + 43);
  if ( !v22 )
  {
    v51 = *((_QWORD *)this + 26);
    if ( v51 )
    {
      destb = *((void **)a2 + 43);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 24LL))(v51);
      v25 = destb;
    }
    *((_BYTE *)this + 216) = 0;
  }
  *((_QWORD *)this + 26) = v25;
  v26 = 8 * v23;
  memcpy(*((void **)this + 11), *((const void **)a2 + 22), v26);
  memcpy(*((void **)this + 12), *((const void **)a2 + 23), v26);
  desta = *((void **)this + 9);
  v27 = (const void *)(***((__int64 (__fastcall ****)(_QWORD, const ClpSimplex *, _QWORD, char *, __int64, __int64))a2
                         + 20))(
                        *((_QWORD *)a2 + 20),
                        a2,
                        *((_QWORD *)a2 + 15),
                        v55,
                        1,
                        2);
  v28 = 8 * v24;
  memcpy(desta, v27, v26);
  memcpy(*((void **)this + 13), *((const void **)a2 + 18), v28);
  memcpy(*((void **)this + 14), *((const void **)a2 + 19), v28);
  if ( a3 > 0 )
  {
    v29 = *((_QWORD *)this + 15);
    v30 = -(int)(v29 >> 2) & 3;
    if ( (unsigned int)(a3 - 1) <= 5 )
    {
      v37 = 0;
LABEL_20:
      *(_DWORD *)(v29 + 4LL * (int)v37) = v37;
      if ( a3 > (int)(v37 + 1) )
      {
        *(_DWORD *)(v29 + 4LL * (int)(v37 + 1)) = v37 + 1;
        if ( a3 > (int)(v37 + 2) )
        {
          *(_DWORD *)(v29 + 4LL * (int)(v37 + 2)) = v37 + 2;
          if ( a3 > (int)(v37 + 3) )
          {
            *(_DWORD *)(v29 + 4LL * (int)(v37 + 3)) = v37 + 3;
            v38 = v37 + 4;
            if ( a3 > (int)(v37 + 4) )
            {
              v39 = v37 + 5;
              *(_DWORD *)(v29 + 4LL * v38) = v38;
              if ( a3 > v39 )
                *(_DWORD *)(v29 + 4LL * v39) = v39;
            }
          }
        }
      }
      goto LABEL_26;
    }
    v31 = 0;
    if ( (_DWORD)v30 )
    {
      *(_DWORD *)v29 = 0;
      v31 = 1;
      if ( (_DWORD)v30 != 1 )
      {
        *(_DWORD *)(v29 + 4) = 1;
        v31 = 2;
        if ( (_DWORD)v30 != 2 )
        {
          *(_DWORD *)(v29 + 8) = 2;
          v31 = 3;
        }
      }
    }
    v32 = 0;
    v33 = a3 - v30;
    v34 = (__m128i *)(v29 + 4 * v30);
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v36 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v32;
      ++v34;
      v34[-1] = v36;
      v36 = _mm_add_epi32(v36, si128);
    }
    while ( v33 >> 2 > v32 );
    v37 = (v33 & 0xFFFFFFFC) + v31;
    if ( v33 != (v33 & 0xFFFFFFFC) )
      goto LABEL_20;
  }
LABEL_26:
  if ( a4 <= 0 )
    goto LABEL_41;
  v40 = *((_QWORD *)this + 16);
  v41 = -(int)(v40 >> 2) & 3;
  if ( (unsigned int)(a4 - 1) <= 5 )
  {
    v48 = 0;
LABEL_35:
    *(_DWORD *)(v40 + 4LL * (int)v48) = v48;
    if ( a4 > (int)(v48 + 1) )
    {
      *(_DWORD *)(v40 + 4LL * (int)(v48 + 1)) = v48 + 1;
      if ( (int)(v48 + 2) < a4 )
      {
        *(_DWORD *)(v40 + 4LL * (int)(v48 + 2)) = v48 + 2;
        if ( a4 > (int)(v48 + 3) )
        {
          *(_DWORD *)(v40 + 4LL * (int)(v48 + 3)) = v48 + 3;
          v49 = v48 + 4;
          if ( a4 > (int)(v48 + 4) )
          {
            v50 = v48 + 5;
            *(_DWORD *)(v40 + 4LL * v49) = v49;
            if ( a4 > v50 )
              *(_DWORD *)(v40 + 4LL * v50) = v50;
          }
        }
      }
    }
    goto LABEL_41;
  }
  v42 = 0;
  if ( (_DWORD)v41 )
  {
    *(_DWORD *)v40 = 0;
    v42 = 1;
    if ( (_DWORD)v41 != 1 )
    {
      *(_DWORD *)(v40 + 4) = 1;
      v42 = 2;
      if ( (_DWORD)v41 != 2 )
      {
        *(_DWORD *)(v40 + 8) = 2;
        v42 = 3;
      }
    }
  }
  v43 = (__m128i *)(v40 + 4 * v41);
  v44 = a4 - v41;
  v45 = 0;
  v46 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v47 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v42), 0), (__m128i)xmmword_289BB0);
  do
  {
    ++v45;
    ++v43;
    v43[-1] = v47;
    v47 = _mm_add_epi32(v47, v46);
  }
  while ( v45 < v44 >> 2 );
  v48 = (v44 & 0xFFFFFFFC) + v42;
  if ( v44 != (v44 & 0xFFFFFFFC) )
    goto LABEL_35;
LABEL_41:
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
}

