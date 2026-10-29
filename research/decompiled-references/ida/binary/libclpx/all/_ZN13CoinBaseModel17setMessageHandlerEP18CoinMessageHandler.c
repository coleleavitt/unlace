void __fastcall __spoils<> CoinBaseModel::setMessageHandler(CoinBaseModel *this, CoinMessageHandler *a2)
{
  int v2; // eax

  *((_QWORD *)this + 7) = a2;
  if ( a2 )
  {
    *((_DWORD *)this + 24) = -1;
  }
  else
  {
    v2 = 0;
    if ( *((int *)this + 24) >= 0 )
      v2 = *((_DWORD *)this + 24);
    *((_DWORD *)this + 24) = v2;
  }
}

