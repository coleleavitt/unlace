/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060E10
// Address: 0x0000000100060E10

//----- (0000000100060E10) ----------------------------------------------------
__int64 __fastcall sub_100060E10(__int64 a1)
{
  qsem_wait(*(_QWORD *)(a1 + 16), -1);
  sub_100060E60(*(_QWORD *)a1, *(__int64 **)(a1 + 8));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsem_free(*(_QWORD *)(a1 + 16));
  operator delete((void *)a1);
  return 0;
}
