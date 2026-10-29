__int64 __fastcall sub_CF0F0(char a1)
{
  __int64 result; // rax
  void *v3; // rdi
  int v4; // eax

  if ( byte_252740 == a1 )
    return 1;
  result = 0;
  if ( dbg && (*(_BYTE *)(dbg + 35LL) & 0x40) != 0 )
  {
    v3 = qword_252758;
    *(_BYTE *)qword_252758 = a1;
    v4 = sub_CDCF0((__int64)v3, 29);
    if ( v4 == 1 )
    {
      byte_252740 = a1;
      return 1;
    }
    else
    {
      return (unsigned int)-(v4 != -1);
    }
  }
  return result;
}

