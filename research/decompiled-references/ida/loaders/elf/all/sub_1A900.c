const char *__fastcall sub_1A900(__int64 a1, int *a2)
{
  int v2; // eax
  const char *v3; // rdx
  int v4; // eax

  v2 = *a2;
  v3 = "PowerPC64 original ABI";
  *a2 = 0;
  v4 = v2 & 3;
  if ( v4 != 1 )
  {
    v3 = "PowerPC64 revised ABI";
    if ( v4 != 2 )
    {
      v3 = "PowerPC64 unspecified ABI";
      if ( v4 )
        return nullptr;
    }
  }
  return v3;
}

