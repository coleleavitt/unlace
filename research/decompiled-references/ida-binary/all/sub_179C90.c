__int64 sub_179C90()
{
  unsigned __int8 v0; // al
  unsigned __int8 v1; // al

  v0 = getinf_flag(2, 1);
  setinf_flag(2, 1, v0 ^ 1u);
  v1 = getinf_flag(2, 1);
  enable_auto(v1);
  set_ida_state(0);
  show_auto(-1, 0);
  return 1;
}
