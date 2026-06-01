/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF950
// Address: 0x00000000000CF950

//----- (00000000000CF950) ----------------------------------------------------
long double __fastcall sub_CF950(__int64 a1)
{
  *(_QWORD *)(a1 + 2904) = a1 + 212;
  *(_QWORD *)(a1 + 2920) = &off_160550;
  *(_QWORD *)(a1 + 2928) = a1 + 2504;
  *(_QWORD *)(a1 + 2944) = &off_160570;
  *(_QWORD *)(a1 + 2952) = a1 + 2748;
  *(_WORD *)(a1 + 5936) = 0;
  *(_QWORD *)(a1 + 2968) = &qword_160590;
  *(_DWORD *)(a1 + 5940) = 0;
  return sub_CF998(a1);
}
// 160550: using guessed type __int64 (*off_160550)[144];
// 160570: using guessed type __int64 (*off_160570)[15];
// 160590: using guessed type __int64 qword_160590;
