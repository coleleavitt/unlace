__int64 __fastcall sub_C70F80(_QWORD *a1)
{
  if ( (*a1 & 0x80000LL) != 0 )
    return a1[4];
  else
    return sub_B54370(a1[2]);
}

