__int64 __fastcall ClpNetworkBasis::updateColumnTranspose(
        ClpNetworkBasis *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  int *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // xmm0_8
  __int64 v13; // rsi
  int v14; // r14d
  unsigned __int64 v15; // r15
  int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // rsi
  int *v21; // rsi
  int v22; // r11d
  int v23; // esi
  _BYTE *v24; // r10
  __int64 v25; // r11
  int *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdx
  int *v29; // rdx
  int v30; // r10d
  int v31; // edx
  _BYTE *v32; // r8
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r11
  __int64 result; // rax
  unsigned __int64 v37; // r12
  int *v38; // rdx
  int v39; // esi
  double *v40; // r8
  double v41; // xmm0_8
  __int64 v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v45; // r14
  __int64 v46; // r10
  __int64 v47; // rsi
  __int64 v48; // r8
  int v49; // eax
  __int64 *v50; // rsi
  __int64 v51; // xmm0_8
  __int64 v52; // rax
  int v53; // r13d
  unsigned __int64 v54; // r15
  int v55; // r12d
  __int64 v56; // r8
  __int64 v57; // r11
  __int64 *v58; // rsi
  __int64 v59; // xmm0_8
  __int64 v60; // rsi
  __int64 v61; // rsi
  int *v62; // rsi
  int v63; // r11d
  int v64; // esi
  _BYTE *v65; // r10
  __int64 v66; // r10
  int *v67; // r11
  __int64 v68; // rsi
  __int64 v69; // rdx
  int *v70; // rdx
  int v71; // r9d
  int v72; // edx
  _BYTE *v73; // r8
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // r10
  unsigned __int64 v77; // r11
  int *v78; // rdx
  int v79; // esi
  double *v80; // r8
  double v81; // xmm0_8
  int v82; // edx
  int v83; // edx
  int v84; // [rsp+Ch] [rbp-3Ch]

  CoinIndexedVector::clear(a2);
  LODWORD(v5) = *((_DWORD *)a3 + 4);
  v6 = *((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a3 + 1);
  v8 = *(int **)a3;
  v9 = *(_QWORD *)a2;
  v84 = v5;
  if ( *((_BYTE *)a3 + 28) )
  {
    if ( (int)v5 <= 0 )
    {
      v34 = *(int *)this;
      v16 = -1;
      v14 = *(_DWORD *)this;
    }
    else
    {
      v10 = 0;
      do
      {
        v11 = *((_QWORD *)this + 13);
        v12 = *(_QWORD *)(v7 + 2 * v10);
        v13 = *(int *)(*((_QWORD *)this + 9) + 4LL * v8[v10 / 4]);
        *(_QWORD *)(v7 + 2 * v10) = 0;
        *(_QWORD *)(v6 + 8 * v13) = v12;
        *(_BYTE *)(v11 + v13) = 1;
        *(_DWORD *)(v9 + v10) = v13;
        v10 += 4LL;
      }
      while ( 4LL * (unsigned int)(v5 - 1) + 4 != v10 );
      v5 = (int)v5;
      v14 = *(_DWORD *)this;
      v15 = 0;
      v16 = -1;
      do
      {
        while ( 1 )
        {
          v17 = *(int *)(v9 + v15);
          v18 = *((_QWORD *)this + 12);
          v19 = *((_QWORD *)this + 11);
          v8[v15 / 4] = v17;
          v20 = *(int *)(v18 + 4 * v17);
          if ( v14 > (int)v20 )
            v14 = v20;
          if ( v16 < (int)v20 )
            v16 = v20;
          v21 = (int *)(v19 + 4 * v20);
          v22 = *v21;
          *v21 = v17;
          *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v17) = v22;
          v23 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v17);
          if ( v23 >= 0 )
            break;
LABEL_13:
          v15 += 4LL;
          if ( v10 == v15 )
            goto LABEL_14;
        }
        do
        {
          while ( 1 )
          {
            v24 = (_BYTE *)(*((_QWORD *)this + 13) + v23);
            if ( *v24 )
              break;
            v8[v5] = v23;
            *v24 = 1;
            v23 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v23);
            v5 = (int)v5 + 1;
            if ( v23 < 0 )
              goto LABEL_13;
          }
          v23 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v23);
        }
        while ( v23 >= 0 );
        v15 += 4LL;
      }
      while ( v10 != v15 );
LABEL_14:
      if ( v84 < (int)v5 )
      {
        v25 = v84 + 1;
        v26 = &v8[v84 - v25];
        do
        {
          while ( 1 )
          {
            v27 = v26[v25];
            v28 = *(int *)(*((_QWORD *)this + 12) + 4 * v27);
            if ( v14 > (int)v28 )
              v14 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v27);
            if ( v16 < (int)v28 )
              v16 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v27);
            v29 = (int *)(*((_QWORD *)this + 11) + 4 * v28);
            v30 = *v29;
            *v29 = v27;
            *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v27) = v30;
            v31 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v27);
            if ( v31 >= 0 )
              break;
LABEL_23:
            v33 = v25++;
            if ( v33 >= (int)v5 )
              goto LABEL_24;
          }
          do
          {
            while ( 1 )
            {
              v32 = (_BYTE *)(*((_QWORD *)this + 13) + v31);
              if ( *v32 )
                break;
              v8[v5] = v31;
              *v32 = 1;
              v31 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v31);
              v5 = (int)v5 + 1;
              if ( v31 < 0 )
                goto LABEL_23;
            }
            v31 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v31);
          }
          while ( v31 >= 0 );
          v83 = v25++;
        }
        while ( v83 < (int)v5 );
      }
LABEL_24:
      v34 = *(int *)this;
    }
    *(_QWORD *)(v6 + 8 * v34) = 0;
    if ( v14 <= v16 )
    {
      v35 = 4LL * v14;
      result = 0;
      v37 = 4 * (v14 + (unsigned __int64)(unsigned int)(v16 - v14) + 1);
      do
      {
        while ( 1 )
        {
          v38 = (int *)(v35 + *((_QWORD *)this + 11));
          v39 = *v38;
          *v38 = -1;
          if ( v39 >= 0 )
            break;
LABEL_30:
          v35 += 4;
          if ( v37 == v35 )
            goto LABEL_31;
        }
        do
        {
          while ( 1 )
          {
            *(_BYTE *)(*((_QWORD *)this + 13) + v39) = 0;
            v40 = (double *)(v6 + 8LL * v39);
            v41 = *(double *)(*((_QWORD *)this + 7) + 8LL * v39) * *v40
                + *(double *)(v6 + 8LL * *(int *)(*((_QWORD *)this + 2) + 4LL * v39));
            *v40 = v41;
            if ( v41 == 0.0 )
              break;
            v42 = (int)result;
            result = (unsigned int)(result + 1);
            *(double *)(v7 + 8 * v42) = v41;
            v8[v42] = v39;
            v39 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * v39);
            if ( v39 < 0 )
              goto LABEL_30;
          }
          v39 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * v39);
        }
        while ( v39 >= 0 );
        v35 += 4;
      }
      while ( v37 != v35 );
LABEL_31:
      if ( (_DWORD)result )
      {
        v43 = (__int64)&v8[(unsigned int)(result - 1) + 1];
        do
        {
          v44 = *v8++;
          *(_QWORD *)(v6 + 8 * v44) = 0;
        }
        while ( (int *)v43 != v8 );
        *((_DWORD *)a3 + 4) = result;
        return result;
      }
    }
    goto LABEL_87;
  }
  if ( (int)v5 <= 0 )
  {
    v75 = *(int *)this;
    v55 = -1;
    v53 = *(_DWORD *)this;
  }
  else
  {
    v45 = 0;
    v46 = 4LL * (unsigned int)(v5 - 1) + 4;
    do
    {
      v47 = v8[v45 / 4];
      v48 = *((_QWORD *)this + 13);
      v49 = *(_DWORD *)(*((_QWORD *)this + 9) + 4 * v47);
      v50 = (__int64 *)(v7 + 8 * v47);
      v51 = *v50;
      *v50 = 0;
      *(_QWORD *)(v6 + 8LL * v49) = v51;
      *(_BYTE *)(v48 + v49) = 1;
      *(_DWORD *)(v9 + v45) = v49;
      v45 += 4LL;
    }
    while ( v46 != v45 );
    v52 = v84;
    v53 = *(_DWORD *)this;
    v54 = 0;
    v55 = -1;
    do
    {
      while ( 1 )
      {
        v56 = *(int *)(v9 + v54);
        v57 = *((_QWORD *)this + 11);
        v58 = (__int64 *)(v6 + 8 * v56);
        v59 = *v58;
        *v58 = 0;
        v60 = *((_QWORD *)this + 12);
        *(_QWORD *)(v7 + 8 * v56) = v59;
        v8[v54 / 4] = v56;
        v61 = *(int *)(v60 + 4 * v56);
        if ( v53 > (int)v61 )
          v53 = v61;
        if ( v55 < (int)v61 )
          v55 = v61;
        v62 = (int *)(v57 + 4 * v61);
        v63 = *v62;
        *v62 = v56;
        *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v56) = v63;
        v64 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v56);
        if ( v64 >= 0 )
          break;
LABEL_47:
        v54 += 4LL;
        if ( v45 == v54 )
          goto LABEL_48;
      }
      do
      {
        while ( 1 )
        {
          v65 = (_BYTE *)(*((_QWORD *)this + 13) + v64);
          if ( *v65 )
            break;
          v8[v52] = v64;
          *v65 = 1;
          v64 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v64);
          v52 = (int)v52 + 1;
          if ( v64 < 0 )
            goto LABEL_47;
        }
        v64 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v64);
      }
      while ( v64 >= 0 );
      v54 += 4LL;
    }
    while ( v45 != v54 );
LABEL_48:
    if ( v84 < (int)v52 )
    {
      v66 = v84 + 1;
      v67 = &v8[v84 - v66];
      do
      {
        while ( 1 )
        {
          v68 = v67[v66];
          v69 = *(int *)(*((_QWORD *)this + 12) + 4 * v68);
          if ( v53 > (int)v69 )
            v53 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v68);
          if ( v55 < (int)v69 )
            v55 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v68);
          v70 = (int *)(*((_QWORD *)this + 11) + 4 * v69);
          v71 = *v70;
          *v70 = v68;
          *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v68) = v71;
          v72 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v68);
          if ( v72 >= 0 )
            break;
LABEL_57:
          v74 = v66++;
          if ( v74 >= (int)v52 )
            goto LABEL_58;
        }
        do
        {
          while ( 1 )
          {
            v73 = (_BYTE *)(*((_QWORD *)this + 13) + v72);
            if ( *v73 )
              break;
            v8[v52] = v72;
            *v73 = 1;
            v72 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v72);
            v52 = (int)v52 + 1;
            if ( v72 < 0 )
              goto LABEL_57;
          }
          v72 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v72);
        }
        while ( v72 >= 0 );
        v82 = v66++;
      }
      while ( v82 < (int)v52 );
    }
LABEL_58:
    v75 = *(int *)this;
  }
  *(_QWORD *)(v7 + 8 * v75) = 0;
  if ( v53 > v55 )
  {
LABEL_87:
    *((_DWORD *)a3 + 4) = 0;
LABEL_66:
    *((_BYTE *)a3 + 28) = 0;
    return 0;
  }
  v76 = 4LL * v53;
  result = 0;
  v77 = 4 * (v53 + (unsigned __int64)(unsigned int)(v55 - v53) + 1);
  do
  {
    while ( 1 )
    {
      v78 = (int *)(v76 + *((_QWORD *)this + 11));
      v79 = *v78;
      *v78 = -1;
      if ( v79 >= 0 )
        break;
LABEL_64:
      v76 += 4;
      if ( v77 == v76 )
        goto LABEL_65;
    }
    do
    {
      while ( 1 )
      {
        *(_BYTE *)(*((_QWORD *)this + 13) + v79) = 0;
        v80 = (double *)(v7 + 8LL * v79);
        v81 = *(double *)(*((_QWORD *)this + 7) + 8LL * v79) * *v80
            + *(double *)(v7 + 8LL * *(int *)(*((_QWORD *)this + 2) + 4LL * v79));
        *v80 = v81;
        if ( v81 == 0.0 )
          break;
        v8[result] = v79;
        v79 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * v79);
        result = (int)result + 1;
        if ( v79 < 0 )
          goto LABEL_64;
      }
      v79 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * v79);
    }
    while ( v79 >= 0 );
    v76 += 4;
  }
  while ( v77 != v76 );
LABEL_65:
  *((_DWORD *)a3 + 4) = result;
  if ( !(_DWORD)result )
    goto LABEL_66;
  return result;
}

