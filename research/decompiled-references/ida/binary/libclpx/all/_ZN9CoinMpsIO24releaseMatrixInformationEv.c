__int64 __fastcall CoinMpsIO::releaseMatrixInformation(CoinMpsIO *this)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = CoinMpsIO::releaseRedundantInformation(this);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *((_QWORD *)this + 11) = 0;
  return result;
}

