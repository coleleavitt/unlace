ClpQuadraticObjective *__fastcall ClpModel::loadQuadraticObjective(
        ClpModel *this,
        int a2,
        const int *a3,
        const int *a4,
        const double *a5)
{
  const double *v10; // rsi
  __int64 v11; // rdi
  ClpQuadraticObjective *v13; // [rsp+8h] [rbp-48h]
  _BYTE v14[56]; // [rsp+18h] [rbp-38h] BYREF

  *((_DWORD *)this + 79) = 0;
  v10 = (const double *)(***((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20))(
                          *((_QWORD *)this + 20),
                          0,
                          0,
                          v14,
                          0,
                          2);
  v13 = (ClpQuadraticObjective *)operator new(0x40u);
  ClpQuadraticObjective::ClpQuadraticObjective(v13, v10, a2, a3, a4, a5, -1);
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
    (*(void (__fastcall **)(__int64, const double *))(*(_QWORD *)v11 + 80LL))(v11, v10);
  *((_QWORD *)this + 20) = v13;
  return v13;
}

