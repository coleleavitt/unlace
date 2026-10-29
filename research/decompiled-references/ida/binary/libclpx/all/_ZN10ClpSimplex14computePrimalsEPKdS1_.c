__int64 __fastcall ClpSimplex::computePrimals(ClpSimplex *this, double *src, double *a3)
{
  double *v5; // rdi
  double *v6; // rdi
  double *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  double v18; // xmm0_8
  int v19; // esi
  CoinIndexedVector *v20; // rax
  CoinIndexedVector *v21; // rbx
  double *v22; // r12
  CoinIndexedVector *v23; // r13
  double v24; // xmm2_8
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // xmm0_8
  __int64 v29; // rsi
  unsigned int v30; // r15d
  int v31; // ecx
  __int64 v32; // rax
  int i; // edx
  double v34; // xmm0_8
  double v35; // xmm1_8
  double v36; // xmm0_8
  double v37; // xmm1_8
  __int64 v38; // rbp
  __int64 v39; // r15
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rdx
  double v43; // xmm0_8
  int v44; // esi
  int v45; // edi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  double v49; // xmm0_8
  int v50; // edi
  char v51; // bp
  double *v52; // r15
  CoinIndexedVector *v54; // rax
  int v55; // eax
  int *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // xmm0_8
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  int v68; // ecx
  double v69; // xmm0_8
  int v70; // eax
  int v71; // [rsp+4h] [rbp-74h]
  double v72; // [rsp+8h] [rbp-70h]
  double v73; // [rsp+10h] [rbp-68h]
  __int64 v74; // [rsp+18h] [rbp-60h]
  void **v75; // [rsp+20h] [rbp-58h]
  CoinIndexedVector *v76; // [rsp+30h] [rbp-48h]
  CoinIndexedVector *v77; // [rsp+38h] [rbp-40h]

  v75 = *((void ***)this + 132);
  v76 = *((CoinIndexedVector **)this + 133);
  CoinIndexedVector::clear(v76);
  v77 = *((CoinIndexedVector **)this + 134);
  CoinIndexedVector::clear(v77);
  v5 = *((double **)this + 152);
  if ( v5 != a3 )
    memcpy(v5, a3, 8LL * *((int *)this + 27));
  v6 = *((double **)this + 151);
  if ( v6 != src )
    memcpy(v6, src, 8LL * *((int *)this + 26));
  v7 = *((double **)v76 + 1);
  v8 = *(_QWORD *)v76;
  v9 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, __int64))(**((_QWORD **)this + 24) + 464LL))(
         *((_QWORD *)this + 24),
         this,
         0,
         1);
  v74 = v9;
  if ( !v9 )
  {
    if ( *((int *)this + 26) > 0 )
    {
      v65 = 0;
      do
      {
        LODWORD(v9) = v9 + 1;
        v66 = *(int *)(*((_QWORD *)this + 157) + v65);
        v65 += 4;
        *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v66) = 0;
      }
      while ( *((_DWORD *)this + 26) > (int)v9 );
    }
    (*(void (__fastcall **)(_QWORD, ClpSimplex *, _QWORD))(**((_QWORD **)this + 24) + 304LL))(
      *((_QWORD *)this + 24),
      this,
      0);
    ClpModel::times(this, -1.0, *((const double **)this + 152), v7);
    if ( *((int *)this + 26) > 0 )
    {
      v67 = 0;
      v16 = 0;
      v68 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v69 = *(double *)(*((_QWORD *)this + 151) + v67 * 8) + v7[v67];
          if ( v69 != 0.0 )
            break;
          v7[v67] = 0.0;
          ++v68;
          ++v67;
          if ( *((_DWORD *)this + 26) <= v68 )
            goto LABEL_15;
        }
        v7[v67] = v69;
        *(_DWORD *)(v8 + 4 * v16) = v68;
        ++v67;
        ++v68;
        v19 = v16 + 1;
        if ( *((_DWORD *)this + 26) <= v68 )
          break;
        v16 = v19;
      }
LABEL_62:
      *((_DWORD *)v76 + 4) = v19;
      goto LABEL_63;
    }
LABEL_82:
    v20 = v76;
    *((_DWORD *)v76 + 4) = 0;
LABEL_16:
    *((_BYTE *)v20 + 28) = 0;
    goto LABEL_17;
  }
  if ( *((int *)this + 26) <= 0 )
    goto LABEL_82;
  v10 = 0;
  v11 = 0;
  do
  {
    ++v11;
    v12 = *(int *)(*((_QWORD *)this + 157) + v10);
    v10 += 4;
    *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v12) = 0;
    v13 = *((_DWORD *)this + 26);
  }
  while ( v13 > v11 );
  if ( v13 <= 0 )
    goto LABEL_82;
  v14 = v74;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v18 = *(double *)(*((_QWORD *)this + 151) + v15 * 8) + *(double *)(v14 + v15 * 8);
      if ( v18 == 0.0 )
        break;
      v7[v15] = v18;
      *(_DWORD *)(v8 + 4 * v16) = v17;
      ++v15;
      ++v17;
      v19 = v16 + 1;
      if ( *((_DWORD *)this + 26) <= v17 )
        goto LABEL_62;
      v16 = v19;
      v14 = v74;
    }
    v7[v15] = 0.0;
    ++v17;
    ++v15;
  }
  while ( *((_DWORD *)this + 26) > v17 );
LABEL_15:
  v20 = v76;
  *((_DWORD *)v76 + 4) = v16;
  if ( !(_DWORD)v16 )
    goto LABEL_16;
LABEL_63:
  ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), (CoinIndexedVector *)v75, v76, 0);
LABEL_17:
  if ( *((int *)this + 309) < 0 )
  {
    v70 = *((_DWORD *)this + 26);
    if ( v70 > 0 )
      memset(v75[1], 0, 8LL * (unsigned int)(v70 - 1) + 8);
  }
  else
  {
    v21 = v76;
    v22 = (double *)v75[1];
    v23 = v77;
    v71 = 0;
    v72 = 1.797693134862316e308;
    v24 = 0.0;
    v25 = *((_QWORD *)v76 + 1);
    if ( !v74 )
      goto LABEL_52;
LABEL_19:
    if ( *((int *)this + 26) > 0 )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = *(_QWORD *)(v25 + 2 * v26);
        ++v27;
        v29 = *(int *)(*((_QWORD *)this + 157) + v26);
        v26 += 4;
        *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v29) = v28;
      }
      while ( *((_DWORD *)this + 26) > v27 );
    }
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64))(**((_QWORD **)this + 24) + 304LL))(
        *((_QWORD *)this + 24),
        this,
        1);
      v30 = *((_DWORD *)this + 84);
      ClpModel::setSpecialOptions(this, 0x10u);
      ClpModel::times(this, -1.0, *((const double **)this + 152), v22);
      ClpModel::setSpecialOptions(this, v30);
      v31 = *((_DWORD *)this + 26);
      *((_QWORD *)this + 95) = 0;
      if ( v31 <= 0 )
      {
        v37 = 0.0;
LABEL_27:
        v73 = v24;
        if ( v37 >= v72 )
          goto LABEL_45;
      }
      else
      {
        v32 = 0;
        for ( i = 0; i < v31; ++i )
        {
          while ( 1 )
          {
            v34 = *(double *)(*((_QWORD *)this + 151) + v32 * 8) + v22[v32];
            v35 = 131072.0 * v34;
            v36 = fabs(v34);
            v22[v32] = v35;
            v37 = *((double *)this + 95);
            if ( v36 <= v37 )
              break;
            v31 = *((_DWORD *)this + 26);
            ++i;
            ++v32;
            *((double *)this + 95) = v36;
            if ( i >= v31 )
            {
              v37 = v36;
              goto LABEL_27;
            }
          }
          v31 = *((_DWORD *)this + 26);
          ++v32;
        }
        v73 = v24;
        if ( v37 >= v72 )
        {
LABEL_45:
          v51 = 0;
          v52 = v22;
          v21 = v23;
          if ( v31 <= 0 )
            goto LABEL_46;
          goto LABEL_66;
        }
      }
      if ( *((_DWORD *)this + 309) <= v71 || v37 <= 1.0e-10 )
      {
        v52 = v22;
        v51 = 1;
        goto LABEL_65;
      }
      v38 = *(_QWORD *)v23;
      v39 = *((_QWORD *)v23 + 1);
      CoinIndexedVector::clear(v23);
      v40 = *((_DWORD *)this + 26);
      if ( v40 <= 0 )
      {
        *((_DWORD *)v23 + 4) = 0;
      }
      else
      {
        v41 = 0;
        v42 = 0;
        do
        {
          v43 = v22[v41];
          v44 = v41;
          if ( v43 != v73 )
          {
            while ( 1 )
            {
              *(double *)(v39 + 8 * v41) = v43;
              *(_DWORD *)(v38 + 4 * v42) = v44;
              v22[v41] = 0.0;
              v40 = *((_DWORD *)this + 26);
              v45 = v42 + 1;
              if ( (int)++v41 >= v40 )
                break;
              v43 = v22[v41];
              v42 = v45;
              v44 = v41;
              if ( v43 == v73 )
                goto LABEL_35;
            }
            *((_DWORD *)v23 + 4) = v45;
            goto LABEL_38;
          }
LABEL_35:
          ++v41;
        }
        while ( v40 > (int)v41 );
        *((_DWORD *)v23 + 4) = v42;
        if ( (_DWORD)v42 )
          goto LABEL_38;
      }
      *((_BYTE *)v23 + 28) = 0;
LABEL_38:
      v72 = *((double *)this + 95);
      ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), (CoinIndexedVector *)v75, v23, 0);
      v46 = *((_QWORD *)v21 + 1);
      v24 = v73;
      if ( *((int *)this + 26) <= 0 )
      {
        *((_DWORD *)v23 + 4) = 0;
      }
      else
      {
        v47 = 0;
        v48 = 0;
        do
        {
          while ( 1 )
          {
            v49 = 0.00000762939453125 * *(double *)(v39 + 8 * v47) + *(double *)(v46 + 8 * v47);
            if ( v49 == v73 )
              break;
            *(double *)(v39 + 8 * v47) = v49;
            v50 = v48 + 1;
            *(_DWORD *)(v38 + 4 * v48) = v47++;
            if ( (int)v47 >= *((_DWORD *)this + 26) )
            {
              *((_DWORD *)v23 + 4) = v50;
              goto LABEL_50;
            }
            v48 = v50;
          }
          *(_QWORD *)(v39 + 8 * v47++) = 0;
        }
        while ( *((_DWORD *)this + 26) > (int)v47 );
        *((_DWORD *)v23 + 4) = v48;
        if ( (_DWORD)v48 )
          goto LABEL_50;
      }
      *((_BYTE *)v23 + 28) = 0;
LABEL_50:
      if ( *((_DWORD *)this + 309) < ++v71 )
        break;
      v54 = v21;
      v21 = v23;
      v25 = *((_QWORD *)v23 + 1);
      v23 = v54;
      if ( v74 )
        goto LABEL_19;
LABEL_52:
      v55 = *((_DWORD *)v21 + 4);
      if ( v55 > 0 )
      {
        v56 = *(int **)v21;
        v57 = (unsigned int)(v55 - 1);
        v58 = *(_QWORD *)v21 + 4LL;
        v59 = v58 + 4 * v57;
        while ( 1 )
        {
          *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * *(int *)(*((_QWORD *)this + 157) + 4LL * *v56)) = *(_QWORD *)(v25 + 8LL * *v56);
          v56 = (int *)v58;
          if ( v59 == v58 )
            break;
          v58 += 4;
        }
      }
    }
    v52 = v22;
    v31 = *((_DWORD *)this + 26);
    v21 = v23;
    v51 = 1;
LABEL_65:
    if ( v31 <= 0 )
      goto LABEL_46;
LABEL_66:
    memset(v52, 0, 8LL * (unsigned int)(v31 - 1) + 8);
    if ( !v51 )
    {
      v60 = *((_QWORD *)v21 + 1);
      if ( *((int *)this + 26) > 0 )
      {
        v61 = 0;
        v62 = 0;
        do
        {
          v63 = *(_QWORD *)(v60 + 2 * v61);
          ++v62;
          v64 = *(int *)(*((_QWORD *)this + 157) + v61);
          v61 += 4;
          *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v64) = v63;
        }
        while ( *((_DWORD *)this + 26) > v62 );
      }
    }
  }
LABEL_46:
  CoinIndexedVector::clear(v76);
  return CoinIndexedVector::clear(v77);
}

