unsigned __int64 __fastcall sub_33EF60(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rdx

  result = *(_QWORD *)(a1 + 120);
  if ( !result )
    return result;
  v3 = *(_QWORD *)(a1 + 112) + 32 * result - 32;
  v4 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)(v3 + 24) )
  {
    v8 = *(int *)(a1 + 176) + v4;
    v9 = *(_DWORD **)(a1 + 32);
    if ( *(_BYTE *)(a1 + 345) )
    {
LABEL_6:
      v10 = v9[8] + 1 - v9[6];
      goto LABEL_7;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 168);
    v6 = *(_QWORD *)(v3 + 8) - *(_QWORD *)v3;
    if ( __CFADD__(v5, v6) )
      v7 = -2;
    else
      v7 = v5 + v6 - 1;
    v8 = v7 / v5 + v4;
    v9 = *(_DWORD **)(a1 + 32);
    if ( *(_BYTE *)(a1 + 345) )
      goto LABEL_6;
  }
  v10 = v9[7] + 1 - v9[5];
LABEL_7:
  result = 0;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 200) + v10 - 1;
    if ( v11 < v8 )
      return v8 - v11;
  }
  return result;
}
