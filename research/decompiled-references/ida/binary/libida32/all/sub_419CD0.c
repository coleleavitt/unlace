__int64 __fastcall sub_419CD0(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v3 = *a1;
  v4 = 0;
  if ( *a1 >= *a2 && v3 < a2[1] )
  {
    v4 = 1;
    *a1 = v3 + a3;
  }
  return v4;
}

