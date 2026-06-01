/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419F20
// Address: 0x00419F20

//----- (00419F20) --------------------------------------------------------
int __stdcall sub_419F20(HANDLE hFile, LONG lDistanceToMove, int a3, DWORD *a4, DWORD dwMoveMethod)
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *SetFilePointerEx)(HANDLE, LARGE_INTEGER, PLARGE_INTEGER, DWORD); // eax
  DWORD v8; // esi
  LONG v9; // eax
  LONG DistanceToMoveHigh[4]; // [esp+8h] [ebp-10h] BYREF

  if ( (dword_4B6B0C & 1) != 0 )
  {
    SetFilePointerEx = (BOOL (__stdcall *)(HANDLE, LARGE_INTEGER, PLARGE_INTEGER, DWORD))dword_4B6B08;
  }
  else
  {
    dword_4B6B0C |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    SetFilePointerEx = (BOOL (__stdcall *)(HANDLE, LARGE_INTEGER, PLARGE_INTEGER, DWORD))GetProcAddress(
                                                                                           ModuleHandleA,
                                                                                           "SetFilePointerEx");
    dword_4B6B08 = (int)SetFilePointerEx;
    DistanceToMoveHigh[3] = -1;
  }
  if ( SetFilePointerEx )
    return ((int (__stdcall *)(HANDLE, LONG, int, DWORD *, DWORD))SetFilePointerEx)(
             hFile,
             lDistanceToMove,
             a3,
             a4,
             dwMoveMethod);
  DistanceToMoveHigh[0] = a3;
  v8 = SetFilePointer(hFile, lDistanceToMove, DistanceToMoveHigh, dwMoveMethod);
  if ( v8 == -1 && GetLastError() )
    return 0;
  if ( a4 )
  {
    v9 = DistanceToMoveHigh[0];
    *a4 = v8;
    a4[1] = v9;
  }
  return 1;
}
// 4B6B08: using guessed type int dword_4B6B08;
// 4B6B0C: using guessed type int dword_4B6B0C;
