/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1990
// Address: 0x080C1990

//----- (080C1990) --------------------------------------------------------
int __cdecl sub_80C1990(int a1, void *handle)
{
  unsigned int *v2; // ebp
  _DWORD *v3; // ecx
  const char *v4; // esi
  void *v5; // eax
  _DWORD v7[12]; // [esp+1Ch] [ebp-50h] BYREF
  unsigned int v8; // [esp+4Ch] [ebp-20h] BYREF

  v8 = __readgsdword(0x14u);
  v7[0] = "SSL_library_init";
  v7[2] = "SSL_load_error_strings";
  v7[4] = "SSLv23_client_method";
  v7[6] = "SSLv23_server_method";
  v7[8] = "sk_num";
  v7[10] = "sk_value";
  v7[1] = a1 + 188;
  v7[3] = a1 + 192;
  v7[5] = a1 + 196;
  v7[7] = a1 + 200;
  v7[9] = a1 + 204;
  v2 = v7;
  v7[11] = a1 + 208;
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
