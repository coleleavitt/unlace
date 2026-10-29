__int64 __fastcall sub_368D20(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  FILE *v4; // r8

  v2 = -1;
  v3 = *(unsigned int *)(a1 + 8);
  if ( v3 < (unsigned __int64)xmmword_2CA1588 )
  {
    v4 = *(FILE **)(qword_2CA1580 + 8 * v3);
    if ( v4 )
      v2 = fwritebytes(v4);
  }
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}

