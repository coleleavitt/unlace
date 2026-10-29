CoinModel *__fastcall CoinModel::lastInColumn(CoinModel *this, __int64 a2, int a3)
{
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx

  CoinModelLink::CoinModelLink(this);
  if ( a3 >= 0 && *(_DWORD *)(a2 + 12) > a3 )
  {
    v4 = *(_DWORD *)(a2 + 704) == 1;
    *((_BYTE *)this + 20) = 0;
    if ( !v4 )
    {
      CoinModel::fillList((CoinModel *)a2, a3, (CoinModelLinkedList *)(a2 + 392), 2);
      v7 = *(int *)(*(_QWORD *)(a2 + 416) + 4LL * a3);
      if ( (int)v7 < 0 )
        return this;
      *((_DWORD *)this + 1) = a3;
      *((_DWORD *)this + 4) = v7;
      goto LABEL_6;
    }
    v5 = *(_QWORD *)(a2 + 288);
    v6 = a3 + 1LL;
    LODWORD(v7) = *(_DWORD *)(v5 + 4 * v6) - 1;
    if ( *(_DWORD *)(v5 + 4 * v6 - 4) <= (int)v7 )
    {
      *((_DWORD *)this + 4) = v7;
      *((_DWORD *)this + 1) = a3;
      v7 = (int)v7;
LABEL_6:
      v8 = *(_QWORD *)(a2 + 296) + 16 * v7;
      v9 = *(_DWORD *)v8;
      *((_QWORD *)this + 1) = *(_QWORD *)(v8 + 8);
      *(_DWORD *)this = v9 & 0x7FFFFFFF;
    }
  }
  return this;
}

