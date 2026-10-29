__int64 __fastcall CoinSimpFactorization::updateCurrentRow(
        CoinSimpFactorization *this,
        int a2,
        int a3,
        double a4,
        FactorPointers *a5,
        int *a6)
{
  int v6; // r15d
  __int64 v8; // r14
  __int64 v9; // rsi
  int *v10; // r9
  int v11; // ebp
  __int64 v12; // r15
  int v13; // r14d
  __int64 v14; // r10
  int *v15; // rdi
  __int64 v16; // r13
  int v17; // esi
  _DWORD *v18; // rax
  __int64 v19; // r11
  double *v20; // rdx
  double v21; // xmm1_8
  double v22; // xmm1_8
  int v23; // r10d
  __int64 v24; // xmm1_8
  int v25; // eax
  _DWORD *v26; // r12
  __int64 v27; // rax
  int v28; // ecx
  int *v29; // rax
  __int64 v30; // rbp
  __int64 v31; // r10
  double v32; // xmm0_8
  int *v33; // rdx
  __int64 v34; // r11
  double v35; // xmm2_8
  double v36; // xmm1_8
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rdi
  _DWORD *v40; // rcx
  int v41; // r8d
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // r10
  __int64 v46; // r11
  _DWORD *v47; // r8
  __int64 v48; // rax
  __int64 v50; // [rsp+0h] [rbp-A8h]
  __int64 v51; // [rsp+8h] [rbp-A0h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  __int64 v54; // [rsp+20h] [rbp-88h]
  __int64 v55; // [rsp+28h] [rbp-80h]
  __int64 v56; // [rsp+30h] [rbp-78h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  int *v61; // [rsp+68h] [rbp-40h]

  v6 = a3;
  v8 = *((_QWORD *)this + 16);
  v56 = *((_QWORD *)a5 + 3);
  v57 = *(_QWORD *)a5;
  v53 = *((_QWORD *)this + 34);
  v50 = *((_QWORD *)this + 13);
  v52 = *((_QWORD *)a5 + 1);
  v51 = a3;
  v55 = *((_QWORD *)a5 + 2);
  v9 = *((_QWORD *)this + 33);
  v10 = (int *)(4LL * a3 + v53);
  v54 = 4LL * a3;
  v11 = *(_DWORD *)(v9 + v54);
  if ( v11 < v11 + *v10 )
  {
    v12 = *((_QWORD *)this + 16);
    v13 = v11 + *v10;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *((_QWORD *)this + 36);
        v15 = (int *)(v14 + 4LL * v11);
        v16 = *v15;
        v17 = *v15;
        v18 = (_DWORD *)(v12 + 4 * v16);
        if ( *v18 )
          break;
LABEL_5:
        if ( v13 <= ++v11 )
          goto LABEL_9;
      }
      v19 = *((_QWORD *)this + 35);
      v20 = (double *)(v19 + 8LL * v11);
      v21 = *v20 - *(double *)(v50 + 8 * v16) * a4;
      *v20 = v21;
      v22 = fabs(v21);
      *v18 = 0;
      --*a6;
      if ( *((double *)this + 2) <= v22 )
      {
        if ( v22 > *((double *)this + 67) )
          *((double *)this + 67) = v22;
        goto LABEL_5;
      }
      v61 = a6;
      v23 = *(_DWORD *)(v14 + 4LL * v13 - 4);
      v24 = *(_QWORD *)(v19 + 8LL * v13-- - 8);
      *v15 = v23;
      *(_QWORD *)v20 = v24;
      --*v10;
      v25 = CoinSimpFactorization::findInColumn(this, v17, a3);
      v26 = (_DWORD *)(*((_QWORD *)this + 42) + 4 * v16);
      a6 = v61;
      *(_DWORD *)(*((_QWORD *)this + 44) + 4LL * v25) = *(_DWORD *)(*((_QWORD *)this + 44)
                                                                  + 4LL
                                                                  * (*(_DWORD *)(*((_QWORD *)this + 41) + 4 * v16) + *v26)
                                                                  - 4);
      v27 = *((_QWORD *)this + 34);
      --*v26;
      v10 = (int *)(v27 + v54);
      v53 = v27;
      if ( v13 <= v11 )
      {
LABEL_9:
        v8 = v12;
        v9 = *((_QWORD *)this + 33);
        v6 = a3;
        break;
      }
    }
  }
  v28 = *(_DWORD *)(v9 + 4LL * a2);
  v29 = *((int **)a5 + 7);
  if ( v28 < v28 + *(_DWORD *)(v53 + 4LL * a2) )
  {
    v30 = *((_QWORD *)this + 36);
    v31 = 0;
    v32 = -a4;
    v33 = (int *)(v30 + 4LL * v28);
    v34 = v30 + 4 * ((unsigned int)(*(_DWORD *)(v53 + 4LL * a2) - 1) + (__int64)v28) + 4;
    do
    {
      while ( 1 )
      {
        v39 = *v33;
        v40 = (_DWORD *)(v8 + 4 * v39);
        v41 = *v33;
        if ( *v40 )
          break;
        ++v33;
        *v40 = 1;
        if ( (int *)v34 == v33 )
          goto LABEL_18;
      }
      v35 = *(double *)(v50 + 8 * v39) * v32;
      v36 = fabs(v35);
      if ( v36 >= *((double *)this + 2) )
      {
        v37 = *(_DWORD *)(v9 + v54) + *v10;
        *(double *)(*((_QWORD *)this + 35) + 8 * v37) = v35;
        *(_DWORD *)(v30 + 4 * v37) = v41;
        ++*v10;
        v38 = v31 + 1;
        v29[v31] = v41;
        v31 = (int)v31 + 1;
        if ( v36 > *((double *)this + 67) )
        {
          *((double *)this + 67) = v36;
          v31 = v38;
        }
      }
      ++v33;
    }
    while ( (int *)v34 != v33 );
LABEL_18:
    if ( (_DWORD)v31 )
    {
      v42 = *((_QWORD *)this + 41);
      v43 = *((_QWORD *)this + 42);
      v44 = *((_QWORD *)this + 44);
      v45 = (__int64)&v29[(unsigned int)(v31 - 1) + 1];
      do
      {
        v46 = *v29++;
        v47 = (_DWORD *)(v43 + 4 * v46);
        *(_DWORD *)(v44 + 4LL * (*(_DWORD *)(v42 + 4 * v46) + (*v47)++)) = v6;
      }
      while ( (int *)v45 != v29 );
    }
  }
  *(_DWORD *)(v55 + 4 * v51) = -1;
  v48 = *(int *)(v52 + 4LL * *v10);
  *(_DWORD *)(v56 + 4 * v51) = v48;
  if ( (_DWORD)v48 != -1 )
    *(_DWORD *)(v55 + 4 * v48) = v6;
  *(_DWORD *)(v52 + 4LL * *v10) = v6;
  *(_QWORD *)(v57 + 8 * v51) = 0xBFF0000000000000LL;
  return v57;
}

