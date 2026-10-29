__int64 __fastcall ClpSimplex::originalModel(ClpSimplex *this, ClpSimplex *a2)
{
  int v3; // r14d
  unsigned __int64 v4; // rdi
  int *v5; // r15
  int v6; // r13d
  char *v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  char *v18; // rdi
  int *v19; // rax
  __int64 v20; // xmm0_8
  char *v21; // rdi
  _QWORD *v22; // rcx
  int *v23; // rax
  __int64 v24; // xmm0_8
  unsigned __int8 *v25; // rdi
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  double *v44; // rax
  double v45; // xmm0_8
  ClpPrimalColumnSteepest *v46; // rbp
  const void *v48; // r14
  int v49; // r13d
  void *v50; // rax
  int v51; // r14d
  unsigned __int64 v52; // r14
  void *v53; // rax
  void *src; // [rsp+8h] [rbp-40h]

  v3 = *((_DWORD *)this + 27);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  v4 = *((int *)this + 26);
  v5 = *((int **)a2 + 19);
  src = *((void **)a2 + 150);
  v6 = v4 + v3;
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_65;
  v8 = (char *)operator new[](8 * v4);
  memset(v8, 0, 8LL * *((int *)this + 26));
  v9 = (unsigned __int64)src;
  (*(void (__fastcall **)(_QWORD, void *, char *, _QWORD, _QWORD, double))(**((_QWORD **)a2 + 24) + 368LL))(
    *((_QWORD *)a2 + 24),
    src,
    v8,
    *((_QWORD *)this + 28),
    *((_QWORD *)a2 + 29),
    1.0);
  if ( v6 > 0 )
  {
    v11 = 0;
    do
    {
      v10 = v5[v11];
      *(_QWORD *)(*((_QWORD *)a2 + 123) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v11);
      *(_QWORD *)(*((_QWORD *)a2 + 126) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 126) + 8 * v11);
      *(_QWORD *)(*((_QWORD *)a2 + 129) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 129) + 8 * v11);
      *(_QWORD *)(*((_QWORD *)a2 + 147) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 147) + 8 * v11);
      *(_QWORD *)(*((_QWORD *)a2 + 150) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v11);
      v9 = *(unsigned __int8 *)(*((_QWORD *)this + 33) + v11++);
      *(_BYTE *)(*((_QWORD *)a2 + 33) + v10) = v9;
    }
    while ( (unsigned int)(v6 - 1) + 1LL != v11 );
  }
  v12 = *((void **)this + 123);
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 126);
  *((_QWORD *)this + 123) = *((_QWORD *)a2 + 123);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 129);
  *((_QWORD *)this + 126) = *((_QWORD *)a2 + 126);
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)this + 147);
  *((_QWORD *)this + 129) = *((_QWORD *)a2 + 129);
  if ( v15 )
    operator delete[](v15);
  v16 = *((void **)this + 150);
  *((_QWORD *)this + 147) = *((_QWORD *)a2 + 147);
  if ( v16 )
    operator delete[](v16);
  v17 = *((void **)this + 33);
  *((_QWORD *)this + 150) = *((_QWORD *)a2 + 150);
  if ( v17 )
    operator delete[](v17);
  v18 = *((char **)this + 29);
  *((_QWORD *)this + 33) = *((_QWORD *)a2 + 33);
  if ( v18 )
  {
    if ( v3 <= 0 )
      goto LABEL_55;
    v19 = v5;
    v10 = 0;
    do
    {
      v9 = *v19++;
      v20 = *(_QWORD *)&v18[v10];
      v10 += 8;
      *(_QWORD *)(*((_QWORD *)a2 + 29) + 8 * v9) = v20;
      v18 = *((char **)this + 29);
    }
    while ( &v5[v3 - 1 + 1] != v19 );
    if ( v18 )
LABEL_55:
      operator delete[](v18);
    *((_QWORD *)this + 29) = *((_QWORD *)a2 + 29);
  }
  v21 = *((char **)this + 159);
  if ( v21 )
  {
    v22 = *((_QWORD **)a2 + 159);
    if ( v22 )
    {
      if ( v6 <= 0 )
        goto LABEL_57;
      v23 = v5;
      v10 = 0;
      while ( 1 )
      {
        v9 = *v23;
        v24 = *(_QWORD *)&v21[v10];
        ++v23;
        v10 += 8;
        v22[v9] = v24;
        if ( &v5[v6 - 1 + 1] == v23 )
          break;
        v21 = *((char **)this + 159);
        v22 = *((_QWORD **)a2 + 159);
      }
LABEL_29:
      v21 = *((char **)this + 159);
      if ( !v21 )
      {
LABEL_30:
        *((_QWORD *)this + 159) = *((_QWORD *)a2 + 159);
        goto LABEL_31;
      }
LABEL_57:
      operator delete[](v21);
      goto LABEL_30;
    }
    v9 = *((_QWORD *)this + 150);
    v51 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
    if ( !v9 )
    {
LABEL_64:
      *((_QWORD *)a2 + 159) = v22;
      goto LABEL_29;
    }
    if ( (unsigned __int64)v51 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v52 = 8LL * v51;
      v53 = (void *)operator new[](v52);
      v22 = memcpy(v53, (const void *)v9, v52);
      goto LABEL_64;
    }
LABEL_65:
    __cxa_throw_bad_array_new_length();
  }
LABEL_31:
  v25 = *((unsigned __int8 **)this + 164);
  if ( !v25 )
    goto LABEL_39;
  v26 = *((_BYTE **)a2 + 164);
  if ( v26 )
  {
    if ( v6 <= 0 )
    {
LABEL_56:
      operator delete[](v25);
      goto LABEL_38;
    }
    v27 = 0;
    while ( 1 )
    {
      v9 = v25[v27];
      v10 = v5[v27++];
      v26[v10] = v9;
      if ( (unsigned int)(v6 - 1) + 1LL == v27 )
        break;
      v25 = *((unsigned __int8 **)this + 164);
      v26 = *((_BYTE **)a2 + 164);
    }
  }
  else
  {
    v48 = *((const void **)this + 33);
    v49 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
    if ( v48 )
    {
      v50 = (void *)operator new[](v49);
      v9 = (unsigned __int64)v48;
      v26 = memcpy(v50, v48, v49);
    }
    *((_QWORD *)a2 + 164) = v26;
  }
  v25 = *((unsigned __int8 **)this + 164);
  if ( v25 )
    goto LABEL_56;
LABEL_38:
  *((_QWORD *)this + 164) = *((_QWORD *)a2 + 164);
LABEL_39:
  if ( *((int *)this + 26) > 0 )
  {
    v10 = 0;
    v28 = 0;
    do
    {
      ++v28;
      v29 = (int *)(v10 + *((_QWORD *)this + 157));
      v10 += 4;
      v9 = (unsigned int)v5[*v29];
      *v29 = v9;
    }
    while ( *((_DWORD *)this + 26) > v28 );
  }
  v30 = *((_QWORD *)this + 24);
  if ( v30 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v30 + 480LL))(v30, v9, v10);
  v31 = *((_QWORD *)this + 25);
  if ( v31 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v31 + 480LL))(v31, v9, v10);
  v32 = *((_QWORD *)this + 156);
  if ( v32 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v32 + 64LL))(v32, v9, v10);
  v33 = *((void **)this + 165);
  if ( v33 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
    operator delete(v33);
  }
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)this + 25) = *((_QWORD *)a2 + 25);
  *((_QWORD *)this + 165) = *((_QWORD *)a2 + 165);
  ClpModel::setDblParam(this, 4);
  v34 = *((int *)this + 27);
  v35 = *((_QWORD *)this + 129);
  v36 = *((_QWORD *)this + 147);
  *((_QWORD *)this + 131) = v35;
  v34 *= 8;
  *((_QWORD *)this + 149) = v36;
  *((_QWORD *)this + 130) = v34 + v35;
  v37 = *((_QWORD *)this + 123);
  *((_QWORD *)this + 148) = v34 + v36;
  v38 = *((_QWORD *)this + 150);
  v39 = v37 + v34;
  *((_QWORD *)this + 125) = v37;
  v40 = *((_QWORD *)this + 126);
  *((_QWORD *)this + 152) = v38;
  v41 = v34 + v38;
  *((_QWORD *)this + 151) = v41;
  *((_QWORD *)this + 124) = v39;
  *((_QWORD *)this + 128) = v40;
  *((_QWORD *)this + 127) = v40 + v34;
  if ( *((int *)this + 26) > 0 )
  {
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      v44 = (double *)(v42 + v41);
      ++v43;
      v45 = *v44 + *(double *)&v8[v42];
      v42 += 8;
      *v44 = v45;
      if ( *((_DWORD *)this + 26) <= v43 )
        break;
      v41 = *((_QWORD *)this + 151);
    }
  }
  operator delete[](v8);
  ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
  v46 = (ClpPrimalColumnSteepest *)operator new(0x70u);
  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v46, 10);
  *((_QWORD *)this + 156) = v46;
  return ClpPrimalColumnSteepest::saveWeights(v46, this, 2);
}

