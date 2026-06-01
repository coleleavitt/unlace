CoinModel *__fastcall CoinModel::firstInRow(CoinModel *this, __int64 a2, int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx

  CoinModelLink::CoinModelLink(this);
  if ( a3 >= 0 && *(_DWORD *)(a2 + 8) > a3 )
  {
    v4 = *(_DWORD *)(a2 + 704);
    *((_BYTE *)this + 20) = 1;
    if ( v4 )
    {
      CoinModel::fillList((CoinModel *)a2, a3, (CoinModelLinkedList *)(a2 + 336), 1);
      v6 = *(int *)(*(_QWORD *)(a2 + 352) + 4LL * a3);
      if ( (int)v6 < 0 )
        return this;
      goto LABEL_5;
    }
    v5 = *(_QWORD *)(a2 + 288);
    v6 = *(int *)(v5 + 4LL * a3);
    if ( *(_DWORD *)(v5 + 4LL * a3 + 4) > (int)v6 )
    {
LABEL_5:
      *((_DWORD *)this + 4) = v6;
      v7 = *(_QWORD *)(a2 + 296) + 16 * v6;
      *(_DWORD *)this = a3;
      v8 = *(_DWORD *)(v7 + 4);
      *((_QWORD *)this + 1) = *(_QWORD *)(v7 + 8);
      *((_DWORD *)this + 1) = v8;
    }
  }
  return this;
}

