__int64 __fastcall CoinIndexedVector::isApproximatelyEqual(
        CoinIndexedVector *this,
        const CoinIndexedVector *a2,
        double a3)
{
  int *v3; // rbp
  _QWORD *v4; // r12
  double *v5; // r13
  int v6; // r15d
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // xmm0_8
  double *v13; // r14
  double *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  double *v18; // r14
  double *v19; // rbx
  __int64 v20; // r14
  double *v21; // r15
  double *v22; // rbp
  double *v23; // r14
  double *v24; // r15
  __int64 v26; // rax
  double v27; // xmm0_8
  __int64 v28; // rax
  double v29; // xmm0_8
  double v30; // [rsp+0h] [rbp-B8h]
  double v31; // [rsp+0h] [rbp-B8h]
  __int64 v32; // [rsp+0h] [rbp-B8h]
  double v33; // [rsp+0h] [rbp-B8h]
  double v34; // [rsp+8h] [rbp-B0h]
  double v35; // [rsp+8h] [rbp-B0h]
  int v36; // [rsp+8h] [rbp-B0h]
  double v37; // [rsp+8h] [rbp-B0h]
  __int64 v39; // [rsp+18h] [rbp-A0h]
  double v40; // [rsp+18h] [rbp-A0h]
  char *v41; // [rsp+18h] [rbp-A0h]
  double v42; // [rsp+20h] [rbp-98h]
  __int64 v43; // [rsp+20h] [rbp-98h]
  int v44; // [rsp+3Ch] [rbp-7Ch]
  __int64 v45; // [rsp+40h] [rbp-78h] BYREF
  double *v46; // [rsp+48h] [rbp-70h]
  int v47; // [rsp+50h] [rbp-68h]
  int v48; // [rsp+54h] [rbp-64h]
  int *v49; // [rsp+60h] [rbp-58h] BYREF
  void *s; // [rsp+68h] [rbp-50h]
  int v51; // [rsp+70h] [rbp-48h]
  int v52; // [rsp+74h] [rbp-44h]
  char v53; // [rsp+7Ch] [rbp-3Ch]

  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)&v45, this);
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)&v49, a2);
  v3 = v49;
  v4 = s;
  v5 = v46;
  v6 = v51;
  if ( !*((_BYTE *)this + 28) )
  {
    if ( !v53 )
    {
      if ( v51 <= 0 )
      {
        v44 = -1;
        v36 = v47;
        v32 = v45;
        if ( v47 <= 0 )
          goto LABEL_37;
      }
      else
      {
        v16 = (__int64)&v49[v51 - 1 + 1];
        do
        {
          v44 = *v3;
          v17 = *v3;
          v18 = &v5[v17];
          v19 = (double *)&v4[v17];
          v35 = *v19;
          v31 = *v18;
          if ( (unsigned __int8)CoinIsnan(*v19)
            || (unsigned __int8)CoinIsnan(v31)
            || v31 != v35
            && (!(unsigned __int8)CoinFinite(v35)
             || !(unsigned __int8)CoinFinite(v31)
             || (fmax(fabs(v35), fabs(v31)) + 1.0) * a3 < fabs(v35 - v31)) )
          {
            v36 = v47;
            v32 = v45;
            if ( v47 > 0 )
              goto LABEL_22;
LABEL_27:
            LODWORD(v15) = v44;
            goto LABEL_32;
          }
          ++v3;
          *v18 = 0.0;
          *v19 = 0.0;
        }
        while ( (int *)v16 != v3 );
        v36 = v47;
        v32 = v45;
        if ( v47 <= 0 )
          goto LABEL_37;
        v44 = -1;
      }
LABEL_22:
      v20 = 0;
      while ( 1 )
      {
        v15 = *(int *)(v32 + 4 * v20);
        v21 = &v5[v15];
        v22 = (double *)&v4[v15];
        v42 = *v22;
        v40 = *v21;
        if ( (unsigned __int8)CoinIsnan(*v22)
          || (unsigned __int8)CoinIsnan(v40)
          || v40 != v42
          && (!(unsigned __int8)CoinFinite(v42)
           || !(unsigned __int8)CoinFinite(v40)
           || (fmax(fabs(v42), fabs(v40)) + 1.0) * a3 < fabs(v42 - v40)) )
        {
          goto LABEL_32;
        }
        ++v20;
        *v21 = 0.0;
        *v22 = 0.0;
        if ( v36 <= (int)v20 )
          goto LABEL_27;
      }
    }
    v23 = (double *)s;
    v41 = (char *)v46;
LABEL_29:
    if ( v51 <= 0 )
      goto LABEL_37;
    v43 = (__int64)&v49[v51 - 1 + 1];
    while ( 1 )
    {
      v33 = *v23;
      v24 = (double *)&v41[8 * *v3];
      LODWORD(v15) = *v3;
      v37 = *v24;
      if ( (unsigned __int8)CoinIsnan(*v24)
        || (unsigned __int8)CoinIsnan(v33)
        || v33 != v37
        && (!(unsigned __int8)CoinFinite(v37)
         || !(unsigned __int8)CoinFinite(v33)
         || (fmax(fabs(v37), fabs(v33)) + 1.0) * a3 < fabs(v37 - v33)) )
      {
        break;
      }
      *v23 = 0.0;
      ++v3;
      ++v23;
      *v24 = 0.0;
      if ( (int *)v43 == v3 )
        goto LABEL_37;
    }
LABEL_32:
    if ( (int)v15 >= 0 )
      goto LABEL_33;
    goto LABEL_38;
  }
  if ( !v53 )
  {
    v23 = v46;
    v41 = (char *)s;
    goto LABEL_29;
  }
  v7 = *((_DWORD *)this + 5);
  if ( v52 <= v7 )
    v7 = v52;
  v8 = *((_QWORD *)a2 + 1);
  memset(s, 0, 8LL * v7);
  if ( v6 > 0 )
  {
    v9 = (unsigned int)(v6 - 1);
    v10 = 0;
    do
    {
      v11 = v3[v10];
      v12 = *(_QWORD *)(v8 + 8 * v10++);
      v4[v11] = v12;
    }
    while ( v9 + 1 != v10 );
    v13 = v5;
    v39 = (__int64)&v3[v9 + 1];
    do
    {
      v30 = *v13;
      v14 = (double *)&v4[*v3];
      LODWORD(v15) = *v3;
      v34 = *v14;
      if ( (unsigned __int8)CoinIsnan(*v14)
        || (unsigned __int8)CoinIsnan(v30)
        || v30 != v34
        && (!(unsigned __int8)CoinFinite(v34)
         || !(unsigned __int8)CoinFinite(v30)
         || (fmax(fabs(v34), fabs(v30)) + 1.0) * a3 < fabs(v34 - v30)) )
      {
        goto LABEL_32;
      }
      *v13 = 0.0;
      ++v3;
      ++v13;
      *v14 = 0.0;
    }
    while ( (int *)v39 != v3 );
  }
LABEL_37:
  LODWORD(v15) = -1;
LABEL_38:
  if ( v48 > 0 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = v5[v26];
      if ( v27 != 0.0 && fabs(v27) > a3 )
        break;
      if ( (unsigned int)(v48 - 1) + 1LL == ++v26 )
        goto LABEL_43;
    }
    LODWORD(v15) = v26;
  }
LABEL_43:
  if ( v52 > 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = *(double *)&v4[v28];
      if ( v29 != 0.0 && fabs(v29) > a3 )
        break;
      if ( (unsigned int)(v52 - 1) + 1LL == ++v28 )
        goto LABEL_33;
    }
    LODWORD(v15) = v28;
  }
LABEL_33:
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)&v49);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)&v45);
  return (unsigned int)v15;
}

