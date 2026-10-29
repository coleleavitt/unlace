__int64 __fastcall CoinLpIO::gutsOfDestructor(CoinLpIO *this)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = CoinLpIO::freeAll(this);
  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    *((_QWORD *)this + 1) = 0;
  }
  return result;
}

