/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47223E
// Address: 0x0047223E

//----- (0047223E) --------------------------------------------------------
int __cdecl sub_47223E(LPCWSTR lpFileName, int a2)
{
  int v2; // esi
  DWORD FullPathNameW; // eax
  DWORD LastError; // eax
  int v5; // eax

  v2 = 0;
  FullPathNameW = GetFullPathNameW(lpFileName, *(_DWORD *)(a2 + 12), *(LPWSTR *)(a2 + 8), nullptr);
  if ( FullPathNameW )
  {
    if ( FullPathNameW <= *(_DWORD *)(a2 + 12) )
      goto LABEL_7;
    v5 = sub_46D1C6(a2, FullPathNameW + 1);
    if ( v5 )
      return v5;
    FullPathNameW = GetFullPathNameW(lpFileName, *(_DWORD *)(a2 + 12), *(LPWSTR *)(a2 + 8), nullptr);
    if ( FullPathNameW )
    {
LABEL_7:
      *(_DWORD *)(a2 + 16) = FullPathNameW;
      return v2;
    }
  }
  LastError = GetLastError();
  sub_46B94E(LastError);
  return *sub_46B984();
}
