/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60D70
// Address: 0x0000000000060D70

//----- (0000000000060D70) ----------------------------------------------------
__int64 __fastcall sub_60D70(__int64 a1, __int64 a2)
{
  const char *v2; // rdi

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = s1;
  *(_QWORD *)(a2 + 8) = atol(v2);
  return 0;
}
