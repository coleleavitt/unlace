/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4278D0
// Address: 0x004278D0

//----- (004278D0) --------------------------------------------------------
const char **__cdecl sub_4278D0(const char *a1)
{
  const char **result; // eax

  result = sub_4279E0(a1);
  if ( !result || !result[1] )
    return nullptr;
  return result;
}
