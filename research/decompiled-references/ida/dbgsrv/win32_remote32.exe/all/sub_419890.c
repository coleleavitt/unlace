/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419890
// Address: 0x00419890

//----- (00419890) --------------------------------------------------------
int __stdcall sub_419890(int a1)
{
  HMODULE ModuleHandleA; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax

  if ( (dword_4B6AEC & 1) != 0 )
  {
    DecodePointer = (PVOID (__stdcall *)(PVOID))dword_4B6AE8;
  }
  else
  {
    dword_4B6AEC |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    DecodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleA, "DecodePointer");
    dword_4B6AE8 = (int)DecodePointer;
  }
  if ( DecodePointer )
    return ((int (__cdecl *)(int))DecodePointer)(a1);
  else
    return a1;
}
// 4B6AE8: using guessed type int dword_4B6AE8;
// 4B6AEC: using guessed type int dword_4B6AEC;
