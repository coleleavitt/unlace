/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B448
// Address: 0x000000000047B448

//----- (000000000047B448) ----------------------------------------------------
__int64 __fastcall sub_47B448(void *ptr, size_t a2)
{
  FILE *v3; // x0

  v3 = (FILE *)qword_5223C0;
  if ( !qword_5223C0 )
    v3 = stdout;
  return sub_490560(v3, ptr, a2);
}
// 5223C0: using guessed type __int64 qword_5223C0;
