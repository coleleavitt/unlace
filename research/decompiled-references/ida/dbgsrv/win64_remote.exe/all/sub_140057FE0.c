/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057FE0
// Address: 0x0000000140057FE0

//----- (0000000140057FE0) ----------------------------------------------------
const char *__fastcall sub_140057FE0(__int64 a1)
{
  const char *v1; // rdi
  const char *v3; // rax
  const char *v4; // rdi
  size_t v5; // rax
  const char *v6; // rax
  const char *result; // rax

  v1 = *(const char **)(a1 + 64);
  if ( !strcmp(v1, "irs") )
  {
    v3 = (const char *)sub_1400545E0(*(_QWORD *)(a1 + 32));
    v4 = v3;
    if ( v3 && (v5 = strlen(v3)) != 0 )
      sub_140001810(a1 + 40, v4, v5);
    else
      *(_QWORD *)(a1 + 48) = 0;
  }
  else if ( !strcmp(v1, "server_unimplemented") )
  {
    sub_140002FB0(a1 + 40, "Server functionality not implemented for Secure Channel");
  }
  else if ( !strcmp(v1, "unsupported_tls12") )
  {
    sub_140002FB0(a1 + 40, "TLS 1.2 is not supported by the client");
  }
  else if ( !strcmp(v1, "unsupported_attributes") )
  {
    sub_140002FB0(a1 + 40, "Schannel does not support the requested security attributes");
  }
  else if ( !strcmp(v1, "expired_remote_certificate") )
  {
    sub_140002FB0(a1 + 40, "Certificate verification failed: certificate has expired");
  }
  else if ( !strcmp(v1, "load_root_ca_certificate") )
  {
    sub_140002FB0(a1 + 40, "Failed to load baked-in Root Certificate");
  }
  else if ( !strcmp(v1, "connection_closed_by_peer") )
  {
    sub_140002FB0(a1 + 40, "TLS: Connection closed by peer");
  }
  else if ( !strcmp(v1, "renegotiation") )
  {
    sub_140002FB0(a1 + 40, "TLS: Renegotiation requested");
  }
  else if ( !strcmp(v1, "short_send") )
  {
    sub_140002FB0(a1 + 40, "TLS: Could not send entire message at once");
  }
  else
  {
    v6 = (const char *)sub_14005A890(*(_DWORD *)(a1 + 72));
    sub_140002FB0(a1 + 40, "%s: %s", *(const char **)(a1 + 64), v6);
  }
  if ( *(_QWORD *)(a1 + 48) <= 1u )
    sub_140002FB0(a1 + 40, "TLS: Unknown error: %s: %d", *(const char **)(a1 + 64), *(_DWORD *)(a1 + 72));
  result = Str1;
  if ( *(_QWORD *)(a1 + 48) )
    return *(const char **)(a1 + 40);
  return result;
}
