__int64 __fastcall sub_1EA8600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 i; // r10
  __int64 v7; // r8
  int *v8; // r9
  int v9; // ebx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  int *v12; // rbx
  int j; // r10d
  _DWORD *v14; // rax
  __int64 v15; // rax
  int *v16; // rax

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v8 = (int *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v7 = a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = (int *)(a1 + 16 * (i + 1));
      v9 = *v8;
      if ( *v8 < (unsigned int)*(v8 - 2) )
      {
        --v7;
        v8 = (int *)(a1 + 8 * v7);
        v9 = *v8;
      }
      v10 = (_DWORD *)(a1 + 8 * i);
      *v10 = v9;
      v10[1] = v8[1];
      if ( v7 >= v5 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == v7 )
  {
    v15 = v7 + 1;
    v7 = 2 * (v7 + 1) - 1;
    v16 = (int *)(a1 + 16 * v15 - 8);
    *v8 = *v16;
    v8[1] = v16[1];
    v8 = (int *)(a1 + 8 * v7);
  }
LABEL_8:
  result = v7 - 1;
  v11 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    v12 = (int *)(a1 + 8 * v11);
    for ( j = *v12; *v12 < (unsigned int)a4; j = *v12 )
    {
      v14 = (_DWORD *)(a1 + 8 * v7);
      v8 = (int *)(a1 + 8 * v11);
      *v14 = j;
      v14[1] = v12[1];
      result = (v11 - 1) / 2;
      if ( a2 >= v11 )
        break;
      v12 = (int *)(a1 + 8 * result);
      v7 = v11;
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_13:
  *(_QWORD *)v8 = a4;
  return result;
}
