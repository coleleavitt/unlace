/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020430
// Address: 0x0000000140020430

//----- (0000000140020430) ----------------------------------------------------
__int64 __fastcall sub_140020430(__int64 a1, __int64 a2)
{
  *(_BYTE *)a1 = 2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  return a1;
}
