void __fastcall CoinSnapshot::setMatrixByRow(CoinSnapshot *this, const CoinPackedMatrix *a2, char a3)
{
  __int64 v4; // rdi
  CoinPackedMatrix *v5; // r12

  if ( *((char *)this + 224) < 0 )
  {
    v4 = *((_QWORD *)this + 17);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      if ( a3 )
        goto LABEL_6;
LABEL_3:
      *((_BYTE *)this + 224) &= ~0x80u;
      *((_QWORD *)this + 17) = a2;
      return;
    }
  }
  if ( !a3 )
    goto LABEL_3;
LABEL_6:
  *((_BYTE *)this + 224) |= 0x80u;
  v5 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v5, a2);
  *((_QWORD *)this + 17) = v5;
}

