__int64 __fastcall ___ZNK5dyld39MachOFile33findFairPlayEncryptionLoadCommandEv_block_invoke(
        __int64 result,
        _DWORD *a2,
        _BYTE *a3)
{
  if ( *a2 == 44 || *a2 == 33 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = a2;
    *a3 = 1;
  }
  return result;
}
