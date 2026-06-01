unsigned __int64 __fastcall sub_4B7850(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  result = sub_3B9AA0((__int64)a1, a2, 4);
  if ( (result & 0xC000) != 0 )
  {
    set_abits(a2, 4);
    if ( (unsigned __int8)sub_4B71A0(a1, a2) )
    {
      return sub_4B4590(a1, a2);
    }
    else
    {
      sub_4C8EF0(*a1, a2);
      sub_514A50(2, 0, a2, v3, v4, v5);
      return mark_builtin_widgets(4, 0, 1);
    }
  }
  return result;
}

