/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417F30
// Address: 0x00417F30

//----- (00417F30) --------------------------------------------------------
_BYTE *__thiscall sub_417F30(_BYTE *this)
{
  HMODULE ModuleHandleA; // edi
  BOOL (__stdcall *Module32Next)(HANDLE, LPMODULEENTRY32); // eax
  bool v4; // zf

  *(this + 29) = sub_4560B0("IDA_DEBUGBREAKPROCESS", nullptr);
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  *((_DWORD *)this + 5) = GetProcAddress(ModuleHandleA, "DebugActiveProcessStop");
  *((_DWORD *)this + 6) = GetProcAddress(ModuleHandleA, "DebugBreakProcess");
  *(_DWORD *)this = GetProcAddress(ModuleHandleA, "CreateToolhelp32Snapshot");
  *((_DWORD *)this + 1) = GetProcAddress(ModuleHandleA, "Process32First");
  *((_DWORD *)this + 2) = GetProcAddress(ModuleHandleA, "Process32Next");
  *((_DWORD *)this + 3) = GetProcAddress(ModuleHandleA, "Module32First");
  Module32Next = (BOOL (__stdcall *)(HANDLE, LPMODULEENTRY32))GetProcAddress(ModuleHandleA, "Module32Next");
  v4 = *(_DWORD *)this == 0;
  *((_DWORD *)this + 4) = Module32Next;
  if ( !v4 && *((_DWORD *)this + 1) && *((_DWORD *)this + 2) && *((_DWORD *)this + 3) && Module32Next )
  {
    *(this + 28) = 1;
    return this;
  }
  else
  {
    *(this + 28) = 0;
    return this;
  }
}
