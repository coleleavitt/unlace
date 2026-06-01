__int64 __fastcall sub_185240(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v8; // r13
  __int64 v9; // rbp
  int *v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int *v14; // r10

  result = a3 - 1;
  v5 = a2;
  v8 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 < v9 )
  {
    while ( 1 )
    {
      result = 2 * (a2 + 1);
      v10 = (int *)(a1 + 8 * (a2 + 1));
      v11 = *v10;
      if ( *(_DWORD *)(a1 + 4 * (result - 1)) > *v10 )
      {
        v11 = *(_DWORD *)(a1 + 4 * (result - 1));
        v10 = (int *)(a1 + 4 * --result);
      }
      *(_DWORD *)(a1 + 4 * a2) = v11;
      if ( result >= v9 )
        break;
      a2 = result;
    }
    if ( v8 || (a3 - 2) / 2 != result )
    {
      v12 = result - 1;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = (int *)(a1 + 4 * a2);
    if ( v8 )
      goto LABEL_14;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_14;
    result = a2;
  }
  v12 = 2 * result;
  result = 2 * result + 1;
  *v10 = *(_DWORD *)(a1 + 4 * result);
  v10 = (int *)(a1 + 4 * result);
LABEL_9:
  v13 = v12 / 2;
  if ( result > v5 )
  {
    while ( 1 )
    {
      v14 = (int *)(a1 + 4 * v13);
      v10 = (int *)(a1 + 4 * result);
      if ( a4 <= *v14 )
        break;
      *v10 = *v14;
      result = v13;
      if ( v5 >= v13 )
      {
        *v14 = a4;
        return result;
      }
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_14:
  *v10 = a4;
  return result;
}
