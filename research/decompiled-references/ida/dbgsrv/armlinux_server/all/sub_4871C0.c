/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4871C0
// Address: 0x00000000004871C0

//----- (00000000004871C0) ----------------------------------------------------
__int64 __fastcall sub_4871C0(FILE *a1)
{
  FILE *v1; // x19
  __off64_t v2; // x21
  __int64 v3; // x20

  if ( !a1 )
  {
    a1 = (FILE *)(unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(552);
    __break(0x3E8u);
  }
  v1 = a1;
  v2 = sub_4905F0(a1);
  sub_490650(v1, 0, 2);
  v3 = sub_4905F0(v1);
  sub_490650(v1, v2, 0);
  return v3;
}
// 52451C: using guessed type char under_debugger;
