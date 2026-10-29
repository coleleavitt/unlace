__int64 __fastcall sub_CDB40(char a1)
{
  __int64 result; // rax
  void *v3; // rdi
  int v4; // eax

  if ( byte_251598 == a1 )
    return 1;
  result = 0;
  if ( dbg && (*(_BYTE *)(dbg + 35LL) & 0x40) != 0 )
  {
    v3 = qword_2515B0;
    *(_BYTE *)qword_2515B0 = a1;
    v4 = sub_CC780((__int64)v3, 29);
    if ( v4 == 1 )
    {
      byte_251598 = a1;
      return 1;
    }
    else
    {
      return (unsigned int)-(v4 != -1);
    }
  }
  return result;
}

