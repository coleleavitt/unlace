/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488F60
// Address: 0x0000000000488F60

//----- (0000000000488F60) ----------------------------------------------------
bool __fastcall sub_488F60(__int64 a1)
{
  const char *v1; // rdi
  bool result; // al

  v1 = *(const char **)(a1 + 8);
  if ( v1 == "St19_Sp_make_shared_tag" )
    return 1;
  result = 0;
  if ( *v1 != 42 )
    return strcmp(v1, "St19_Sp_make_shared_tag") == 0;
  return result;
}
