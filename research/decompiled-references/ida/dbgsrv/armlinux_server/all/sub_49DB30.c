/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DB30
// Address: 0x000000000049DB30

//----- (000000000049DB30) ----------------------------------------------------
void __fastcall sub_49DB30(void *a1)
{
  if ( (unsigned __int64)a1 > qword_524578 && (unsigned __int64)a1 < qword_524578 + qword_524580 )
    sub_49D720((__int64)a1);
  else
    free(a1);
}
// 524578: using guessed type __int64 qword_524578;
// 524580: using guessed type __int64 qword_524580;
