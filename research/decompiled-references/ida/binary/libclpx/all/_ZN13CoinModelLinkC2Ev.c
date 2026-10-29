// Alternative name is '_ZN13CoinModelLinkC1Ev'
void __fastcall CoinModelLink::CoinModelLink(CoinModelLink *this)
{
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 20) = 1;
  *(_QWORD *)this = -1;
  *((_DWORD *)this + 4) = -1;
}

