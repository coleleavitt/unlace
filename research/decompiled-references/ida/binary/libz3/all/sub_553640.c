__int64 __fastcall sub_553640(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a1 + 524);
  if ( v2 )
    v2 = v3 + 8 * v2 + v3 * (v2 - 1);
  return (unsigned int)(v3 + v2 + 88);
}

