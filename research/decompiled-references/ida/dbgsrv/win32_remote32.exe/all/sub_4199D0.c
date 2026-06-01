/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4199D0
// Address: 0x004199D0

//----- (004199D0) --------------------------------------------------------
DWORD __stdcall sub_4199D0(int a1)
{
  HMODULE ModuleHandleA; // eax
  DWORD (__stdcall *FlsAlloc)(PFLS_CALLBACK_FUNCTION); // eax

  if ( (dword_4B6ACC & 1) != 0 )
  {
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))dword_4B6AC8;
  }
  else
  {
    dword_4B6ACC |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))GetProcAddress(ModuleHandleA, "FlsAlloc");
    dword_4B6AC8 = (int)FlsAlloc;
  }
  if ( FlsAlloc )
    return ((int (__cdecl *)(int))FlsAlloc)(a1);
  else
    return TlsAlloc();
}
// 4B6AC8: using guessed type int dword_4B6AC8;
// 4B6ACC: using guessed type int dword_4B6ACC;
