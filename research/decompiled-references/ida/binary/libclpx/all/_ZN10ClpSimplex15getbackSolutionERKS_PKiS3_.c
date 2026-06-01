__int64 __fastcall ClpSimplex::getbackSolution(ClpSimplex *this, const ClpSimplex *a2, const int *a3, const int *a4)
{
  int v7; // eax
  __int64 v8; // r9
  int v9; // r14d
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rsi
  _BYTE *v19; // rax
  __int64 v20; // xmm0_8
  int v21; // edx
  __int64 v22; // rdx
  CoinPackedMatrix *v23; // rdi
  __int64 (__fastcall *v24)(ClpPackedMatrix *); // rax
  int v26; // eax
  _QWORD *v27; // rsi
  int v28; // eax
  __int64 v29; // rdi
  _QWORD *v30; // rax
  int v31; // ecx
  _QWORD *v32; // rdi

  *((_QWORD *)this + 111) = *((_QWORD *)a2 + 111);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_QWORD *)this + 112) = *((_QWORD *)a2 + 112);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((double *)this + 9) = (*(double *)a2 * *((double *)a2 + 9) - *((double *)a2 + 5) + *((double *)this + 5))
                        / *(double *)this;
  v7 = *((_DWORD *)a2 + 27);
  v8 = *((_QWORD *)a2 + 15);
  v9 = *((_DWORD *)a2 + 26);
  v10 = *((_QWORD *)a2 + 17);
  if ( v7 > 0 )
  {
    v11 = (unsigned int)(v7 - 1);
    v12 = 0;
    v13 = v11 + 1;
    do
    {
      v14 = a4[v12];
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v14) = *(_QWORD *)(v8 + 8 * v12);
      *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v14) = *(_QWORD *)(v10 + 8 * v12);
      v15 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v12++);
      *(_BYTE *)(*((_QWORD *)this + 33) + v14) = *(_BYTE *)(*((_QWORD *)this + 33) + v14) & 0xF8 | v15 & 7;
    }
    while ( v13 != v12 );
  }
  v16 = *((_QWORD *)a2 + 16);
  memset(*((void **)this + 16), 0, 8LL * *((int *)this + 26));
  if ( v9 > 0 )
  {
    v17 = 0;
    do
    {
      v18 = a3[v17];
      v19 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v18 + *((_DWORD *)this + 27));
      *v19 = *v19 & 0xF8 | *(_BYTE *)(*((_QWORD *)a2 + 33) + (int)v17 + *((_DWORD *)a2 + 27)) & 7;
      v20 = *(_QWORD *)(v16 + 8 * v17++);
      *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v18) = v20;
    }
    while ( (unsigned int)(v9 - 1) + 1LL != v17 );
  }
  v21 = *((_DWORD *)this + 26);
  if ( v21 )
  {
    v26 = v21 + 7;
    v27 = *((_QWORD **)this + 14);
    if ( v21 >= 0 )
      v26 = *((_DWORD *)this + 26);
    v28 = v26 >> 3;
    if ( v28 > 0 )
    {
      v29 = (unsigned int)(v28 - 1);
      v30 = *((_QWORD **)this + 14);
      v31 = v29;
      v32 = &v27[8 * v29 + 8];
      do
      {
        *v30 = 0;
        v30[1] = 0;
        v30 += 8;
        *(v30 - 6) = 0;
        *(v30 - 5) = 0;
        *(v30 - 4) = 0;
        *(v30 - 3) = 0;
        *(v30 - 2) = 0;
        *(v30 - 1) = 0;
      }
      while ( v30 != v32 );
      v27 += 8 * v31 + 8;
    }
    switch ( v21 % 8 )
    {
      case 1:
        goto LABEL_25;
      case 2:
        goto LABEL_24;
      case 3:
        goto LABEL_23;
      case 4:
        goto LABEL_22;
      case 5:
        goto LABEL_21;
      case 6:
        goto LABEL_20;
      case 7:
        v27[6] = 0;
LABEL_20:
        v27[5] = 0;
LABEL_21:
        v27[4] = 0;
LABEL_22:
        v27[3] = 0;
LABEL_23:
        v27[2] = 0;
LABEL_24:
        v27[1] = 0;
LABEL_25:
        *v27 = 0;
        break;
      default:
        break;
    }
  }
  v22 = *((_QWORD *)this + 24);
  v23 = nullptr;
  if ( v22 )
  {
    v24 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v22;
    if ( v24 == ClpPackedMatrix::getPackedMatrix )
      v23 = *(CoinPackedMatrix **)(v22 + 88);
    else
      v23 = (CoinPackedMatrix *)v24(*((ClpPackedMatrix **)this + 24));
  }
  return CoinPackedMatrix::times(v23, *((const double **)this + 15), *((double **)this + 14));
}

