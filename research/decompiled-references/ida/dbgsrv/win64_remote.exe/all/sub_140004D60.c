/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004D60
// Address: 0x0000000140004D60

//----- (0000000140004D60) ----------------------------------------------------
bool __fastcall sub_140004D60(_BYTE *a1)
{
  BOOL (__stdcall *PathIsUNCA)(LPCSTR); // rax
  HMODULE ModuleHandleA; // rax

  PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))qword_1400CAE00;
  if ( !qword_1400CAE00 )
  {
    ModuleHandleA = GetModuleHandleA("shlwapi.dll");
    if ( ModuleHandleA )
    {
      PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))GetProcAddress(ModuleHandleA, "PathIsUNCA");
      qword_1400CAE00 = (__int64)PathIsUNCA;
    }
    else
    {
      PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))qword_1400CAE00;
    }
  }
  return *a1 != 92 && *a1 != 47 && (!PathIsUNCA || !((unsigned int (__fastcall *)(_BYTE *))PathIsUNCA)(a1))
      || (unsigned int)sub_1400049D0(0) == 1;
}
// 1400CAE00: using guessed type __int64 qword_1400CAE00;
