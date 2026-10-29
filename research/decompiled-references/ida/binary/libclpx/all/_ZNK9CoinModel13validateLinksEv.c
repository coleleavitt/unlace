__int64 __fastcall CoinModel::validateLinks(CoinModel *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 178);
  if ( (result & 1) != 0 )
  {
    CoinModelLinkedList::validateLinks((char *)this + 336, *((_QWORD *)this + 37));
    result = *((unsigned int *)this + 178);
  }
  if ( (result & 2) != 0 )
    return CoinModelLinkedList::validateLinks((char *)this + 392, *((_QWORD *)this + 37));
  return result;
}

