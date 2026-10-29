__int64 __fastcall sub_C94CC0(_QWORD *a1)
{
  if ( (*a1 & 0x80000LL) != 0 )
    return a1[4];
  else
    return sub_B780B0(a1[2]);
}
