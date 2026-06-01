/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F800
// Address: 0x000000000047F800

//----- (000000000047F800) ----------------------------------------------------
__int64 __fastcall sub_47F800(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = operator new(0x20u);
  *(_QWORD *)v2 = &off_4C4238;
  *(_QWORD *)(v2 + 24) = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *(_DWORD *)(v2 + 16) = 0;
  return sub_47F600(v2);
}
// 4C4238: using guessed type _UNKNOWN *off_4C4238;
