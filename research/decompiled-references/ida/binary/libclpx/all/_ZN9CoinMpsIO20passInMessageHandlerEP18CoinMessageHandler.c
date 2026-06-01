__int64 __fastcall CoinMpsIO::passInMessageHandler(CoinMpsIO *this, CoinMessageHandler *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *((_BYTE *)this + 232) )
  {
    v3 = *((_QWORD *)this + 28);
    if ( v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  *((_BYTE *)this + 232) = 0;
  *((_QWORD *)this + 28) = a2;
  return result;
}

