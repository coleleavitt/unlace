__int64 __fastcall CoinModelLinkedList::deleteRowOne(__int64 *a1, int a2, __int64 a3, CoinModelHash2 *a4)
{
  __int64 v4; // rbx
  _DWORD *v7; // rdx
  int v8; // r12d
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // edx
  int *v15; // r8
  int *v16; // rbx
  __int64 result; // rax
  int v18; // ecx

  v4 = a2;
  v7 = (_DWORD *)(16LL * a2 + a3);
  v8 = *v7 & 0x7FFFFFFF;
  if ( *((_DWORD *)a4 + 2) )
    CoinModelHash2::deleteHash(a4, a2, v8, v7[1]);
  v9 = *((int *)a1 + 9);
  v10 = a1[3];
  v11 = 4 * v4;
  v12 = *a1;
  v13 = a1[1];
  v14 = *(_DWORD *)(v10 + 4 * v9);
  v15 = (int *)(*a1 + v11);
  v16 = (int *)(v13 + v11);
  result = *v16;
  v18 = *v15;
  if ( v14 < 0 )
    *(_DWORD *)(a1[2] + 4 * v9) = a2;
  else
    *(_DWORD *)(v13 + 4LL * v14) = a2;
  *(_DWORD *)(v10 + 4LL * *((int *)a1 + 9)) = a2;
  *v15 = v14;
  *v16 = -1;
  if ( v18 < 0 )
    *(_DWORD *)(a1[2] + 4LL * v8) = result;
  else
    *(_DWORD *)(v13 + 4LL * v18) = result;
  if ( (int)result < 0 )
    *(_DWORD *)(v10 + 4LL * v8) = v18;
  else
    *(_DWORD *)(v12 + 4 * result) = v18;
  return result;
}

