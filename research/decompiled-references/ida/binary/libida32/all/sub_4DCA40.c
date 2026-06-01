__int64 __fastcall sub_4DCA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned int v7; // r10d
  __int64 v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // rsi
  unsigned int *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx

  result = a3 - 1;
  v5 = a2;
  v7 = a4;
  v8 = (a3 - 1) / 2;
  if ( a2 >= v8 )
  {
    v9 = (_DWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_13;
    result = a2;
    goto LABEL_15;
  }
  while ( 1 )
  {
    result = 2 * (a2 + 1);
    v9 = (_DWORD *)(a1 + 16 * (a2 + 1));
    if ( *v9 < *(v9 - 2) )
    {
      --result;
      v9 = (_DWORD *)(a1 + 8 * result);
    }
    *(_QWORD *)(a1 + 8 * a2) = *(_QWORD *)v9;
    if ( v8 <= result )
      break;
    a2 = result;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == result )
  {
LABEL_15:
    v12 = 2 * result + 2;
    v13 = *(_QWORD *)(a1 + 8 * v12 - 8);
    result = v12 - 1;
    *(_QWORD *)v9 = v13;
    v9 = (_DWORD *)(a1 + 8 * result);
  }
  v10 = (result - 1) / 2;
  if ( result > v5 )
  {
    while ( 1 )
    {
      v11 = (unsigned int *)(a1 + 8 * v10);
      v9 = (_DWORD *)(a1 + 8 * result);
      if ( *v11 >= v7 )
        break;
      *(_QWORD *)v9 = *(_QWORD *)v11;
      result = v10;
      if ( v5 >= v10 )
      {
        *(_QWORD *)v11 = a4;
        return result;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *(_QWORD *)v9 = a4;
  return result;
}

