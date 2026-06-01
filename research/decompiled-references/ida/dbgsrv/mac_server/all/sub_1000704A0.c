/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000704A0
// Address: 0x00000001000704A0

//----- (00000001000704A0) ----------------------------------------------------
__int64 __fastcall sub_1000704A0(__int64 a1, void *a2)
{
  _QWORD **v2; // r12
  bool v3; // r15
  unsigned __int64 i; // r14
  const char *v5; // r13
  void *v6; // rax
  const char *v8; // [rsp+10h] [rbp-170h]
  _QWORD v9[39]; // [rsp+18h] [rbp-168h] BYREF

  v8 = "BIO_get_data";
  v2 = (_QWORD **)v9;
  v9[0] = a1 + 376;
  v9[1] = "BIO_get_new_index";
  v9[2] = a1 + 384;
  v9[3] = "BIO_meth_free";
  v9[4] = a1 + 392;
  v9[5] = "BIO_meth_new";
  v9[6] = a1 + 400;
  v9[7] = "BIO_meth_set_create";
  v9[8] = a1 + 408;
  v9[9] = "BIO_meth_set_ctrl";
  v9[10] = a1 + 416;
  v9[11] = "BIO_meth_set_destroy";
  v9[12] = a1 + 424;
  v9[13] = "BIO_meth_set_puts";
  v9[14] = a1 + 432;
  v9[15] = "BIO_meth_set_read";
  v9[16] = a1 + 440;
  v9[17] = "BIO_meth_set_write";
  v9[18] = a1 + 448;
  v9[19] = "BIO_set_data";
  v9[20] = a1 + 456;
  v9[21] = "BIO_set_flags";
  v9[22] = a1 + 464;
  v9[23] = "BIO_set_init";
  v9[24] = a1 + 472;
  v9[25] = "OPENSSL_init_ssl";
  v9[26] = a1 + 480;
  v9[27] = "OPENSSL_sk_num";
  v9[28] = a1 + 488;
  v9[29] = "OPENSSL_sk_value";
  v9[30] = a1 + 496;
  v9[31] = "SSL_CTX_get_ciphers";
  v9[32] = a1 + 504;
  v9[33] = "SSL_CTX_set_options";
  v9[34] = a1 + 512;
  v9[35] = "TLS_client_method";
  v9[36] = a1 + 520;
  v9[37] = "TLS_server_method";
  v9[38] = a1 + 528;
  v3 = 0;
  for ( i = 0; i != 20; ++i )
  {
    v5 = (const char *)*(v2 - 1);
    v6 = dlsym(a2, v5);
    if ( !v6 )
    {
      if ( strcmp(v5, "SSL_get_peer_certificate") )
        break;
      v6 = dlsym(a2, "SSL_get1_peer_certificate");
      if ( !v6 )
        break;
    }
    **v2 = v6;
    v3 = i >= 0x13;
    v2 += 2;
  }
  if ( v3 )
    return sub_1000703C0(a1, a2);
  else
    return 0;
}
