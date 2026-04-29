__int64 __fastcall sub_E2F30(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  char v5; // al
  __int64 v7; // rax
  char v8; // al
  __int64 not_tail; // rbx
  __int64 v10; // rdx

  *a2 = -1;
  if ( a4 )
    goto LABEL_6;
  v5 = *(_BYTE *)(a3 + 48);
  if ( v5 )
  {
    if ( v5 == 6 )
    {
      *a2 = *(_QWORD *)(a3 + 56);
      return 1;
    }
LABEL_6:
    if ( !(unsigned __int8)sub_1CE850(a1, *(_QWORD *)(a3 + 24)) )
    {
      v7 = sub_DC400(*(_QWORD *)(a3 + 24));
      *a2 = v7;
      if ( v7 == -1 )
        *a2 = get_first_fcref_from(*(_QWORD *)(a3 + 24));
    }
    return 1;
  }
  v8 = *(_BYTE *)(a3 + 32);
  if ( v8 != 5 )
  {
    if ( v8 != 6 )
    {
      if ( !under_debugger )
        sub_37E160(50083);
      BUG();
    }
    not_tail = *(_QWORD *)(a3 + 40);
    if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail, 4, v10);
    *a2 = not_tail;
    return 1;
  }
  return 0;
}
