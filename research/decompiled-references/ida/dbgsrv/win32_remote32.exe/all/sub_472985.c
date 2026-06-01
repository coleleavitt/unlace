/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472985
// Address: 0x00472985

//----- (00472985) --------------------------------------------------------
HANDLE __cdecl sub_472985(
        LPCWSTR lpFileName,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        int a3,
        DWORD dwDesiredAccess,
        DWORD dwCreationDisposition,
        DWORD dwShareMode,
        __int64 a7)
{
  return CreateFileW(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           HIDWORD(a7) | a7,
           nullptr);
}
