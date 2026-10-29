/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B3EB
// Address: 0x0047B3EB

//----- (0047B3EB) --------------------------------------------------------
int __cdecl sub_47B3EB(
        UINT CodePage,
        DWORD dwFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  DWORD v6; // ecx

  if ( CodePage <= 0xC435 )
  {
    if ( CodePage != 50229
      && CodePage != 42
      && (CodePage <= 0xC42B || CodePage > 0xC42E && CodePage != 50225 && CodePage != 50227) )
    {
      goto LABEL_8;
    }
LABEL_16:
    v6 = 0;
    return MultiByteToWideChar(CodePage, v6, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
  }
  if ( CodePage == 54936 )
    goto LABEL_14;
  if ( CodePage > 0xDEA9 )
  {
    if ( CodePage <= 0xDEB3 || CodePage == 65000 )
      goto LABEL_16;
    if ( CodePage == 65001 )
    {
LABEL_14:
      v6 = dwFlags & 8;
      return MultiByteToWideChar(CodePage, v6, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
    }
  }
LABEL_8:
  v6 = dwFlags;
  return MultiByteToWideChar(CodePage, v6, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
