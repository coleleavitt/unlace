__int64 __fastcall ___ZNK5dyld415SyscallDelegate15mapFileReadOnlyER11DiagnosticsPKcPmPNS_6FileIDEPbPc_block_invoke(
        __int64 result,
        int a2,
        int a3,
        dyld3::MachOAnalyzer *this,
        unsigned __int64 a5)
{
  __int64 v6; // x19

  if ( a2 == 16777228 && (a3 & 0xFFFFFF) == 2 )
  {
    v6 = result;
    result = dyld3::MachOAnalyzer::isOSBinary(
               this,
               *(_DWORD *)(result + 48),
               (unsigned __int64)this - *(_QWORD *)(result + 32),
               a5);
    if ( (_DWORD)result )
      **(_BYTE **)(v6 + 40) = 1;
  }
  return result;
}
