__int64 __fastcall ClpSimplex::computeObjectiveValue(ClpSimplex *this, char a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 result; // rax
  double v5; // xmm0_8
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  double v10; // xmm1_8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm0_8
  double v17; // xmm1_8
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  double v21; // xmm1_8
  _BYTE v22[32]; // [rsp+8h] [rbp-20h] BYREF

  *((_QWORD *)this + 9) = 0;
  v3 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v3 )
  {
    result = (**v3)(v3, 0, 0, v22, 0, 2);
    v5 = *((double *)this + 9);
  }
  else
  {
    v5 = 0.0;
    result = 0;
  }
  v6 = *((_DWORD *)this + 27);
  if ( a2 )
  {
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      if ( v6 > 0 )
      {
        v12 = *((_QWORD *)this + 152);
        v13 = 8LL * (unsigned int)(v6 - 1) + 8;
        v14 = 0;
        do
        {
          v15 = *(double *)(v11 + v14) * *(double *)(v12 + v14) * *(double *)(result + v14);
          v14 += 8;
          v5 = v5 + v15;
          *((double *)this + 9) = v5;
        }
        while ( v13 != v14 );
      }
    }
    else if ( v6 > 0 )
    {
      v18 = *((_QWORD *)this + 152);
      v19 = 8LL * (unsigned int)(v6 - 1) + 8;
      v20 = 0;
      do
      {
        v21 = *(double *)(result + v20) * *(double *)(v18 + v20);
        v20 += 8;
        v5 = v5 + v21;
        *((double *)this + 9) = v5;
      }
      while ( v19 != v20 );
    }
    v16 = v5 * *(double *)this;
    result = *((_QWORD *)this + 20);
    v17 = *((double *)this + 11) * *((double *)this + 12);
    *((double *)this + 9) = v16;
    *((double *)this + 9) = (v16 + *(double *)(result + 8)) / v17;
  }
  else
  {
    if ( v6 > 0 )
    {
      v7 = *((_QWORD *)this + 15);
      v8 = 8LL * (unsigned int)(v6 - 1) + 8;
      v9 = 0;
      do
      {
        v10 = *(double *)(result + v9) * *(double *)(v7 + v9);
        v9 += 8;
        v5 = v5 + v10;
        *((double *)this + 9) = v5;
      }
      while ( v8 != v9 );
    }
    *((double *)this + 9) = v5 * *(double *)this;
  }
  return result;
}

