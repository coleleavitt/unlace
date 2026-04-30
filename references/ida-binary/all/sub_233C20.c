__int64 __fastcall sub_233C20(int a1)
{
  int dtype_size; // ebx
  unsigned int default_radix; // eax

  if ( a1 >= 0 && dbg && a1 < *(_DWORD *)(dbg + 64) )
  {
    dtype_size = get_dtype_size(*(unsigned __int8 *)(*(_QWORD *)(dbg + 56) + 32LL * a1 + 13));
    if ( dtype_size > 0 )
    {
      default_radix = get_default_radix();
      return (unsigned int)b2a_width((unsigned int)dtype_size, default_radix);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)dtype_size;
}
