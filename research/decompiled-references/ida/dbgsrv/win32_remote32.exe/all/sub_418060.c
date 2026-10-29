/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418060
// Address: 0x00418060

//----- (00418060) --------------------------------------------------------
_DWORD *__thiscall sub_418060(_DWORD *this)
{
  HMODULE ModuleHandleA; // eax
  HMODULE v3; // edi
  DEP_SYSTEM_POLICY_TYPE (__stdcall *GetSystemDEPPolicy)(); // eax

  sub_44AF40((int)this);
  *this = &off_48B390;
  *(this + 112) = -2;
  *(this + 113) = -1;
  *(this + 114) = 0;
  *(this + 115) = 0;
  *(this + 116) = 0;
  *(this + 117) = 0;
  *(this + 118) = this + 2;
  *(this + 119) = 0;
  *((_BYTE *)this + 480) = 0;
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  v3 = ModuleHandleA;
  if ( !GetProcessDEPPolicy )
    GetProcessDEPPolicy = (BOOL (__stdcall *)(HANDLE, LPDWORD, PBOOL))GetProcAddress(
                                                                        ModuleHandleA,
                                                                        "GetProcessDEPPolicy");
  GetSystemDEPPolicy = (DEP_SYSTEM_POLICY_TYPE (__stdcall *)())dword_4B6A24;
  if ( dword_4B6A24
    || (GetSystemDEPPolicy = (DEP_SYSTEM_POLICY_TYPE (__stdcall *)())GetProcAddress(v3, "GetSystemDEPPolicy"),
        (dword_4B6A24 = (int)GetSystemDEPPolicy) != 0) )
  {
    *(this + 114) = GetSystemDEPPolicy();
  }
  dword_4B6A1C = 0;
  sub_43DCF0(this, "win32");
  return this;
}
// 48B390: using guessed type int (__stdcall *off_48B390)(int, int);
// 4B6A1C: using guessed type int dword_4B6A1C;
// 4B6A24: using guessed type int dword_4B6A24;
