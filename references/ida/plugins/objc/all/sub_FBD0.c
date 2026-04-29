__int64 sub_FBD0()
{
  if ( !getseg() || find_byte() == -1 )
    return 0;
  create_data();
  return 1;
}
