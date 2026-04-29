__int64 __fastcall sub_DFD30(int a1, int a2)
{
  unsigned int v3; // eax
  int v4; // edx

  if ( (getinf(57) & 0xF) != 6 )
    return 1;
  v3 = getinf_flag(3, 4);
  if ( (_BYTE)v3 )
    return 1;
  LOBYTE(v3) = a1 == 1;
  LOBYTE(v4) = a2 != 0;
  return v4 & v3;
}
