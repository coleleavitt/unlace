__int64 __fastcall sub_2131610(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm1
  int v15; // ecx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __m128i v21; // xmm0
  bool v22; // cc
  void *v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm2
  unsigned int v26; // eax
  __m128i v28; // xmm3
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r15

  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = 5 * v6;
  v10 = v6 + 1;
  v11 = 8 * v9;
  v12 = v7 + v11;
  if ( a2 == v7 + v11 )
  {
    if ( v10 > v8 )
    {
      if ( v7 > a3 || v12 <= a3 )
      {
        sub_2131530(a1, v10);
        v12 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
      }
      else
      {
        v34 = a3 - v7;
        sub_2131530(a1, v10);
        a3 = *(_QWORD *)a1 + v34;
        v12 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
      }
    }
    v28 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_DWORD *)v12 = *(_DWORD *)a3;
    v29 = *(_DWORD *)(a3 + 32);
    *(__m128i *)(v12 + 8) = v28;
    *(_DWORD *)(v12 + 32) = v29;
    if ( v29 > 0x40 )
      sub_2205510(v12 + 24);
    else
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(a3 + 24);
    v30 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v30;
    return *(_QWORD *)a1 + 40 * v30 - 40;
  }
  else
  {
    if ( v10 > v8 )
    {
      v32 = a2 - v7;
      if ( v7 > a3 || v12 <= a3 )
      {
        sub_2131530(a1, v10);
        v7 = *(_QWORD *)a1;
        a2 = *(_QWORD *)a1 + v32;
        v11 = 40LL * *(unsigned int *)(a1 + 8);
        v12 = *(_QWORD *)a1 + v11;
      }
      else
      {
        v33 = a3 - v7;
        sub_2131530(a1, v10);
        v7 = *(_QWORD *)a1;
        a3 = *(_QWORD *)a1 + v33;
        a2 = *(_QWORD *)a1 + v32;
        v11 = 40LL * *(unsigned int *)(a1 + 8);
        v12 = *(_QWORD *)a1 + v11;
      }
    }
    v13 = v7 + v11 - 40;
    v14 = _mm_loadu_si128((const __m128i *)(v13 + 8));
    *(_DWORD *)v12 = *(_DWORD *)v13;
    v15 = *(_DWORD *)(v13 + 32);
    *(__m128i *)(v12 + 8) = v14;
    *(_DWORD *)(v12 + 32) = v15;
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(v13 + 24);
    v16 = *(_QWORD *)a1;
    *(_DWORD *)(v13 + 32) = 0;
    v17 = *(unsigned int *)(a1 + 8);
    v18 = v16 + 40 * v17 - 40;
    v19 = v16 + 40 * v17;
    v20 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v18 - a2) >> 3);
    if ( (__int64)(v18 - a2) > 0 )
    {
      do
      {
        v18 -= 40;
        v19 -= 40LL;
        v21 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        v22 = *(_DWORD *)(v19 + 32) <= 0x40u;
        *(_DWORD *)v19 = *(_DWORD *)v18;
        *(__m128i *)(v19 + 8) = v21;
        if ( !v22 )
        {
          v23 = *(void **)(v19 + 24);
          if ( v23 )
            operator delete[](v23);
        }
        *(_QWORD *)(v19 + 24) = *(_QWORD *)(v18 + 24);
        *(_DWORD *)(v19 + 32) = *(_DWORD *)(v18 + 32);
        *(_DWORD *)(v18 + 32) = 0;
        --v20;
      }
      while ( v20 );
      LODWORD(v17) = *(_DWORD *)(a1 + 8);
      v16 = *(_QWORD *)a1;
    }
    v24 = (unsigned int)(v17 + 1);
    *(_DWORD *)(a1 + 8) = v24;
    if ( a2 <= a3 && a3 < v16 + 40 * v24 )
      a3 += 40LL;
    v22 = *(_DWORD *)(a2 + 32) <= 0x40u;
    v25 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_DWORD *)a2 = *(_DWORD *)a3;
    *(__m128i *)(a2 + 8) = v25;
    if ( v22 && (v26 = *(_DWORD *)(a3 + 32), v26 <= 0x40) )
    {
      v31 = *(_QWORD *)(a3 + 24);
      *(_DWORD *)(a2 + 32) = v26;
      *(_QWORD *)(a2 + 24) = v31;
      return a2;
    }
    else
    {
      sub_22056A0(a2 + 24, a3 + 24);
      return a2;
    }
  }
}
