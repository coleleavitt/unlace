/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419930
// Address: 0x00419930

//----- (00419930) --------------------------------------------------------
int __stdcall sub_419930(int a1)
{
  HMODULE ModuleHandleA; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax

  if ( (dword_4B6AF4 & 1) != 0 )
  {
    EncodePointer = (PVOID (__stdcall *)(PVOID))dword_4B6AF0;
  }
  else
  {
    dword_4B6AF4 |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    EncodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleA, "EncodePointer");
    dword_4B6AF0 = (int)EncodePointer;
  }
  if ( EncodePointer )
    return ((int (__cdecl *)(int))EncodePointer)(a1);
  else
    return a1;
}
// 4B6AF0: using guessed type int dword_4B6AF0;
// 4B6AF4: using guessed type int dword_4B6AF4;
