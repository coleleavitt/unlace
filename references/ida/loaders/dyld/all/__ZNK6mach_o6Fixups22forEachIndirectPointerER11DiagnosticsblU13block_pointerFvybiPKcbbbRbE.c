void __fastcall mach_o::Fixups::forEachIndirectPointer(dyld3::MachOFile ***a1)
{
  int v2; // w25
  dyld3::MachOFile **v3; // x8
  _QWORD v4[3]; // [xsp+88h] [xbp-78h] BYREF
  char v5; // [xsp+A0h] [xbp-60h]

  dyld3::MachOFile::is64(**a1);
  v2 = *((_DWORD *)(*a1)[3] + 22);
  dyld3::MachOFile::pointerSize(**a1);
  v3 = *a1;
  v4[0] = 0;
  v4[1] = v4;
  v4[2] = 0x2000000000LL;
  v5 = 0;
  if ( v2 )
    goto LABEL_4;
  if ( !dyld3::MachOFile::isKextBundle(*v3) )
  {
    v3 = *a1;
LABEL_4:
    dyld3::MachOFile::forEachSection((int)*v3);
  }
  _Block_object_dispose(v4, 8);
}
