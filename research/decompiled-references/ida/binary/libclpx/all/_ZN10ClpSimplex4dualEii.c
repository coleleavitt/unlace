__int64 __fastcall ClpSimplex::dual(ClpSimplex *this, int a2, int a3)
{
  __int64 v4; // rax
  int v5; // r12d
  int v6; // ebp
  __int64 v7; // r13
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  int v18; // eax
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rbx
  void *v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // edx
  void *v27; // rdi
  int v28; // r9d
  __int64 v29; // rsi
  int v30; // ecx
  int i; // edi
  _BYTE *v32; // rax
  _BYTE *v33; // rax
  double v34; // xmm2_8
  double *v35; // rax
  double v36; // xmm3_8
  double v37; // xmm1_8
  _BYTE *v38; // rax
  __int64 v39; // rax
  _BYTE *v40; // rcx
  double v41; // xmm2_8
  double *v42; // rdx
  double v43; // xmm3_8
  double v44; // xmm1_8
  int v45; // edx
  int v46; // edi
  unsigned int v47; // eax
  int v48; // [rsp+0h] [rbp-58h]
  char v49; // [rsp+7h] [rbp-51h]
  int v50; // [rsp+8h] [rbp-50h]
  int v51; // [rsp+Ch] [rbp-4Ch]
  _BYTE v52[60]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v4 = *((_QWORD *)this + 20);
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 26);
    if ( v8 )
      return 0;
    else
      *((_DWORD *)this + 80) = 0;
    return v8;
  }
  v5 = *(_DWORD *)(v4 + 20);
  v6 = a3;
  *(_DWORD *)(v4 + 20) = 0;
  v7 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 118) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 119) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 120) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 121) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 122) = 0x7FEFFFFFFFFFFFFFLL;
  v8 = ClpSimplexDual::dual(this, a2, a3);
  (***((void (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 124);
  v9 = *((_DWORD *)this + 84);
  if ( (v9 & 0x800) != 0 )
  {
    v10 = *((_DWORD *)this + 80);
    if ( v10 == 10 )
    {
      if ( !*((_DWORD *)this + 308)
        && 50.0 * *((double *)this + 109) > *((double *)this + 111)
        && *((int *)this + 327) > 99 )
      {
        v15 = (*((_BYTE *)this + 730) & 8) == 0;
        *((_DWORD *)this + 80) = 0;
        if ( v15 )
          goto LABEL_9;
        goto LABEL_6;
      }
LABEL_40:
      if ( (*((_BYTE *)this + 730) & 8) == 0 )
        goto LABEL_41;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 80);
  }
  if ( v10 == 1 )
  {
    if ( (v9 & 0x1400) != 0 && (v9 & 0x20) == 0 )
    {
      if ( (*((_BYTE *)this + 730) & 8) == 0 )
        goto LABEL_9;
      goto LABEL_6;
    }
    if ( (unsigned int)ClpSimplexDual::checkFakeBounds(this) )
    {
      *((_DWORD *)this + 80) = 10;
      goto LABEL_40;
    }
  }
  if ( (*((_BYTE *)this + 730) & 8) != 0 )
  {
LABEL_6:
    v11 = *((_QWORD *)this + 165);
    if ( (!v11 || !*(_DWORD *)(v11 + 112)) && fabs(*((double *)this + 1)) > 1.0e30 )
    {
      *((_DWORD *)this + 80) = 0;
      goto LABEL_9;
    }
  }
  if ( *((_DWORD *)this + 80) != 10 )
    goto LABEL_9;
LABEL_41:
  v48 = *((_DWORD *)this + 327);
  v18 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  *((_DWORD *)this + 327) = 100;
  v50 = v18;
  v49 = ClpSimplex::initialDenseFactorization(this);
  ClpSimplex::setInitialDenseFactorization(this, 1);
  v19 = *((unsigned int *)this + 77);
  v20 = *((_DWORD *)this + 74);
  if ( (_DWORD)v19 )
  {
    if ( (int)((int)&stru_186A0 + v19) < v20 )
      *((_DWORD *)this + 74) = *((_DWORD *)this + 27) + v19 + 2 * *((_DWORD *)this + 26) + 1000;
  }
  else
  {
    *((_DWORD *)this + 183) += 2 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
  }
  v21 = *((_QWORD *)this + 24);
  if ( v21 )
  {
    v51 = v19;
    v22 = __dynamic_cast(
            *((const void **)this + 24),
            (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
            (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
            0);
    LODWORD(v19) = v51;
    if ( *((_DWORD *)this + 80) == 10 && *((_QWORD *)this + 20) == v7 && v22 )
      v6 |= 2u;
  }
  *((_DWORD *)this + 182) |= 0x100u;
  *((_DWORD *)this + 183) = v19;
  if ( ((*(__int64 (__fastcall **)(__int64, ClpSimplex *, __int64, _BYTE *))(*(_QWORD *)v21 + 320LL))(v21, this, 4, v52)
      & 1) != 0 )
    v8 = ClpSimplexPrimal::primal(this, 1, v6);
  else
    v8 = ClpSimplexDual::dual(this, 0, v6);
  v23 = *((_DWORD *)this + 84);
  *((_DWORD *)this + 182) &= ~0x100u;
  *((_DWORD *)this + 183) = 0;
  if ( (v23 & 0x3000000) != 0 && (v23 & 0x20) == 0 )
  {
    v27 = *((void **)this + 27);
    if ( v27 )
      operator delete[](v27);
    *((_QWORD *)this + 27) = 0;
  }
  v24 = *((_QWORD *)this + 20);
  if ( v24 != v7 )
  {
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 80LL))(v24);
    v25 = *((_DWORD *)this + 80);
    *((_QWORD *)this + 20) = v7;
    if ( v25 )
      goto LABEL_54;
    v8 = ClpSimplexPrimal::primal(this, 1, v6);
  }
  v25 = *((_DWORD *)this + 80);
LABEL_54:
  if ( v25 == 3 && *((_DWORD *)this + 77) < v20 )
  {
    v28 = *((_DWORD *)this + 26);
    v29 = 0;
    v30 = 0;
    for ( i = *((_DWORD *)this + 27); v30 < v28; v29 += 8 )
    {
      v33 = (_BYTE *)(*((_QWORD *)this + 33) + v30 + i);
      if ( (*v33 & 7) != 1 )
      {
        *v33 = *v33 & 0xF8 | 4;
        v34 = *((double *)this + 110);
        v35 = (double *)(v29 + *((_QWORD *)this + 14));
        v36 = *(double *)(*((_QWORD *)this + 18) + v29);
        if ( v34 >= fabs(*v35 - v36) )
        {
          *v35 = v36;
          v32 = (_BYTE *)(*((_QWORD *)this + 33) + v30 + *((_DWORD *)this + 27));
          *v32 = *v32 & 0xF8 | 3;
          v28 = *((_DWORD *)this + 26);
          i = *((_DWORD *)this + 27);
        }
        else
        {
          v37 = *(double *)(*((_QWORD *)this + 19) + v29);
          if ( v34 >= fabs(*v35 - v37) )
          {
            *v35 = v37;
            v38 = (_BYTE *)(*((_QWORD *)this + 33) + v30 + *((_DWORD *)this + 27));
            *v38 = *v38 & 0xF8 | 2;
          }
          v28 = *((_DWORD *)this + 26);
          i = *((_DWORD *)this + 27);
        }
      }
      ++v30;
    }
    if ( i > 0 )
    {
      v39 = 0;
      do
      {
        v40 = (_BYTE *)(v39 + *((_QWORD *)this + 33));
        if ( (*v40 & 7) != 1 )
        {
          *v40 = *v40 & 0xF8 | 4;
          v41 = *((double *)this + 110);
          v42 = (double *)(*((_QWORD *)this + 15) + 8 * v39);
          v43 = *(double *)(*((_QWORD *)this + 22) + 8 * v39);
          if ( v41 >= fabs(*v42 - v43) )
          {
            *v42 = v43;
            *(_BYTE *)(v39 + *((_QWORD *)this + 33)) = *(_BYTE *)(v39 + *((_QWORD *)this + 33)) & 0xF8 | 3;
            i = *((_DWORD *)this + 27);
          }
          else
          {
            v44 = *(double *)(*((_QWORD *)this + 23) + 8 * v39);
            if ( v41 >= fabs(*v42 - v44) )
            {
              *v42 = v44;
              *(_BYTE *)(v39 + *((_QWORD *)this + 33)) = *(_BYTE *)(v39 + *((_QWORD *)this + 33)) & 0xF8 | 2;
            }
            i = *((_DWORD *)this + 27);
          }
        }
        ++v39;
      }
      while ( (int)v39 < i );
      v28 = *((_DWORD *)this + 26);
    }
    v45 = *((_DWORD *)this + 77);
    *((_DWORD *)this + 80) = -1;
    *((_DWORD *)this + 183) = v45;
    v46 = v45 + 2 * v28 + 1000 + i;
    if ( v46 > v20 )
      v46 = v20;
    *((_DWORD *)this + 182) |= 0x100u;
    *((_DWORD *)this + 74) = v46;
    *((_DWORD *)this + 327) = v48;
    v47 = ClpSimplexPrimal::primal(this, 0, v6);
    *((_DWORD *)this + 182) &= ~0x100u;
    *((_DWORD *)this + 183) = 0;
    v8 = v47;
    ClpSimplex::computeObjectiveValue(this, 0);
    memset(*((void **)this + 17), 0, 8LL * *((int *)this + 27));
  }
  *((_DWORD *)this + 74) = v20;
  ClpSimplex::setInitialDenseFactorization(this, v49);
  v15 = *((_DWORD *)this + 80) == 10;
  *((_DWORD *)this + 327) = v48;
  if ( v15 )
    *((_DWORD *)this + 80) = 4 * (*((_DWORD *)this + 308) != 0);
  CoinMessageHandler::setLogLevel(*((CoinMessageHandler **)this + 43), v50);
LABEL_9:
  *(_DWORD *)(*((_QWORD *)this + 20) + 20LL) = v5;
  ClpModel::onStopped(this);
  if ( *((_DWORD *)this + 80) )
    return v8;
  v12 = *((_DWORD *)this + 308);
  if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
  {
    v26 = *((_DWORD *)this + 306);
    if ( !v12 && !v26 )
      return v8;
    printf(
      "minor inaccuracy primal sum %g (%d) error %g, dual %g (%d) %g\n",
      *((double *)this + 112),
      v12,
      *((double *)this + 95),
      *((double *)this + 111),
      v26,
      *((double *)this + 96));
    v12 = *((_DWORD *)this + 308);
  }
  if ( v12 )
  {
    v13 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 308) = 0;
    *((_QWORD *)this + 112) = 0;
    if ( !v13 )
    {
      *((_DWORD *)this + 81) = 2;
      v14 = *((_DWORD *)this + 306);
      goto LABEL_23;
    }
    if ( v13 == 3 )
      *((_DWORD *)this + 81) = 4;
  }
  v14 = *((_DWORD *)this + 306);
LABEL_23:
  if ( v14 )
  {
    v16 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 306) = 0;
    *((_QWORD *)this + 111) = 0;
    if ( v16 )
    {
      if ( v16 == 2 )
        *((_DWORD *)this + 81) = 4;
    }
    else
    {
      *((_DWORD *)this + 81) = 3;
    }
  }
  return v8;
}

