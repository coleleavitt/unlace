__int64 __fastcall ClpModel::setObjectiveCoefficient(ClpModel *this, int a2, double a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  _BYTE v6[32]; // [rsp+18h] [rbp-20h] BYREF

  result = 0;
  v5 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v5 )
    result = (**v5)(v5, 0, 0, v6, 0, 2);
  *(double *)(result + 8LL * a2) = a3;
  *((_DWORD *)this + 79) = 0;
  return result;
}

