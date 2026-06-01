_BOOL8 __fastcall ClpDynamicMatrix::updatePivot(ClpDynamicMatrix *this, ClpSimplex *a2, double a3, double a4)
{
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // esi
  int v11; // edi
  _BYTE *v12; // rsi
  double v13; // xmm2_8
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  char v16; // si
  char v17; // al
  char v18; // si
  _BYTE *v20; // rsi

  v6 = *((int *)a2 + 288);
  v7 = *((_DWORD *)a2 + 27);
  v8 = *((_DWORD *)a2 + 290);
  if ( (_DWORD)v6 == v8 || v7 <= (int)v6 )
  {
    v9 = *((_DWORD *)this + 64);
    if ( v9 > (int)v6 || v7 <= (int)v6 )
      goto LABEL_4;
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * (int)v6) = *((_DWORD *)a2 + 292);
    v9 = *((_DWORD *)this + 64);
    if ( (int)v6 < v9 )
      goto LABEL_4;
  }
  v20 = (_BYTE *)(*((_QWORD *)this + 46) + *(int *)(*((_QWORD *)this + 45) + 4LL * ((int)v6 - v9)));
  if ( (*v20 & 7) != 1 )
  {
    ++*((_DWORD *)this + 62);
    *v20 = *v20 & 0xF8 | 1;
  }
LABEL_4:
  v10 = *((_DWORD *)this + 66);
  v11 = v10 + v7;
  if ( v10 + v7 <= (int)v6 )
  {
    v12 = (_BYTE *)(*((_QWORD *)this + 29) + *(int *)(*((_QWORD *)this + 24) + 4LL * ((int)v6 - v7 - v10)));
    *v12 = *v12 & 0xF8 | *(_BYTE *)(*((_QWORD *)a2 + 33) + v6) & 7;
    v10 = *((_DWORD *)this + 66);
    v11 = v7 + v10;
  }
  if ( v8 >= v11 )
  {
    v13 = *(double *)(*((_QWORD *)a2 + 123) + 8LL * v8);
    v14 = *(int *)(*((_QWORD *)this + 24) + 4LL * (v8 - v7 - v10));
    v15 = (_BYTE *)(v14 + *((_QWORD *)this + 29));
    v16 = *v15 & 0xF8;
    v17 = v16 | 2;
    v18 = v16 | 3;
    if ( fabs(v13 - *(double *)(*((_QWORD *)this + 28) + 8 * v14)) > fabs(
                                                                       v13
                                                                     - *(double *)(*((_QWORD *)this + 27) + 8 * v14)) )
      v17 = v18;
    *v15 = v17;
    if ( *(double *)(*((_QWORD *)this + 27) + 8 * v14) == *(double *)(*((_QWORD *)this + 28) + 8 * v14) )
      *(_BYTE *)(*((_QWORD *)this + 29) + v14) = *(_BYTE *)(*((_QWORD *)this + 29) + v14) & 0xF8 | 5;
  }
  ClpMatrixBase::updatePivot(this, a2, a3, a4);
  return *((_DWORD *)this + 66) + *((_DWORD *)this + 51) >= *((_DWORD *)a2 + 26);
}

