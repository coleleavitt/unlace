/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D1E0
// Address: 0x000000014001D1E0

//----- (000000014001D1E0) ----------------------------------------------------
__int64 __fastcall sub_14001D1E0(__int64 a1)
{
  HMODULE ModuleHandleA; // rbx
  BOOL (__stdcall *Module32Next)(HANDLE, LPMODULEENTRY32); // rax
  bool v4; // zf

  *(_BYTE *)(a1 + 57) = sub_14005D470("IDA_DEBUGBREAKPROCESS", 0);
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  *(_QWORD *)(a1 + 40) = GetProcAddress(ModuleHandleA, "DebugActiveProcessStop");
  *(_QWORD *)(a1 + 48) = GetProcAddress(ModuleHandleA, "DebugBreakProcess");
  *(_QWORD *)a1 = GetProcAddress(ModuleHandleA, "CreateToolhelp32Snapshot");
  *(_QWORD *)(a1 + 8) = GetProcAddress(ModuleHandleA, "Process32First");
  *(_QWORD *)(a1 + 16) = GetProcAddress(ModuleHandleA, "Process32Next");
  *(_QWORD *)(a1 + 24) = GetProcAddress(ModuleHandleA, "Module32First");
  Module32Next = (BOOL (__stdcall *)(HANDLE, LPMODULEENTRY32))GetProcAddress(ModuleHandleA, "Module32Next");
  v4 = *(_QWORD *)a1 == 0;
  *(_QWORD *)(a1 + 32) = Module32Next;
  if ( !v4 && *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) && Module32Next )
  {
    *(_BYTE *)(a1 + 56) = 1;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 56) = 0;
    return a1;
  }
}
