void __fastcall dyld3::MachOFile::forEachInitializerPointerSection(dyld3::MachOFile *a1)
{
  int v1; // w21

  v1 = (int)a1;
  dyld3::MachOFile::preferredLoadAddress(a1);
  dyld3::MachOFile::forEachSection(v1);
}
