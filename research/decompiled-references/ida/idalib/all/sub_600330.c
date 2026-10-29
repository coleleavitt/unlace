__int64 __fastcall sub_600330(int a1)
{
  _QWORD *current_config; // rax

  current_config = (_QWORD *)get_current_config();
  switch ( a1 )
  {
    case 2:
      return current_config[83];
    case 3:
      return current_config[80];
    case 1:
      return current_config[82];
  }
  return current_config[79];
}
