unsigned __int64 __fastcall sub_4CE6B0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  result = sub_3BE900(a1, a2, 4);
  if ( (result & 0xC000) != 0 )
  {
    set_abits(a2, 8);
    if ( (unsigned __int8)sub_4CDF30(a1, a2) )
    {
      return sub_4CB2B0(a1, a2);
    }
    else
    {
      sub_4E0050(*a1, a2);
      sub_52CCE0(2, 0, a2, v3, v4, v5);
      return mark_builtin_widgets(4, 0, 1);
    }
  }
  return result;
}
