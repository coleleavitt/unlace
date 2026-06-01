__int64 __fastcall ClpModel::popMessageHandler(ClpModel *this, CoinMessageHandler *a2, char a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  char v6; // [rsp+Ch] [rbp-Ch]

  if ( *((_BYTE *)this + 352) )
  {
    v4 = *((_QWORD *)this + 43);
    if ( v4 )
    {
      v6 = a3;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      a3 = v6;
    }
  }
  *((_BYTE *)this + 352) = a3;
  *((_QWORD *)this + 43) = a2;
  return result;
}

