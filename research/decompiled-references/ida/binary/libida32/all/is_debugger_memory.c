bool __fastcall is_debugger_memory(unsigned int a1)
{
  __int64 v1; // rbx
  bool result; // al

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  result = 0;
  if ( *(int *)(v1 + 792) <= 0
    && *(_QWORD *)(v1 + 768)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 + 536LL) + 34LL) & 0x20) == 0 )
  {
    sub_3E9710(*(_QWORD *)(qword_2CA1698 + 1480), 0);
    return rangeset_t_find_range(v1 + 808, a1) != 0;
  }
  return result;
}

