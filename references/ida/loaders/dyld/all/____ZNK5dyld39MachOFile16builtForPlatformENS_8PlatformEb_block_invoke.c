__int64 __fastcall ___ZNK5dyld39MachOFile16builtForPlatformENS_8PlatformEb_block_invoke(__int64 result, int a2)
{
  __int64 v2; // x8

  if ( *(_DWORD *)(result + 48) == a2 )
    v2 = *(_QWORD *)(result + 32);
  else
    v2 = *(_QWORD *)(result + 40);
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + 24LL) = 1;
  return result;
}
