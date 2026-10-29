__int64 __fastcall sub_21319B0(__int64 a1, void **a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // r15
  __m128i v12; // xmm0
  bool v13; // cc
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int *v17; // rax
  void *v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __m128 *v24; // r15
  __int64 v25; // rax
  __m128i v26; // xmm2
  int v27; // edx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm1
  void *v34; // rdi
  __int64 v35; // rsi
  __m128i v36; // xmm3
  unsigned int v37; // eax
  __m128i v38; // xmm4
  unsigned int v39; // eax
  char *v40; // r15
  __int64 v41; // [rsp+0h] [rbp-88h]
  unsigned __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  __m128 *v44; // [rsp+18h] [rbp-70h]
  __m128 v45; // [rsp+20h] [rbp-68h] BYREF
  void *v46; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+40h] [rbp-48h]

  v43 = a1 + 48;
LABEL_2:
  v7 = *(unsigned int **)(a1 + 48);
  result = *v7;
  if ( (_DWORD)result == 9 )
    return sub_21318A0(a1 + 48, (__int64)a2, a3, a4, a5, a6);
  while ( (_DWORD)result )
  {
    v9 = *(unsigned int *)(a1 + 56);
    *(_BYTE *)(a1 + 177) = 0;
    v10 = v9;
    a3 = 40 * v9;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(a3 - 40) >> 3);
    if ( a3 > 0x28 )
    {
      do
      {
        v12 = _mm_loadu_si128((const __m128i *)v7 + 3);
        v13 = v7[8] <= 0x40;
        *v7 = v7[10];
        *(__m128i *)(v7 + 2) = v12;
        if ( !v13 )
        {
          v14 = *((void **)v7 + 3);
          if ( v14 )
            operator delete[](v14);
        }
        v15 = *((_QWORD *)v7 + 8);
        v7 += 10;
        *((_QWORD *)v7 - 2) = v15;
        LODWORD(v15) = v7[8];
        v7[8] = 0;
        *(v7 - 2) = v15;
        --v11;
      }
      while ( v11 );
      v10 = *(_DWORD *)(a1 + 56);
      v7 = *(unsigned int **)(a1 + 48);
    }
    v16 = (unsigned int)(v10 - 1);
    *(_DWORD *)(a1 + 56) = v16;
    v17 = &v7[10 * v16];
    if ( v17[8] > 0x40 )
    {
      v18 = *((void **)v17 + 3);
      if ( v18 )
        operator delete[](v18);
    }
    if ( *(_DWORD *)(a1 + 56) )
      goto LABEL_2;
    sub_2127580(&v45, v43, a3, a4, a5, a6);
    v19 = *(unsigned int *)(a1 + 56);
    v20 = *(_QWORD *)(a1 + 48);
    v21 = 5 * v19;
    a2 = (void **)(v19 + 1);
    v22 = 8 * v21;
    v23 = v20 + v22;
    if ( v20 == v20 + v22 )
    {
      if ( (unsigned __int64)a2 > *(unsigned int *)(a1 + 60) )
      {
        sub_2131530(v43, (__int64)a2);
        a3 = 5LL * *(unsigned int *)(a1 + 56);
        v23 = *(_QWORD *)(a1 + 48) + 40LL * *(unsigned int *)(a1 + 56);
      }
      v38 = _mm_loadu_si128((const __m128i *)&v45.m128_u16[4]);
      *(_DWORD *)v23 = v45.m128_i32[0];
      v39 = v47;
      *(__m128i *)(v23 + 8) = v38;
      *(_DWORD *)(v23 + 32) = v39;
      if ( v39 > 0x40 )
      {
        a2 = &v46;
        sub_2205510(v23 + 24);
      }
      else
      {
        *(_QWORD *)(v23 + 24) = v46;
      }
      ++*(_DWORD *)(a1 + 56);
    }
    else
    {
      v44 = &v45;
      v24 = &v45;
      if ( (unsigned __int64)a2 > *(unsigned int *)(a1 + 60) )
      {
        if ( (unsigned __int64)&v45 < v20 || v23 <= (unsigned __int64)&v45 )
        {
          v24 = &v45;
          sub_2131530(v43, (__int64)a2);
          v20 = *(_QWORD *)(a1 + 48);
          v22 = 40LL * *(unsigned int *)(a1 + 56);
          v23 = v20 + v22;
        }
        else
        {
          v40 = (char *)&v45 - v20;
          sub_2131530(v43, (__int64)a2);
          v20 = *(_QWORD *)(a1 + 48);
          v24 = (__m128 *)&v40[v20];
          v22 = 40LL * *(unsigned int *)(a1 + 56);
          v44 = v24;
          v23 = v20 + v22;
        }
      }
      v25 = v20 + v22 - 40;
      v26 = _mm_loadu_si128((const __m128i *)(v25 + 8));
      *(_DWORD *)v23 = *(_DWORD *)v25;
      v27 = *(_DWORD *)(v25 + 32);
      *(__m128i *)(v23 + 8) = v26;
      *(_DWORD *)(v23 + 32) = v27;
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(v25 + 24);
      v28 = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(v25 + 32) = 0;
      v29 = *(unsigned int *)(a1 + 56);
      v30 = v28 + 40 * v29;
      v31 = v30 - 40;
      a6 = v30 - 40 - v20;
      v32 = 0xCCCCCCCCCCCCCCCDLL * (a6 >> 3);
      if ( a6 > 0 )
      {
        do
        {
          v31 -= 40;
          v30 -= 40;
          v33 = _mm_loadu_si128((const __m128i *)(v31 + 8));
          v13 = *(_DWORD *)(v30 + 32) <= 0x40u;
          *(_DWORD *)v30 = *(_DWORD *)v31;
          *(__m128i *)(v30 + 8) = v33;
          if ( !v13 )
          {
            v34 = *(void **)(v30 + 24);
            if ( v34 )
            {
              v42 = v32;
              v41 = v31;
              operator delete[](v34);
              v32 = v42;
              v31 = v41;
            }
          }
          *(_QWORD *)(v30 + 24) = *(_QWORD *)(v31 + 24);
          *(_DWORD *)(v30 + 32) = *(_DWORD *)(v31 + 32);
          *(_DWORD *)(v31 + 32) = 0;
          --v32;
        }
        while ( v32 );
        LODWORD(v29) = *(_DWORD *)(a1 + 56);
        v28 = *(_QWORD *)(a1 + 48);
      }
      a4 = (__int64)v44;
      v35 = (unsigned int)(v29 + 1);
      *(_DWORD *)(a1 + 56) = v35;
      if ( v20 <= (unsigned __int64)v44 && v28 + 40 * v35 > (unsigned __int64)v44 )
        v24 = (__m128 *)((char *)v24 + 40);
      a2 = (void **)&v24[1].m128_u64[1];
      v13 = *(_DWORD *)(v20 + 32) <= 0x40u;
      v36 = _mm_loadu_si128((const __m128i *)&v24->m128_u16[4]);
      *(_DWORD *)v20 = v24->m128_i32[0];
      *(__m128i *)(v20 + 8) = v36;
      if ( v13 && (v37 = v24[2].m128_u32[0], v37 <= 0x40) )
      {
        a3 = v24[1].m128_u64[1];
        *(_DWORD *)(v20 + 32) = v37;
        *(_QWORD *)(v20 + 24) = a3;
      }
      else
      {
        sub_22056A0(v20 + 24, a2);
      }
    }
    if ( v47 <= 0x40 || !v46 )
      goto LABEL_2;
    operator delete[](v46);
    v7 = *(unsigned int **)(a1 + 48);
    result = *v7;
    if ( (_DWORD)result == 9 )
      return sub_21318A0(a1 + 48, (__int64)a2, a3, a4, a5, a6);
  }
  return result;
}
