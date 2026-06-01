__int64 sub_13B5F0()
{
  __int64 result; // rax
  int v1; // [rsp+Ch] [rbp-ACh]

  if ( (unsigned __int8)getinf() && (unsigned __int8)is_spec_ea() )
    return (unsigned __int8)getinf();
  if ( (int)is_varsize_item() <= 0 )
    LODWORD(result) = get_data_elsize();
  else
    LODWORD(result) = v1;
  return (unsigned int)result;
}

