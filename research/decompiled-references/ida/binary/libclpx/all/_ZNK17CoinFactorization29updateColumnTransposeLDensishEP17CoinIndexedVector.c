__int64 __fastcall CoinFactorization::updateColumnTransposeLDensish(CoinFactorization *this, CoinIndexedVector *a2)
{
  double *v2; // r8
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // r13d
  double v9; // xmm3_8
  int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // edx
  int v17; // r12d
  double v18; // xmm1_8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  double v24; // xmm0_8
  __int64 v25; // rax
  double v26; // xmm4_8
  __int64 v27; // rdx
  bool v28; // cl
  __int64 v29; // r9
  double v30; // xmm0_8
  double v31; // xmm1_8
  __int64 v32; // rcx
  double *v33; // rdx
  double *v34; // rdx
  double *v35; // rdx
  double *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-40h]
  CoinIndexedVector *v42; // [rsp+8h] [rbp-38h]

  v2 = *((double **)a2 + 1);
  result = (unsigned int)(*((_DWORD *)this + 8) - 1);
  if ( (int)result < 0 )
    goto LABEL_6;
  if ( v2[(int)result] == 0.0 )
  {
    v4 = (__int64)&v2[(int)result - 1];
    while ( 1 )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result == -1 )
        break;
      v4 -= 8;
      if ( *(double *)(v4 + 8) != 0.0 )
        goto LABEL_7;
    }
LABEL_6:
    *((_DWORD *)a2 + 4) = 0;
    *((_BYTE *)a2 + 28) = 0;
    return result;
  }
LABEL_7:
  v5 = *((_QWORD *)this + 95);
  v6 = *((_QWORD *)this + 92);
  v7 = *((_QWORD *)this + 89);
  v8 = *((_DWORD *)this + 175);
  v9 = *((double *)this + 1);
  if ( *((int *)this + 192) <= -2 )
    v5 = 0;
  v41 = *(_QWORD *)a2;
  if ( *((int *)this + 186) <= -2 )
    v6 = 0;
  if ( *((int *)this + 180) <= -2 )
    v7 = 0;
  v10 = v8 + *((_DWORD *)this + 174);
  if ( v10 <= (int)result )
    LODWORD(result) = v10 - 1;
  if ( (int)result >= v8 )
  {
    v11 = (int)result;
    v42 = a2;
    v12 = (int)result - 1LL;
    v13 = 0;
    v14 = v12 - (unsigned int)(result - v8);
    while ( 1 )
    {
      v15 = *(int *)(v5 + 4 * v11);
      v16 = *(_DWORD *)(v5 + 4 * v11 + 4);
      v17 = v11;
      v18 = v2[v11];
      if ( (int)v15 < v16 )
      {
        v19 = v6 + 4 * v15;
        v20 = v7 + 8 * v15;
        v21 = (unsigned int)(v16 - 1 - v15);
        v22 = 0;
        v23 = v21 + 1;
        do
        {
          v24 = v2[*(int *)(v19 + 4 * v22)] * *(double *)(v20 + 8 * v22);
          ++v22;
          v18 = v18 - v24;
        }
        while ( v23 != v22 );
      }
      if ( fabs(v18) <= v9 )
      {
        v2[v11] = 0.0;
        v11 = v12;
        if ( v14 == v12 )
        {
LABEL_24:
          a2 = v42;
          goto LABEL_25;
        }
      }
      else
      {
        v25 = v13++;
        v2[v11] = v18;
        v11 = v12;
        *(_DWORD *)(v41 + 4 * v25) = v17;
        if ( v14 == v12 )
          goto LABEL_24;
      }
      --v12;
    }
  }
  v8 = result + 1;
  v13 = 0;
LABEL_25:
  result = (unsigned int)(v8 - 1);
  if ( v8 > 5 )
  {
    result = (int)result;
    v26 = v2[(int)result];
    v27 = (int)result - 1LL;
    v28 = fabs(v26) > v9;
    v29 = v27 - (unsigned int)(v8 - 2);
    while ( 1 )
    {
      v30 = v2[result - 1];
      v31 = fabs(v30);
      if ( v28 )
      {
        v32 = v13++;
        v2[result] = v26;
        *(_DWORD *)(v41 + 4 * v32) = result;
        result = v27;
        v26 = v30;
        v28 = v31 > v9;
        if ( v29 == v27 )
        {
LABEL_31:
          if ( v31 > v9 )
          {
            result = v13;
            *v2 = v30;
            *(_DWORD *)(v41 + 4LL * v13) = 0;
            *((_DWORD *)a2 + 4) = v13 + 1;
            return result;
          }
LABEL_51:
          *v2 = 0.0;
          goto LABEL_49;
        }
      }
      else
      {
        v2[result] = 0.0;
        v28 = v31 > v9;
        result = v27;
        v26 = v30;
        if ( v29 == v27 )
          goto LABEL_31;
      }
      --v27;
    }
  }
  if ( (int)result >= 0 )
  {
    v33 = &v2[(int)result];
    if ( fabs(*v33) > v9 )
    {
      v37 = v13++;
      *(_DWORD *)(v41 + 4 * v37) = result;
    }
    else
    {
      *v33 = 0.0;
    }
    result = (unsigned int)(v8 - 2);
    if ( v8 != 1 )
    {
      v34 = &v2[(int)result];
      if ( fabs(*v34) > v9 )
      {
        v38 = v13++;
        *(_DWORD *)(v41 + 4 * v38) = result;
      }
      else
      {
        *v34 = 0.0;
      }
      result = (unsigned int)(v8 - 3);
      if ( v8 != 2 )
      {
        v35 = &v2[(int)result];
        if ( fabs(*v35) > v9 )
        {
          v39 = v13++;
          *(_DWORD *)(v41 + 4 * v39) = result;
        }
        else
        {
          *v35 = 0.0;
        }
        result = (unsigned int)(v8 - 4);
        if ( v8 != 3 )
        {
          v36 = &v2[(int)result];
          if ( fabs(*v36) > v9 )
          {
            v40 = v13++;
            *(_DWORD *)(v41 + 4 * v40) = result;
          }
          else
          {
            *v36 = 0.0;
          }
          if ( v8 != 4 )
          {
            if ( COERCE_DOUBLE(*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFFLL) <= v9 )
              goto LABEL_51;
            result = v13++;
            *(_DWORD *)(v41 + 4 * result) = 0;
          }
        }
      }
    }
  }
LABEL_49:
  *((_DWORD *)a2 + 4) = v13;
  if ( !v13 )
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

