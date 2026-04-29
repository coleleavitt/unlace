__int64 __fastcall sub_3E48E0(_DWORD *a1, unsigned int a2)
{
  int v3; // edx

  if ( a2 <= 0x1F )
    return a1[20] * a2 + a1[88];
  v3 = a1[173];
  if ( v3 && a2 - 32 <= 0x1F )
    return a1[120] + v3 * (a2 - 32);
  else
    return 0xFFFFFFFFLL;
}
