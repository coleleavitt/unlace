void __fastcall dyld4::Loader::makeSegmentsReadOnly(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  dyld3::MachOLoaded *Address; // x20
  _QWORD v4[6]; // [xsp+0h] [xbp-40h] BYREF

  Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(this, a2);
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld46Loader20makeSegmentsReadOnlyERNS_12RuntimeStateE_block_invoke;
  v4[3] = &__block_descriptor_tmp_96;
  v4[4] = dyld3::MachOLoaded::getSlide(Address);
  v4[5] = a2;
  dyld3::MachOFile::forEachSegment(Address, (__int64)v4);
}
