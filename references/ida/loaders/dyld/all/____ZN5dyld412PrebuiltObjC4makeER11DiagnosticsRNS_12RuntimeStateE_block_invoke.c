__int64 __fastcall ___ZN5dyld412PrebuiltObjC4makeER11DiagnosticsRNS_12RuntimeStateE_block_invoke(
        __int64 a1,
        const char *a2,
        unsigned __int64 *a3,
        unsigned int *a4)
{
  __int64 result; // x0
  unsigned int v8; // w8
  unsigned __int64 v9; // x9
  unsigned int v10; // w8
  unsigned __int64 v11; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v11 = 0;
  v12 = 0;
  result = dyld3::MachOFile::findObjCDataSection(*(dyld3::MachOFile **)(a1 + 32), a2, &v12, &v11);
  if ( (_DWORD)result )
  {
    v8 = v11;
    v9 = *(unsigned int *)(a1 + 48);
    if ( v11 % v9 )
      return Diagnostics::error((Diagnostics *)(*(_QWORD *)(a1 + 40) + 32LL), "Invalid objc pointer section size");
    *a3 = v12;
    v10 = v8 / (unsigned int)v9;
  }
  else
  {
    v10 = 0;
    *a3 = 0;
  }
  *a4 = v10;
  return result;
}
