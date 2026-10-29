/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D0DD
// Address: 0x0046D0DD

//----- (0046D0DD) --------------------------------------------------------
int __cdecl sub_46D0DD(LPCCH lpMultiByteStr, int a2, int a3, UINT CodePage)
{
  int v4; // esi
  int result; // eax
  unsigned int v6; // eax
  DWORD LastError; // eax
  int v8; // eax

  if ( !lpMultiByteStr )
  {
    v4 = a2;
    sub_46D1AC(a2);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
LABEL_3:
    *(_DWORD *)(v4 + 16) = 0;
    return 0;
  }
  if ( *lpMultiByteStr )
  {
    v6 = sub_47B3EB(CodePage, 9u, lpMultiByteStr, -1, nullptr, 0);
    if ( v6 )
    {
      if ( v6 > *(_DWORD *)(a2 + 12) )
      {
        result = sub_46D1ED(a2, v6);
        if ( result )
          return result;
      }
      v8 = sub_47B3EB(CodePage, 9u, lpMultiByteStr, -1, *(LPWSTR *)(a2 + 8), *(_DWORD *)(a2 + 12));
      if ( v8 )
      {
        *(_DWORD *)(a2 + 16) = v8 - 1;
        return 0;
      }
    }
    LastError = GetLastError();
    sub_46B94E(LastError);
    return *sub_46B984();
  }
  v4 = a2;
  if ( *(_DWORD *)(a2 + 12) || (result = sub_46D1ED(a2, 1)) == 0 )
  {
    **(_WORD **)(a2 + 8) = 0;
    goto LABEL_3;
  }
  return result;
}
