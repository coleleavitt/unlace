void __fastcall CoinModelLinkedList::validateLinks(__int64 a1)
{
  void *v2; // rax
  _BYTE *v3; // rax
  int v4; // edx
  _BYTE *v5; // rcx
  int *v6; // rax
  int *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx

  v2 = (void *)operator new[](*(int *)(a1 + 44));
  v3 = memset(v2, 0, *(int *)(a1 + 44));
  v4 = *(_DWORD *)(a1 + 32);
  v5 = v3;
  if ( v4 > 0 )
  {
    v6 = *(int **)(a1 + 16);
    v7 = v6 + 1;
    v8 = (__int64)&v6[v4 - 1 + 1];
    while ( 1 )
    {
      v9 = *v6;
      if ( (int)v9 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        do
        {
          v5[v9] = 1;
          v9 = *(int *)(v10 + 4 * v9);
        }
        while ( (int)v9 >= 0 );
      }
      v6 = v7;
      if ( (int *)v8 == v7 )
        break;
      ++v7;
    }
  }
  operator delete[](v5);
}

