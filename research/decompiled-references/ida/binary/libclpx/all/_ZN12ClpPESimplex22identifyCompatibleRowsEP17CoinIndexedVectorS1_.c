char *__fastcall ClpPESimplex::identifyCompatibleRows(ClpPESimplex *this, CoinIndexedVector *a2, CoinIndexedVector *a3)
{
  int v5; // edx
  size_t v6; // rdx
  char *v7; // rdi
  char *result; // rax
  int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // rdi
  double *v12; // rbp
  __int64 v13; // r12
  __int64 (*v14)(void); // rax
  _QWORD *v15; // rax
  __int64 v16; // r14
  int v17; // r11d
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edi
  double v24; // xmm1_8
  __int64 v25; // rdi
  __int64 v26; // r9
  double *v27; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  double v31; // xmm0_8
  int v32; // esi
  int *v33; // r12
  double *v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  size_t v37; // rdx
  _BYTE *v38; // rcx
  int v39; // r15d
  int v40; // r14d
  int *v41; // rax
  double v42; // xmm1_8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  double *v46; // r9
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  double v50; // xmm0_8
  __int64 v51; // [rsp+0h] [rbp-68h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  __int64 v53; // [rsp+10h] [rbp-58h]
  __int64 v54; // [rsp+18h] [rbp-50h]
  CoinIndexedVector *v56; // [rsp+28h] [rbp-40h]

  v5 = *((_DWORD *)this + 6);
  if ( !v5 )
  {
    v6 = *((int *)this + 30);
    v7 = *((char **)this + 11);
    result = &v7[v6];
    v9 = *((_DWORD *)this + 30);
    if ( v7 != &v7[v6] )
      result = (char *)memset(v7, 0, v6);
    *((_DWORD *)this + 18) = v9;
    return result;
  }
  v10 = *((_QWORD *)this + 12);
  v11 = *(_QWORD *)(v10 + 192);
  if ( !v11 )
    BUG();
  v12 = *((double **)a3 + 1);
  v13 = *(_QWORD *)(v10 + 224);
  v14 = **(__int64 (***)(void))v11;
  if ( (char *)v14 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v15 = *(_QWORD **)(v11 + 88);
  }
  else
  {
    v15 = (_QWORD *)v14();
    v10 = *((_QWORD *)this + 12);
    v5 = *((_DWORD *)this + 6);
  }
  v54 = v15[5];
  v51 = v15[6];
  v52 = v15[7];
  v53 = v15[4];
  if ( v5 > 0 )
  {
    v56 = a3;
    v16 = *((_QWORD *)this + 4);
    v17 = *((_DWORD *)this + 31);
    v18 = 0;
    v19 = (unsigned int)(v5 - 1) + 1LL;
    while ( 1 )
    {
      v20 = *(int *)(v16 + 4 * v18);
      if ( v17 <= (int)v20 )
        break;
      v21 = *(int *)(v51 + 4 * v20);
      v22 = *(_DWORD *)(v52 + 4 * v20);
      v23 = v21 + v22;
      if ( !v13 )
      {
        if ( (int)v21 < v23 )
        {
          v44 = (unsigned int)(v22 - 1) + 1LL;
          v45 = v54 + 4 * v21;
          v46 = (double *)(*((_QWORD *)this + 16) + 8 * v18);
          v47 = v53 + 8 * v21;
          v48 = 0;
          do
          {
            v49 = *(int *)(v45 + 4 * v48);
            v50 = *v46 * *(double *)(v47 + 8 * v48++);
            v12[v49] = v50 + v12[v49];
          }
          while ( v44 != v48 );
        }
        goto LABEL_11;
      }
      v24 = *(double *)(*(_QWORD *)(v10 + 232) + 8 * v20);
      if ( (int)v21 >= v23 )
      {
LABEL_11:
        if ( v19 == ++v18 )
          goto LABEL_18;
      }
      else
      {
        v25 = (unsigned int)(v22 - 1) + 1LL;
        v26 = v54 + 4 * v21;
        v27 = (double *)(*((_QWORD *)this + 16) + 8 * v18);
        v28 = v53 + 8 * v21;
        v29 = 0;
        do
        {
          v30 = *(int *)(v26 + 4 * v29);
          v31 = *v27 * *(double *)(v28 + 8 * v29++);
          v12[v30] = v31 * v24 * *(double *)(v13 + 8 * v30) + v12[v30];
        }
        while ( v25 != v29 );
        if ( v19 == ++v18 )
        {
LABEL_18:
          a3 = v56;
          goto LABEL_19;
        }
      }
    }
    v12[(int)v20 - v17] = v12[(int)v20 - v17] - *(double *)(*((_QWORD *)this + 16) + 8 * v18);
    goto LABEL_11;
  }
LABEL_19:
  v32 = *((_DWORD *)this + 30);
  v33 = *(int **)a3;
  if ( v32 <= 0 )
  {
    LODWORD(v36) = 0;
  }
  else
  {
    v34 = v12;
    v35 = 0;
    v36 = 0;
    while ( *v34 == 0.0 )
    {
LABEL_24:
      ++v35;
      ++v34;
      if ( v35 >= v32 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v33[v36] = v35;
      v32 = *((_DWORD *)this + 30);
      ++v35;
      ++v34;
      if ( v35 >= v32 )
        break;
      v36 = (int)v36 + 1;
      if ( *v34 == 0.0 )
        goto LABEL_24;
    }
    LODWORD(v36) = v36 + 1;
  }
LABEL_25:
  *((_DWORD *)a3 + 4) = v36;
  *((_BYTE *)a3 + 28) = 0;
  ClpFactorization::updateColumn(*(ClpFactorization **)(v10 + 1264), a2, a3, 0);
  v37 = *((int *)this + 30);
  v38 = *((_BYTE **)this + 11);
  v39 = *((_DWORD *)a3 + 4);
  v40 = *((_DWORD *)this + 30);
  if ( v38 != &v38[v37] )
    v38 = memset(*((void **)this + 11), 1, v37);
  *((_DWORD *)this + 18) = v40;
  if ( v39 > 0 )
  {
    v41 = v33;
    v42 = 100.0 * *((double *)this + 14);
    do
    {
      v43 = *v41;
      if ( fabs(v12[v43]) >= v42 )
      {
        v38[v43] = 0;
        --*((_DWORD *)this + 18);
      }
      ++v41;
    }
    while ( v41 != &v33[v39 - 1 + 1] );
  }
  return (char *)CoinIndexedVector::clear(a3);
}

