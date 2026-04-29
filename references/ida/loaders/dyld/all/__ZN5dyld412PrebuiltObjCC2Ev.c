dyld4::PrebuiltObjC *__fastcall dyld4::PrebuiltObjC::PrebuiltObjC(dyld4::PrebuiltObjC *this)
{
  *((_OWORD *)this + 4) = 0u;
  *((_OWORD *)this + 2) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *(_OWORD *)this = 0u;
  *((_OWORD *)this + 1) = 0u;
  dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::Map((__int64)this + 80);
  dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::MultiMap(
    (char *)this + 176,
    0);
  dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::MultiMap(
    (char *)this + 280,
    0);
  dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::Map((__int64)this + 384);
  *((_QWORD *)this + 60) = 0;
  *((_BYTE *)this + 488) = 0;
  *((_BYTE *)this + 624) = 0;
  *(_OWORD *)((char *)this + 632) = 0u;
  *(_OWORD *)((char *)this + 648) = 0u;
  *((_QWORD *)this + 83) = 0;
  *((_OWORD *)this + 31) = 0u;
  *((_OWORD *)this + 32) = 0u;
  *((_OWORD *)this + 33) = 0u;
  *((_OWORD *)this + 34) = 0u;
  *((_OWORD *)this + 35) = 0u;
  *((_OWORD *)this + 36) = 0u;
  *((_OWORD *)this + 37) = 0u;
  *(_OWORD *)((char *)this + 601) = 0u;
  return this;
}
