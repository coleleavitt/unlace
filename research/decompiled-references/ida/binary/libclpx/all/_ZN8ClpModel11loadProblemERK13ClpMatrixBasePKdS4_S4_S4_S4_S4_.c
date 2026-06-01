__int64 __fastcall ClpModel::loadProblem(
        ClpModel *this,
        const ClpMatrixBase *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        double *a7,
        double *a8)
{
  int v13; // r12d
  int v14; // eax
  __int64 v15; // rdi
  const CoinPackedMatrix *v17; // rsi
  ClpPackedMatrix *v18; // rbx
  _BYTE v20[152]; // [rsp+10h] [rbp-98h] BYREF

  v13 = (*(__int64 (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 24LL))(a2);
  v14 = (*(__int64 (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 32LL))(a2);
  ClpModel::gutsOfLoadModel(this, v14, v13, a3, a4, a5, a6, a7, a8);
  if ( (*(unsigned __int8 (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v15 = (*(__int64 (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 440LL))(a2);
    *((_QWORD *)this + 24) = v15;
  }
  else
  {
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v20);
    CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v20, 0.0);
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v20, 0.0);
    v17 = (const CoinPackedMatrix *)(**(__int64 (__fastcall ***)(const ClpMatrixBase *))a2)(a2);
    CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v20, v17);
    (*(void (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 264LL))(a2);
    v18 = (ClpPackedMatrix *)operator new(0x78u);
    ClpPackedMatrix::ClpPackedMatrix(v18, (const CoinPackedMatrix *)v20);
    *((_QWORD *)this + 24) = v18;
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v20);
    v15 = *((_QWORD *)this + 24);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 192LL))(
           v15,
           *((unsigned int *)this + 26),
           *((unsigned int *)this + 27));
}

