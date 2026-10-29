/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_file_ext
// Address: 0x000AB1D0

//----- (000AB1D0) --------------------------------------------------------
char *__cdecl get_file_ext(_BYTE *a1)
{
  const char *v1; // eax
  char *v2; // eax

  if ( a1 && (v1 = qbasename(a1), (v2 = strrchr(v1, 46)) != nullptr) )
    return v2 + 1;
  else
    return nullptr;
}
