/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F428
// Address: 0x000000000049F428

//----- (000000000049F428) ----------------------------------------------------
bool __fastcall sub_49F428(__int64 a1, __int64 a2)
{
  const char *v2; // x2
  const char *v3; // x1
  _BOOL8 result; // x0

  v2 = *(const char **)(a1 + 8);
  v3 = *(const char **)(a2 + 8);
  if ( v2 == v3 )
    return 1;
  result = 0;
  if ( *v2 != 42 )
    return strcmp(v2, v3) == 0;
  return result;
}
