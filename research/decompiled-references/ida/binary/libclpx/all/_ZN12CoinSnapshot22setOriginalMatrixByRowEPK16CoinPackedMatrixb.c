void __fastcall CoinSnapshot::setOriginalMatrixByRow(CoinSnapshot *this, const CoinPackedMatrix *a2, char a3)
{
  __int64 v4; // rdi
  CoinPackedMatrix *v5; // r12
  char v6; // [rsp+Ch] [rbp-1Ch]

  if ( (*((_BYTE *)this + 225) & 2) != 0 )
  {
    v4 = *((_QWORD *)this + 19);
    if ( v4 )
    {
      v6 = a3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      a3 = v6;
    }
  }
  if ( a3 )
  {
    *((_BYTE *)this + 225) |= 2u;
    v5 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v5, a2);
    *((_QWORD *)this + 19) = v5;
  }
  else
  {
    *((_BYTE *)this + 225) &= ~2u;
    *((_QWORD *)this + 19) = a2;
  }
}

