__int64 __fastcall sub_1F6AFA0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 i; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 j; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r10d
  __int64 v17; // rdx

  result = a3 - 1;
  v6 = (a3 - 1) / 2;
  if ( a2 >= v6 )
  {
    v8 = a1 + 16 * a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    result = a2;
  }
  else
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v8 = a1 + 32 * (i + 1);
      if ( *(_DWORD *)(v8 - 16) > *(_DWORD *)v8 )
      {
        --result;
        v8 = a1 + 16 * result;
      }
      v9 = a1 + 16 * i;
      *(_DWORD *)v9 = *(_DWORD *)v8;
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
      if ( v6 <= result )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == result )
  {
    v14 = result + 1;
    result = 2 * (result + 1) - 1;
    v15 = a1 + 32 * v14 - 16;
    v16 = *(_DWORD *)v15;
    v17 = *(_QWORD *)(v15 + 8);
    *(_DWORD *)v8 = v16;
    *(_QWORD *)(v8 + 8) = v17;
    v8 = a1 + 16 * result;
  }
LABEL_8:
  v10 = (result - 1) / 2;
  if ( result > a2 )
  {
    for ( j = a1 + 16 * v10; *(_DWORD *)j < a4; j = a1 + 16 * v13 )
    {
      v12 = a1 + 16 * result;
      *(_DWORD *)v12 = *(_DWORD *)j;
      v8 = a1 + 16 * v10;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(j + 8);
      result = v10 - 1;
      v13 = (v10 - 1) / 2;
      if ( a2 >= v10 )
        break;
      result = v10;
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *(_DWORD *)v8 = a4;
  *(_QWORD *)(v8 + 8) = a5;
  return result;
}
