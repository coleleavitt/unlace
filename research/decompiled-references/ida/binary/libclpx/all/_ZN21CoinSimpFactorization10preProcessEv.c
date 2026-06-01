__int64 __fastcall CoinSimpFactorization::preProcess(CoinSimpFactorization *this)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r11
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r10
  _DWORD *v30; // r13
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // xmm0_8
  int v35; // ecx
  _DWORD *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  void *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 result; // rax
  __int64 v45; // rsi
  __int64 v46; // rcx
  int v47; // [rsp+Ch] [rbp-5Ch]
  __int64 v48; // [rsp+10h] [rbp-58h]
  __int64 v49; // [rsp+18h] [rbp-50h]
  __int64 v50; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+28h] [rbp-40h]

  v50 = *((_QWORD *)this + 10);
  v51 = 8LL * *((_DWORD *)this + 9) * *((_DWORD *)this + 9);
  v49 = *((_QWORD *)this + 9);
  CoinSimpFactorization::initialSomeNumbers(this);
  if ( *((int *)this + 10) > 0 )
  {
    v2 = *((_QWORD *)this + 41);
    v3 = *((_QWORD *)this + 42);
    v4 = 1;
    v5 = 0;
    do
    {
      *(_DWORD *)(v2 + 4 * v4 - 4) = v5;
      v6 = v4;
      *(_DWORD *)(v3 + 4 * v4 - 4) = *(_DWORD *)(v49 + 4 * v4) - *(_DWORD *)(v49 + 4 * v4 - 4);
      v7 = *((int *)this + 9);
      ++v4;
      v5 += v7;
    }
    while ( *((_DWORD *)this + 10) > v6 );
    v8 = *((_QWORD *)this + 40);
    if ( (int)v7 > 0 )
      goto LABEL_5;
LABEL_24:
    v13 = 0;
    goto LABEL_7;
  }
  v7 = *((int *)this + 9);
  v8 = *((_QWORD *)this + 40);
  if ( (int)v7 <= 0 )
    goto LABEL_24;
LABEL_5:
  v9 = *((_QWORD *)this + 39);
  v10 = *((_QWORD *)this + 33);
  v11 = 1;
  v12 = *((_QWORD *)this + 34);
  v13 = 0;
  do
  {
    v14 = v11;
    *(_DWORD *)(v9 + 4 * v11 - 4) = v11 - 2;
    *(_DWORD *)(v8 + 4 * v11 - 4) = v11;
    *(_DWORD *)(v10 + 4 * v11 - 4) = v13;
    v13 += *((_DWORD *)this + 9);
    *(_DWORD *)(v12 + 4 * v11 - 4) = 0;
    v7 = *((int *)this + 9);
    ++v11;
  }
  while ( (int)v7 > v14 );
LABEL_7:
  *((_DWORD *)this + 75) = v13;
  *(_DWORD *)(v8 + 4 * v7 - 4) = -1;
  v15 = 0;
  v16 = *((_DWORD *)this + 9);
  v17 = 0;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 69) = 0xBFF0000000000000LL;
  *((_DWORD *)this + 77) = v16 - 1;
  v48 = *((_QWORD *)this + 46);
  v18 = *((int *)this + 10);
  if ( (int)v18 > 0 )
  {
    do
    {
      v19 = *((_QWORD *)this + 49);
      *(_DWORD *)(*((_QWORD *)this + 45) + v17) = v15 - 1;
      v20 = (_DWORD *)(v17 + v19);
      *(_DWORD *)(v48 + v17) = v15 + 1;
      v47 = v15 + 1;
      v21 = *(int *)(v49 + v17);
      v22 = *(_DWORD *)(v49 + v17 + 4);
      *v20 = (_DWORD)v21 + 1 == v22 && *(double *)(*((_QWORD *)this + 10) + 8LL * (int)v21) == -1.0;
      if ( (int)v21 < v22 )
      {
        v23 = *((_QWORD *)this + 44);
        v24 = *((_QWORD *)this + 33);
        v25 = *((_QWORD *)this + 34);
        v26 = *((_QWORD *)this + 36);
        v27 = (unsigned int)(v22 - 1 - v21) + 1LL;
        v28 = v50 + v51 + 4 * v21;
        v29 = *((_QWORD *)this + 35);
        v30 = (_DWORD *)(v17 + *((_QWORD *)this + 41));
        v31 = *((_QWORD *)this + 10) + 8 * v21;
        v32 = 0;
        do
        {
          v33 = *(int *)(v28 + 4 * v32);
          v34 = *(_QWORD *)(v31 + 8 * v32);
          v35 = v32++ + *v30;
          *(_DWORD *)(v23 + 4LL * v35) = v33;
          v36 = (_DWORD *)(v25 + 4 * v33);
          v37 = *v36 + *(_DWORD *)(v24 + 4 * v33);
          *(_DWORD *)(v26 + 4 * v37) = v15;
          *(_QWORD *)(v29 + 8 * v37) = v34;
          ++*v36;
        }
        while ( v27 != v32 );
      }
      v18 = *((int *)this + 10);
      v17 += 4;
      ++v15;
    }
    while ( (int)v18 > v47 );
  }
  *(_DWORD *)(v48 + 4 * v18 - 4) = -1;
  v38 = *((_DWORD *)this + 10);
  v39 = *((int *)this + 9);
  v40 = *((void **)this + 23);
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 95) = v38 - 1;
  memset(v40, -1, 4 * v39);
  memset(*((void **)this + 24), 0, 4LL * *((int *)this + 9));
  memset(*((void **)this + 28), -1, 4LL * *((int *)this + 9));
  memset(*((void **)this + 29), 0, 4LL * *((int *)this + 9));
  if ( *((int *)this + 9) > 0 )
  {
    v41 = *((_QWORD *)this + 53);
    v42 = *((_QWORD *)this + 54);
    v43 = 0;
    do
    {
      *(_DWORD *)(v41 + 4 * v43) = v43;
      *(_DWORD *)(v42 + 4 * v43) = v43;
      ++v43;
    }
    while ( *((_DWORD *)this + 9) > (int)v43 );
  }
  result = *((unsigned int *)this + 10);
  if ( (int)result > 0 )
  {
    v45 = *((_QWORD *)this + 51);
    v46 = *((_QWORD *)this + 52);
    result = 0;
    do
    {
      *(_DWORD *)(v45 + 4 * result) = result;
      *(_DWORD *)(v46 + 4 * result) = result;
      ++result;
    }
    while ( *((_DWORD *)this + 10) > (int)result );
  }
  *((_BYTE *)this + 528) = 1;
  return result;
}

