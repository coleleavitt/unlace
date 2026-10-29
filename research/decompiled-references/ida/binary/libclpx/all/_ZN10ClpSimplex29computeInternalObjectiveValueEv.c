double __fastcall ClpSimplex::computeInternalObjectiveValue(ClpSimplex *this)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v4; // rcx
  int v5; // edx
  double v6; // xmm0_8
  __int64 v7; // rsi
  __int64 v8; // rdx
  double v9; // xmm1_8
  __int64 v11; // rcx
  __int64 v12; // rdx
  double v13; // xmm1_8
  _BYTE v14[16]; // [rsp+8h] [rbp-10h] BYREF

  v2 = 0;
  v3 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v3 )
    v2 = (**v3)(v3, 0, 0, v14, 0, 2);
  v4 = *((_QWORD *)this + 29);
  v5 = *((_DWORD *)this + 27);
  if ( v4 )
  {
    if ( v5 > 0 )
    {
      v6 = 0.0;
      v7 = 8LL * (unsigned int)(v5 - 1) + 8;
      v8 = 0;
      do
      {
        v9 = *(double *)(*((_QWORD *)this + 150) + v8) * *(double *)(v4 + v8) * *(double *)(v2 + v8);
        v8 += 8;
        v6 = v6 + v9;
      }
      while ( v7 != v8 );
      return v6 * (*(double *)this / *((double *)this + 12)) - *((double *)this + 5);
    }
LABEL_12:
    v6 = 0.0;
    return v6 * (*(double *)this / *((double *)this + 12)) - *((double *)this + 5);
  }
  if ( v5 <= 0 )
    goto LABEL_12;
  v6 = 0.0;
  v11 = 8LL * (unsigned int)(v5 - 1) + 8;
  v12 = 0;
  do
  {
    v13 = *(double *)(v2 + v12) * *(double *)(*((_QWORD *)this + 150) + v12);
    v12 += 8;
    v6 = v6 + v13;
  }
  while ( v11 != v12 );
  return v6 * (*(double *)this / *((double *)this + 12)) - *((double *)this + 5);
}

