/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x00000000000BE238

//----- (00000000000BE238) ----------------------------------------------------
void *__fastcall qalloc(void *result)
{
  if ( result )
  {
    if ( result == (void *)3735928559LL || (__int64)result <= 0 )
    {
      *(_DWORD *)__errno(result) = 12;
    }
    else
    {
      result = malloc((size_t)result);
      if ( result )
        return result;
    }
    set_qerrno(1u);
    return nullptr;
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
