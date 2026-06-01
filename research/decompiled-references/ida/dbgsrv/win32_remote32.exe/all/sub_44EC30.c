/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EC30
// Address: 0x0044EC30

//----- (0044EC30) --------------------------------------------------------
const CHAR *__usercall sub_44EC30@<eax>(int a1@<ecx>, __m128i a2@<xmm0>)
{
  const char *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned int *v8; // edi
  const char *v9; // eax
  const CHAR *result; // eax

  v3 = *(const char **)(a1 + 44);
  v4 = strcmp(v3, "gai_strerror");
  if ( v4 )
    v4 = v4 < 0 ? -1 : 1;
  v5 = a1 + 32;
  if ( v4 )
  {
    v6 = strcmp(v3, "WSAStartup");
    if ( v6 )
      v6 = v6 < 0 ? -1 : 1;
    if ( v6 )
    {
      v7 = strcmp(v3, "connection_closed_by_peer");
      if ( v7 )
        v7 = v7 < 0 ? -1 : 1;
      if ( v7 )
      {
        v9 = (const char *)sub_453860(a2, *(_DWORD *)(a1 + 48));
        sub_402970(a2, (LPVOID *)(a1 + 32), "%s: %s", *(const char **)(a1 + 44), v9);
      }
      else
      {
        v8 = (unsigned int *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 40) < 0x20u )
        {
          *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, 0x20u, 1u);
          v5 = a1 + 32;
        }
        *(_DWORD *)(a1 + 36) = 32;
        sub_464310(*v8, (unsigned int)"recv: Connection closed by peer", 0x1Fu);
        *(_BYTE *)(*v8 + 31) = 0;
      }
    }
    else
    {
      sub_402970(a2, (LPVOID *)(a1 + 32), "WSAStartup failed with error: %d", *(_DWORD *)(a1 + 48));
    }
  }
  else
  {
    FormatMessageA(0x12FFu, nullptr, *(_DWORD *)(a1 + 48), 0x400u, Buffer, 0x400u, nullptr);
    sub_402970(a2, (LPVOID *)(a1 + 32), "getaddrinfo: %s", Buffer);
  }
  result = MultiByteStr;
  if ( *(_DWORD *)(v5 + 4) )
    return *(const CHAR **)v5;
  return result;
}
