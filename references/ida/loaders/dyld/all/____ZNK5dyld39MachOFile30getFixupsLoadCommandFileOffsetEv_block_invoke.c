__int64 __fastcall ___ZNK5dyld39MachOFile30getFixupsLoadCommandFileOffsetEv_block_invoke(__int64 result, int *a2)
{
  int v2; // w8
  bool v3; // zf

  v2 = *a2;
  if ( *a2 == -2147483614 || (v2 != 34 ? (v3 = v2 == -2147483596) : (v3 = 1), v3) )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = (_DWORD)a2 - *(_DWORD *)(result + 40);
  return result;
}
