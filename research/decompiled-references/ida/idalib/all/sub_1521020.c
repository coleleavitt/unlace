__int64 __fastcall sub_1521020(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax

  if ( a3 )
    return 0;
  v4 = a2 == 9 && *(_QWORD *)a1 == 0x65626D656D5F7369LL && *(_BYTE *)(a1 + 8) == 114;
  return (v4 << 32) | 5;
}
