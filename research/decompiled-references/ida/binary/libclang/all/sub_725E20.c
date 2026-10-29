char *__fastcall sub_725E20(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "exclusive_lock_function";
  if ( v1 != 4 )
  {
    v2 = "shared_lock_function";
    if ( v1 <= 4 )
    {
      v2 = "acquire_capability";
      if ( v1 >= 2 )
        return "acquire_shared_capability";
    }
  }
  return v2;
}

