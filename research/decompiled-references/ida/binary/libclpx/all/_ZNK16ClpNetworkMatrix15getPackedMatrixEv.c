__int64 __fastcall ClpNetworkMatrix::getPackedMatrix(ClpNetworkMatrix *this)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  double *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  int *v14; // rcx
  unsigned int v15; // edx
  __m128i si128; // xmm2
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned int v19; // edx
  signed int v20; // ecx
  int v21; // edx
  void *v22; // rdi
  CoinPackedMatrix *v23; // r12
  const void *v24; // r13
  int v25; // eax
  int v26; // ebp
  unsigned __int64 v27; // rbp
  void *v28; // rax
  int *v29; // rax
  int *v30; // rcx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(ClpNetworkMatrix *__hidden); // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // eax
  double *v36; // [rsp+Ch] [rbp-40h] BYREF
  int *v37; // [rsp+14h] [rbp-38h] BYREF
  int *v38; // [rsp+1Ch] [rbp-30h] BYREF

  result = *((_QWORD *)this + 11);
  if ( result )
    return result;
  v3 = 2 * *((_DWORD *)this + 29);
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_35;
  v4 = (double *)operator new[](8 * v3);
  v5 = *((_DWORD *)this + 29);
  v36 = v4;
  if ( 2 * v5 > 0 )
  {
    v6 = (__int64)&v4[2 * ((unsigned int)(2 * v5 - 1) >> 1) + 2];
    do
    {
      *v4 = -1.0;
      v4 += 2;
      *(v4 - 1) = 1.0;
    }
    while ( v4 != (double *)v6 );
  }
  v7 = v5 + 1;
  if ( v7 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_35;
  v8 = operator new[](4 * v7);
  v9 = *((_DWORD *)this + 29);
  v37 = (int *)v8;
  if ( v9 < 0 )
    goto LABEL_24;
  v10 = -(int)(v8 >> 2) & 3;
  v11 = v10 + 3;
  if ( (unsigned int)(v10 + 3) < 5 )
    v11 = 5;
  if ( v9 < v11 )
  {
    v19 = 0;
LABEL_18:
    *(_DWORD *)(v8 + 4LL * (int)v19) = 2 * v19;
    if ( (int)(v19 + 1) <= v9 )
    {
      *(_DWORD *)(v8 + 4LL * (int)(v19 + 1)) = 2 * (v19 + 1);
      if ( v9 >= (int)(v19 + 2) )
      {
        *(_DWORD *)(v8 + 4LL * (int)(v19 + 2)) = 2 * (v19 + 2);
        if ( v9 >= (int)(v19 + 3) )
        {
          *(_DWORD *)(v8 + 4LL * (int)(v19 + 3)) = 2 * (v19 + 3);
          v20 = v19 + 4;
          if ( v9 >= (int)(v19 + 4) )
          {
            v21 = v19 + 5;
            *(_DWORD *)(v8 + 4LL * v20) = 2 * v20;
            if ( v9 >= v21 )
              *(_DWORD *)(v8 + 4LL * v21) = 2 * v21;
          }
        }
      }
    }
    goto LABEL_24;
  }
  v12 = 0;
  if ( (_DWORD)v10 )
  {
    *(_DWORD *)v8 = 0;
    v12 = 1;
    if ( (_DWORD)v10 != 1 )
    {
      *(_DWORD *)(v8 + 4) = 2;
      v12 = 2;
      if ( (_DWORD)v10 != 2 )
      {
        *(_DWORD *)(v8 + 8) = 4;
        v12 = 3;
      }
    }
  }
  v13 = v9 + 1 - v10;
  v14 = (int *)(v8 + 4 * v10);
  v15 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v17 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v12), 0), (__m128i)xmmword_289BB0);
  do
  {
    v18 = v17;
    ++v15;
    v17 = _mm_add_epi32(v17, si128);
    v14 += 4;
    *((__m128i *)v14 - 1) = _mm_slli_epi32(v18, 1u);
  }
  while ( v15 < v13 >> 2 );
  v19 = (v13 & 0xFFFFFFFC) + v12;
  if ( v13 != (v13 & 0xFFFFFFFC) )
    goto LABEL_18;
LABEL_24:
  v22 = *((void **)this + 12);
  if ( v22 )
    operator delete[](v22);
  *((_QWORD *)this + 12) = 0;
  v23 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v23);
  v24 = *((const void **)this + 13);
  v25 = *((_DWORD *)this + 29);
  *((_QWORD *)this + 11) = v23;
  v26 = 2 * v25;
  if ( !v24 )
  {
    v30 = nullptr;
    goto LABEL_29;
  }
  if ( (unsigned __int64)v26 > 0x1FFFFFFFFFFFFFFELL )
LABEL_35:
    __cxa_throw_bad_array_new_length();
  v27 = 4LL * v26;
  v28 = (void *)operator new[](v27);
  v29 = (int *)memcpy(v28, v24, v27);
  v23 = *((CoinPackedMatrix **)this + 11);
  v30 = v29;
LABEL_29:
  v31 = *(_QWORD *)this;
  v38 = v30;
  v32 = *(__int64 (__fastcall **)(ClpNetworkMatrix *__hidden))(v31 + 16);
  if ( v32 == ClpNetworkMatrix::getNumElements )
  {
    v33 = *((_DWORD *)this + 29);
    v34 = 2 * v33;
  }
  else
  {
    v35 = v32(this);
    v33 = *((_DWORD *)this + 29);
    v34 = v35;
  }
  CoinPackedMatrix::assignMatrix(v23, 1, *((_DWORD *)this + 28), v33, v34, &v36, &v38, &v37, (int **)this + 12, -1, -1);
  return *((_QWORD *)this + 11);
}

