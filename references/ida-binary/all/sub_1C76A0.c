__int64 sub_1C76A0()
{
  unsigned int inited; // ebx

  inited = init_database();
  if ( (unsigned __int8)is_cvt64() || batch && (get_merge_state() & 4) != 0 )
  {
    byte_8CD800 = 1;
    return inited;
  }
  else
  {
    sub_2A6410();
    return inited;
  }
}
