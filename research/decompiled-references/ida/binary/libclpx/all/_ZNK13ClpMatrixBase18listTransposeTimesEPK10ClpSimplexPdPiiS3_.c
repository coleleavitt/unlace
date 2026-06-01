void __fastcall ClpMatrixBase::listTransposeTimes(
        ClpMatrixBase *this,
        const ClpSimplex *a2,
        double *a3,
        int *a4,
        int a5,
        double *a6)
{
  double *v8; // r14
  double *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-B8h]
  double *v12; // [rsp+8h] [rbp-B0h]
  _BYTE v14[8]; // [rsp+20h] [rbp-98h] BYREF
  double *v15; // [rsp+28h] [rbp-90h]
  _QWORD v16[2]; // [rsp+40h] [rbp-78h] BYREF
  int v17; // [rsp+50h] [rbp-68h]
  char v18; // [rsp+5Ch] [rbp-5Ch]
  _BYTE v19[8]; // [rsp+60h] [rbp-58h] BYREF
  double *v20; // [rsp+68h] [rbp-50h]
  char v21; // [rsp+7Ch] [rbp-3Ch]

  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v14);
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v16);
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v19);
  v17 = a5;
  v10 = v16[0];
  if ( !a5 )
    v18 = 0;
  v8 = v15;
  v21 = 1;
  v16[0] = a4;
  v15 = a3;
  v9 = v20;
  v20 = a6;
  v12 = v9;
  (*(void (__fastcall **)(ClpMatrixBase *, const ClpSimplex *, _BYTE *, _QWORD *, _BYTE *))(*(_QWORD *)this + 400LL))(
    this,
    a2,
    v14,
    v16,
    v19);
  v15 = v8;
  v16[0] = v10;
  v20 = v12;
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v19);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v16);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v14);
}

