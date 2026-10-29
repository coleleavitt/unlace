/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451130
// Address: 0x00451130

//----- (00451130) --------------------------------------------------------
const CHAR *__usercall sub_451130@<eax>(int a1@<ecx>, __m128i a2@<xmm0>)
{
  int v2; // edi
  const char *v3; // esi
  int v4; // eax
  void **v5; // ebx
  const char *v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // eax
  const CHAR *result; // eax

  v2 = a1;
  v3 = *(const char **)(a1 + 32);
  v4 = strcmp(v3, (const char *)&dword_48FD78);
  if ( v4 )
    v4 = v4 < 0 ? -1 : 1;
  v5 = (void **)(v2 + 20);
  if ( v4 )
  {
    v9 = strcmp(v3, "server_unimplemented");
    if ( v9 )
      v9 = v9 < 0 ? -1 : 1;
    if ( v9 )
    {
      v10 = strcmp(v3, "unsupported_tls12");
      if ( v10 )
        v10 = v10 < 0 ? -1 : 1;
      if ( v10 )
      {
        v11 = strcmp(v3, "unsupported_attributes");
        if ( v11 )
          v11 = v11 < 0 ? -1 : 1;
        if ( v11 )
        {
          v12 = strcmp(v3, "expired_remote_certificate");
          if ( v12 )
            v12 = v12 < 0 ? -1 : 1;
          if ( v12 )
          {
            v13 = strcmp(v3, "load_root_ca_certificate");
            if ( v13 )
              v13 = v13 < 0 ? -1 : 1;
            if ( v13 )
            {
              v14 = strcmp(v3, "connection_closed_by_peer");
              if ( v14 )
                v14 = v14 < 0 ? -1 : 1;
              if ( v14 )
              {
                v15 = strcmp(v3, "renegotiation");
                if ( v15 )
                  v15 = v15 < 0 ? -1 : 1;
                if ( v15 )
                {
                  v16 = strcmp(v3, "short_send");
                  if ( v16 )
                    v16 = v16 < 0 ? -1 : 1;
                  if ( v16 )
                  {
                    v17 = (const char *)sub_453860(a2, *(_DWORD *)(v2 + 36));
                    sub_402970(a2, (LPVOID *)(v2 + 20), "%s: %s", *(const char **)(v2 + 32), v17);
                  }
                  else
                  {
                    sub_402970(a2, (LPVOID *)(v2 + 20), "TLS: Could not send entire message at once");
                  }
                }
                else
                {
                  sub_402970(a2, (LPVOID *)(v2 + 20), "TLS: Renegotiation requested");
                }
              }
              else
              {
                sub_402970(a2, (LPVOID *)(v2 + 20), "TLS: Connection closed by peer");
              }
            }
            else
            {
              sub_402970(a2, (LPVOID *)(v2 + 20), "Failed to load baked-in Root Certificate");
            }
          }
          else
          {
            sub_402970(a2, (LPVOID *)(v2 + 20), "Certificate verification failed: certificate has expired");
          }
        }
        else
        {
          sub_402970(a2, (LPVOID *)(v2 + 20), "Schannel does not support the requested security attributes");
        }
      }
      else
      {
        sub_402970(a2, (LPVOID *)(v2 + 20), "TLS 1.2 is not supported by the client");
      }
    }
    else
    {
      sub_402970(a2, (LPVOID *)(v2 + 20), "Server functionality not implemented for Secure Channel");
    }
  }
  else
  {
    v6 = (const char *)sub_44D800(*(_DWORD *)(v2 + 16));
    v7 = (unsigned int)v6;
    if ( v6 && (v8 = strlen(v6)) != 0 )
    {
      if ( v8 + 1 > *(_DWORD *)(v2 + 28) )
        *v5 = sub_453B00((int)v5, *v5, v8 + 1, 1u);
      *(_DWORD *)(v2 + 24) = v8 + 1;
      sub_464310((unsigned int)*v5, v7, v8);
      v2 = a1;
      *((_BYTE *)*v5 + v8) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 24) = 0;
    }
  }
  if ( *(_DWORD *)(v2 + 24) <= 1u )
    sub_402970(a2, v5, "TLS: Unknown error: %s: %d", *(const char **)(v2 + 32), *(_DWORD *)(v2 + 36));
  result = MultiByteStr;
  if ( *(_DWORD *)(v2 + 24) )
    return *(const CHAR **)(v2 + 20);
  return result;
}
// 48FD78: using guessed type int dword_48FD78;
