__int64 __fastcall ClpModel::pushMessageHandler(ClpModel *this, CoinMessageHandler *a2, bool *a3)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 43);
  *a3 = *((_BYTE *)this + 352);
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 43) = a2;
  return result;
}

