_UNKNOWN **__fastcall sub_B3E290(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xC6 )
    return *(_UNKNOWN ***)(*(_QWORD *)(a1 + 16) + 8LL * a2 - 1592);
  else
    return &off_2B49280 + 3 * a2;
}
