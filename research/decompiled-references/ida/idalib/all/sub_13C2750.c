__int64 __fastcall sub_13C2750(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = sub_13C2430(a1, a2);
  v3 = 0;
  if ( !v2 )
    return v3;
  v3 = 1;
  if ( (*(_BYTE *)v2 & 4) != 0 )
    return v3;
  LOBYTE(v3) = *(_QWORD *)(v2 + 8) != 0;
  return v3;
}
