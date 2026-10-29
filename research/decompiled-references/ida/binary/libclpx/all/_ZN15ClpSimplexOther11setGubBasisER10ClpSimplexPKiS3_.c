void __fastcall ClpSimplexOther::setGubBasis(ClpSimplexOther *this, ClpSimplex *a2, const int *a3, const int *a4)
{
  const void *v4; // rax
  ClpSimplexOther *v5; // r14
  ClpSimplex *v6; // r12
  _DWORD *v7; // rbx
  int v8; // r13d
  unsigned __int64 v9; // rdi
  int v10; // ebp
  int *v11; // r15
  int v12; // eax
  int v13; // r9d
  __int64 v14; // r10
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // rdx
  const int *v20; // rcx
  const int *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  __int64 v26; // rax
  char v27; // dl
  __int64 v28; // rcx
  _BYTE *v29; // r8
  __int64 v30; // rdi
  char v31; // cl
  __int64 v32; // rsi
  int *v33; // r9
  const int *v34; // r15
  __int64 v35; // r14
  double v36; // xmm5_8
  char v37; // di
  __int64 v38; // rax
  int v39; // r12d
  int v40; // r13d
  double v41; // xmm1_8
  int v42; // r11d
  _DWORD *v43; // rdx
  __int64 v44; // r8
  int v45; // ecx
  double v46; // xmm0_8
  int v47; // edx
  __int64 v48; // rcx
  _BYTE *v49; // rdi
  char v50; // al
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rsi
  int v54; // edx
  int v55; // eax
  _BYTE *v56; // rsi
  char v57; // dl
  void *n; // [rsp+0h] [rbp-B0h]
  int v59; // [rsp+8h] [rbp-A8h]
  int v60; // [rsp+Ch] [rbp-A4h]
  __int64 v61; // [rsp+10h] [rbp-A0h]
  __int64 v62; // [rsp+18h] [rbp-98h]
  const int *v63; // [rsp+18h] [rbp-98h]
  __int64 v64; // [rsp+20h] [rbp-90h]
  int v65; // [rsp+28h] [rbp-88h]
  ClpSimplex *v68; // [rsp+40h] [rbp-70h]
  __int64 v69; // [rsp+48h] [rbp-68h]
  int v70; // [rsp+50h] [rbp-60h]
  __int64 v71; // [rsp+58h] [rbp-58h]
  __int64 v72; // [rsp+60h] [rbp-50h]
  int *v73; // [rsp+68h] [rbp-48h]
  ClpSimplexOther *v74; // [rsp+70h] [rbp-40h]

  v4 = *((const void **)this + 24);
  if ( !v4 )
    BUG();
  v5 = this;
  v6 = a2;
  v7 = __dynamic_cast(
         v4,
         (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
         (const struct __class_type_info *)&`typeinfo for'ClpDynamicMatrix,
         0);
  v8 = v7[74];
  v9 = *((int *)a2 + 27);
  v70 = v7[64];
  v10 = *((_DWORD *)a2 + 27);
  v65 = *((_DWORD *)a2 + 26);
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_78;
  v11 = (int *)operator new[](4 * v9);
  v60 = v7[66];
  v62 = *((_QWORD *)v7 + 39);
  v71 = *((_QWORD *)v7 + 41);
  v72 = *((_QWORD *)v5 + 15);
  v64 = *((_QWORD *)v7 + 47);
  v61 = *((_QWORD *)a2 + 15);
  v69 = *((_QWORD *)v7 + 28);
  v12 = v7[50];
  v59 = v12;
  if ( v12 > 0 )
  {
    v13 = v7[66];
    v14 = v62 + 4LL * (unsigned int)(v12 - 1) + 8;
    v15 = (_DWORD *)(v62 + 4);
    do
    {
      while ( 1 )
      {
        v16 = (int)*(v15 - 1);
        if ( (int)v16 < *v15 )
          break;
LABEL_8:
        ++v15;
        ++v13;
        if ( (_DWORD *)v14 == v15 )
          goto LABEL_9;
      }
      do
      {
        while ( 1 )
        {
          *(_BYTE *)(v16 + *((_QWORD *)v7 + 46)) = *(_BYTE *)(v16 + *((_QWORD *)v7 + 46)) & 0xF8 | 3;
          v17 = a4[v70 + v16];
          if ( (int)v17 >= v10 )
            break;
          v11[v17] = a3[v13];
          if ( (int)++v16 >= *v15 )
            goto LABEL_8;
        }
        ++v16;
      }
      while ( *v15 > (int)v16 );
      ++v15;
      ++v13;
    }
    while ( (_DWORD *)v14 != v15 );
  }
LABEL_9:
  if ( (unsigned __int64)v65 > 0x1FFFFFFFFFFFFFFELL )
LABEL_78:
    __cxa_throw_bad_array_new_length();
  n = (void *)operator new[](4LL * v65);
  memset(n, 0, 4LL * v65);
  if ( v8 > 0 )
  {
    v18 = v70;
    v19 = *((_QWORD *)v6 + 33);
    v20 = &a4[v70];
    v21 = &a4[v70 + 1 + (unsigned __int64)(unsigned int)(v8 - 1)];
    while ( 1 )
    {
      v22 = *v20;
      if ( (int)v22 < v10 )
        break;
      v23 = a3[v60 + (int)v22 - v10];
      if ( (*(_BYTE *)(v19 + (int)v23 + *((_DWORD *)v6 + 27)) & 7) == 1 )
      {
        ++v20;
        ++*((_DWORD *)n + v23);
        if ( v21 == v20 )
        {
LABEL_18:
          if ( v59 > 0 )
            goto LABEL_19;
          goto LABEL_23;
        }
      }
      else
      {
LABEL_14:
        if ( v21 == ++v20 )
          goto LABEL_18;
      }
    }
    if ( (*(_BYTE *)(v19 + v22) & 7) == 1 )
      ++*((_DWORD *)n + v11[v22]);
    goto LABEL_14;
  }
  if ( v59 <= 0 )
    goto LABEL_65;
  v18 = v70;
LABEL_19:
  v24 = 0;
  do
  {
    v25 = (_BYTE *)(v24 + *((_QWORD *)v7 + 29));
    ++v24;
    *v25 = *v25 & 0xF8 | 5;
  }
  while ( (unsigned int)(v59 - 1) + 1LL != v24 );
  if ( v8 <= 0 )
    goto LABEL_34;
  v19 = *((_QWORD *)v6 + 33);
LABEL_23:
  v26 = 0;
  while ( 1 )
  {
    v28 = a4[v18 + v26];
    if ( (int)v28 < v10 )
    {
      v27 = *(_BYTE *)(v19 + v28) & 7;
      switch ( v27 )
      {
        case 2:
          *(_BYTE *)(v26 + *((_QWORD *)v7 + 46)) = *(_BYTE *)(v26 + *((_QWORD *)v7 + 46)) & 0xF8 | 2;
          break;
        case 3:
          *(_BYTE *)(v26 + *((_QWORD *)v7 + 46)) = *(_BYTE *)(v26 + *((_QWORD *)v7 + 46)) & 0xF8 | 3;
          break;
        case 1:
          v56 = (_BYTE *)(v26 + *((_QWORD *)v7 + 46));
          v57 = *v56 & 0xF8;
          if ( *((_DWORD *)n + v11[v28]) != 1 )
            v57 |= 1u;
          *v56 = v57;
          break;
      }
      goto LABEL_27;
    }
    v29 = (_BYTE *)(v26 + *((_QWORD *)v7 + 46));
    v30 = a3[v60 + (int)v28 - v10];
    v31 = *v29 & 0xF8;
    if ( (*(_BYTE *)(v19 + (int)v30 + *((_DWORD *)v6 + 27)) & 7) != 1 )
      break;
    if ( *((_DWORD *)n + v30) == 1 )
      goto LABEL_32;
    *v29 = v31 | 1;
LABEL_27:
    if ( v8 <= (int)++v26 )
      goto LABEL_33;
LABEL_28:
    v19 = *((_QWORD *)v6 + 33);
  }
  v31 |= 3u;
LABEL_32:
  ++v26;
  *v29 = v31;
  if ( v8 > (int)v26 )
    goto LABEL_28;
LABEL_33:
  if ( v59 > 0 )
  {
LABEL_34:
    v32 = 0;
    v73 = v11;
    v74 = v5;
    v68 = v6;
    v33 = (int *)(v62 + 4);
    v63 = &a3[v60];
    v34 = &a4[v18];
    do
    {
      while ( 1 )
      {
        if ( !*((_DWORD *)n + v63[v32]) )
        {
          v35 = *((_QWORD *)v7 + 29);
          v36 = *(double *)(v69 + 8 * v32) - 0.0000001;
          v37 = *(_BYTE *)(v35 + v32);
          if ( (*(_BYTE *)(*((_QWORD *)v68 + 33) + *((_DWORD *)v68 + 27) + v63[v32]) & 7) == 1 )
          {
            *(_BYTE *)(v35 + v32) = v37 & 0xF8 | 1;
            v35 = *((_QWORD *)v7 + 29);
            v37 = *(_BYTE *)(v35 + v32);
          }
          v38 = *(v33 - 1);
          v39 = *v33;
          v40 = v65 + 1;
          if ( (int)v38 < *v33 )
          {
            v41 = 0.0;
            v42 = -1;
            v43 = (_DWORD *)(v71 + 4 * v38);
            do
            {
              v44 = v34[v38];
              v45 = v43[1] - *v43;
              v46 = 0.0;
              if ( (int)v44 < v10 )
              {
                v46 = *(double *)(v61 + 8 * v44) - *(double *)(v64 + 8 * v38);
                if ( v46 > v36 )
                {
                  *(_BYTE *)(v35 + v32) = v37 & 0xF8 | 3;
                  v35 = *((_QWORD *)v7 + 29);
                  v39 = *v33;
                  v37 = *(_BYTE *)(v35 + v32);
                }
              }
              if ( v46 > v41 + 0.00000001 || fabs(v46 - v41) <= 0.00000001 && v45 < v40 )
              {
                v41 = v46;
                v42 = v38;
                v40 = v45;
              }
              ++v43;
              ++v38;
            }
            while ( v39 > (int)v38 );
            if ( (v37 & 7) != 1 )
            {
              v47 = *(v33 - 1);
              if ( v47 < v39 )
                break;
            }
          }
        }
LABEL_35:
        ++v32;
        ++v33;
        if ( v59 <= (int)v32 )
          goto LABEL_64;
      }
      v48 = v47;
      do
      {
        while ( 1 )
        {
          v49 = (_BYTE *)(v48 + *((_QWORD *)v7 + 46));
          v50 = *v49 & 0xF8;
          if ( v42 == v47 )
            break;
          ++v47;
          ++v48;
          *v49 = v50 | 3;
          if ( *v33 <= v47 )
            goto LABEL_35;
        }
        *v49 = v50;
        v47 = v42 + 1;
        ++v48;
      }
      while ( *v33 > v42 + 1 );
      ++v32;
      ++v33;
    }
    while ( v59 > (int)v32 );
LABEL_64:
    v11 = v73;
    v5 = v74;
    v6 = v68;
  }
LABEL_65:
  if ( v70 > 0 )
  {
    v51 = 0;
    do
    {
      v52 = a4[v51];
      *(_BYTE *)(v51 + *((_QWORD *)v5 + 33)) = *(_BYTE *)(v51 + *((_QWORD *)v5 + 33)) & 0xF8
                                             | *(_BYTE *)(*((_QWORD *)v6 + 33) + v52) & 7;
      *(_QWORD *)(v72 + 8 * v51++) = *(_QWORD *)(v61 + 8 * v52);
    }
    while ( v51 != (unsigned int)(v70 - 1) + 1LL );
  }
  if ( v60 > 0 )
  {
    v53 = 0;
    do
    {
      v54 = a3[v53] + *((_DWORD *)v6 + 27);
      v55 = v53++ + *((_DWORD *)v5 + 27);
      *(_BYTE *)(*((_QWORD *)v5 + 33) + v55) = *(_BYTE *)(*((_QWORD *)v5 + 33) + v55) & 0xF8
                                             | *(_BYTE *)(*((_QWORD *)v6 + 33) + v54) & 7;
    }
    while ( v53 != (unsigned int)(v60 - 1) + 1LL );
  }
  ClpDynamicMatrix::initialProblem((ClpDynamicMatrix *)v7);
  operator delete[](n);
  operator delete[](v11);
}

