unsigned __int64 __fastcall sub_560450(unsigned __int8 a1, __int64 a2)
{
  unsigned __int64 dtype_size; // rbx

  dtype_size = get_dtype_size(a1);
  if ( (a2 & 0x600) == 0 )
    return dtype_size;
  if ( (a2 & 0x600) == 0x400
    && ((((unsigned int)a2 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) != 0
    && (unsigned int)get_data_elsize(0xFFFFFFFFLL, a2, 0) < dtype_size )
  {
    return -(__int64)dtype_size;
  }
  return 0;
}

