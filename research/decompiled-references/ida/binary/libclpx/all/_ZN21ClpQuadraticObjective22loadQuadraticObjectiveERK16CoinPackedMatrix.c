void __fastcall ClpQuadraticObjective::loadQuadraticObjective(ClpQuadraticObjective *this, const CoinPackedMatrix *a2)
{
  __int64 v3; // rdi
  CoinPackedMatrix *v4; // rbx

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v4, a2);
  *((_QWORD *)this + 3) = v4;
}

