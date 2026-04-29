__int64 __fastcall _os_log_simple_shim(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  return __os_log_simple_offset(0, UUID_NULL, UUID_NULL, 0, 0, a1, a2, a3);
}
