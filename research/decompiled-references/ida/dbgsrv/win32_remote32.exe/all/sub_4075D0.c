/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4075D0
// Address: 0x004075D0

//----- (004075D0) --------------------------------------------------------
bool __thiscall sub_4075D0(
        HANDLE *this,
        LONG lDistanceToMove,
        int a3,
        LPVOID lpBuffer,
        DWORD nNumberOfBytesToRead,
        LPDWORD lpNumberOfBytesRead)
{
  void *v7; // eax

  v7 = *(this + 2);
  return v7 != (void *)-1
      && off_4B4054(v7, lDistanceToMove, a3, nullptr, 0)
      && ReadFile(*(this + 2), lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, nullptr);
}
// 4B4054: using guessed type int (__stdcall *off_4B4054)(HANDLE hFile, LONG lDistanceToMove, int a3, DWORD *a4, DWORD dwMoveMethod);
