__int64 __fastcall sub_3E4A00(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = a1[173];
  v3 = 0;
  if ( v2 && a2 >= a1[120] )
    LOBYTE(v3) = a2 <= a1[151] + v2 - 1;
  return v3;
}
