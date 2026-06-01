/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_file_ext
// Address: 0x00000000000B82E0

//----- (00000000000B82E0) ----------------------------------------------------
char *__fastcall get_file_ext(_BYTE *a1)
{
  const char *v1; // x0
  char *v2; // x0

  if ( a1 && (v1 = qbasename(a1), (v2 = strrchr(v1, 46)) != nullptr) )
    return v2 + 1;
  else
    return nullptr;
}
