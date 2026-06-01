/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000637D8
// Address: 0x00000001000637D8

//----- (00000001000637D8) ----------------------------------------------------
bool __fastcall sub_1000637D8(_QWORD *a1, void *__handle)
{
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0

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
  return sub_1000639E8((__int64)a1, __handle);
}
