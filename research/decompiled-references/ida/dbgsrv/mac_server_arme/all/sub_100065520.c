/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065520
// Address: 0x0000000100065520

//----- (0000000100065520) ----------------------------------------------------
__int64 __fastcall sub_100065520(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  FILE *v9; // x20
  __int64 v10; // x19

  if ( qword_1000A5AB0 )
    v9 = (FILE *)qword_1000A5AB0;
  else
    v9 = __stdoutp;
  v10 = qvfprintf(v9, a1, &a9);
  fflush(v9);
  return v10;
}
// 1000A5AB0: using guessed type __int64 qword_1000A5AB0;
