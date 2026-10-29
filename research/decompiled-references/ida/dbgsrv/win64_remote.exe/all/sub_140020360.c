/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020360
// Address: 0x0000000140020360

//----- (0000000140020360) ----------------------------------------------------
__int64 __fastcall sub_140020360(__int64 a1, __int64 a2)
{
  const CHAR *v3; // rcx
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const CHAR **)(a1 + 8);
  else
    v3 = Str1;
  v4 = (int)sub_14005EFF0(v3);
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
