/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A370
// Address: 0x000000000047A370

//----- (000000000047A370) ----------------------------------------------------
__int64 __fastcall sub_47A370(FILE *a1)
{
  __off64_t v1; // r12
  __int64 v2; // rbp

  if ( !a1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(552);
    BUG();
  }
  v1 = sub_480CC0(a1);
  sub_480D20(a1, 0, 2);
  v2 = sub_480CC0(a1);
  sub_480D20(a1, v1, 0);
  return v2;
}
// 4C94E1: using guessed type char byte_4C94E1;
