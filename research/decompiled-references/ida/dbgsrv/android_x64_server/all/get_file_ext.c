/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_file_ext
// Address: 0x00000000000BE300

//----- (00000000000BE300) ----------------------------------------------------
char *__fastcall get_file_ext(_BYTE *a1)
{
  const char *v1; // rax
  char *v2; // rax

  if ( a1 && (v1 = qbasename(a1), (v2 = strrchr(v1, 46)) != nullptr) )
    return v2 + 1;
  else
    return nullptr;
}
