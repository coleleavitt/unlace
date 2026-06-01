__int64 __fastcall sub_FDB3C0(int a1)
{
  unsigned int v1; // eax
  int v2; // edx

  if ( a1 == 35 )
    return 1;
  v1 = sub_20C9750();
  LOBYTE(v2) = v1 == 1;
  LOBYTE(v1) = v1 == 4;
  return v2 | v1;
}

