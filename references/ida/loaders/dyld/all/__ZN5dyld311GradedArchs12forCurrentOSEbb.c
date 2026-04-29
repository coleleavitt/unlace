void *__fastcall dyld3::GradedArchs::forCurrentOS(dyld3::GradedArchs *this, int a2)
{
  void *v2; // x8
  void *v3; // x9

  v2 = &dyld3::GradedArchs::arm64e_pb;
  if ( (_DWORD)this )
    v2 = &dyld3::GradedArchs::arm64e_keysoff_pb;
  v3 = &dyld3::GradedArchs::arm64e;
  if ( (_DWORD)this )
    v3 = &dyld3::GradedArchs::arm64e_keysoff;
  if ( a2 )
    return v2;
  else
    return v3;
}
