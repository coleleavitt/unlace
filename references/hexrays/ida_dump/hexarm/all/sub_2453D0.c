__int64 __fastcall sub_2453D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 <= 0x38 )
  {
    v3 = 1;
    if ( v2 <= 0x33 )
    {
      v3 = 0;
      if ( v2 - 2 <= 0xD )
        LOBYTE(v3) = *(_QWORD *)(a1 + 24) == a2;
    }
    return v3;
  }
  v3 = 0;
  if ( v2 != 59 )
    return v3;
  LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 57;
  return v3;
}
