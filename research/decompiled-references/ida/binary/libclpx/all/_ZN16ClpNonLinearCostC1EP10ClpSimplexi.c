// Alternative name is '_ZN16ClpNonLinearCostC2EP10ClpSimplexi'
void __fastcall ClpNonLinearCost::ClpNonLinearCost(ClpNonLinearCost *this, ClpSimplex *a2, double a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // r13d
  int v7; // r15d
  double *v8; // rbp
  __int64 v9; // rax
  int v10; // ecx
  double v11; // xmm6_8
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r14
  void *v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // edx
  int v20; // r13d
  unsigned __int64 v21; // r14
  int v22; // r13d
  unsigned __int64 v23; // r13
  void *v24; // rax
  _DWORD *v25; // r14
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdi
  _DWORD *v31; // r15
  double *v32; // rdx
  _QWORD *v33; // rcx
  int v34; // r9d
  __int64 v35; // rsi
  __int64 v36; // rax
  double *v37; // r10
  _QWORD *v38; // r11
  __int64 v39; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // r13
  double *v42; // r11
  _QWORD *v43; // r14
  double *v44; // rsi
  __int64 v45; // r10
  __int64 v46; // rcx
  __int64 v47; // r9
  double *v48; // r11
  int v49; // eax
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // rsi
  _QWORD *v57; // rdx
  int v58; // ecx
  __int64 v59; // [rsp+0h] [rbp-78h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  int v61; // [rsp+20h] [rbp-58h]
  int v62; // [rsp+24h] [rbp-54h]
  int v63; // [rsp+28h] [rbp-50h]
  int v64; // [rsp+2Ch] [rbp-4Ch]
  int v65[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  *((_QWORD *)this + 12) = a2;
  v4 = *((_DWORD *)a2 + 26);
  v65[0] = 0;
  *((_DWORD *)this + 12) = v4;
  v5 = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 13) = v5;
  v6 = *((_DWORD *)a2 + 338);
  v7 = v4 + v5;
  *((_BYTE *)this + 148) = 1;
  *((_BYTE *)this + 149) = 0;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  v63 = v4 + v5 + v6;
  *((_DWORD *)this + 36) = (v6 == 0) + 1;
  *((_QWORD *)this + 2) = 0xBFF0000000000000LL;
  v8 = *((double **)a2 + 129);
  if ( v4 + v5 <= 0 )
  {
LABEL_7:
    if ( *(int *)(*((_QWORD *)a2 + 24) + 52LL) <= 14 && *(_DWORD *)(*((_QWORD *)a2 + 20) + 16LL) == 1 )
    {
      a3 = 1.0;
      ClpSimplex::setInfeasibilityCost(a2, 1.0);
      a2 = *((ClpSimplex **)this + 12);
    }
  }
  else
  {
    a3 = 0.0;
    if ( *v8 == 0.0 )
    {
      v9 = 1;
      do
      {
        v10 = v9;
        if ( (unsigned int)(v7 - 1) + 1LL == v9 )
        {
          v65[0] = v7;
          goto LABEL_7;
        }
        ++v9;
      }
      while ( v8[v9 - 1] == 0.0 );
      v65[0] = v10;
    }
  }
  v11 = *((double *)a2 + 113);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 13) = 0;
  v12 = *((_QWORD *)a2 + 123);
  v59 = *((_QWORD *)a2 + 126);
  v61 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, int *, double))(**((_QWORD **)a2 + 24) + 320LL))(
          *((_QWORD *)a2 + 24),
          a2,
          10,
          v65,
          a3);
  if ( v61 )
  {
    *((_DWORD *)this + 36) = 1;
  }
  else
  {
    v49 = *((_DWORD *)this + 36);
    if ( (v49 & 1) == 0 )
      goto LABEL_31;
  }
  v13 = v63 + 1;
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_50;
  *((_QWORD *)this + 7) = operator new[](4 * v13);
  if ( (unsigned __int64)v63 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_50;
  v14 = 4LL * v63;
  *((_QWORD *)this + 8) = operator new[](v14);
  v15 = (void *)operator new[](v14);
  *((_QWORD *)this + 9) = v15;
  memset(v15, 0, v14);
  v65[0] = 0;
  if ( v7 <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v16 = 4 * v7;
    if ( !v61 )
    {
      v16 = 0;
      v17 = 8LL * (unsigned int)(v7 - 1) + 8;
      v18 = 0;
      do
      {
        while ( 1 )
        {
          v19 = (*(double *)(v12 + v18) > -1.797693134862316e308) + v16;
          if ( *(double *)(v59 + v18) >= 1.797693134862316e308 )
            break;
          v18 += 8;
          v16 = v19 + 3;
          if ( v18 == v17 )
            goto LABEL_17;
        }
        v18 += 8;
        v16 = v19 + 2;
      }
      while ( v17 != v18 );
    }
LABEL_17:
    v65[0] = v7;
  }
  v20 = v16 + 4 * v6;
  if ( (unsigned __int64)v20 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_50;
  v21 = 8LL * v20;
  v22 = (v20 + 31) >> 5;
  *((_QWORD *)this + 10) = operator new[](v21);
  *((_QWORD *)this + 11) = operator new[](v21);
  if ( (unsigned __int64)v22 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_50;
  v23 = 4LL * v22;
  v24 = (void *)operator new[](v23);
  *((_QWORD *)this + 13) = v24;
  memset(v24, 0, v23);
  v25 = *((_DWORD **)this + 7);
  v26 = 0;
  v27 = 0;
  *v25 = 0;
  v65[0] = 0;
  if ( v7 > 0 )
  {
    v62 = v7;
    v28 = *((_QWORD *)this + 10);
    v29 = 0;
    v30 = *((_QWORD *)this + 11);
    v26 = 0;
    v60 = *((_QWORD *)this + 8);
    v27 = 0;
    v31 = v25;
    while ( 1 )
    {
      v34 = v27 + 1;
      v40 = 8LL * v27;
      v41 = (_QWORD *)(v28 + v40);
      v42 = (double *)(v30 + v40);
      v43 = (_QWORD *)(v28 + v40 + 8);
      v44 = (double *)(v30 + v40 + 8);
      if ( v61 )
      {
        *v41 = 0xFFEFFFFFFFFFFFFFLL;
        v45 = *((_QWORD *)this + 13);
        *(_DWORD *)(v45 + 4LL * (v27 >> 5)) |= 1 << v27;
        v46 = v65[0];
        *v42 = v8[v65[0]] - v11;
        *(_DWORD *)(v60 + 4 * v46) = v34;
        v47 = v65[0];
        LODWORD(v46) = v27 + 2;
        v27 += 4;
        v48 = &v8[v65[0]];
        *v43 = *(_QWORD *)(v12 + 8LL * v65[0]);
        *v44 = *v48;
        *(_QWORD *)(v28 + v40 + 16) = *(_QWORD *)(v59 + 8 * v47);
        *(double *)(v30 + v40 + 16) = v11 + *v48;
        *(_QWORD *)(v28 + v40 + 24) = 0x7FEFFFFFFFFFFFFFLL;
        *(_DWORD *)(v45 + 4LL * ((int)v46 >> 5)) |= 1 << v46;
        v35 = v65[0];
        *(_QWORD *)(v30 + v40 + 24) = 0x4A511B0EC57E649ALL;
      }
      else
      {
        if ( *(double *)(v12 + 8LL * v26) > -1.797693134862316e308 )
        {
          *v41 = 0xFFEFFFFFFFFFFFFFLL;
          v52 = v40 + 16;
          v64 = v27 + 2;
          v33 = (_QWORD *)(v28 + v52);
          v32 = (double *)(v30 + v52);
          *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v27 >> 5)) |= 1 << v27;
          v41 = v43;
          v29 = v65[0];
          *v42 = v8[v65[0]] - v11;
          v42 = v44;
        }
        else
        {
          v64 = v27 + 1;
          v32 = (double *)(v30 + v40 + 8);
          v33 = v43;
          v34 = v27;
        }
        *(_DWORD *)(v60 + 4 * v29) = v34;
        v35 = v65[0];
        v36 = v65[0];
        *v41 = *(_QWORD *)(v12 + v36 * 8);
        v37 = &v8[v36];
        *v42 = v8[v36];
        v38 = (_QWORD *)(v59 + v36 * 8);
        v27 = v34 + 2;
        *v33 = *v38;
        *v32 = v11 + *v37;
        if ( *(double *)v38 < 1.797693134862316e308 )
        {
          v39 = v27;
          *(_QWORD *)(v28 + 8LL * v27) = 0x7FEFFFFFFFFFFFFFLL;
          *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v64 >> 5)) |= 1 << v64;
          v27 = v34 + 3;
          *(_QWORD *)(v30 + 8 * v39) = 0x4A511B0EC57E649ALL;
          v35 = v65[0];
        }
      }
      v31[v35 + 1] = v27;
      v26 = ++v65[0];
      if ( v65[0] >= v62 )
        break;
      v29 = v65[0];
    }
    v25 = v31;
  }
  if ( v63 > v26 )
  {
    v53 = 8LL * v27;
    v54 = *((_QWORD *)this + 13);
    v55 = *((_QWORD *)this + 8);
    v56 = *((_QWORD *)this + 11) + v53 + 8;
    v57 = (_QWORD *)(v53 + *((_QWORD *)this + 10));
    do
    {
      *v57 = 0xFFEFFFFFFFFFFFFFLL;
      v57 += 4;
      v56 += 32;
      *(_DWORD *)(v54 + 4LL * (v27 >> 5)) |= 1 << v27;
      *(_DWORD *)(v55 + 4LL * v65[0]) = v27 + 1;
      v58 = v27 + 2;
      *(v57 - 3) = 0;
      *(_QWORD *)(v56 - 32) = 0;
      *(v57 - 2) = 0;
      v27 += 4;
      *(_QWORD *)(v56 - 24) = 0;
      *(v57 - 1) = 0x7FEFFFFFFFFFFFFFLL;
      *(_DWORD *)(v54 + 4LL * (v58 >> 5)) |= 1 << v58;
      *(_QWORD *)(v56 - 16) = 0x4A511B0EC57E649ALL;
      v25[++v65[0]] = v27;
    }
    while ( v65[0] < v63 );
  }
  v49 = *((_DWORD *)this + 36);
LABEL_31:
  if ( (v49 & 2) == 0 )
    return;
  if ( (unsigned __int64)v63 > 0xFFFFFFFFFFFFFFFLL )
LABEL_50:
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 16) = operator new[](8LL * v63);
  *((_QWORD *)this + 17) = operator new[](8LL * v63);
  v50 = operator new[](v63);
  *((_QWORD *)this + 15) = v50;
  v65[0] = 0;
  if ( v63 > 0 )
  {
    v51 = 0;
    while ( 1 )
    {
      *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v51) = 0;
      *(double *)(*((_QWORD *)this + 17) + 8LL * v51) = v8[v51];
      *(_BYTE *)(v50 + v51) = 65;
      v51 = ++v65[0];
      if ( v65[0] >= v63 )
        break;
      v50 = *((_QWORD *)this + 15);
    }
  }
}

