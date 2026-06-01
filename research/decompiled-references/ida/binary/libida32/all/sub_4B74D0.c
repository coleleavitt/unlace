__int64 __fastcall sub_4B74D0(_QWORD *a1, unsigned int a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  clr_abits(a2, 8);
  if ( (unsigned __int8)sub_4B71A0(a1, a2) )
    return sub_4B4590(a1, a2);
  sub_4C8EF0(*a1, a2);
  sub_514A50(2, 0, a2, v3, v4, v5);
  return mark_builtin_widgets(4, 0, 1);
}

