/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C16C0
// Address: 0x080C16C0

//----- (080C16C0) --------------------------------------------------------
int __cdecl sub_80C16C0(int a1, void *handle)
{
  unsigned int *v2; // ebp
  _DWORD *v3; // ecx
  const char *v4; // esi
  void *v5; // eax
  _DWORD v7[40]; // [esp+1Ch] [ebp-C0h] BYREF
  unsigned int v8; // [esp+BCh] [ebp-20h] BYREF

  v8 = __readgsdword(0x14u);
  v7[0] = "BIO_get_data";
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
  v7[1] = a1 + 188;
  v7[3] = a1 + 192;
  v7[5] = a1 + 196;
  v7[7] = a1 + 200;
  v7[9] = a1 + 204;
  v7[11] = a1 + 208;
  v7[13] = a1 + 212;
  v7[15] = a1 + 216;
  v7[17] = a1 + 220;
  v7[19] = a1 + 224;
  v7[21] = a1 + 228;
  v7[23] = a1 + 232;
  v7[25] = a1 + 236;
  v7[27] = a1 + 240;
  v7[29] = a1 + 244;
  v7[31] = a1 + 248;
  v7[33] = a1 + 252;
  v7[35] = a1 + 256;
  v7[37] = a1 + 260;
  v7[39] = a1 + 264;
  v2 = v7;
  do
  {
    v4 = (const char *)*v2;
    v5 = dlsym(handle, (const char *)*v2);
    if ( !v5 && (strcmp(v4, "SSL_get_peer_certificate") || (v5 = dlsym(handle, "SSL_get1_peer_certificate")) == nullptr) )
    {
      if ( v8 == __readgsdword(0x14u) )
        return 0;
LABEL_10:
      sub_80D7AB0();
    }
    v3 = (_DWORD *)v2[1];
    v2 += 2;
    *v3 = v5;
  }
  while ( v2 != &v8 );
  if ( v8 != __readgsdword(0x14u) )
    goto LABEL_10;
  return sub_80C1410(a1, handle);
}
