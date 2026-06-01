const char *__fastcall sub_753510(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "unlock_function";
  if ( v1 <= 5 )
  {
    v2 = "release_generic_capability";
    if ( v1 <= 3 )
    {
      v2 = "release_capability";
      if ( v1 >= 2 )
        return "release_shared_capability";
    }
  }
  return v2;
}

