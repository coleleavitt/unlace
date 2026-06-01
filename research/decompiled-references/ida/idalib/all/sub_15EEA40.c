__int64 __fastcall sub_15EEA40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 1320);
  v3 = v2 + 32LL * *(unsigned int *)(a1 + 1328);
  if ( v2 == v3 )
    return 0;
  while ( (*(_BYTE *)(v2 + 24) & 3) != 3 || a2 != *(_QWORD *)v2 )
  {
    v2 += 32;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}
