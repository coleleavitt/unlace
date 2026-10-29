/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051A30
// Address: 0x0000000140051A30

//----- (0000000140051A30) ----------------------------------------------------
__int64 __fastcall sub_140051A30(__int64 a1, char a2, int a3)
{
  sub_140052610(a1, a2, a3, 0, 0);
  *(_WORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &off_1400986B0;
  return a1;
}
// 1400986B0: using guessed type __int64 (__fastcall *off_1400986B0)(void *Block);
