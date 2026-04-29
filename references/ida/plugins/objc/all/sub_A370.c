__int64 __fastcall sub_A370(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 28 )
    return 4 * (unsigned int)(v2 != 46) + 2;
  else
    return 4 * (unsigned int)(v2 < 27) + 2;
}
