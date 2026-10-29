/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007D940
// Address: 0x000000010007D940

//----- (000000010007D940) ----------------------------------------------------
char __fastcall sub_10007D940(__int64 a1)
{
  char result; // al

  *(_QWORD *)a1 = &off_1000A92D8;
  result = qsem_free(*(_DWORD **)(a1 + 16));
  *(_OWORD *)(a1 + 8) = 0;
  return result;
}
// 1000A92D8: using guessed type _UNKNOWN *off_1000A92D8;
