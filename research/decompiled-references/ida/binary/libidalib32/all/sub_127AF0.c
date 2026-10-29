__int64 sub_127AF0()
{
  char v0; // di

  v0 = BYTE10(xmmword_244090) & 0xFE;
  if ( (BYTE10(xmmword_244090) & 1) == 0 )
    v0 = BYTE10(xmmword_244090) | 1;
  BYTE10(xmmword_244090) = v0;
  sub_108A90((v0 & 1u) + 1061);
  sub_14A8F0((BYTE10(xmmword_244090) & 1) == 0 ? -1 : 1);
  return 1;
}

