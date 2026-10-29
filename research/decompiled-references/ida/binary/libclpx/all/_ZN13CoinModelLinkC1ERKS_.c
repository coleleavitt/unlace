// Alternative name is '_ZN13CoinModelLinkC2ERKS_'
void __fastcall CoinModelLink::CoinModelLink(CoinModelLink *this, const CoinModelLink *a2)
{
  __int64 v2; // xmm0_8
  int v3; // eax

  v2 = *((_QWORD *)a2 + 1);
  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v2;
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_BYTE *)this + 20) = *((_BYTE *)a2 + 20);
}

