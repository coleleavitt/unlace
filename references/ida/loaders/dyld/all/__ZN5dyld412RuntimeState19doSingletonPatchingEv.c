dyld4::RuntimeState *__fastcall dyld4::RuntimeState::doSingletonPatching(dyld4::RuntimeState *this)
{
  dyld4::RuntimeState *v1; // x19
  unsigned __int64 v2; // x8
  unsigned __int64 i; // x9
  __int64 v4; // x11
  _QWORD *v5; // x10
  _QWORD *v6; // x11
  __int64 v7; // x12

  if ( *((_QWORD *)this + 34) != *((_QWORD *)this + 36) )
  {
    v1 = this;
    this = (dyld4::RuntimeState *)dyld4::RuntimeState::setDyldPatchedObjCClasses(this);
    v2 = *((_QWORD *)v1 + 36);
    for ( i = *((_QWORD *)v1 + 34); v2 < i; *((_QWORD *)v1 + 36) = v2 )
    {
      v4 = *((_QWORD *)v1 + 33) + 16 * v2;
      v5 = *(_QWORD **)v4;
      v6 = *(_QWORD **)(v4 + 8);
      v7 = v6[1];
      *v5 = *v6;
      v5[1] = v7;
      if ( *(_BYTE *)(*((_QWORD *)v1 + 1) + 182LL) )
      {
        this = (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                        v1,
                                        "cache singleton fixup: *0x%012lX = 0x%012lX\n",
                                        v5,
                                        v6);
        v2 = *((_QWORD *)v1 + 36);
        i = *((_QWORD *)v1 + 34);
      }
      ++v2;
    }
  }
  return this;
}
