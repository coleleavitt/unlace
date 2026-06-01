/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439908
// Address: 0x0000000000439908

//----- (0000000000439908) ----------------------------------------------------
__int64 __fastcall sub_439908(__int64 a1)
{
  char *v1; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(char **)(a1 + 40);
  else
    v1 = (char *)&qword_4B2D48;
  return sub_438F88(a1, v1);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
