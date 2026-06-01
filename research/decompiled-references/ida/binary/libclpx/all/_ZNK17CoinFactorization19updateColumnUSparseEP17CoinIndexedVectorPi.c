unsigned __int64 __fastcall CoinFactorization::updateColumnUSparse(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int *a3)
{
  __int64 v3; // r14
  _DWORD *v4; // r12
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbx
  double v8; // xmm3_8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r11
  int *v12; // r13
  _DWORD *v13; // r15
  _DWORD *v14; // r11
  int v15; // edi
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // rcx
  _BYTE *v20; // rsi
  int v21; // eax
  int v22; // r8d
  int v23; // r8d
  unsigned __int64 result; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // esi
  int v28; // edi
  int *v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rdi
  double *v32; // r8
  double v33; // xmm1_8
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // r10
  __int64 v37; // r15
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  double v41; // xmm2_8
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // ecx
  double *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v50; // [rsp+8h] [rbp-78h]
  __int64 v51; // [rsp+10h] [rbp-70h]
  int *v52; // [rsp+18h] [rbp-68h]
  int *v53; // [rsp+20h] [rbp-60h]
  __int64 v54; // [rsp+28h] [rbp-58h]
  __int64 v55; // [rsp+30h] [rbp-50h]
  __int64 v56; // [rsp+38h] [rbp-48h]
  __int64 v57; // [rsp+40h] [rbp-40h]

  v3 = *((_QWORD *)this + 81);
  v4 = *((_DWORD **)this + 141);
  v5 = *((_DWORD *)a2 + 4);
  v56 = *((_QWORD *)a2 + 1);
  v6 = 0;
  v54 = *(_QWORD *)a2;
  v7 = *((_QWORD *)this + 78);
  v8 = *((double *)this + 1);
  if ( *((int *)this + 164) <= -2 )
    v3 = 0;
  if ( *((int *)this + 158) <= -2 )
    v7 = 0;
  v51 = v7;
  v9 = *((_QWORD *)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v9 = 0;
  v57 = v9;
  v10 = *((_QWORD *)this + 69);
  if ( *((int *)this + 140) <= -2 )
    v10 = 0;
  v55 = v10;
  if ( *((int *)this + 284) <= -2 )
    v4 = nullptr;
  v11 = *((int *)this + 10);
  v12 = &v4[v11];
  v13 = &v4[v11 + v11];
  v52 = &v4[v11];
  v14 = &v13[v11];
  if ( *((int *)this + 60) > -2 )
    v6 = *((_QWORD *)this + 29);
  v50 = v6;
  if ( v5 <= 0 )
    goto LABEL_49;
  v53 = &a3[v5 - 1 + 1];
  v15 = 0;
  do
  {
    v16 = *a3;
    v17 = 1;
    *v4 = v16;
    *v13 = *(_DWORD *)(v3 + 4 * v16) + *(_DWORD *)(v50 + 4 * v16) - 1;
    while ( 1 )
    {
      result = (unsigned int)(v17 - 1);
      v25 = (int)result;
      v26 = (int)v4[v25];
      v27 = v4[v25];
      if ( *((_BYTE *)v14 + v26) == 1 )
      {
        if ( v17 == 1 )
          goto LABEL_24;
        goto LABEL_21;
      }
      v18 = v13[(int)result];
      if ( *(_DWORD *)(v3 + 4 * v26) <= v18 )
      {
        v19 = *(int *)(v51 + 4LL * v18);
        v13[(int)result] = v18 - 1;
        v20 = (char *)v14 + v19;
        v21 = v19;
        if ( !*((_BYTE *)v14 + v19) )
        {
          v22 = *(_DWORD *)(v50 + 4 * v19);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v3 + 4 * v19) + v22;
            ++v17;
            v4[v25 + 1] = v19;
            *v20 = 2;
            v13[v25 + 1] = v23 - 1;
          }
          else
          {
            *v20 = 1;
            if ( *((_DWORD *)this + 144) > (int)v19 )
            {
              *--v12 = v19;
            }
            else
            {
              v48 = v15++;
              v52[v48] = v21;
            }
          }
        }
        LODWORD(result) = v17;
        goto LABEL_21;
      }
      *((_BYTE *)v14 + v26) = 1;
      if ( *((_DWORD *)this + 144) > (int)v26 )
        break;
      v47 = v15++;
      v52[v47] = v27;
      if ( v17 == 1 )
        goto LABEL_24;
LABEL_21:
      v17 = result;
    }
    *--v12 = v26;
    if ( v17 != 1 )
      goto LABEL_21;
LABEL_24:
    ++a3;
  }
  while ( v53 != a3 );
  v28 = v15 - 1;
  if ( v28 != -1 )
  {
    v29 = &v52[v28];
    v30 = (__int64)&v29[-v28 - 1];
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        v32 = (double *)(v56 + 8 * v31);
        *((_BYTE *)v14 + v31) = 0;
        v33 = *v32;
        *v32 = 0.0;
        if ( fabs(v33) > v8 )
          break;
        if ( (int *)v30 == --v29 )
          goto LABEL_33;
      }
      v34 = *(int *)(v3 + 4 * v31);
      v35 = *(_DWORD *)(v50 + 4 * v31);
      if ( (int)v34 + v35 > (int)v34 )
      {
        v36 = (unsigned int)(v35 - 1) + 1LL;
        v37 = v57 + 8 * v34;
        v38 = v51 + 4 * v34;
        v39 = 0;
        do
        {
          v40 = *(int *)(v38 + 4 * v39);
          v41 = *(double *)(v37 + 8 * v39++);
          *(double *)(v56 + 8 * v40) = *(double *)(v56 + 8 * v40) - v41 * v33;
        }
        while ( v36 != v39 );
      }
      --v29;
      v42 = (int)result;
      result = (unsigned int)(result + 1);
      *v32 = v33 * *(double *)(v55 + 8 * v31);
      *(_DWORD *)(v54 + 4 * v42) = v31;
    }
    while ( (int *)v30 != v29 );
LABEL_33:
    if ( v12 < v52 )
      goto LABEL_36;
    goto LABEL_38;
  }
  if ( v12 >= v52 )
  {
LABEL_49:
    *((_DWORD *)a2 + 4) = 0;
    goto LABEL_39;
  }
  do
  {
LABEL_36:
    while ( 1 )
    {
      v43 = *v12;
      *((_BYTE *)v14 + v43) = 0;
      v44 = v43;
      v45 = (double *)(v56 + 8 * v43);
      if ( fabs(*v45) > v8 )
        break;
      ++v12;
      *v45 = 0.0;
      if ( v52 <= v12 )
        goto LABEL_38;
    }
    ++v12;
    *v45 = -*v45;
    v46 = (int)result;
    result = (unsigned int)(result + 1);
    *(_DWORD *)(v54 + 4 * v46) = v44;
  }
  while ( v52 > v12 );
LABEL_38:
  *((_DWORD *)a2 + 4) = result;
  if ( !(_DWORD)result )
  {
LABEL_39:
    result = (unsigned __int64)a2;
    *((_BYTE *)a2 + 28) = 0;
  }
  return result;
}

