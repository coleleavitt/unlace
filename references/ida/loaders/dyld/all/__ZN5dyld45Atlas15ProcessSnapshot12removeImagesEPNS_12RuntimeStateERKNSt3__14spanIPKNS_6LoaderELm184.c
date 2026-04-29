dyld4::Atlas::ProcessSnapshot *__fastcall dyld4::Atlas::ProcessSnapshot::removeImages(
        dyld4::Atlas::ProcessSnapshot *result,
        dyld4::RuntimeState *a2,
        __int64 a3)
{
  __int64 v3; // x8
  dyld4::Atlas::ProcessSnapshot *v5; // x20
  dyld4::Loader **v6; // x21
  __int64 v7; // x22
  dyld4::Loader *v8; // t1
  unsigned __int64 Address; // x0

  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 )
  {
    v5 = result;
    v6 = *(dyld4::Loader ***)a3;
    v7 = 8 * v3;
    do
    {
      v8 = *v6++;
      Address = dyld4::Loader::loadAddress(v8, a2);
      result = (dyld4::Atlas::ProcessSnapshot *)dyld4::Atlas::ProcessSnapshot::removeImageAtAddress(v5, Address);
      v7 -= 8;
    }
    while ( v7 );
  }
  return result;
}
