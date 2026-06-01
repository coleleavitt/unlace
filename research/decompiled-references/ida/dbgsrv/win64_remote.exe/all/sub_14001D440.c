/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D440
// Address: 0x000000014001D440

//----- (000000014001D440) ----------------------------------------------------
__int64 __fastcall sub_14001D440(__int64 a1)
{
  HMODULE ModuleHandleA; // rax
  HMODULE v3; // rdi
  DEP_SYSTEM_POLICY_TYPE (__stdcall *GetSystemDEPPolicy)(); // rax

  sub_140051D60(a1);
  *(_QWORD *)a1 = off_140093F18;
  *(_DWORD *)(a1 + 784) = -2;
  *(_QWORD *)(a1 + 792) = -1;
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = a1 + 8;
  *(_QWORD *)(a1 + 840) = 0;
  *(_BYTE *)(a1 + 848) = 0;
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  v3 = ModuleHandleA;
  if ( !GetProcessDEPPolicy )
    GetProcessDEPPolicy = (BOOL (__stdcall *)(HANDLE, LPDWORD, PBOOL))GetProcAddress(
                                                                        ModuleHandleA,
                                                                        "GetProcessDEPPolicy");
  GetSystemDEPPolicy = (DEP_SYSTEM_POLICY_TYPE (__stdcall *)())qword_1400CAF00;
  if ( qword_1400CAF00
    || (GetSystemDEPPolicy = (DEP_SYSTEM_POLICY_TYPE (__stdcall *)())GetProcAddress(v3, "GetSystemDEPPolicy"),
        (qword_1400CAF00 = (__int64)GetSystemDEPPolicy) != 0) )
  {
    *(_DWORD *)(a1 + 800) = GetSystemDEPPolicy();
  }
  Block = nullptr;
  sub_1400447A0(a1, "win32");
  return a1;
}
// 140093F18: using guessed type __int64 (__fastcall *off_140093F18[4])();
// 1400CAF00: using guessed type __int64 qword_1400CAF00;
