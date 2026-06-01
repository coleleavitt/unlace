unsigned __int64 __fastcall make_name_public(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 result; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  result = sub_3BE900(v1, a1, 4);
  if ( (result & 0xC000) != 0 )
  {
    set_abits(a1, 4);
    if ( (unsigned __int8)sub_4CDF30(v1, a1) )
    {
      return sub_4CB2B0(v1, a1);
    }
    else
    {
      sub_4E0050(*v1, a1);
      sub_52CCE0(2, 0, a1, v3, v4, v5);
      return mark_builtin_widgets(4, 0, 1);
    }
  }
  return result;
}
