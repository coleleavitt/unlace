__int64 __fastcall sub_66F580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r9
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+4h] [rbp-1Ch]

  v5 = a2;
  v7 = a3 & 1;
  v8 = (a3 - 1) / 2;
  v18 = __PAIR64__(a5, HIDWORD(a4));
  v9 = a4;
  if ( a2 >= v8 )
  {
    result = 3 * a2;
    v11 = a1 + 12 * a2;
    if ( v7 )
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
    v11 = a1 + 24 * (a2 + 1);
    if ( *(_DWORD *)v11 < *(_DWORD *)(v11 - 12) )
    {
      --result;
      v11 = a1 + 12 * result;
    }
    v12 = a1 + 12 * a2;
    *(_QWORD *)v12 = *(_QWORD *)v11;
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v11 + 8);
    if ( v8 <= result )
      break;
    a2 = result;
  }
  if ( !v7 && (a3 - 2) / 2 == result )
  {
LABEL_15:
    v15 = result + 1;
    v16 = 2 * v15;
    v17 = a1 + 24 * v15;
    *(_QWORD *)v11 = *(_QWORD *)(v17 - 12);
    *(_DWORD *)(v11 + 8) = *(_DWORD *)(v17 - 4);
    result = v16 - 1;
    v11 = a1 + 12 * (v16 - 1);
  }
  v13 = (result - 1) / 2;
  if ( result > v5 )
  {
    while ( 1 )
    {
      result *= 3;
      v14 = a1 + 12 * v13;
      v11 = a1 + 4 * result;
      if ( *(_DWORD *)v14 >= v9 )
        break;
      *(_QWORD *)v11 = *(_QWORD *)v14;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v14 + 8);
      result = v13;
      if ( v5 >= v13 )
      {
        *(_DWORD *)v14 = v9;
        *(_QWORD *)(v14 + 4) = v18;
        return result;
      }
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_13:
  *(_DWORD *)v11 = v9;
  *(_QWORD *)(v11 + 4) = v18;
  return result;
}

