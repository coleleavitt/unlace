__int64 __fastcall sub_CCE60(unsigned int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdi
  int v5; // edx

  result = a1;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v4 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *((_QWORD *)qword_2515B0 + 1) = a2;
        v4[4] = a3;
        *v4 = result;
        v5 = sub_CC780((__int64)v4, 11);
        result = 0xFFFFFFFFLL;
        if ( v5 == 1 )
          return *(unsigned int *)qword_2515B0;
      }
    }
  }
  return result;
}

