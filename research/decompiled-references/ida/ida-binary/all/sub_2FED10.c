__int64 __fastcall ida_logger_t__::vfunc_3(__int64 a1, unsigned __int8 a2)
{
  *(_DWORD *)(a1 + 84) = a2;
  return reg_int_op("ShowTimestamps", 1, a2, 0);
}
