/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467B2E
// Address: 0x00467B2E

//----- (00467B2E) --------------------------------------------------------
HMODULE __cdecl sub_467B2E(WCHAR *lpLibFileName)
{
  HMODULE result; // eax

  result = LoadLibraryExW(lpLibFileName, nullptr, 0x800u);
  if ( !result )
  {
    if ( GetLastError() == 87 && sub_477F4E(lpLibFileName, L"api-ms-", 7) )
      return LoadLibraryExW(lpLibFileName, nullptr, 0);
    else
      return nullptr;
  }
  return result;
}
// 4A4F38: using guessed type wchar_t aApiMs[8];
