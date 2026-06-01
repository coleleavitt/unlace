__int64 __fastcall sub_10B7A40(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax

  if ( *(_DWORD *)(a2 + 24) != 1 )
    return 0;
  if ( !(unsigned __int8)sub_12A8E60(*(unsigned int *)(**(_QWORD **)(a2 + 16) + 12LL)) )
    return 0;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = v3 - 3;
  LOBYTE(v4) = v3 - 3 > 2;
  v3 -= 7;
  LOBYTE(v3) = v3 > 1;
  return v3 & v4 ^ 1;
}

