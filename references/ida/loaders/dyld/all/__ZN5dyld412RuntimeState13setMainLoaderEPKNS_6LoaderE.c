void __fastcall dyld4::RuntimeState::setMainLoader(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  dyld3::MachOLoaded *v4; // x20
  __int64 v5; // x8
  _QWORD v6[8]; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v7[3]; // [xsp+50h] [xbp-40h] BYREF
  int v8; // [xsp+68h] [xbp-28h]

  *((_QWORD *)this + 3) = a2;
  v4 = (dyld3::MachOLoaded *)dyld4::Loader::analyzer(a2, this);
  v5 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v5 + 180) )
  {
    dyld4::Loader::logLoad(a2, this, *(const char **)(v5 + 16));
    v5 = *((_QWORD *)this + 1);
  }
  if ( *(_BYTE *)(v5 + 181) )
  {
    dyld4::RuntimeState::log(this, "Kernel mapped %s\n", *(const char **)(v5 + 16));
    v7[0] = 0;
    v7[1] = v7;
    v7[2] = 0x2000000000LL;
    v8 = 0;
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 0x40000000;
    v6[2] = ___ZN5dyld412RuntimeState13setMainLoaderEPKNS_6LoaderE_block_invoke;
    v6[3] = &unk_95668;
    v6[4] = v7;
    v6[5] = this;
    v6[6] = dyld3::MachOLoaded::getSlide(v4);
    v6[7] = v4;
    dyld3::MachOFile::forEachSegment(v4, (__int64)v6);
    _Block_object_dispose(v7, 8);
  }
}
