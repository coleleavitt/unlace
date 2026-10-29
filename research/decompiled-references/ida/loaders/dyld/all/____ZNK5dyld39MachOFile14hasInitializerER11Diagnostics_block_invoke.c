__int64 __fastcall ___ZNK5dyld39MachOFile14hasInitializerER11Diagnostics_block_invoke(
        __int64 result,
        _DWORD *a2,
        _BYTE *a3)
{
  if ( *a2 == 26 || *a2 == 17 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
    *a3 = 1;
  }
  return result;
}
