unsigned __int64 __fastcall sub_3E2820(__int64 a1)
{
  unsigned __int64 result; // rax
  const char *v2; // r9
  char *v3; // r8

  result = debug;
  if ( (debug & 0x40000) != 0 )
  {
    ++dword_8D1258;
    v2 = (const char *)&unk_5C2F25;
    if ( *(_BYTE *)(a1 + 49) )
      v2 = " => Changed!";
    v3 = "ERROR!";
    if ( *(_BYTE *)(a1 + 48) )
      v3 = "Ok";
    result = sub_3E25E0(
               (__int64)"%s: \"%s\" -> \"%s\". %s%s\n",
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)a1,
               (__int64)v3,
               (__int64)v2);
    --dword_8D1258;
  }
  return result;
}
