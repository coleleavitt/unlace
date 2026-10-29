/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D3A0
// Address: 0x000000014001D3A0

//----- (000000014001D3A0) ----------------------------------------------------
__int64 __fastcall sub_14001D3A0(DWORD dwProcessId)
{
  HANDLE v1; // rdi
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // rax
  HMODULE ModuleHandleA; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = OpenProcess(0x400u, 0, dwProcessId);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))qword_1400CAEE8;
  if ( qword_1400CAEE8
    || (ModuleHandleA = GetModuleHandleA("kernel32.dll"),
        IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(ModuleHandleA, "IsWow64Process"),
        (qword_1400CAEE8 = (__int64)IsWow64Process) != 0) )
  {
    v4 = 0;
    v6 = 0;
    if ( ((unsigned int (__fastcall *)(HANDLE, int *))IsWow64Process)(v1, &v6) )
      v4 = v6 != 0;
  }
  else
  {
    v4 = -2;
  }
  CloseHandle(v1);
  return v4;
}
// 1400CAEE8: using guessed type __int64 qword_1400CAEE8;
