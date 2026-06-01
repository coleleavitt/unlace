void __fastcall ClpSimplex::checkDualSolution(ClpSimplex *this)
{
  _BYTE *v2; // rdi
  int v3; // edi
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // r12
  int v8; // r10d
  double v9; // xmm0_8
  __int64 v10; // rax
  int v11; // r11d
  int v12; // ebp
  char v13; // cl
  double v14; // xmm1_8
  double v15; // xmm10_8
  double v16; // xmm3_8
  double v17; // xmm1_8
  __int64 v18; // rdx
  double v19; // xmm2_8
  double v20; // xmm2_8
  double v21; // xmm11_8
  double v22; // xmm3_8
  int v23; // r13d
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  double v28; // xmm1_8
  double v29; // xmm10_8
  double v30; // xmm2_8
  double v31; // xmm3_8
  __int64 v32; // rdx
  double v33; // xmm1_8
  double v34; // xmm1_8
  double v35; // xmm11_8
  double v36; // xmm2_8
  int IterationNumber; // eax
  double v38; // [rsp+10h] [rbp-38h]
  double v39; // [rsp+18h] [rbp-30h]

  *((_QWORD *)this + 111) = 0;
  *((_QWORD *)this + 153) = 0;
  v2 = *((_BYTE **)this + 24);
  if ( v2[80] && *((int *)this + 325) > 0 && *((_DWORD *)this + 80) == -2 )
  {
    *((_DWORD *)this + 306) = 1;
    *((_QWORD *)this + 114) = 0x3FF0000000000000LL;
    *((_QWORD *)this + 111) = 0x3FF0000000000000LL;
    return;
  }
  *((_QWORD *)this + 87) = 0;
  *((_QWORD *)this + 114) = 0;
  v38 = fmin(0.01, *((double *)this + 96)) + *((double *)this + 109);
  v39 = v38 * 5.0;
  (*(void (__fastcall **)(_BYTE *, ClpSimplex *, _QWORD, _QWORD, __int64))(*(_QWORD *)v2 + 312LL))(v2, this, 0, 0, 3);
  v3 = *((_DWORD *)this + 27);
  v4 = *((_DWORD *)this + 306);
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 307) = v4;
  if ( v3 <= 0 )
  {
    v23 = *((_DWORD *)this + 26);
    if ( v23 <= 0 )
    {
      v12 = -1;
LABEL_81:
      IterationNumber = ClpSimplexProgress::lastIterationNumber((ClpSimplex *)((char *)this + 1408), 0);
      v9 = *((double *)this + 9);
      if ( IterationNumber <= 0 )
LABEL_73:
        *((_DWORD *)this + 337) = v12;
      goto LABEL_74;
    }
    v8 = -1;
    v7 = *((_QWORD *)this + 33);
    v11 = 0;
    v9 = 0.0;
    v12 = -1;
LABEL_37:
    v24 = *((_QWORD *)this + 151);
    v25 = *((_QWORD *)this + 130);
    v26 = 0;
    v27 = v7 + v3;
    while ( 1 )
    {
      v9 = v9 + *(double *)(v24 + 8 * v26) * *(double *)(v25 + 8 * v26);
      *((double *)this + 9) = v9;
      if ( (*(_BYTE *)(v27 + v26) & 7) == 1 || (*(_BYTE *)(v27 + v26) & 0x40) != 0 )
        goto LABEL_69;
      v28 = *(double *)(v24 + 8 * v26);
      v29 = *((double *)this + 110);
      v30 = *(double *)(*((_QWORD *)this + 127) + 8 * v26) - v28;
      v31 = v28 - *(double *)(*((_QWORD *)this + 124) + 8 * v26);
      if ( v30 > v29 )
      {
        v32 = *((_QWORD *)this + 148);
        v33 = *(double *)(v32 + 8 * v26);
        if ( v31 <= v29 )
        {
          if ( v33 >= 0.0 )
            goto LABEL_58;
          v34 = -v33;
          v35 = *((double *)this + 109);
          if ( v34 <= v35 )
            goto LABEL_58;
        }
        else
        {
          if ( fabs(v33) > 100.0 * v38 )
          {
            ++v11;
            if ( v8 < 0 )
              v8 = v3 + v26;
          }
          if ( v12 < 0 )
            v12 = v3 + v26;
          if ( v33 >= 0.0 )
            goto LABEL_61;
          v34 = -v33;
          v35 = *((double *)this + 109);
          if ( v34 <= v35 )
            goto LABEL_60;
        }
        *((double *)this + 111) = *((double *)this + 111) + v34 - v35;
        if ( v34 > v39 )
          *((double *)this + 87) = fmin(v30, 1.0e10) * v34 + *((double *)this + 87);
        if ( v34 > v38 )
          *((double *)this + 114) = v34 - v38 + *((double *)this + 114);
        ++*((_DWORD *)this + 306);
        if ( (*(_BYTE *)(v27 + v26) & 7) != 0 )
          ++*((_DWORD *)this + 307);
      }
LABEL_58:
      if ( v31 > v29 )
      {
        v32 = *((_QWORD *)this + 148);
LABEL_60:
        v33 = *(double *)(v32 + 8 * v26);
LABEL_61:
        if ( v33 > 0.0 )
        {
          v36 = *((double *)this + 109);
          if ( v33 > v36 )
          {
            *((double *)this + 111) = *((double *)this + 111) + v33 - v36;
            if ( v33 > v39 )
              *((double *)this + 87) = fmin(v31, 1.0e10) * v33 + *((double *)this + 87);
            if ( v33 > v38 )
              *((double *)this + 114) = v33 - v38 + *((double *)this + 114);
            ++*((_DWORD *)this + 306);
            if ( (*(_BYTE *)(v27 + v26) & 7) != 0 )
              ++*((_DWORD *)this + 307);
          }
        }
      }
LABEL_69:
      if ( v23 <= (int)++v26 )
        goto LABEL_70;
    }
  }
  v5 = *((_QWORD *)this + 131);
  v6 = *((_QWORD *)this + 152);
  v7 = *((_QWORD *)this + 33);
  v8 = -1;
  v9 = 0.0;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  do
  {
    v9 = v9 + *(double *)(v5 + 8 * v10) * *(double *)(v6 + 8 * v10);
    *((double *)this + 9) = v9;
    v13 = *(_BYTE *)(v7 + v10) & 7;
    if ( v13 == 1 || (*(_BYTE *)(v7 + v10) & 0x40) != 0 )
      goto LABEL_35;
    v14 = *(double *)(v6 + 8 * v10);
    v15 = *((double *)this + 110);
    v16 = *(double *)(*((_QWORD *)this + 128) + 8 * v10) - v14;
    v17 = v14 - *(double *)(*((_QWORD *)this + 125) + 8 * v10);
    if ( v16 <= v15 )
      goto LABEL_24;
    v18 = *((_QWORD *)this + 149);
    v19 = *(double *)(v18 + 8 * v10);
    if ( v17 <= v15 )
    {
      if ( v19 < 0.0 )
      {
        v20 = -v19;
        v21 = *((double *)this + 109);
        if ( v20 > v21 )
        {
LABEL_77:
          if ( v13 )
          {
            ++*((_DWORD *)this + 307);
            *((double *)this + 111) = *((double *)this + 111) + v20 - v21;
            if ( v20 > v39 )
              *((double *)this + 87) = fmin(v16, 1.0e10) * v20 + *((double *)this + 87);
LABEL_21:
            if ( v20 > v38 )
              *((double *)this + 114) = v20 - v38 + *((double *)this + 114);
            ++*((_DWORD *)this + 306);
            goto LABEL_24;
          }
          v20 = v20 * 0.01;
          if ( v20 > v21 )
          {
            *((double *)this + 111) = v20 - v21 + *((double *)this + 111);
            if ( v20 > v39 )
              *((_QWORD *)this + 87) = 0x54B249AD2594C37DLL;
            goto LABEL_21;
          }
        }
      }
LABEL_24:
      if ( v17 <= v15 )
        goto LABEL_35;
      v18 = *((_QWORD *)this + 149);
      goto LABEL_26;
    }
    if ( fabs(v19) > 100.0 * v38 )
    {
      ++v11;
      if ( v8 == -1 )
        v8 = v10;
    }
    if ( v12 == -1 )
      v12 = v10;
    if ( v19 >= 0.0 )
      goto LABEL_27;
    v20 = -v19;
    v21 = *((double *)this + 109);
    if ( v20 > v21 )
      goto LABEL_77;
LABEL_26:
    v19 = *(double *)(v18 + 8 * v10);
LABEL_27:
    if ( v19 > 0.0 )
    {
      v22 = *((double *)this + 109);
      if ( v19 > v22 )
      {
        *((double *)this + 111) = *((double *)this + 111) + v19 - v22;
        if ( v19 > v39 )
          *((double *)this + 87) = fmin(v17, 1.0e10) * v19 + *((double *)this + 87);
        if ( v19 > v38 )
          *((double *)this + 114) = v19 - v38 + *((double *)this + 114);
        ++*((_DWORD *)this + 306);
        if ( (*(_BYTE *)(v7 + v10) & 7) != 0 )
          ++*((_DWORD *)this + 307);
      }
    }
LABEL_35:
    ++v10;
  }
  while ( (unsigned int)(v3 - 1) + 1LL != v10 );
  v23 = *((_DWORD *)this + 26);
  if ( v23 > 0 )
    goto LABEL_37;
LABEL_70:
  if ( *((int *)this + 325) >= 0 || v8 < 0 )
  {
    if ( v11 )
      goto LABEL_73;
    goto LABEL_81;
  }
  *((_DWORD *)this + 337) = v8;
LABEL_74:
  *((double *)this + 9) = (v9 + *(double *)(*((_QWORD *)this + 20) + 8LL))
                        / (*((double *)this + 11)
                         * *((double *)this + 12));
}

