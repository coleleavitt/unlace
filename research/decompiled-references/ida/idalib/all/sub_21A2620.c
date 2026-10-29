__int64 __fastcall sub_21A2620(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // esi

  result = a1;
  v4 = 9 * HIDWORD(a3);
  v5 = 6;
  v6 = *(_QWORD *)(a2 + 560) + 16 * v4;
  v7 = *(_DWORD *)(v6 + 20);
  if ( (v7 & 3) != 1 )
    v5 = 2 * ((v7 & 3) != 2);
  if ( (v7 & 0xC) == 4 )
    v5 |= 0x200u;
  if ( (v7 & 0x10) != 0 )
    v5 |= 1u;
  if ( !*(_BYTE *)(v6 + 16) )
    BYTE1(v5) |= 8u;
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v5;
  return result;
}
