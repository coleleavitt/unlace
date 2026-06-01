__int64 __fastcall sub_7AB280(__int64 a1, void *a2)
{
  const char **v2; // r15
  char *v3; // rcx
  const char *v4; // rbx
  void *v5; // rax
  _QWORD v7[40]; // [rsp+0h] [rbp-188h] BYREF
  char v8; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+148h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v7[0] = "BIO_get_data";
  v2 = (const char **)v7;
  v7[2] = "BIO_get_new_index";
  v7[4] = "BIO_meth_free";
  v7[6] = "BIO_meth_new";
  v7[8] = "BIO_meth_set_create";
  v7[10] = "BIO_meth_set_ctrl";
  v7[12] = "BIO_meth_set_destroy";
  v7[14] = "BIO_meth_set_puts";
  v7[16] = "BIO_meth_set_read";
  v7[18] = "BIO_meth_set_write";
  v7[20] = "BIO_set_data";
  v7[22] = "BIO_set_flags";
  v7[24] = "BIO_set_init";
  v7[26] = "OPENSSL_init_ssl";
  v7[28] = "OPENSSL_sk_num";
  v7[30] = "OPENSSL_sk_value";
  v7[32] = "SSL_CTX_get_ciphers";
  v7[34] = "SSL_CTX_set_options";
  v7[36] = "TLS_client_method";
  v7[38] = "TLS_server_method";
  v7[1] = a1 + 376;
  v7[3] = a1 + 384;
  v7[5] = a1 + 392;
  v7[7] = a1 + 400;
  v7[9] = a1 + 408;
  v7[11] = a1 + 416;
  v7[13] = a1 + 424;
  v7[15] = a1 + 432;
  v7[17] = a1 + 440;
  v7[19] = a1 + 448;
  v7[21] = a1 + 456;
  v7[23] = a1 + 464;
  v7[25] = a1 + 472;
  v7[27] = a1 + 480;
  v7[29] = a1 + 488;
  v7[31] = a1 + 496;
  v7[33] = a1 + 504;
  v7[35] = a1 + 512;
  v7[37] = a1 + 520;
  v7[39] = a1 + 528;
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
  return sub_7AAF70(a1, a2);
}

