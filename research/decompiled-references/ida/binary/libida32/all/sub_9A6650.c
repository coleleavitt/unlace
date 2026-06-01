char __fastcall sub_9A6650(__int64 *a1, __int64 *a2)
{
  if ( (*a1 & 0xFFFFFFFFFFFFFFF8LL) != 0 && *(_BYTE *)(*a1 & 0xFFFFFFFFFFFFFFF8LL) == 2 )
    return 1;
  else
    return sub_9A6060(a1, a2);
}

