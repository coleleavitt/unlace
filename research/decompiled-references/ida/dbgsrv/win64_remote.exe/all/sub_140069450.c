/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069450
// Address: 0x0000000140069450

//----- (0000000140069450) ----------------------------------------------------
PADDRINFOA __fastcall sub_140069450(PCHAR pNodeBuffer, unsigned __int16 a2)
{
  PADDRINFOA result; // rax
  struct addrinfo *v5; // rdi
  socklen_t v6; // edx
  bool v7; // bl

  result = sub_1400693A0(pNodeName, a2, 0);
  v5 = result;
  if ( result )
  {
    v6 = 28;
    if ( a2 == 2 )
      v6 = 16;
    v7 = getnameinfo(result->ai_addr, v6, pNodeBuffer, 0x401u, nullptr, 0, 2) == 0;
    freeaddrinfo(v5);
    return (PADDRINFOA)v7;
  }
  return result;
}
