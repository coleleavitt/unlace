__int64 sub_FF6B0()
{
  char v0; // dl
  __int64 result; // rax
  char v2; // dl

  v0 = getinf_flag();
  result = 8;
  if ( !v0 )
  {
    v2 = getinf_flag();
    result = 4;
    if ( !v2 )
    {
      if ( !(unsigned __int8)netnode_inited() )
        return get_dtype_size();
      result = 2;
      if ( dword_245170 >= 0 && dword_245170 < (unsigned __int64)xmmword_2524F8 && qword_2524F0 + 56LL * dword_245170 )
        return get_dtype_size();
    }
  }
  return result;
}

