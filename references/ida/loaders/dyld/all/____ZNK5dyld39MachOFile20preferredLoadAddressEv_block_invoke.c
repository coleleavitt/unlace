__int64 __fastcall ___ZNK5dyld39MachOFile20preferredLoadAddressEv_block_invoke(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // x0

  result = _platform_strcmp(*(const char **)(a2 + 40), "__TEXT");
  if ( !(_DWORD)result )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = *(_QWORD *)(a2 + 16);
    *a3 = 1;
  }
  return result;
}
