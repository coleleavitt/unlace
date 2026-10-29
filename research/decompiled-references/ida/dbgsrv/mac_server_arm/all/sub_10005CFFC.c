/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CFFC
// Address: 0x000000010005CFFC

//----- (000000010005CFFC) ----------------------------------------------------
__int64 __fastcall sub_10005CFFC(__int64 a1)
{
  qsem_wait(*(_QWORD *)(a1 + 16), -1);
  sub_10005D048(*(_QWORD *)a1, *(__int64 **)(a1 + 8));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsem_free(*(_QWORD *)(a1 + 16));
  operator delete((void *)a1);
  return 0;
}
