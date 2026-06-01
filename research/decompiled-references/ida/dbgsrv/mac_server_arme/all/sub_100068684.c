/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068684
// Address: 0x0000000100068684

//----- (0000000100068684) ----------------------------------------------------
bool __fastcall sub_100068684(__int64 a1, void *__handle)
{
  bool v4; // w25
  unsigned __int64 v5; // x24
  _QWORD **v6; // x26
  _QWORD *v7; // t1
  const char *v8; // x23
  void *v9; // x0
  const char *v11; // [xsp+8h] [xbp-198h]
  _QWORD v12[39]; // [xsp+10h] [xbp-190h] BYREF
  __int64 vars8; // [xsp+1A8h] [xbp+8h]

  v4 = 0;
  v5 = 0;
  v11 = "BIO_get_data";
  v12[0] = a1 + 376;
  v12[1] = "BIO_get_new_index";
  v12[2] = a1 + 384;
  v12[3] = "BIO_meth_free";
  v12[4] = a1 + 392;
  v12[5] = "BIO_meth_new";
  v12[6] = a1 + 400;
  v12[7] = "BIO_meth_set_create";
  v12[8] = a1 + 408;
  v6 = (_QWORD **)v12;
  v12[9] = "BIO_meth_set_ctrl";
  v12[10] = a1 + 416;
  v12[11] = "BIO_meth_set_destroy";
  v12[12] = a1 + 424;
  v12[13] = "BIO_meth_set_puts";
  v12[14] = a1 + 432;
  v12[15] = "BIO_meth_set_read";
  v12[16] = a1 + 440;
  v12[17] = "BIO_meth_set_write";
  v12[18] = a1 + 448;
  v12[19] = "BIO_set_data";
  v12[20] = a1 + 456;
  v12[21] = "BIO_set_flags";
  v12[22] = a1 + 464;
  v12[23] = "BIO_set_init";
  v12[24] = a1 + 472;
  v12[25] = "OPENSSL_init_ssl";
  v12[26] = a1 + 480;
  v12[27] = "OPENSSL_sk_num";
  v12[28] = a1 + 488;
  v12[29] = "OPENSSL_sk_value";
  v12[30] = a1 + 496;
  v12[31] = "SSL_CTX_get_ciphers";
  v12[32] = a1 + 504;
  v12[33] = "SSL_CTX_set_options";
  v12[34] = a1 + 512;
  v12[35] = "TLS_client_method";
  v12[36] = a1 + 520;
  v12[37] = "TLS_server_method";
  v12[38] = a1 + 528;
  do
  {
    v8 = (const char *)*(v6 - 1);
    v9 = dlsym(__handle, v8);
    if ( !v9 )
    {
      if ( strcmp(v8, "SSL_get_peer_certificate") )
        break;
      v9 = dlsym(__handle, "SSL_get1_peer_certificate");
      if ( !v9 )
        break;
    }
    v7 = *v6;
    v6 += 2;
    *v7 = v9;
    v4 = v5++ > 0x12;
  }
  while ( v5 != 20 );
  if ( !v4 )
    return 0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000685B8(a1, __handle);
}
