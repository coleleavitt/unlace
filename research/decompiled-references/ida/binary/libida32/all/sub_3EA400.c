bool __fastcall sub_3EA400(__int64 a1, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( *(int *)(a1 + 792) <= 0
    && *(_QWORD *)(a1 + 768)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 536LL) + 34LL) & 0x20) == 0 )
  {
    sub_3E9710(a1, 0);
    return rangeset_t_find_range(a1 + 808, a2) != 0;
  }
  return result;
}

