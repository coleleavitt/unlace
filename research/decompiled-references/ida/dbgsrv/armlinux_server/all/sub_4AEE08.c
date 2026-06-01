/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEE08
// Address: 0x00000000004AEE08

//----- (00000000004AEE08) ----------------------------------------------------
unsigned __int64 __fastcall sub_4AEE08(unsigned __int64 a1)
{
  unsigned __int64 result; // x0

  do
    result = __ldaxr((unsigned __int64 *)&qword_5245B0);
  while ( __stlxr(a1, (unsigned __int64 *)&qword_5245B0) );
  return result;
}
// 5245B0: using guessed type __int64 qword_5245B0;
