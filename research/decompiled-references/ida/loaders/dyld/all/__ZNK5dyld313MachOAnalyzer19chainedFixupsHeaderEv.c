__int64 __fastcall dyld3::MachOAnalyzer::chainedFixupsHeader(dyld3::MachOAnalyzer *this)
{
  __int64 LinkEditContent; // x20
  _BYTE v4[16]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v5; // [xsp+18h] [xbp-78h]
  __int64 v6; // [xsp+50h] [xbp-40h] BYREF
  vm_address_t v7; // [xsp+78h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v7);
  dyld3::MachOLoaded::getLinkEditPointers((__int64)this, (Diagnostics *)&v7, (__int64)v4);
  LinkEditContent = 0;
  if ( !Diagnostics::hasError((Diagnostics *)&v7) && v5 )
    LinkEditContent = dyld3::MachOLoaded::getLinkEditContent((__int64)this, (__int64)&v6, *(_DWORD *)(v5 + 8));
  Diagnostics::~Diagnostics(&v7);
  return LinkEditContent;
}
