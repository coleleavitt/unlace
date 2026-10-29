double *__fastcall ClpSimplexDual::originalBound(ClpSimplexDual *this, int a2)
{
  double *result; // rax
  int v3; // eax
  __int64 v4; // rsi
  double *v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // rcx
  double v8; // xmm1_8
  double *v9; // rcx
  double v10; // xmm1_8

  result = (double *)(a2 + *((_QWORD *)this + 33));
  if ( (*(_BYTE *)result & 0x18) == 0 )
    return result;
  --*((_DWORD *)this + 334);
  *(_BYTE *)result &= 0xE7u;
  v3 = *((_DWORD *)this + 27);
  if ( v3 <= a2 )
  {
    v4 = a2 - v3;
    v5 = (double *)(8 * v4 + *((_QWORD *)this + 124));
    *v5 = *(double *)(*((_QWORD *)this + 18) + 8 * v4);
    result = (double *)(*((_QWORD *)this + 127) + 8 * v4);
    v6 = *(double *)(*((_QWORD *)this + 19) + 8 * v4);
    *result = v6;
    v7 = *((_QWORD *)this + 28);
    if ( v7 )
    {
      if ( *v5 > -1.0e50 )
      {
        *v5 = *(double *)(v7 + 8 * v4) * *((double *)this + 12) * *v5;
        v6 = *result;
      }
      if ( v6 < 1.0e50 )
        *result = v6 * (*(double *)(v7 + 8 * v4) * *((double *)this + 12));
      return result;
    }
    v8 = *((double *)this + 12);
    if ( v8 == 1.0 )
      return result;
    if ( *v5 > -1.0e50 )
    {
      *v5 = *v5 * v8;
      v6 = *result;
    }
    goto LABEL_11;
  }
  v9 = (double *)(8LL * a2 + *((_QWORD *)this + 125));
  *v9 = *(double *)(*((_QWORD *)this + 22) + 8LL * a2);
  result = (double *)(*((_QWORD *)this + 128) + 8LL * a2);
  v6 = *(double *)(*((_QWORD *)this + 23) + 8LL * a2);
  *result = v6;
  if ( !*((_QWORD *)this + 28) )
  {
    v8 = *((double *)this + 12);
    if ( v8 == 1.0 )
      return result;
    if ( *v9 > -1.0e50 )
    {
      *v9 = *v9 * v8;
      v6 = *result;
    }
LABEL_11:
    if ( v6 < 1.0e50 )
      *result = v6 * v8;
    return result;
  }
  v10 = *(double *)(*((_QWORD *)this + 31) + 8LL * a2);
  if ( *v9 > -1.0e50 )
  {
    *v9 = *v9 * (*((double *)this + 12) * v10);
    v6 = *result;
  }
  if ( v6 < 1.0e50 )
    *result = v6 * (v10 * *((double *)this + 12));
  return result;
}

