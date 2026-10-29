unsigned __int64 __fastcall sub_741380(__int64 a1, char a2, __int64 a3, unsigned int a4)
{
  unsigned __int8 v5; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx

  v5 = 2;
  if ( a4 != 2 )
  {
    v5 = 3;
    if ( a4 <= 2 )
      v5 = a4 != 0;
  }
  result = sub_7222F0(a1 + 2192, 40, 3);
  *(_QWORD *)(result + 16) = a3;
  v7 = ((unsigned __int64)v5 << 52) | 0x6019C00000000LL | *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_BYTE *)(result + 35) = a2;
  *(_QWORD *)(result + 24) = v7;
  *(_WORD *)(result + 32) = 240;
  LOBYTE(v7) = *(_BYTE *)(result + 34);
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v7 & 0xE0 | 4;
  return result;
}

