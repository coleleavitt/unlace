__int64 __fastcall sub_7CE9F0(__int64 a1, void *a2)
{
  const char **v2; // r15
  char *v3; // rcx
  const char *v4; // rbx
  void *v5; // rax
  _QWORD v7[12]; // [rsp+0h] [rbp-A8h] BYREF
  char v8; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v7[0] = "SSL_library_init";
  v2 = (const char **)v7;
  v7[2] = "SSL_load_error_strings";
  v7[4] = "SSLv23_client_method";
  v7[6] = "SSLv23_server_method";
  v7[8] = "sk_num";
  v7[10] = "sk_value";
  v7[1] = a1 + 376;
  v7[3] = a1 + 384;
  v7[5] = a1 + 392;
  v7[7] = a1 + 400;
  v7[9] = a1 + 408;
  v7[11] = a1 + 416;
  do
  {
    v4 = *v2;
    v5 = dlsym(a2, *v2);
    if ( !v5 )
    {
      if ( strcmp(v4, "SSL_get_peer_certificate") )
        return 0;
      v5 = dlsym(a2, "SSL_get1_peer_certificate");
      if ( !v5 )
        return 0;
    }
    v3 = (char *)v2[1];
    v2 += 2;
    *(_QWORD *)v3 = v5;
  }
  while ( v2 != (const char **)&v8 );
  return sub_7CE3D0(a1, a2);
}
