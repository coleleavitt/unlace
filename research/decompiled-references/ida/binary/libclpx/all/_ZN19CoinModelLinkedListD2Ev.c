// Alternative name is '_ZN19CoinModelLinkedListD1Ev'
void __fastcall CoinModelLinkedList::~CoinModelLinkedList(CoinModelLinkedList *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(void **)this;
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 1);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 2);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 3);
  if ( v5 )
    operator delete[](v5);
}

