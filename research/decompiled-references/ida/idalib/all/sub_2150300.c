__int64 __fastcall sub_2150300(const void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int v4; // r12d

  v4 = 0;
  if ( a4 > a2 || a4 && memcmp(a1, a3, a4) )
    return v4;
  v4 = 1;
  if ( a4 == a2 )
    return v4;
  LOBYTE(v4) = *((_BYTE *)a1 + a4) == 46;
  return v4;
}
