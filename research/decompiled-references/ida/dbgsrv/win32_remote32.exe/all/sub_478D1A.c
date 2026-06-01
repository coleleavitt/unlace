/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478D1A
// Address: 0x00478D1A

//----- (00478D1A) --------------------------------------------------------
HMODULE __cdecl sub_478D1A(_DWORD *a1, _DWORD *a2)
{
  HMODULE Library; // esi
  WCHAR *v4; // ebx
  volatile __int32 *v6; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    if ( a1 == a2 )
      return nullptr;
    Library = (HMODULE)dword_4B7A60[*a1];
    v6 = &dword_4B7A60[*a1];
    if ( !Library )
      break;
    if ( Library != (HMODULE)-1 )
      return Library;
LABEL_16:
    ++a1;
  }
  v4 = (WCHAR *)(&lpLibFileName)[*a1];
  Library = LoadLibraryExW(v4, nullptr, 0x800u);
  if ( !Library )
  {
    Library = GetLastError() == 87 && sub_477F4E(v4, L"api-ms-", 7) && sub_477F4E(v4, L"ext-ms-", 7)
            ? LoadLibraryExW(v4, nullptr, 0)
            : nullptr;
    if ( !Library )
    {
      _InterlockedExchange(v6, -1);
      goto LABEL_16;
    }
  }
  if ( _InterlockedExchange(v6, (__int32)Library) )
    FreeLibrary(Library);
  return Library;
}
// 478DC8: conditional instruction was optimized away because esi.4!=0
// 4A4F38: using guessed type wchar_t aApiMs[8];
// 4A7930: using guessed type wchar_t aExtMs[8];
// 4B7A60: using guessed type int dword_4B7A60[20];
