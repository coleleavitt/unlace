__int64 __fastcall dyld4::RuntimeState::initialize(dyld4::RuntimeState *this)
{
  __int64 result; // x0
  __int64 v3; // x8
  dyld4::Loader **v4; // x21
  __int64 v5; // x22
  dyld4::Loader **v6; // x23
  dyld3::MachOFile *v7; // x20
  _QWORD *v8; // x9
  __int64 v9; // x8

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), (char *)this + 808);
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 15) + 56LL))(
             *((_QWORD *)this + 15),
             (char *)this + 800);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = *((dyld4::Loader ***)this + 5);
    v5 = 8 * v3;
    v6 = v4;
    do
    {
      v7 = (dyld3::MachOFile *)dyld4::Loader::analyzer(*v6, this);
      result = dyld3::MachOFile::hasThreadLocalVariables(v7);
      if ( (_DWORD)result )
        result = dyld4::RuntimeState::setUpTLVs(this, v7);
      ++v6;
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
  v8 = *((_QWORD **)this + 12);
  v9 = *((_QWORD *)this + 13) + 32LL;
  *v8 = this;
  v8[1] = v9;
  return result;
}
