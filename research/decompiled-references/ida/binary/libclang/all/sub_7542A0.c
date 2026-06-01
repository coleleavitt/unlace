const char *__fastcall sub_7542A0(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "shared_locks_required";
  if ( v1 <= 5 )
  {
    v2 = "requires_shared_capability";
    if ( v1 <= 3 )
    {
      v2 = "requires_capability";
      if ( v1 >= 2 )
        return "exclusive_locks_required";
    }
  }
  return v2;
}

