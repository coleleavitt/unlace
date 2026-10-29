__int64 __fastcall ClpSimplex::checkBothSolutions(ClpSimplex *this)
{
  _BYTE *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  double v5; // xmm7_8
  double v6; // xmm0_8
  double v7; // xmm8_8
  double v8; // xmm1_8
  int v9; // eax
  int v10; // r12d
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // r13d
  __int64 v17; // rdx
  double v18; // xmm2_8
  __int64 v19; // rax
  double v20; // xmm4_8
  int v21; // r15d
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  double v25; // xmm13_8
  char v26; // bp
  double v27; // xmm13_8
  double v28; // xmm14_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  int v31; // edx
  double v32; // xmm14_8
  double v33; // xmm0_8
  double v34; // xmm1_8
  int v35; // [rsp+0h] [rbp-68h]
  double v36; // [rsp+8h] [rbp-60h]
  double v37; // [rsp+10h] [rbp-58h]
  double v38; // [rsp+20h] [rbp-48h]
  unsigned int v39; // [rsp+2Ch] [rbp-3Ch]

  v2 = *((_BYTE **)this + 24);
  if ( v2[80] && *((int *)this + 325) > 0 && *((_DWORD *)this + 80) == -2
    || (*(__int64 (__fastcall **)(_BYTE *, ClpSimplex *, _QWORD, _QWORD))(*(_QWORD *)v2 + 464LL))(v2, this, 0, 0) )
  {
    *((_DWORD *)this + 182) &= ~8u;
    ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
    return ClpSimplex::checkDualSolution(this);
  }
  v4 = *((_QWORD *)this + 24);
  v5 = *((double *)this + 110);
  *((_QWORD *)this + 9) = 0;
  v6 = *((double *)this + 95);
  *((_QWORD *)this + 112) = 0;
  *((_DWORD *)this + 308) = 0;
  v7 = *((double *)this + 109);
  *((_QWORD *)this + 115) = 0;
  *((_QWORD *)this + 111) = 0;
  v8 = *((double *)this + 96);
  *((_DWORD *)this + 306) = 0;
  *((_QWORD *)this + 114) = 0;
  *((_QWORD *)this + 87) = 0;
  v38 = fmin(0.01, fmax(v6, 0.0 * v5)) + v5;
  v37 = fmin(0.01, fmax(v8, v7 * 5.0)) + v7;
  v36 = 5.0 * v37;
  (*(void (__fastcall **)(__int64, ClpSimplex *, __int64))(*(_QWORD *)v4 + 304LL))(v4, this, 2);
  (*(void (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 312LL))(
    *((_QWORD *)this + 24),
    this,
    0,
    0,
    3);
  v9 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  *((_DWORD *)this + 182) |= 8u;
  if ( v9 > 0 )
  {
    v10 = -1;
    v11 = *((_QWORD *)this + 150);
    v12 = *((_QWORD *)this + 129);
    v13 = *((_QWORD *)this + 126);
    v14 = *((_QWORD *)this + 123);
    v15 = *((_QWORD *)this + 33);
    v16 = *((_DWORD *)this + 306);
    v17 = (unsigned int)(v9 - 1) + 1LL;
    v18 = *((double *)this + 9);
    v19 = 0;
    *(_QWORD *)&v20 = *(_QWORD *)&v5 ^ 0x8000000000000000LL;
    v21 = -1;
    v39 = 0;
    v35 = 0;
    while ( 1 )
    {
      v23 = *(double *)(v11 + 8 * v19);
      v18 = v18 + *(double *)(v12 + 8 * v19) * v23;
      *((double *)this + 9) = v18;
      v24 = *(double *)(v13 + 8 * v19) - v23;
      if ( v20 > v24 )
        break;
      v25 = v23 - *(double *)(v14 + 8 * v19);
      v26 = *(_BYTE *)(v15 + v19) & 7;
      if ( v20 > v25 )
      {
        v27 = -v25;
        if ( v26 != 1 )
          *((_DWORD *)this + 182) &= ~8u;
        *((double *)this + 112) = v27 - *((double *)this + 110) + *((double *)this + 112);
        if ( v27 > v38 )
          *((double *)this + 115) = v27 - v38 + *((double *)this + 115);
LABEL_12:
        ++*((_DWORD *)this + 308);
        goto LABEL_13;
      }
      if ( v26 == 1 || (*(_BYTE *)(v15 + v19) & 0x40) != 0 )
        goto LABEL_13;
      v28 = *(double *)(*((_QWORD *)this + 147) + 8 * v19);
      if ( v5 > v25 )
      {
        if ( v24 <= v5 || COERCE_DOUBLE(*(_QWORD *)&v7 ^ 0x8000000000000000LL) <= v28 )
          goto LABEL_13;
        *((double *)this + 111) = *((double *)this + 111) - (v7 + v28);
        if ( -v36 > v28 )
          *((double *)this + 87) = *((double *)this + 87) - v24 * v28;
        if ( -v37 > v28 )
          *((double *)this + 114) = *((double *)this + 114) - (v28 + v37);
        goto LABEL_44;
      }
      if ( v5 <= v24 )
      {
        *((_DWORD *)this + 182) &= ~8u;
        v32 = fabs(v28 * 0.01);
        if ( v32 > v7 )
        {
          v35 += (*(_BYTE *)(v15 + v19) & 7) == 0;
          ++v16;
          v33 = v32 - v7 + *((double *)this + 111);
          *((_DWORD *)this + 306) = v16;
          *((_QWORD *)this + 87) = 0x54B249AD2594C37DLL;
          *((double *)this + 111) = v33;
          if ( v32 > v37 )
          {
            v34 = v23 - v37;
            ++v39;
            if ( v21 == -1 )
              v21 = v19;
            *((double *)this + 114) = *((double *)this + 114) + v34;
          }
        }
        if ( v10 == -1 )
          v10 = v19;
        goto LABEL_13;
      }
      if ( v28 > v7 )
      {
        *((double *)this + 111) = v28 - v7 + *((double *)this + 111);
        if ( v28 > v36 )
          *((double *)this + 87) = v25 * v28 + *((double *)this + 87);
        if ( v28 > v37 )
          *((double *)this + 114) = v28 - v37 + *((double *)this + 114);
LABEL_44:
        *((_DWORD *)this + 306) = ++v16;
      }
LABEL_13:
      if ( v17 == ++v19 )
      {
        result = v21 >= 0;
        goto LABEL_30;
      }
    }
    v22 = -v24;
    if ( (*(_BYTE *)(v15 + v19) & 7) != 1 )
      *((_DWORD *)this + 182) &= ~8u;
    *((double *)this + 112) = v22 - *((double *)this + 110) + *((double *)this + 112);
    if ( v22 > v38 )
      *((double *)this + 115) = v22 - v38 + *((double *)this + 115);
    goto LABEL_12;
  }
  v10 = -1;
  v18 = *((double *)this + 9);
  v16 = *((_DWORD *)this + 306);
  result = 0;
  v21 = -1;
  v39 = 0;
  v35 = 0;
LABEL_30:
  v29 = *((double *)this + 11) * *((double *)this + 12);
  v30 = v18 + *(double *)(*((_QWORD *)this + 20) + 8LL);
  v31 = *((_DWORD *)this + 325);
  *((_DWORD *)this + 307) = v16 - v35;
  *((double *)this + 9) = v30 / v29;
  if ( v31 < 0 && (_BYTE)result )
  {
    *((_DWORD *)this + 337) = v21;
  }
  else
  {
    result = v39;
    if ( v39
      || (result = ClpSimplexProgress::lastIterationNumber((ClpSimplex *)((char *)this + 1408), 0), (int)result <= 0) )
    {
      *((_DWORD *)this + 337) = v10;
    }
  }
  return result;
}

