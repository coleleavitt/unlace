__int64 __fastcall sub_C3500(int a1)
{
  int dtype_size; // ebx

  if ( a1 >= 0 && dbg && a1 < *(_DWORD *)(dbg + 64LL) )
  {
    dtype_size = get_dtype_size();
    if ( dtype_size > 0 )
    {
      get_default_radix();
      return (unsigned int)b2a_width();
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)dtype_size;
}

