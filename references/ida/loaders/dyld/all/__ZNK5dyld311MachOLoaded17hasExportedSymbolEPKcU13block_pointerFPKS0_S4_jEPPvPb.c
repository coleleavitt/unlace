__int64 __fastcall dyld3::MachOLoaded::hasExportedSymbol(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5)
{
  __int64 ExportedSymbol; // x21
  dyld3::MachOLoaded *v11; // x0
  int v13; // [xsp+40h] [xbp-60h] BYREF
  dyld3::MachOLoaded *v14; // [xsp+48h] [xbp-58h]
  __int64 v15; // [xsp+50h] [xbp-50h]
  unsigned int v16; // [xsp+58h] [xbp-48h]
  vm_address_t v17; // [xsp+68h] [xbp-38h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v17);
  ExportedSymbol = dyld3::MachOLoaded::findExportedSymbol(a1, &v17, a2, 0, &v13, a3);
  if ( (_DWORD)ExportedSymbol )
  {
    switch ( v13 )
    {
      case 2:
        *a4 = ((__int64 (*)(void))((char *)v14 + v16))();
        *a5 = 1;
        break;
      case 1:
        *a4 = v15;
        *a5 = 0;
        break;
      case 0:
        v11 = v14;
        *a4 = (char *)v14 + v15;
        *a5 = 0;
        dyld3::MachOLoaded::getSlide(v11);
        dyld3::MachOFile::forEachSection((int)v14);
        break;
    }
  }
  Diagnostics::~Diagnostics(&v17);
  return ExportedSymbol;
}
