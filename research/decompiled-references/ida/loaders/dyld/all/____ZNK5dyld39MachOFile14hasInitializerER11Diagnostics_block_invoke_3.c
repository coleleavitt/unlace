__int64 __fastcall ___ZNK5dyld39MachOFile14hasInitializerER11Diagnostics_block_invoke_3(
        __int64 result,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  if ( *(_BYTE *)(a2 + 92) == 22 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
    *a4 = 1;
  }
  return result;
}
