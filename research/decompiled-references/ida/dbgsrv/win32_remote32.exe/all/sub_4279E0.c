/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4279E0
// Address: 0x004279E0

//----- (004279E0) --------------------------------------------------------
const char **__cdecl sub_4279E0(const char *a1)
{
  int v1; // esi
  const char **i; // edi
  int v3; // eax

  if ( !a1 )
    return nullptr;
  v1 = 0;
  if ( !dword_4B4060 )
    return nullptr;
  for ( i = (const char **)off_4B4064; ; i += 6 )
  {
    v3 = strcmp(*i, a1);
    if ( v3 )
      v3 = v3 < 0 ? -1 : 1;
    if ( !v3 )
      break;
    if ( ++v1 >= (unsigned int)dword_4B4060 )
      return nullptr;
  }
  return i;
}
// 4B4060: using guessed type int dword_4B4060;
// 4B4064: using guessed type int (**off_4B4064)[49];
