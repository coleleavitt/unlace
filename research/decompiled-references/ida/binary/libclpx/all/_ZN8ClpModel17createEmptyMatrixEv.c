void __fastcall ClpModel::createEmptyMatrix(ClpModel *this)
{
  __int64 v2; // rdi
  ClpPackedMatrix *v3; // r12
  _BYTE v4[120]; // [rsp+0h] [rbp-78h] BYREF

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2);
  *((_DWORD *)this + 79) = 0;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v4);
  v3 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v3, (const CoinPackedMatrix *)v4);
  *((_QWORD *)this + 24) = v3;
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v4);
}

