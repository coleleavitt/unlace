__int64 __fastcall CoinLpIO::readLp(CoinLpIO *this, _IO_FILE *a2)
{
  __int64 v3; // rdi
  CoinPlainFileInput *v4; // rbp

  v3 = *((_QWORD *)this + 172);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (CoinPlainFileInput *)operator new(0x20u);
  CoinPlainFileInput::CoinPlainFileInput(v4, a2);
  *((_QWORD *)this + 172) = v4;
  return CoinLpIO::readLp(this);
}

