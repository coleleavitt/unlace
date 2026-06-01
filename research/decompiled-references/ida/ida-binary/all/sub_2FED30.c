char __fastcall ida_logger_t__::vfunc_2(__int64 a1)
{
  int v1; // edx
  char result; // al

  v1 = *(_DWORD *)(a1 + 84);
  if ( v1 >= 0 )
    return v1 != 0;
  *(_DWORD *)(a1 + 84) = reg_int_op("ShowTimestamps", 0, 0, 0) != 0;
  result = qgetenv("IDALOG_TIMESTAMPS", 0);
  if ( !result )
    return *(_DWORD *)(a1 + 84) > 0;
  *(_DWORD *)(a1 + 84) = 1;
  return result;
}
