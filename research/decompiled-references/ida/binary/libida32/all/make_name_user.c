__int64 __fastcall make_name_user(unsigned int a1)
{
  _QWORD *v1; // rbp
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (sub_3B9AA0((__int64)v1, a1, 4) & 0x4000) == 0 )
    return 0;
  sub_3CA7E0(v1, a1, 0x8000);
  if ( (unsigned __int8)sub_4B71A0(v1, a1) )
  {
    sub_4B4590(v1, a1);
  }
  else
  {
    sub_4C8EF0(*v1, a1);
    sub_514A50(2, 0, a1, v3, v4, v5);
    mark_builtin_widgets(4, 0, 1);
  }
  return 1;
}

