_BOOL8 __fastcall sub_212A0(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v6; // edx
  unsigned int v7; // r8d

  v4 = a1[3];
  v6 = a1[2] + a1[4] - v4;
  if ( v6 > a3 )
    v6 = a3;
  v7 = v4 + v6;
  if ( v4 < v4 + v6 )
  {
    do
      *a2++ = v4++;
    while ( v7 != v4 );
    a1[3] = v7;
  }
  *a4 = v6;
  return v6 == 0;
}
