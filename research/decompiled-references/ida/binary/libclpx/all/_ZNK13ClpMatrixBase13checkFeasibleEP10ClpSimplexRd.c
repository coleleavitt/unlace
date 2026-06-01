__int64 __fastcall ClpMatrixBase::checkFeasible(ClpMatrixBase *this, ClpSimplex *a2, double *a3)
{
  unsigned __int64 v4; // rdi
  int v5; // ebx
  _QWORD *v8; // r14
  int v9; // r13d
  __int64 v10; // rax
  ClpMatrixBase *v11; // rdi
  unsigned int v12; // ebp
  double v13; // xmm3_8
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  double v18; // xmm2_8
  double v19; // xmm0_8
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r10
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r8
  double v30; // xmm5_8
  double v31; // xmm0_8
  double v32; // xmm2_8
  double v33; // xmm0_8
  unsigned __int64 v34; // rax
  double v35; // xmm1_8
  double v36; // xmm2_8
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-48h]
  double v41; // [rsp+48h] [rbp-40h]

  v4 = *((int *)a2 + 26);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v5 = *((_DWORD *)a2 + 26);
  v8 = (_QWORD *)operator new[](8 * v4);
  v9 = *((_DWORD *)a2 + 27);
  if ( v5 )
  {
    if ( v5 / 8 <= 0 )
    {
      v22 = v8;
    }
    else
    {
      v21 = v8;
      do
      {
        *v21 = 0;
        v21[1] = 0;
        v21 += 8;
        *(v21 - 6) = 0;
        *(v21 - 5) = 0;
        *(v21 - 4) = 0;
        *(v21 - 3) = 0;
        *(v21 - 2) = 0;
        *(v21 - 1) = 0;
      }
      while ( v21 != &v8[8 * (unsigned int)(v5 / 8 - 1) + 8] );
      v22 = &v8[8 * (v5 / 8 - 1) + 8];
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_22;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_19;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_17;
      case 7:
        v22[6] = 0;
LABEL_17:
        v22[5] = 0;
LABEL_18:
        v22[4] = 0;
LABEL_19:
        v22[3] = 0;
LABEL_20:
        v22[2] = 0;
LABEL_21:
        v22[1] = 0;
LABEL_22:
        *v22 = 0;
        break;
      default:
        break;
    }
    (*(void (__fastcall **)(ClpMatrixBase *, _QWORD, _QWORD *, _QWORD, _QWORD, double))(*(_QWORD *)this + 368LL))(
      this,
      *((_QWORD *)a2 + 150),
      v8,
      *((_QWORD *)a2 + 28),
      *((_QWORD *)a2 + 29),
      1.0);
    v23 = *((_QWORD *)a2 + 124);
    v24 = *((_QWORD *)a2 + 127);
    v25 = *((_QWORD *)a2 + 151);
    v13 = 1.01 * *((double *)a2 + 4);
    v26 = *(_DWORD *)(*((_QWORD *)a2 + 43) + 104LL);
    *a3 = 0.0;
    if ( v5 <= 0 )
    {
      v12 = 0;
    }
    else if ( v26 <= 3 )
    {
      v12 = 0;
      v34 = 0;
      do
      {
        v35 = *(double *)&v8[v34 / 8];
        v36 = *(double *)(v24 + v34);
        if ( *(double *)(v23 + v34) - v13 > v35 || v35 > v13 + v36 )
        {
          ++v12;
          *a3 = fmax(*(double *)(v23 + v34) - v35, v35 - v36) + *a3;
        }
        v34 += 8LL;
      }
      while ( v34 != 8LL * (unsigned int)(v5 - 1) + 8 );
    }
    else
    {
      v27 = (unsigned int)(v5 - 1);
      v12 = 0;
      v28 = 0;
      v29 = v27 + 1;
      v30 = 0.00000001;
      do
      {
        v32 = *(double *)&v8[v28];
        v33 = *(double *)(v25 + 8 * v28);
        if ( fabs(v32 - v33) > v30 )
        {
          v41 = v30;
          v40 = v29;
          v39 = v24;
          v38 = v23;
          v37 = v25;
          printf("Row %d stored %g, computed %g\n", v28, v33, *(double *)&v8[v28]);
          v30 = v41;
          v29 = v40;
          v24 = v39;
          v23 = v38;
          v25 = v37;
        }
        v31 = *(double *)(v24 + 8 * v28);
        if ( *(double *)(v23 + 8 * v28) - v13 > v32 || v32 > v13 + v31 )
        {
          ++v12;
          *a3 = *a3 + fmax(*(double *)(v23 + 8 * v28) - v32, v32 - v31);
        }
        ++v28;
      }
      while ( v28 != v29 );
    }
  }
  else
  {
    v10 = *(_QWORD *)this;
    v11 = this;
    v12 = 0;
    (*(void (__fastcall **)(ClpMatrixBase *, _QWORD, _QWORD *, _QWORD, _QWORD, double))(v10 + 368))(
      v11,
      *((_QWORD *)a2 + 150),
      v8,
      *((_QWORD *)a2 + 28),
      *((_QWORD *)a2 + 29),
      1.0);
    v13 = 1.01 * *((double *)a2 + 4);
    *a3 = 0.0;
  }
  v14 = *((_QWORD *)a2 + 125);
  v15 = *((_QWORD *)a2 + 128);
  v16 = *((_QWORD *)a2 + 152);
  if ( v9 > 0 )
  {
    v17 = 0;
    do
    {
      v18 = *(double *)(v16 + v17);
      v19 = *(double *)(v15 + v17);
      if ( *(double *)(v14 + v17) - v13 > v18 || v18 > v13 + v19 )
      {
        ++v12;
        *a3 = *a3 + fmax(*(double *)(v14 + v17) - v18, v18 - v19);
      }
      v17 += 8;
    }
    while ( v17 != 8LL * (unsigned int)(v9 - 1) + 8 );
  }
  operator delete[](v8);
  return v12;
}

