__int64 __fastcall sub_CF9D0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  _DWORD *v4; // rax
  int v5; // eax
  unsigned int v6; // edx

  if ( !a1 )
    return (unsigned int)-1;
  v2 = *(_QWORD *)(a1 + 32LL * a2 + 8);
  v3 = v2;
  if ( !dbg )
    return v3;
  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 )
    return v3;
  v4 = qword_2515B0;
  if ( !qword_2515B0 )
    return v3;
  *((_QWORD *)qword_2515B0 + 1) = a1;
  v4[4] = a2;
  *v4 = v2;
  v5 = sub_CC780((__int64)v4, 11);
  v6 = -1;
  if ( v5 == 1 )
    return *(unsigned int *)qword_2515B0;
  return v6;
}

