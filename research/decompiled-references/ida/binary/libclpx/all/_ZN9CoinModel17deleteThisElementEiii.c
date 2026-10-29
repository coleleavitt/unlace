__int64 __fastcall CoinModel::deleteThisElement(CoinModel *this, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx

  v4 = a4;
  if ( (*((_BYTE *)this + 712) & 1) == 0 )
    CoinModel::createList(this, 1);
  result = CoinModelLinkedList::deleteRowOne();
  if ( *((_DWORD *)this + 178) == 3 )
    result = CoinModelLinkedList::updateDeletedOne((char *)this + 392, (unsigned int)v4, *((_QWORD *)this + 37));
  v6 = *((_QWORD *)this + 37) + 16 * v4;
  *(_DWORD *)(v6 + 4) = -1;
  *(_QWORD *)(v6 + 8) = 0;
  return result;
}

