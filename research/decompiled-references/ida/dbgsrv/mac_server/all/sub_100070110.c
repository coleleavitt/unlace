/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070110
// Address: 0x0000000100070110

//----- (0000000100070110) ----------------------------------------------------
__int64 __fastcall sub_100070110(_QWORD *a1, void *a2)
{
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax

  v2 = dlsym(a2, "SSL_library_init");
  if ( !v2 )
    return 0;
  a1[47] = v2;
  v3 = dlsym(a2, "SSL_load_error_strings");
  if ( !v3 )
    return 0;
  a1[48] = v3;
  v4 = dlsym(a2, "SSLv23_client_method");
  if ( !v4 )
    return 0;
  a1[49] = v4;
  v5 = dlsym(a2, "SSLv23_server_method");
  if ( !v5 )
    return 0;
  a1[50] = v5;
  v6 = dlsym(a2, "sk_num");
  if ( !v6 )
    return 0;
  a1[51] = v6;
  v7 = dlsym(a2, "sk_value");
  if ( !v7 )
    return 0;
  a1[52] = v7;
  return sub_1000703C0((__int64)a1, a2);
}
