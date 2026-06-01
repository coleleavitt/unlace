__int64 __fastcall sub_18379F0(int a1, int a2, int a3, unsigned int a4, char a5)
{
  int v6; // r9d
  int v7; // eax

  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    v6 = a4 & 1;
    v7 = (a4 >> 2) & 1;
  }
  else
  {
    if ( !a3 || a3 == 5 )
      return sub_1A68D90(a1, a2, a3, 0, 0, 0, 0, 0);
    v6 = 0;
    v7 = 0;
  }
  if ( a5 )
    return sub_1A68D90(a1, a2, a3, 1, (a4 >> 2) & 1, 0, v6, v7);
  else
    return sub_1A68D90(a1, a2, a3, a4 & 1, (a4 >> 2) & 1, 0, v6, v7);
}
