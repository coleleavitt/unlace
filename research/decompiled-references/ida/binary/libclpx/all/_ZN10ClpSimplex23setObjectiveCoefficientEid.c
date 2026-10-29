void __fastcall ClpSimplex::setObjectiveCoefficient(ClpSimplex *this, int a2, double a3)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v6; // rax
  int v7; // eax
  double v8; // xmm1_8
  double *v9; // r12
  bool v10; // zf
  double v11; // xmm0_8
  _BYTE v12[48]; // [rsp+18h] [rbp-30h] BYREF

  v4 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v4 )
  {
    if ( a3 == *(double *)((**v4)(v4, 0, 0, v12, 0, 2) + 8LL * a2) )
      return;
    v5 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
    if ( v5 )
    {
      v6 = (**v5)(v5, 0, 0, v12, 0, 2);
      goto LABEL_5;
    }
  }
  else if ( a3 == *(double *)(8LL * a2) )
  {
    return;
  }
  v6 = 0;
LABEL_5:
  *(double *)(v6 + 8LL * a2) = a3;
  v7 = *((_DWORD *)this + 79);
  if ( (v7 & 1) != 0 )
  {
    v8 = *(double *)this;
    v9 = (double *)(*((_QWORD *)this + 131) + 8LL * a2);
    v10 = *((_QWORD *)this + 28) == 0;
    *((_DWORD *)this + 79) = v7 & 0xFFFFFFBF;
    v11 = a3 * (v8 * *((double *)this + 11));
    if ( !v10 )
      v11 = v11 * *(double *)(*((_QWORD *)this + 29) + 8LL * a2);
    *v9 = v11;
  }
}

