__int64 __fastcall _simple_asl_log(int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v6; // w0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( qword_9C600 != -1 )
    _os_alloc_once(&qword_9C600, 32, _simple_asl_init_context);
  v6 = os_log_simple_type_from_asl(a1);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _os_log_simple_shim(v6, a2, a3);
}
