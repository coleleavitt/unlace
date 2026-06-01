__int64 __fastcall CoinModelLinkedList::updateDeletedOne(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // ecx
  int *v10; // r11
  int *v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 result; // rax

  v3 = *((int *)a1 + 9);
  v4 = a1[3];
  v5 = *a1;
  v6 = *(int *)(a3 + 16LL * a2 + 4);
  v7 = 4LL * a2;
  v8 = a1[1];
  v9 = *(_DWORD *)(v4 + 4 * v3);
  v10 = (int *)(*a1 + v7);
  v11 = (int *)(v8 + v7);
  v12 = *v10;
  v13 = *v11;
  if ( v9 < 0 )
    *(_DWORD *)(a1[2] + 4 * v3) = a2;
  else
    *(_DWORD *)(v8 + 4LL * v9) = a2;
  *(_DWORD *)(v4 + 4LL * *((int *)a1 + 9)) = a2;
  *v10 = v9;
  *v11 = -1;
  if ( v12 < 0 )
  {
    result = (int)v6;
    *(_DWORD *)(a1[2] + 4LL * (int)v6) = v13;
  }
  else
  {
    result = v12;
    *(_DWORD *)(v8 + 4LL * v12) = v13;
  }
  if ( (int)v13 < 0 )
    *(_DWORD *)(v4 + 4 * v6) = v12;
  else
    *(_DWORD *)(v5 + 4 * v13) = v12;
  return result;
}

