void __fastcall dyld4::RuntimeState::setDyldLoader(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  dyld4::RuntimeState *v4; // x0
  const dyld4::Loader *v5; // x1
  vm_address_t v6; // [xsp+8h] [xbp-38h] BYREF
  __int128 v7; // [xsp+10h] [xbp-30h] BYREF
  __int128 v8; // [xsp+20h] [xbp-20h]

  *((_QWORD *)this + 9) = a2;
  v7 = unk_95640;
  v8 = xmmword_95650;
  Diagnostics::Diagnostics((Diagnostics *)&v6);
  if ( (unsigned int)dyld4::Loader::hasExportedSymbol(
                       a2,
                       (dyld3::MachOFile *)&v6,
                       this,
                       "__dyld_missing_symbol_abort",
                       1,
                       (dyld4::Loader **)&v7,
                       0) )
  {
    v4 = (dyld4::RuntimeState *)dyld4::Loader::resolvedAddress(this);
    *((_QWORD *)this + 10) = v4;
    if ( DWORD2(v8) != 1 )
      dyld4::RuntimeState::setDyldLoader(v4, v5);
    *((_QWORD *)this + 11) = v8;
  }
  Diagnostics::~Diagnostics(&v6);
}
