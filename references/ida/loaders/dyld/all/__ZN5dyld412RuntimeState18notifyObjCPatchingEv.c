dyld4::RuntimeState *__fastcall dyld4::RuntimeState::notifyObjCPatching(dyld4::RuntimeState *this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  _QWORD *v3; // x20
  _QWORD *v4; // x21

  if ( *((_QWORD *)this + 48) )
  {
    v1 = (__int64)this;
    if ( *((_QWORD *)this + 30) )
    {
      this = (dyld4::RuntimeState *)dyld4::RuntimeState::setDyldPatchedObjCClasses(this);
      v2 = *(_QWORD *)(v1 + 240);
      if ( v2 )
      {
        v3 = *(_QWORD **)(v1 + 232);
        v4 = &v3[4 * v2];
        do
        {
          this = (dyld4::RuntimeState *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v1 + 384))(
                                          *v3,
                                          v3[1],
                                          v3[2],
                                          v3[3]);
          v3 += 4;
        }
        while ( v3 != v4 );
      }
      if ( *(_BYTE *)(*(_QWORD *)(v1 + 8) + 185LL) )
        this = (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                        (dyld4::RuntimeState *)v1,
                                        "objc-patch-class-notifier called with %ld patches:\n",
                                        *(_QWORD *)(v1 + 240));
      *(_QWORD *)(v1 + 240) = 0;
    }
  }
  return this;
}
