__int64 __fastcall sub_212A000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // cl
  int v6; // edx

  result = sub_21544B0(a1);
  if ( !(_BYTE)result )
  {
    v5 = 0;
    if ( a3 == 10 )
    {
      if ( *(_QWORD *)a2 != 0x5F736F7263616D2ELL || (v6 = 0, *(_WORD *)(a2 + 8) != 28271) )
        v6 = 1;
      v5 = v6 == 0;
    }
    *(_BYTE *)(a1 + 464) = v5 | *(_BYTE *)(a1 + 464) & 0xFE;
  }
  return result;
}
