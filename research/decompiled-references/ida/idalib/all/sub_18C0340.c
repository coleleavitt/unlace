__int64 __fastcall sub_18C0340(_QWORD *a1)
{
  if ( (*a1 & 0x200000LL) != 0 )
    return a1[2 * ((*a1 & 0x100000LL) != 0) + 6];
  else
    return (*(_BYTE *)(a1[3] + 29LL) >> 5) & 3 | a1[3];
}
