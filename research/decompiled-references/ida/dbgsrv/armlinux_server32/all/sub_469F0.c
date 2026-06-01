/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469F0
// Address: 0x000469F0

//----- (000469F0) --------------------------------------------------------
int __fastcall sub_469F0(int a1, unsigned int a2)
{
  __int64 v4; // r0
  int v5; // r6

  if ( !a1 )
    return sub_70B98(1532);
  sub_45758((unsigned __int8 *)a1);
  *(_BYTE *)a1 = 5;
  v4 = __PAIR64__(a2, (unsigned int)sub_808A4(0x20u));
  v5 = v4;
  if ( a2 )
    HIDWORD(v4) = *(_DWORD *)(a2 + 28);
  sub_3FD1C(v4);
  *(_DWORD *)(a1 + 8) = v5;
  return 0;
}
