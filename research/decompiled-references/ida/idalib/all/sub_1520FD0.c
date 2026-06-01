__int64 __fastcall sub_1520FD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax

  if ( a3 )
    return 0;
  v4 = a2 == 11 && *(_QWORD *)a1 == 0x6174736E695F7369LL && *(_WORD *)(a1 + 8) == 25454 && *(_BYTE *)(a1 + 10) == 101;
  return (v4 << 32) | 0xB;
}
