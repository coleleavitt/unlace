__int64 __fastcall sub_BCDDE0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  if ( v2 && *(_DWORD *)(a1 + 1744) == *v2 )
    LOBYTE(v3) = v2[1] == 11;
  return v3;
}

