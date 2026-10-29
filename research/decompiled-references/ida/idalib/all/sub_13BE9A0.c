unsigned __int64 __fastcall sub_13BE9A0(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 12LL * a2 + 24);
  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 12LL * a2 + 28);
  if ( a1[8] )
  {
    v2 = _byteswap_ulong(v2);
    v3 = _byteswap_ulong(v3);
  }
  return __PAIR64__(v3, v2);
}
