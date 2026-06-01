/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047B10
// Address: 0x0000000100047B10

//----- (0000000100047B10) ----------------------------------------------------
void __fastcall sub_100047B10(_QWORD *a1)
{
  *a1 = &off_10009A9F8;
  qsem_free(a1[2]);
  operator delete(a1);
}
// 10009A9F8: using guessed type _UNKNOWN *off_10009A9F8;
