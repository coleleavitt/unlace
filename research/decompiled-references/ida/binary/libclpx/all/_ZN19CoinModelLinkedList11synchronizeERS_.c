__int64 __fastcall CoinModelLinkedList::synchronize(CoinModelLinkedList *this, CoinModelLinkedList *a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL * *((int *)a2 + 9));
  *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * *((int *)this + 9)) = v2;
  result = *((_QWORD *)this + 3);
  *(_DWORD *)(result + 4LL * *((int *)this + 9)) = *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL * *((int *)a2 + 9));
  if ( v2 >= 0 )
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)this;
    v6 = *((_QWORD *)a2 + 1);
    v7 = *((_QWORD *)this + 1);
    do
    {
      result = v2;
      *(_DWORD *)(v5 + 4LL * v2) = *(_DWORD *)(v4 + 4LL * v2);
      v2 = *(_DWORD *)(v6 + 4LL * v2);
      *(_DWORD *)(v7 + 4 * result) = v2;
    }
    while ( v2 >= 0 );
  }
  return result;
}

