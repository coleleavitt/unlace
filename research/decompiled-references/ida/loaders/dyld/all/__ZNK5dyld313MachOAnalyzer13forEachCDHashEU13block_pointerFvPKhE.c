void __fastcall dyld3::MachOAnalyzer::forEachCDHash(__int64 a1, __int64 a2)
{
  _DWORD *LinkEditContent; // x0
  _BYTE v5[64]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v6; // [xsp+48h] [xbp-48h]
  __int64 v7; // [xsp+50h] [xbp-40h] BYREF
  vm_address_t v8; // [xsp+78h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v8);
  dyld3::MachOLoaded::getLinkEditPointers(a1, (Diagnostics *)&v8, (__int64)v5);
  if ( !Diagnostics::hasError((Diagnostics *)&v8) && v6 )
  {
    LinkEditContent = (_DWORD *)dyld3::MachOLoaded::getLinkEditContent(a1, (__int64)&v7, *(_DWORD *)(v6 + 8));
    dyld3::MachOFile::forEachCDHashOfCodeSignature(a1, LinkEditContent, *(unsigned int *)(v6 + 12), a2);
  }
  Diagnostics::~Diagnostics(&v8);
}
