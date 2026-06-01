/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461550
// Address: 0x00461550

//----- (00461550) --------------------------------------------------------
bool __cdecl sub_461550(PCHAR pNodeBuffer, unsigned __int16 a2)
{
  PADDRINFOA v2; // edi
  socklen_t v3; // eax
  bool v4; // bl
  PADDRINFOA ppResult; // [esp+8h] [ebp-24h] BYREF
  ADDRINFOA pHints; // [esp+Ch] [ebp-20h] BYREF

  memset(&pHints, 0, sizeof(pHints));
  if ( a2 != 23 )
    pHints.ai_family = a2;
  pHints.ai_flags |= 2u;
  ppResult = nullptr;
  v2 = nullptr;
  if ( !getaddrinfo(pNodeName, nullptr, &pHints, &ppResult) )
    v2 = ppResult;
  if ( !v2 )
    return 0;
  v3 = 28;
  if ( a2 == 2 )
    v3 = 16;
  v4 = getnameinfo(v2->ai_addr, v3, pNodeBuffer, 0x401u, nullptr, 0, 2) == 0;
  freeaddrinfo(v2);
  return v4;
}
