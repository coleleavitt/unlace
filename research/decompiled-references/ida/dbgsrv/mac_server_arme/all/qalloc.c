/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x000000010007440C

//----- (000000010007440C) ----------------------------------------------------
void *__fastcall qalloc(void *result)
{
  if ( result )
  {
    if ( (__int64)result <= 0 )
    {
      *__error() = 12;
    }
    else
    {
      result = malloc((size_t)result);
      if ( result )
        return result;
    }
    set_qerrno();
    return nullptr;
  }
  return result;
}
