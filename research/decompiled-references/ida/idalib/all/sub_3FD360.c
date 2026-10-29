bool __fastcall sub_3FD360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  __int64 v5; // rdx

  result = 0;
  if ( *(int *)(a1 + 800) <= 0 && *(_QWORD *)(a1 + 776) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 624LL);
    if ( (*(_BYTE *)(v5 + 34) & 0x20) == 0 )
    {
      sub_3FC650(a1, 0, v5, a4);
      return rangeset_t_find_range(a1 + 816, a2) != 0;
    }
  }
  return result;
}
