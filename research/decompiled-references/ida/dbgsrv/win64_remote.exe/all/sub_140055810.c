/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055810
// Address: 0x0000000140055810

//----- (0000000140055810) ----------------------------------------------------
const char *__fastcall sub_140055810(__int64 a1)
{
  const char *v1; // rsi
  const char *v3; // rax
  const char *result; // rax

  v1 = *(const char **)(a1 + 88);
  if ( !strcmp(v1, "gai_strerror") )
  {
    FormatMessageA(0x12FFu, nullptr, *(_DWORD *)(a1 + 96), 0x400u, Buffer, 0x400u, nullptr);
    sub_140002FB0(a1 + 64, "getaddrinfo: %s", Buffer);
  }
  else if ( !strcmp(v1, "WSAStartup") )
  {
    sub_140002FB0(a1 + 64, "WSAStartup failed with error: %d", *(_DWORD *)(a1 + 96));
  }
  else if ( !strcmp(v1, "connection_closed_by_peer") )
  {
    sub_140001810(a1 + 64, "recv: Connection closed by peer", 0x1Fu);
  }
  else
  {
    v3 = (const char *)sub_14005A890(*(_DWORD *)(a1 + 96));
    sub_140002FB0(a1 + 64, "%s: %s", *(const char **)(a1 + 88), v3);
  }
  result = Str1;
  if ( *(_QWORD *)(a1 + 72) )
    return *(const char **)(a1 + 64);
  return result;
}
