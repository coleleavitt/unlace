dyld4::Reaper *__fastcall dyld4::Reaper::markDependentOfInUseImages(dyld4::Reaper *this)
{
  _QWORD *v1; // x8
  __int64 v2; // x9
  dyld4::Reaper *v3; // x19
  __int64 v4; // x20
  const dyld4::Loader **v5; // x21

  v1 = *((_QWORD **)this + 1);
  v2 = v1[2];
  if ( v2 )
  {
    v3 = this;
    v4 = 16 * v2;
    v5 = (const dyld4::Loader **)(*v1 + 8LL);
    do
    {
      if ( *(_BYTE *)v5 )
        this = (dyld4::Reaper *)dyld4::Reaper::markDependentsOf(v3, *(v5 - 1));
      v5 += 2;
      v4 -= 16;
    }
    while ( v4 );
  }
  return this;
}
