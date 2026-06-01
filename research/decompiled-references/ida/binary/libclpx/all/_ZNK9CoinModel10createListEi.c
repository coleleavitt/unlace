__int64 __fastcall CoinModel::createList(CoinModel *this, int a2)
{
  __int64 v3; // r8
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  __int64 result; // rax
  int v10; // eax

  *((_DWORD *)this + 176) = 2;
  v3 = *((_QWORD *)this + 37);
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 27);
  v6 = *((_DWORD *)this + 3);
  v7 = *((_DWORD *)this + 28);
  if ( a2 == 1 )
  {
    CoinModelLinkedList::create((_DWORD)this + 336, *((_DWORD *)this + 25), v7, v4, v6, 0, v5, v3);
    v10 = *((_DWORD *)this + 178);
    if ( v10 == 2 )
    {
      CoinModelLinkedList::synchronize((CoinModel *)((char *)this + 336), (CoinModel *)((char *)this + 392));
      v10 = *((_DWORD *)this + 178);
    }
    result = v10 | 1u;
    *((_DWORD *)this + 178) = result;
  }
  else
  {
    CoinModelLinkedList::create((_DWORD)this + 392, *((_DWORD *)this + 26), v7, v6, v4, 1, v5, v3);
    v8 = *((_DWORD *)this + 178);
    if ( v8 == 1 )
    {
      CoinModelLinkedList::synchronize((CoinModel *)((char *)this + 392), (CoinModel *)((char *)this + 336));
      v8 = *((_DWORD *)this + 178);
    }
    result = v8 | 2u;
    *((_DWORD *)this + 178) = result;
  }
  return result;
}

