bool __fastcall sub_E73EA0(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return ((*(__int64 *)(a1 + 72) >> 1) & 3) != 1;
  return result;
}

