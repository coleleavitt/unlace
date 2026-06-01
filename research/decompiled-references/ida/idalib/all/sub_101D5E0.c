__int64 __fastcall sub_101D5E0(unsigned int *a1, int a2)
{
  unsigned int v2; // esi

  v2 = a2 & 0x7FFFFFFF;
  if ( a1[119] > v2 || a1[120] <= v2 )
    return sub_101D590((__int64)a1, v2);
  else
    return a1[118];
}
