__int64 __fastcall CoinModel::deleteRow(CoinModel *this, int a2)
{
  __int64 v2; // rdx
  bool v4; // zf
  void *v5; // rdi
  __int64 result; // rax

  if ( *((_DWORD *)this + 2) <= a2 )
    return result;
  v2 = *((_QWORD *)this + 16);
  if ( v2
    && (v4 = *((_BYTE *)this + 708) == 0,
        *(_QWORD *)(v2 + 8LL * a2) = 0xFFEFFFFFFFFFFFFFLL,
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * a2) = 0x7FEFFFFFFFFFFFFFLL,
        *(_DWORD *)(*((_QWORD *)this + 22) + 4LL * a2) = 0,
        v4) )
  {
    CoinModelHash::deleteHash((CoinModel *)((char *)this + 144), a2);
    if ( !*((_DWORD *)this + 176) )
      goto LABEL_5;
  }
  else if ( !*((_DWORD *)this + 176) )
  {
LABEL_5:
    v5 = *((void **)this + 36);
    if ( v5 )
      operator delete[](v5);
    *((_QWORD *)this + 36) = 0;
  }
  if ( (*((_DWORD *)this + 178) & 1) == 0 )
    CoinModel::createList(this, 1);
  result = CoinModelLinkedList::deleteSame();
  if ( *((_DWORD *)this + 178) == 3 )
    return CoinModelLinkedList::updateDeleted(
             (char *)this + 392,
             (unsigned int)a2,
             *((_QWORD *)this + 37),
             (char *)this + 336);
  return result;
}

