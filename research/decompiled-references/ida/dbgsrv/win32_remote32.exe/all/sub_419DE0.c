/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419DE0
// Address: 0x00419DE0

//----- (00419DE0) --------------------------------------------------------
int __stdcall sub_419DE0(_DWORD *a1)
{
  HMODULE ModuleHandleA; // eax
  void (__stdcall *InitializeSListHead)(PSLIST_HEADER); // eax

  if ( (dword_4B6AFC & 1) != 0 )
  {
    InitializeSListHead = (void (__stdcall *)(PSLIST_HEADER))dword_4B6AF8;
  }
  else
  {
    dword_4B6AFC |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    InitializeSListHead = (void (__stdcall *)(PSLIST_HEADER))GetProcAddress(ModuleHandleA, "InitializeSListHead");
    dword_4B6AF8 = (int)InitializeSListHead;
  }
  if ( InitializeSListHead )
    return ((int (__cdecl *)(_DWORD *))InitializeSListHead)(a1);
  *a1 = 0;
  a1[1] = 0;
  return (int)a1;
}
// 4B6AF8: using guessed type int dword_4B6AF8;
// 4B6AFC: using guessed type int dword_4B6AFC;
