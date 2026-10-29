/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4614B0
// Address: 0x004614B0

//----- (004614B0) --------------------------------------------------------
PADDRINFOA __cdecl sub_4614B0(PCSTR pNodeName, unsigned __int16 a2, unsigned __int16 a3)
{
  const CHAR *v3; // ecx
  INT v4; // eax
  int v5; // ecx
  PADDRINFOA ppResult; // [esp+0h] [ebp-30h] BYREF
  ADDRINFOA pHints; // [esp+4h] [ebp-2Ch] BYREF
  _DWORD v9[2]; // [esp+24h] [ebp-Ch] BYREF

  memset(&pHints, 0, sizeof(pHints));
  if ( a2 != 23 )
    pHints.ai_family = a2;
  v3 = nullptr;
  pHints.ai_flags |= 2u;
  if ( a3 )
  {
    sub_453D50((__m128i)0LL, v9, 8, "%u", a3);
    v3 = (const CHAR *)v9;
  }
  ppResult = nullptr;
  v4 = getaddrinfo(pNodeName, v3, &pHints, &ppResult);
  v5 = 0;
  if ( !v4 )
    return ppResult;
  return (PADDRINFOA)v5;
}
