__int64 __fastcall dyld3::hash_rank(dyld3 *this, const CS_CodeDirectory *a2)
{
  __int64 v2; // x8

  v2 = 0;
  while ( dyld3::hashPriorities[v2] != *((unsigned __int8 *)this + 37) )
  {
    if ( ++v2 == 4 )
      return 0;
  }
  return (unsigned int)(v2 + 1);
}
