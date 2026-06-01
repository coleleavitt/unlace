/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000701D8
// Address: 0x00000001000701D8

//----- (00000001000701D8) ----------------------------------------------------
void __fastcall sub_1000701D8(_QWORD *a1)
{
  *a1 = &off_10009A9F8;
  qsem_free(a1[2]);
  operator delete(a1);
}
// 10009A9F8: using guessed type _UNKNOWN *off_10009A9F8;
