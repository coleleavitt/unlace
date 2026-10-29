__int64 __fastcall sub_B771C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // edx

  v4 = sub_B76070(a1, a2, a3, a4);
  v5 = 0;
  if ( v4 )
    LOBYTE(v5) = *(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) != 0;
  return v5;
}
