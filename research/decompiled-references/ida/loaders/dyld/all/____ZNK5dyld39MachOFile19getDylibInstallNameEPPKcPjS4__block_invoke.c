__int64 __fastcall ___ZNK5dyld39MachOFile19getDylibInstallNameEPPKcPjS4__block_invoke(
        __int64 result,
        _DWORD *a2,
        _BYTE *a3)
{
  _DWORD *v3; // x10

  if ( (*a2 | 2) == 0xF )
  {
    v3 = *(_DWORD **)(result + 48);
    **(_DWORD **)(result + 40) = a2[5];
    *v3 = a2[4];
    **(_QWORD **)(result + 56) = (char *)a2 + (unsigned int)a2[2];
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
    *a3 = 1;
  }
  return result;
}
