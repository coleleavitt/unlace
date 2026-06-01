__int64 __fastcall ClpModel::loadQuadraticObjective(ClpModel *this, const CoinPackedMatrix *a2)
{
  const double *v4; // rsi
  ClpQuadraticObjective *v5; // r14
  __int64 v6; // rdi
  _BYTE v8[40]; // [rsp+8h] [rbp-28h] BYREF

  *((_DWORD *)this + 79) = 0;
  v4 = (const double *)(***((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20))(
                         *((_QWORD *)this + 20),
                         0,
                         0,
                         v8,
                         0,
                         2);
  v5 = (ClpQuadraticObjective *)operator new(0x40u);
  ClpQuadraticObjective::ClpQuadraticObjective(v5, v4, *((_DWORD *)this + 27), nullptr, nullptr, nullptr, -1);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
    (*(void (__fastcall **)(__int64, const double *))(*(_QWORD *)v6 + 80LL))(v6, v4);
  *((_QWORD *)this + 20) = v5;
  return ClpQuadraticObjective::loadQuadraticObjective(v5, a2);
}

