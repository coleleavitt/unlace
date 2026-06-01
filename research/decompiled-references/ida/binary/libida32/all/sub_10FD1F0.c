bool __fastcall sub_10FD1F0(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( (*a1 & 0x1000LL) != 0 )
    return (*a1 & 0x8401) == 0;
  return result;
}

