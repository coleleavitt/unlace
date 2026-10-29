bool __fastcall sub_18C0310(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( (*a1 & 0x100000LL) != 0 )
    return LODWORD(a1[2 * ((*a1 & 0x80000LL) != 0) + 4 + ((*a1 & 0x200000LL) != 0)]) != 0;
  return result;
}
