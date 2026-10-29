/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47957F
// Address: 0x0047957F

//----- (0047957F) --------------------------------------------------------
int __cdecl sub_47957F(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int a3, _DWORD *a4)
{
  signed int v4; // esi
  _DWORD *v5; // esi
  bool v6; // cf
  int v7; // eax
  int v9; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v10; // [esp+Ch] [ebp-Ch] BYREF
  char v11; // [esp+14h] [ebp-4h]

  if ( !lpMultiByteStr || !a3 )
  {
    dword_4B7D3C = 0;
    dword_4B7D40 = 0;
    return 0;
  }
  if ( !*lpMultiByteStr )
  {
    if ( lpWideCharStr )
      *lpWideCharStr = 0;
    return 0;
  }
  sub_467FF8((int)&v9, a4);
  if ( v10[2] != 65001 )
  {
    if ( !v10[42] )
    {
      if ( lpWideCharStr )
        *lpWideCharStr = *(unsigned __int8 *)lpMultiByteStr;
      v4 = 1;
      goto LABEL_24;
    }
    if ( !sub_478A25(*(unsigned __int8 *)lpMultiByteStr, &v10) )
    {
      v4 = 1;
      if ( sub_47B3EB(v10[2], 9u, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != nullptr) )
        goto LABEL_24;
      goto LABEL_22;
    }
    v5 = v10;
    if ( (int)v10[1] > 1 )
    {
      v6 = a3 < v10[1];
      if ( (signed int)a3 < v10[1] )
      {
LABEL_18:
        if ( !v6 && lpMultiByteStr[1] )
          goto LABEL_20;
LABEL_22:
        *sub_46B984() = 42;
LABEL_23:
        v4 = -1;
        goto LABEL_24;
      }
      v7 = sub_47B3EB(v10[2], 9u, lpMultiByteStr, v10[1], lpWideCharStr, lpWideCharStr != nullptr);
      v5 = v10;
      if ( v7 )
      {
LABEL_20:
        v4 = v5[1];
        goto LABEL_24;
      }
    }
    v6 = a3 < v5[1];
    goto LABEL_18;
  }
  v4 = sub_47C2CC((__int16 *)lpWideCharStr, lpMultiByteStr, a3, &dword_4B7D3C);
  if ( v4 < 0 )
    goto LABEL_23;
LABEL_24:
  if ( v11 )
    *(_DWORD *)(v9 + 848) &= ~2u;
  return v4;
}
// 4B7D3C: using guessed type int dword_4B7D3C;
// 4B7D40: using guessed type int dword_4B7D40;
