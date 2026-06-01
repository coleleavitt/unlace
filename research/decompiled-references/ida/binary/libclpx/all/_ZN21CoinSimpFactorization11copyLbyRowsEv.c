__int64 __fastcall CoinSimpFactorization::copyLbyRows(void **this)
{
  __int64 v2; // rax
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // r8
  int *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // esi
  __int64 result; // rax
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // rsi
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // xmm0_8
  _DWORD *v36; // rdx
  __int64 v37; // rcx

  memset(*(this + 24), 0, 4LL * *((int *)this + 9));
  v2 = *((int *)this + 9);
  if ( (int)v2 <= 0 )
  {
    v6 = *(this + 24);
    *((_DWORD *)this + 54) = 0;
  }
  else
  {
    v3 = (__int64)*(this + 28);
    v4 = (__int64)*(this + 29);
    v5 = 1;
    v6 = *(this + 24);
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(v3 + 4 * v5 - 4);
      v9 = *(_DWORD *)(v4 + 4 * v5 - 4);
      v10 = v9 + v8;
      if ( v8 < v9 + v8 )
      {
        v11 = (__int64)*(this + 31);
        v12 = (int *)(v11 + 4LL * v8);
        v13 = v11 + 4 * (v8 + (unsigned __int64)(unsigned int)(v10 - v8 - 1)) + 4;
        do
        {
          v14 = *v12++;
          ++v6[v14];
        }
        while ( (int *)v13 != v12 );
        v2 = *((int *)this + 9);
        v9 = *(_DWORD *)(v4 + 4 * v5 - 4);
      }
      v15 = v5;
      v7 += v9;
      ++v5;
    }
    while ( v15 < (int)v2 );
    *((_DWORD *)this + 54) = v7;
    if ( (int)v2 > 0 )
    {
      v16 = (__int64)*(this + 23);
      v17 = 1;
      v18 = 0;
      do
      {
        *(_DWORD *)(v16 + 4 * v17 - 4) = v18;
        v2 = *((int *)this + 9);
        v19 = v17;
        v18 += v6[v17++ - 1];
      }
      while ( (int)v2 > v19 );
    }
  }
  result = (__int64)memset(v6, 0, 4 * v2);
  v21 = *((_DWORD *)this + 9);
  if ( v21 > 0 )
  {
    v22 = (__int64)*(this + 28);
    v23 = (__int64)*(this + 29);
    v24 = 0;
    do
    {
      v25 = *(int *)(v22 + 4 * v24);
      if ( (int)v25 < (int)v25 + *(_DWORD *)(v23 + 4 * v24) )
      {
        v26 = (__int64)*(this + 23);
        v27 = (__int64)*(this + 24);
        v28 = (__int64)*(this + 25);
        v29 = (__int64)*(this + 26);
        v30 = (unsigned int)(*(_DWORD *)(v23 + 4 * v24) - 1) + 1LL;
        v31 = (__int64)*(this + 31) + 4 * v25;
        v32 = (__int64)*(this + 30) + 8 * v25;
        v33 = 0;
        do
        {
          v34 = *(int *)(v31 + 4 * v33);
          v35 = *(_QWORD *)(v32 + 8 * v33++);
          v36 = (_DWORD *)(v27 + 4 * v34);
          v37 = *v36 + *(_DWORD *)(v26 + 4 * v34);
          *(_QWORD *)(v28 + 8 * v37) = v35;
          *(_DWORD *)(v29 + 4 * v37) = v24;
          ++*v36;
        }
        while ( v30 != v33 );
        v21 = *((_DWORD *)this + 9);
      }
      result = (unsigned int)++v24;
    }
    while ( (int)v24 < v21 );
  }
  return result;
}

