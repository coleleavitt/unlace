__int64 __fastcall CoinFactorization::updateColumnUDensish(CoinFactorization *this, double *a2, int *a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r8d
  double v9; // xmm4_8
  __int64 v10; // rcx
  __int64 result; // rax
  double v12; // xmm0_8
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r10
  double v23; // xmm3_8
  __int64 v24; // r8
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r9
  double v29; // xmm0_8
  __int64 v30; // [rsp+0h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-38h]

  v3 = 0;
  v4 = *((_QWORD *)this + 81);
  v5 = *((_QWORD *)this + 78);
  v6 = *((_QWORD *)this + 75);
  v7 = *((_QWORD *)this + 29);
  v8 = *((_DWORD *)this + 144);
  v9 = *((double *)this + 1);
  if ( *((int *)this + 164) <= -2 )
    v4 = 0;
  if ( *((int *)this + 158) <= -2 )
    v5 = 0;
  if ( *((int *)this + 152) <= -2 )
    v6 = 0;
  v31 = v6;
  if ( *((int *)this + 60) <= -2 )
    v7 = 0;
  if ( *((int *)this + 140) > -2 )
    v3 = *((_QWORD *)this + 69);
  v30 = v3;
  LODWORD(v10) = *((_DWORD *)this + 145) - 1;
  if ( (int)v10 < v8 )
  {
    result = 0;
  }
  else
  {
    v10 = (int)v10;
    result = 0;
    do
    {
      while ( 1 )
      {
        v12 = a2[v10];
        if ( v12 != 0.0 )
        {
          a2[v10] = 0.0;
          if ( fabs(v12) > v9 )
            break;
        }
        if ( (int)--v10 < v8 )
          goto LABEL_21;
      }
      v13 = *(int *)(v4 + 4 * v10);
      v14 = 8 * v13;
      v15 = 4 * v13;
      v16 = *(_DWORD *)(v7 + 4 * v10) - 1;
      if ( v16 >= 0 )
      {
        v17 = v16;
        v18 = v16 - 1LL;
        v19 = v18 - (unsigned int)v16;
        v20 = v5 + v15;
        v21 = v14 + v31;
        while ( 1 )
        {
          v22 = *(int *)(v20 + 4 * v17);
          v23 = *(double *)(v21 + 8 * v17);
          v17 = v18;
          a2[v22] = a2[v22] - v23 * v12;
          if ( v19 == v18 )
            break;
          --v18;
        }
      }
      v24 = (int)result;
      result = (unsigned int)(result + 1);
      a2[v10] = v12 * *(double *)(v30 + 8 * v10);
      a3[v24] = v10;
      v8 = *((_DWORD *)this + 144);
      --v10;
    }
    while ( (int)v10 >= v8 );
  }
LABEL_21:
  v25 = v8 - 1;
  if ( v25 >= 0 )
  {
    v26 = v25;
    v27 = v25 - 1LL;
    v28 = v27 - (unsigned int)v25;
    while ( 1 )
    {
      v29 = a2[v26];
      if ( v29 == 0.0 )
        goto LABEL_24;
      a2[v26] = -a2[v26];
      a3[(int)result] = v26;
      if ( fabs(v29) > v9 )
        break;
      a2[v26] = 0.0;
      v26 = v27;
      if ( v28 == v27 )
        return result;
LABEL_25:
      --v27;
    }
    result = (unsigned int)(result + 1);
LABEL_24:
    v26 = v27;
    if ( v28 == v27 )
      return result;
    goto LABEL_25;
  }
  return result;
}

