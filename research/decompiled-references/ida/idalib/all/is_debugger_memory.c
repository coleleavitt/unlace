bool __fastcall is_debugger_memory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  bool result; // al
  __int64 v6; // rdx

  v4 = *(_QWORD *)(qword_2CCB598 + 1672);
  result = 0;
  if ( *(int *)(v4 + 800) <= 0 && *(_QWORD *)(v4 + 776) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 624LL);
    if ( (*(_BYTE *)(v6 + 34) & 0x20) == 0 )
    {
      sub_3FC650(*(_QWORD *)(qword_2CCB598 + 1672), 0, v6, a4);
      return rangeset_t_find_range(v4 + 816, a1) != 0;
    }
  }
  return result;
}
