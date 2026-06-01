/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DAB8
// Address: 0x000000000049DAB8

//----- (000000000049DAB8) ----------------------------------------------------
void __fastcall sub_49DAB8(__int64 a1)
{
  void *v1; // x0

  v1 = (void *)(a1 - 128);
  if ( (unsigned __int64)v1 > qword_524578 && (unsigned __int64)v1 < qword_524578 + qword_524580 )
    sub_49D720((__int64)v1);
  else
    free(v1);
}
// 524578: using guessed type __int64 qword_524578;
// 524580: using guessed type __int64 qword_524580;
