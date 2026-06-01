__int64 __fastcall CoinSimpFactorization::GaussEliminate(
        CoinSimpFactorization *this,
        FactorPointers *a2,
        int *a3,
        int *a4)
{
  CoinSimpFactorization *v4; // r15
  int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rcx
  double *v12; // rdi
  double v13; // xmm0_8
  __int64 v14; // rdx
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // rbx
  CoinSimpFactorization *v22; // rax
  __int64 v23; // r15
  CoinSimpFactorization *v24; // rbp
  __int64 v25; // r12
  __int64 v26; // xmm0_8
  int v27; // eax
  _DWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 result; // rax
  bool v32; // sf
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // r9
  int *v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // esi
  int *v42; // rdi
  _DWORD *v43; // rdx
  int v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+8h] [rbp-80h]
  int v47; // [rsp+10h] [rbp-78h]
  int *v48; // [rsp+18h] [rbp-70h]
  unsigned __int64 v49; // [rsp+20h] [rbp-68h]
  double v51; // [rsp+30h] [rbp-58h]
  __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+40h] [rbp-48h]

  v4 = this;
  v5 = a3;
  v6 = *((_QWORD *)a2 + 4);
  v7 = *((_QWORD *)this + 16);
  v8 = *((_QWORD *)this + 13);
  v52 = *((_QWORD *)a2 + 5);
  v53 = *((_QWORD *)a2 + 6);
  CoinSimpFactorization::removeRowFromActSet(this, *a3, a2);
  CoinSimpFactorization::removeColumnFromActSet(this, *a4, a2);
  v9 = CoinSimpFactorization::findInRow(this, *v5, *a4);
  v10 = *((_QWORD *)this + 35);
  v11 = *v5;
  v12 = (double *)(v10 + 8LL * v9);
  v13 = 1.0 / *v12;
  *(double *)(*((_QWORD *)v4 + 50) + 8 * v11) = v13;
  v51 = v13;
  v14 = *((_QWORD *)v4 + 34);
  v47 = *(_DWORD *)(*((_QWORD *)v4 + 33) + 4 * v11);
  v15 = *(_DWORD *)(v14 + 4 * v11) + v47;
  v16 = *((_QWORD *)v4 + 36);
  v45 = v15;
  v17 = *(_DWORD *)(v16 + 4LL * v15 - 4);
  *v12 = *(double *)(v10 + 8LL * v15 - 8);
  *(_DWORD *)(v16 + 4LL * v9) = v17;
  --*(_DWORD *)(v14 + 4LL * *v5);
  v18 = CoinSimpFactorization::findInColumn(v4, *a4, *v5);
  v19 = *((_QWORD *)v4 + 42);
  v20 = v45;
  *(_DWORD *)(*((_QWORD *)v4 + 44) + 4LL * v18) = *(_DWORD *)(*((_QWORD *)v4 + 44)
                                                            + 4LL
                                                            * (*(_DWORD *)(*((_QWORD *)v4 + 41) + 4LL * *a4)
                                                             + (*(_DWORD *)(v19 + 4LL * *a4))--)
                                                            - 4);
  if ( v47 < v45 - 1 )
  {
    v48 = v5;
    v46 = v7;
    v21 = 4LL * v47;
    v49 = 4 * (v47 + (unsigned __int64)(unsigned int)(v20 - v47 - 2) + 1);
    v22 = v4;
    v23 = 8LL * v47;
    v24 = v22;
    do
    {
      v25 = *(int *)(*((_QWORD *)v24 + 36) + v21);
      v21 += 4;
      v26 = *(_QWORD *)(*((_QWORD *)v24 + 35) + v23);
      v23 += 8;
      *(_DWORD *)(v46 + 4 * v25) = 1;
      *(_QWORD *)(v8 + 8 * v25) = v26;
      CoinSimpFactorization::removeColumnFromActSet(v24, v25, a2);
      v27 = CoinSimpFactorization::findInColumn(v24, v25, *v48);
      v28 = (_DWORD *)(4 * v25 + *((_QWORD *)v24 + 42));
      *(_DWORD *)(*((_QWORD *)v24 + 44) + 4LL * v27) = *(_DWORD *)(*((_QWORD *)v24 + 44)
                                                                 + 4LL
                                                                 * (*(_DWORD *)(*((_QWORD *)v24 + 41) + 4 * v25)
                                                                  + (*v28)--)
                                                                 - 4);
    }
    while ( v49 != v21 );
    v7 = v46;
    v4 = v24;
    v5 = v48;
  }
  CoinSimpFactorization::pivoting(v4, *v5, *a4, v51, a2);
  v29 = *v5;
  v30 = *((_QWORD *)v4 + 34);
  result = *(unsigned int *)(*((_QWORD *)v4 + 33) + 4 * v29);
  v32 = -*(_DWORD *)(v30 + 4 * v29) < 0;
  v33 = result + *(_DWORD *)(v30 + 4 * v29);
  if ( v32 != __OFSUB__((_DWORD)result, v33) )
  {
    v34 = *((_QWORD *)v4 + 36);
    v35 = *((_QWORD *)v4 + 42);
    v36 = (int *)(v34 + 4LL * (int)result);
    v37 = v34 + 4 * ((int)result + (unsigned __int64)(unsigned int)(v33 - result - 1)) + 4;
    do
    {
      while ( 1 )
      {
        v39 = *v36;
        v40 = 4 * v39;
        *(_DWORD *)(v7 + 4 * v39) = 0;
        v41 = v39;
        *(_QWORD *)(v8 + 8 * v39) = 0;
        v42 = (int *)(v35 + 4 * v39);
        v43 = (_DWORD *)(v52 + 4 * v39);
        result = v53 + v40;
        if ( *v42 != 1 || *v43 != v41 || *(_DWORD *)result != v41 )
          break;
        if ( (int *)v37 == ++v36 )
          return result;
      }
      *v43 = -1;
      v38 = *(int *)(v6 + 4LL * *v42);
      *(_DWORD *)result = v38;
      if ( (_DWORD)v38 != -1 )
        *(_DWORD *)(v52 + 4 * v38) = v41;
      result = *v42;
      ++v36;
      *(_DWORD *)(v6 + 4 * result) = v41;
    }
    while ( (int *)v37 != v36 );
  }
  return result;
}

