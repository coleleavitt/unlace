char *__fastcall sub_75DA60(__int64 a1)
{
  char *v1; // rdx
  unsigned int v3; // eax
  char *v4; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
  {
    v1 = "maybe_unused";
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 30) >> 4) <= 3u )
    {
      if ( *(_BYTE *)(a1 + 30) >> 4 )
        return "unused";
    }
    return v1;
  }
  else
  {
    v3 = sub_C4A760(a1);
    v4 = "maybe_unused";
    if ( v3 <= 3 && v3 )
      return "unused";
    return v4;
  }
}

