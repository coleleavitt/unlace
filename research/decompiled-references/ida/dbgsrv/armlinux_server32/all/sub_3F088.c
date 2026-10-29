/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F088
// Address: 0x0003F088

//----- (0003F088) --------------------------------------------------------
const char **__fastcall sub_3F088(const char **result)
{
  if ( result )
  {
    result = sub_3DF88((char *)result);
    if ( result )
    {
      if ( !result[1] )
        return nullptr;
    }
  }
  return result;
}
