/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481420
// Address: 0x0000000000481420

//----- (0000000000481420) ----------------------------------------------------
void *__fastcall sub_481420(void *a1, signed __int64 a2)
{
  void *v2; // rbx

  if ( a2 )
  {
    if ( a2 == 3735928559LL || a2 <= 0 )
    {
      v2 = nullptr;
      *__errno_location() = 12;
      sub_479EB0(1u);
    }
    else
    {
      v2 = realloc(a1, a2);
      if ( !v2 )
        sub_479EB0(1u);
    }
  }
  else
  {
    j__free(a1);
    return nullptr;
  }
  return v2;
}
