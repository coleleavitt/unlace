__int64 __fastcall auto_mark_range(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v4; // r13
  __int64 result; // rax

  v4 = *(_QWORD **)(qword_2CA1698 + 1480);
  result = get_merge_state();
  if ( (result & 2) == 0 && a1 != -1 )
    return sub_3A1890(v4, a1, a2, a3);
  return result;
}

