/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400693A0
// Address: 0x00000001400693A0

//----- (00000001400693A0) ----------------------------------------------------
PADDRINFOA __fastcall sub_1400693A0(PCSTR pNodeName, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v4; // rbx
  const CHAR *v5; // rdx
  PADDRINFOA ppResult; // [rsp+20h] [rbp-58h] BYREF
  ADDRINFOA pHints; // [rsp+28h] [rbp-50h] BYREF
  struct __crt_locale_pointers pServiceName[2]; // [rsp+58h] [rbp-20h] BYREF

  memset(&pHints, 0, sizeof(pHints));
  if ( a2 != 23 )
    pHints.ai_family = a2;
  pHints.ai_flags |= 2u;
  v4 = 0;
  v5 = nullptr;
  if ( a3 )
  {
    sub_14005B0A0(pServiceName, 8, (char *)&Format, a3);
    v5 = (const CHAR *)pServiceName;
  }
  ppResult = nullptr;
  if ( !getaddrinfo(pNodeName, v5, &pHints, &ppResult) )
    return ppResult;
  return (PADDRINFOA)v4;
}
