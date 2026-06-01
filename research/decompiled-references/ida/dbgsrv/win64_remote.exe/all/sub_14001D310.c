/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D310
// Address: 0x000000014001D310

//----- (000000014001D310) ----------------------------------------------------
__int64 __fastcall sub_14001D310(__int64 a1)
{
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // rax
  HMODULE ModuleHandleA; // rax
  unsigned int v5; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))qword_1400CAEE8;
  if ( !qword_1400CAEE8 )
  {
    ModuleHandleA = GetModuleHandleA("kernel32.dll");
    IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(ModuleHandleA, "IsWow64Process");
    qword_1400CAEE8 = (__int64)IsWow64Process;
    if ( !IsWow64Process )
      return 4294967294LL;
  }
  v5 = 0;
  v6 = 0;
  if ( !((unsigned int (__fastcall *)(__int64, int *))IsWow64Process)(a1, &v6) )
    return 0;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
// 1400CAEE8: using guessed type __int64 qword_1400CAEE8;
