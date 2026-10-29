/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57828
// Address: 0x00057828

//----- (00057828) --------------------------------------------------------
int __fastcall sub_57828(int a1, int a2)
{
  __int64 v4; // r6
  __int64 v5; // [sp+0h] [bp-14h] BYREF

  if ( sub_57384(*(_DWORD *)(a1 + 8), (int)&v5, 8) != 8 )
    return sub_378E4((_BYTE *)a2, "read error");
  v4 = v5;
  sub_45758((unsigned __int8 *)a2);
  *(_QWORD *)(a2 + 8) = v4;
  *(_BYTE *)a2 = 9;
  return 0;
}
