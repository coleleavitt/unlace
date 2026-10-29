void __fastcall CoinModel::fillList(CoinModel *this, int a2, CoinModelLinkedList *a3, int a4)
{
  __int64 v7; // r8
  bool v8; // zf
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ebx

  if ( (a4 & *((_DWORD *)this + 178)) == 0 )
  {
    v7 = *((_QWORD *)this + 37);
    v8 = a4 == 1;
    v9 = *((_DWORD *)this + 27);
    v10 = *((_DWORD *)this + 2);
    v11 = *((_DWORD *)this + 3);
    v12 = *((_DWORD *)this + 28);
    if ( v8 )
    {
      CoinModelLinkedList::create((int)a3, *((_DWORD *)this + 25), v12, v10, v11, 0, v9, v7);
      v13 = *((_DWORD *)this + 178);
      if ( v13 == 2 )
      {
        CoinModelLinkedList::synchronize((CoinModel *)((char *)this + 336), (CoinModel *)((char *)this + 392));
        v13 = *((_DWORD *)this + 178);
      }
    }
    else
    {
      CoinModelLinkedList::create((int)a3, *((_DWORD *)this + 26), v12, v11, v10, 1, v9, v7);
      v13 = *((_DWORD *)this + 178);
      if ( v13 == 1 && a4 == 2 )
      {
        CoinModelLinkedList::synchronize((CoinModel *)((char *)this + 392), (CoinModel *)((char *)this + 336));
        v13 = *((_DWORD *)this + 178);
      }
    }
    *((_DWORD *)this + 178) = v13 | a4;
  }
  v14 = *((_DWORD *)a3 + 8);
  if ( a2 >= v14 )
  {
    if ( a2 >= *((_DWORD *)a3 + 9) )
      CoinModelLinkedList::resize(a3, 3 * a2 / 2 + 100, *((_DWORD *)a3 + 11));
    CoinModelLinkedList::fill(a3, v14, a2 + 1);
  }
}

