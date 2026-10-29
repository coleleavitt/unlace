__int64 __fastcall dyld3::GradedArchs::checksOSBinary(dyld3::GradedArchs *this)
{
  dyld3::GradedArchs *v1; // x8
  int v2; // w9

  v1 = (dyld3::GradedArchs *)((char *)this + 48);
  do
  {
    v2 = *(_DWORD *)this;
    if ( !*(_DWORD *)this )
      break;
    LOBYTE(v2) = *((_BYTE *)this + 8);
    if ( (_BYTE)v2 )
    {
      LOBYTE(v2) = 1;
      return v2 & 1;
    }
    this = (dyld3::GradedArchs *)((char *)this + 12);
  }
  while ( this != v1 );
  return v2 & 1;
}
