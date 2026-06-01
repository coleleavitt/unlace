dyld4::PrebuiltObjC::ObjCOptimizerImage *__fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::ObjCOptimizerImage(
        dyld4::PrebuiltObjC::ObjCOptimizerImage *this,
        const dyld4::JustInTimeLoader *a2,
        __int64 a3,
        int a4)
{
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = a4;
  *((_QWORD *)this + 2) = a3;
  *((_BYTE *)this + 24) = 1;
  Diagnostics::Diagnostics((dyld4::PrebuiltObjC::ObjCOptimizerImage *)((char *)this + 32));
  *((_QWORD *)this + 19) = 0;
  *(_OWORD *)((char *)this + 136) = 0u;
  *(_OWORD *)((char *)this + 120) = 0u;
  *(_OWORD *)((char *)this + 104) = 0u;
  *(_OWORD *)((char *)this + 88) = 0u;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_OWORD *)((char *)this + 56) = 0u;
  *(_OWORD *)((char *)this + 40) = 0u;
  dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::Map((__int64)this + 160);
  dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::Map((char *)this + 256);
  *((_QWORD *)this + 48) = 0;
  *((_OWORD *)this + 22) = 0u;
  *((_OWORD *)this + 23) = 0u;
  dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::Map((__int64)this + 392);
  *((_QWORD *)this + 69) = 0;
  *((_DWORD *)this + 140) = 0;
  *(_OWORD *)((char *)this + 488) = 0u;
  *(_OWORD *)((char *)this + 504) = 0u;
  *(_OWORD *)((char *)this + 520) = 0u;
  *(_OWORD *)((char *)this + 535) = 0u;
  return this;
}
