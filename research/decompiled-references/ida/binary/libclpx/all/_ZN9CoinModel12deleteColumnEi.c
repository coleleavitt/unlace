void __fastcall CoinModel::deleteColumn(CoinModel *this, int a2)
{
  __int64 v2; // rdx
  bool v4; // zf
  int v5; // eax
  void *v6; // rdi
  int v7; // eax

  if ( *((_DWORD *)this + 3) > a2 )
  {
    v2 = *((_QWORD *)this + 24);
    if ( v2
      && (v4 = *((_BYTE *)this + 708) == 0,
          *(_QWORD *)(v2 + 8LL * a2) = 0,
          *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * a2) = 0x7FEFFFFFFFFFFFFFLL,
          *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * a2) = 0,
          *(_DWORD *)(*((_QWORD *)this + 30) + 4LL * a2) = 0,
          *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * a2) = 0,
          v4) )
    {
      CoinModelHash::deleteHash((CoinModel *)((char *)this + 208), a2);
      v5 = *((_DWORD *)this + 176);
      if ( v5 )
      {
LABEL_5:
        if ( v5 == 3 )
          CoinModel::badType(this);
        if ( (*((_DWORD *)this + 178) & 2) != 0 )
          goto LABEL_7;
        goto LABEL_12;
      }
    }
    else
    {
      v5 = *((_DWORD *)this + 176);
      if ( v5 )
        goto LABEL_5;
    }
    v6 = *((void **)this + 36);
    if ( v6 )
      operator delete[](v6);
    v7 = *((_DWORD *)this + 178);
    *((_QWORD *)this + 36) = 0;
    if ( (v7 & 2) != 0 )
      goto LABEL_7;
LABEL_12:
    CoinModel::createList(this, 2);
LABEL_7:
    CoinModelLinkedList::deleteSame();
    if ( *((_DWORD *)this + 178) == 3 )
      CoinModelLinkedList::updateDeleted(
        (char *)this + 336,
        (unsigned int)a2,
        *((_QWORD *)this + 37),
        (char *)this + 392);
  }
}

