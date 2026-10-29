/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006837C
// Address: 0x000000010006837C

//----- (000000010006837C) ----------------------------------------------------
bool __fastcall sub_10006837C(_QWORD *a1, void *__handle)
{
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v4 = dlsym(__handle, "SSL_library_init");
  if ( !v4 )
    return 0;
  a1[47] = v4;
  v5 = dlsym(__handle, "SSL_load_error_strings");
  if ( !v5 )
    return 0;
  a1[48] = v5;
  v6 = dlsym(__handle, "SSLv23_client_method");
  if ( !v6 )
    return 0;
  a1[49] = v6;
  v7 = dlsym(__handle, "SSLv23_server_method");
  if ( !v7 )
    return 0;
  a1[50] = v7;
  v8 = dlsym(__handle, "sk_num");
  if ( !v8 )
    return 0;
  a1[51] = v8;
  v9 = dlsym(__handle, "sk_value");
  if ( !v9 )
    return 0;
  a1[52] = v9;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000685B8((__int64)a1, __handle);
}
// 100068438: variable '_18' is possibly undefined
