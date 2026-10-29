/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4812F6
// Address: 0x004812F6

//----- (004812F6) --------------------------------------------------------
BOOL __cdecl sub_4812F6(void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten)
{
  BOOL v3; // esi

  v3 = WriteConsoleW(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, nullptr);
  if ( !v3 && GetLastError() == 6 )
  {
    sub_4812DF();
    sub_4812A1();
    return WriteConsoleW(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, nullptr);
  }
  return v3;
}
