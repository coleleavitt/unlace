__int64 __fastcall lsl::EphemeralAllocator::owned(lsl::EphemeralAllocator *this, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // x8

  v3 = *((unsigned __int64 **)this + 4);
  if ( !v3 )
    return 0;
  while ( *v3 > a2 || a2 + a3 > v3[1] + *v3 )
  {
    v3 = (unsigned __int64 *)v3[2];
    if ( !v3 )
      return 0;
  }
  return 1;
}
