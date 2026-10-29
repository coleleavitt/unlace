__int64 __fastcall ClpModel::passInMessageHandler(ClpModel *this, CoinMessageHandler *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *((_BYTE *)this + 352) )
  {
    v3 = *((_QWORD *)this + 43);
    if ( v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 43) = a2;
  return result;
}

