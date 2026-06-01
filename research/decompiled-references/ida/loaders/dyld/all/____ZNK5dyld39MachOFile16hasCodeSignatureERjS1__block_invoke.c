__int64 __fastcall ___ZNK5dyld39MachOFile16hasCodeSignatureERjS1__block_invoke(__int64 result, _DWORD *a2, _BYTE *a3)
{
  _DWORD *v3; // x10

  if ( *a2 == 29 )
  {
    v3 = *(_DWORD **)(result + 40);
    **(_DWORD **)(result + 32) = a2[2];
    *v3 = a2[3];
    *a3 = 1;
  }
  return result;
}
