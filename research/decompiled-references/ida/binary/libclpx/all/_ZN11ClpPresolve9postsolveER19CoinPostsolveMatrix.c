ClpPresolve *__fastcall ClpPresolve::postsolve(ClpPresolve *this, CoinPostsolveMatrix *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  double *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r11
  int v11; // r10d
  double v12; // xmm1_8
  int v13; // edi
  int v14; // edx
  __int64 v15; // rcx
  double v16; // xmm0_8
  ClpPresolve *result; // rax
  _QWORD *i; // rbp
  int v19; // r9d
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  int v22; // esi
  int v23; // r10d
  double *v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // edi
  __int128 v29; // xmm0
  double *v30; // rax
  int v31; // esi
  __int64 v32; // [rsp+0h] [rbp-58h]
  int v34; // [rsp+14h] [rbp-44h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 33);
  v7 = *((_QWORD *)a2 + 34);
  v34 = *(_DWORD *)a2;
  v32 = *((_QWORD *)a2 + 5);
  v35 = *((_QWORD *)a2 + 20);
  v8 = (double *)memset(*((void **)a2 + 22), 0, 8LL * *((int *)a2 + 1));
  if ( v34 > 0 )
  {
    v9 = 0;
    v10 = (unsigned int)(v34 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v7 + v9) )
        {
          v11 = *(_DWORD *)(v5 + 4 * v9);
          v12 = *(double *)(v35 + 8 * v9);
          v13 = *(_DWORD *)(v32 + 4 * v9);
          if ( v11 > 0 )
            break;
        }
        if ( v10 == ++v9 )
          goto LABEL_9;
      }
      v14 = 0;
      do
      {
        ++v14;
        v15 = *(int *)(v4 + 4LL * v13);
        v16 = *(double *)(v3 + 8LL * v13);
        v13 = *(_DWORD *)(v6 + 4LL * v13);
        v8[v15] = v16 * v12 + v8[v15];
      }
      while ( v11 != v14 );
      ++v9;
    }
    while ( v10 != v9 );
  }
LABEL_9:
  if ( *((double *)a2 + 19) < 0.0 )
  {
    v19 = *((_DWORD *)this + 16);
    if ( v19 > 0 )
    {
      v20 = *((_QWORD *)a2 + 9);
      v21 = (v20 >> 3) & 1;
      v22 = 0;
      if ( 2 - (unsigned int)((_DWORD)v21 == 0) > v19 - 1 )
        goto LABEL_20;
      if ( (_DWORD)v21 )
      {
        v22 = 1;
        *(double *)v20 = -*(double *)v20;
      }
      v23 = v19 - v21;
      v24 = (double *)(v20 + 8 * v21);
      v25 = 0;
      v26 = v19 - v21;
      v27 = 0;
      v28 = v26 >> 1;
      do
      {
        ++v25;
        *(double *)&v29 = -v24[v27];
        *((double *)&v29 + 1) = -v24[v27 + 1];
        *(_OWORD *)&v24[v27] = v29;
        v27 += 2;
      }
      while ( v28 > v25 );
      v22 += v23 & 0xFFFFFFFE;
      if ( (v23 & 0xFFFFFFFE) != v23 )
      {
LABEL_20:
        v30 = (double *)(v20 + 8LL * v22);
        v31 = v22 + 1;
        *v30 = -*v30;
        if ( v31 < v19 )
          *(double *)(v20 + 8LL * v31) = -*(double *)(v20 + 8LL * v31);
      }
    }
    *((_QWORD *)a2 + 19) = 0x3FF0000000000000LL;
  }
  result = this;
  for ( i = *((_QWORD **)this + 7); i; i = (_QWORD *)i[1] )
    result = (ClpPresolve *)(*(__int64 (__fastcall **)(_QWORD *, CoinPostsolveMatrix *))(*i + 8LL))(i, a2);
  return result;
}

