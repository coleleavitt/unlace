/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EEF4
// Address: 0x0003EEF4

//----- (0003EEF4) --------------------------------------------------------
const char **__fastcall sub_3EEF4(const char **result)
{
  if ( result )
  {
    result = sub_3DDF0((char *)result);
    if ( result )
    {
      if ( !result[1] )
        return nullptr;
    }
  }
  return result;
}
