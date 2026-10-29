__int64 sub_13BBC0()
{
  __int64 v1; // [rsp+8h] [rbp-140h]

  if ( (unsigned __int8)getinf() && (unsigned __int8)is_spec_ea() )
    return (unsigned __int8)getinf();
  if ( (int)is_varsize_item() <= 0 )
    return get_data_elsize();
  return v1;
}

