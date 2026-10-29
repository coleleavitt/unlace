__int64 sub_1281E0()
{
  char v0; // di

  v0 = BYTE2(xmmword_2450C0) & 0xFE;
  if ( (BYTE2(xmmword_2450C0) & 1) == 0 )
    v0 = BYTE2(xmmword_2450C0) | 1;
  BYTE2(xmmword_2450C0) = v0;
  sub_108D20((v0 & 1u) + 1061);
  sub_14B0D0((BYTE2(xmmword_2450C0) & 1) == 0 ? -1 : 1);
  return 1;
}

