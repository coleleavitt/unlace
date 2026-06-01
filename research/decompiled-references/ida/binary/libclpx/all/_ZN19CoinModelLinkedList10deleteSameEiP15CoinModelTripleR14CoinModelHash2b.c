void __fastcall CoinModelLinkedList::deleteSame(__int64 a1, int a2, __int64 a3, CoinModelHash2 *a4, char a5)
{
  __int64 v7; // rdx
  int v8; // r13d
  int *v9; // rax
  int v10; // ebp
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *(_DWORD *)(a1 + 32) > a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_DWORD *)(v7 + 4LL * *(int *)(a1 + 36));
    v9 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * a2);
    v10 = *v9;
    *v9 = -1;
    if ( v10 < 0 )
    {
      if ( v8 < 0 )
        goto LABEL_13;
      v12 = v8;
      v13 = *(_QWORD *)(a1 + 8);
      v10 = v8;
    }
    else
    {
      if ( !a5 )
      {
        while ( 1 )
        {
          v12 = v10;
          if ( *((_DWORD *)a4 + 2) )
            CoinModelHash2::deleteHash(
              a4,
              v10,
              *(_DWORD *)(a3 + 16LL * v10) & 0x7FFFFFFF,
              *(_DWORD *)(a3 + 16LL * v10 + 4));
          v13 = *(_QWORD *)(a1 + 8);
          if ( v8 >= 0 )
          {
            *(_DWORD *)(v13 + 4LL * v8) = v10;
            *(_DWORD *)(*(_QWORD *)a1 + 4LL * v10) = v8;
            v11 = *(_DWORD *)(v13 + 4LL * v10);
            if ( v11 < 0 )
              goto LABEL_11;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * *(int *)(a1 + 36)) = v10;
            *(_DWORD *)(*(_QWORD *)a1 + 4LL * v10) = v8;
            v11 = *(_DWORD *)(v13 + 4LL * v10);
            if ( v11 < 0 )
              goto LABEL_11;
          }
          v8 = v10;
          v10 = v11;
        }
      }
      while ( 1 )
      {
        v12 = v10;
        if ( *((_DWORD *)a4 + 2) )
          CoinModelHash2::deleteHash(
            a4,
            v10,
            *(_DWORD *)(a3 + 16LL * v10) & 0x7FFFFFFF,
            *(_DWORD *)(a3 + 16LL * v10 + 4));
        v14 = a3 + 16LL * v10;
        *(_DWORD *)(v14 + 4) = -1;
        *(_QWORD *)(v14 + 8) = 0;
        v13 = *(_QWORD *)(a1 + 8);
        if ( v8 >= 0 )
          *(_DWORD *)(v13 + 4LL * v8) = v10;
        else
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * *(int *)(a1 + 36)) = v10;
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * v10) = v8;
        if ( *(int *)(v13 + 4LL * v10) < 0 )
          break;
        v8 = v10;
        v10 = *(_DWORD *)(v13 + 4LL * v10);
      }
LABEL_11:
      v7 = *(_QWORD *)(a1 + 24);
    }
    *(_DWORD *)(v13 + 4 * v12) = -1;
    *(_DWORD *)(v7 + 4LL * *(int *)(a1 + 36)) = v10;
LABEL_13:
    *(_DWORD *)(v7 + 4LL * a2) = -1;
  }
}

