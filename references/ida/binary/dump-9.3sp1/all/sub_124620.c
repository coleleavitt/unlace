__int64 __fastcall sub_124620(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  int v5; // r8d
  unsigned __int16 v6; // ax
  unsigned int v7; // edx

  v3 = *(unsigned __int16 *)(a1 + 24);
  v4 = 8 * a3;
  v5 = *(unsigned __int16 *)(a1 + 26);
  v6 = *(_WORD *)(a1 + 24) - v4;
  if ( v3 < v4 )
  {
    v7 = v4 - v3;
    if ( (unsigned __int16)v5 >= v7 )
      v5 -= v7;
    else
      v5 = 0;
    v6 = 0;
  }
  sub_123EA0(*(_OWORD *)(a1 + 8), a2, *(unsigned int *)(a1 + 28), v6 | (v5 << 16));
  return 0;
}
