__int64 __fastcall sub_69F550(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // edx

  v2 = 0;
  if ( *a1 != *a2 )
    return v2;
  v2 = 1;
  if ( (*a1 & 3uLL) - 2 <= 1 )
    return v2;
  LOBYTE(v2) = a1[1] == a2[1];
  return v2;
}

