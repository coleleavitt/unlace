__n128 __fastcall ___ZNK5dyld39MachOFile7getUuidEPh_block_invoke(__int64 a1, __int64 a2, _BYTE *a3)
{
  __n128 result; // q0

  if ( *(_DWORD *)a2 == 27 )
  {
    result = *(__n128 *)(a2 + 8);
    *(__n128 *)*(_QWORD *)(a1 + 40) = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
    *a3 = 1;
  }
  return result;
}
