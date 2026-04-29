const char *__fastcall sub_E7B0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  const char *v3; // rdx

  v2 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    *a2 = v2 & 0xFFFFFFFE;
    return "--32bit";
  }
  else
  {
    v3 = nullptr;
    if ( (v2 & 2) != 0 )
    {
      v3 = "--relax";
      *a2 = v2 & 0xFFFFFFFD;
    }
    return v3;
  }
}
