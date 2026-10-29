// Alternative name is '_ZN19CoinModelLinkedListC2Ev'
void __fastcall CoinModelLinkedList::CoinModelLinkedList(CoinModelLinkedList *this)
{
  *((_DWORD *)this + 12) = -1;
  *(_OWORD *)this = 0;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
}

