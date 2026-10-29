__int64 __fastcall CoinArrayWithLength::conditionalNew(CoinArrayWithLength *this, int a2)
{
  if ( *((_DWORD *)this + 2) == -1 )
    CoinArrayWithLength::getCapacity(this, a2, -1);
  else
    CoinArrayWithLength::getCapacity(this, a2, (101 * a2 / 100 + 64) & 0xFFFFFFF0);
  return *(_QWORD *)this;
}

