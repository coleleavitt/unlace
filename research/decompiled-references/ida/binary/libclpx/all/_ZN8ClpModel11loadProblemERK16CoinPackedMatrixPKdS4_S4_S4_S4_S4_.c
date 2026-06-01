__int64 __fastcall ClpModel::loadProblem(
        ClpModel *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        double *a7,
        double *a8)
{
  int v9; // r13d
  const void *v14; // rdi
  _DWORD *v15; // rax
  int v16; // esi
  int v17; // edx
  ClpPackedMatrix *v18; // r12
  ClpPackedMatrix *v20; // rbp
  const double *v21; // [rsp+8h] [rbp-A0h]
  _BYTE v22[152]; // [rsp+10h] [rbp-98h] BYREF

  LOBYTE(v9) = 0;
  v14 = *((const void **)this + 24);
  if ( v14 )
  {
    v21 = a6;
    v15 = __dynamic_cast(
            v14,
            (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
            (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
            0);
    a6 = v21;
    if ( v15 )
      v9 = (v15[25] >> 4) & 1;
  }
  v16 = *((_DWORD *)a2 + 16);
  v17 = *((_DWORD *)a2 + 17);
  if ( *((_BYTE *)a2 + 8) )
  {
    v16 = *((_DWORD *)a2 + 17);
    v17 = *((_DWORD *)a2 + 16);
  }
  ClpModel::gutsOfLoadModel(this, v16, v17, a3, a4, a5, a6, a7, a8);
  if ( *((_BYTE *)a2 + 8) )
  {
    v18 = (ClpPackedMatrix *)operator new(0x78u);
    ClpPackedMatrix::ClpPackedMatrix(v18, a2);
    *((_QWORD *)this + 24) = v18;
    if ( (_BYTE)v9 )
      *((_DWORD *)v18 + 25) |= 0x10u;
  }
  else
  {
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v22);
    CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v22, 0.0);
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v22, 0.0);
    CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v22, a2);
    v20 = (ClpPackedMatrix *)operator new(0x78u);
    ClpPackedMatrix::ClpPackedMatrix(v20, (const CoinPackedMatrix *)v22);
    *((_QWORD *)this + 24) = v20;
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v22);
    v18 = *((ClpPackedMatrix **)this + 24);
  }
  return (*(__int64 (__fastcall **)(ClpPackedMatrix *, _QWORD, _QWORD))(*(_QWORD *)v18 + 192LL))(
           v18,
           *((unsigned int *)this + 26),
           *((unsigned int *)this + 27));
}

