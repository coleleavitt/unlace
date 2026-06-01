unsigned __int64 __fastcall sub_3E28B0(unsigned int *a1)
{
  unsigned __int64 result; // rax
  const char *v2; // r9
  char *v3; // r8

  result = debug;
  if ( (debug & 0x40000) != 0 )
  {
    ++dword_8D1258;
    v2 = (const char *)&unk_5C2F25;
    if ( *((_BYTE *)a1 + 9) )
      v2 = " => Changed!";
    v3 = "ERROR!";
    if ( *((_BYTE *)a1 + 8) )
      v3 = "Ok";
    result = sub_3E25E0((__int64)"%s: %d -> %d. %s%s\n", *((_QWORD *)a1 + 2), a1[1], *a1, (__int64)v3, (__int64)v2);
    --dword_8D1258;
  }
  return result;
}
