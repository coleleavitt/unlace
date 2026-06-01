__int64 __fastcall sub_4B7790(__int64 *a1, unsigned int a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x4000) == 0 )
    return 0;
  sub_3CA520(a1, a2, 0x8000);
  sub_4B4410(a1, a2);
  if ( (unsigned __int8)sub_4B71A0(a1, a2) )
  {
    sub_4B4590(a1, a2);
  }
  else
  {
    sub_4C8EF0(*a1, a2);
    sub_514A50(2, 0, a2, v3, v4, v5);
    mark_builtin_widgets(4, 0, 1);
  }
  return 1;
}

