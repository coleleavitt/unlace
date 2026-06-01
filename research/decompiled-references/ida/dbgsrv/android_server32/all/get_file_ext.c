/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_file_ext
// Address: 0x0007A5B8

//----- (0007A5B8) --------------------------------------------------------
char *__fastcall get_file_ext(_BYTE *a1)
{
  const char *v1; // r0
  char *v2; // r1
  char *result; // r0

  if ( !a1 )
    return nullptr;
  v1 = qbasename(a1);
  v2 = strrchr(v1, 46);
  result = v2 + 1;
  if ( !v2 )
    return nullptr;
  return result;
}
