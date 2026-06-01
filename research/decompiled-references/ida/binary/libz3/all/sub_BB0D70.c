bool __fastcall sub_BB0D70(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r11
  _DWORD *v4; // r8
  int v5; // r9d
  __int64 v6; // rsi
  unsigned int v7; // edx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  bool result; // al
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx

  v3 = a2;
  v4 = a3;
  if ( *a3 >= *a2 )
  {
    v4 = a2;
    v3 = a3;
  }
  v5 = v4[3];
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = (v3[3] - v5) ^ (v5 << 8);
  v9 = ((v8 ^ ((v5 - v8) << 16)) + v8 - v5) ^ ((v5 - v8) << 10);
  v10 = 24LL * (v9 & (v7 - 1));
  v11 = 24LL * v7;
  v12 = v6 + v10;
  v13 = v6 + v11;
  if ( v10 == v11 )
  {
LABEL_12:
    while ( v12 != v6 )
    {
      v17 = *(_QWORD *)(v6 + 8);
      if ( v17 > 1 )
      {
        result = v4 == (_DWORD *)v17 && *(_DWORD *)v6 == v9;
        if ( result && v3 == *(_DWORD **)(v6 + 16) )
          return result;
      }
      else if ( !v17 )
      {
        return 0;
      }
      v6 += 24;
    }
    return 0;
  }
  v14 = v6 + v10;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 > 1 )
      break;
    if ( !v16 )
      return 0;
LABEL_6:
    v14 += 24;
    if ( v13 == v14 )
      goto LABEL_12;
  }
  result = v4 == (_DWORD *)v16 && *(_DWORD *)v14 == v9;
  if ( !result || v3 != *(_DWORD **)(v14 + 16) )
    goto LABEL_6;
  return result;
}

