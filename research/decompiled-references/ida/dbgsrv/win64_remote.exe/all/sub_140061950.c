/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061950
// Address: 0x0000000140061950

//----- (0000000140061950) ----------------------------------------------------
__int64 __fastcall sub_140061950(_WORD *a1)
{
  _WORD *i; // rax

  for ( i = a1; *a1; ++a1 )
    ;
  return a1 - i;
}
