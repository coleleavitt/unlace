__int64 __fastcall dyld3::MachOLoaded::getLinkEditPointers(__int64 a1, Diagnostics *a2, __int64 a3)
{
  __int64 result; // x0
  _QWORD v7[6]; // [xsp+0h] [xbp-50h] BYREF

  dyld3::MachOLoaded::getLinkEditLoadCommands();
  result = Diagnostics::noError(a2);
  if ( (_DWORD)result )
  {
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 0x40000000;
    v7[2] = ___ZNK5dyld311MachOLoaded13getLayoutInfoERNS0_10LayoutInfoE_block_invoke;
    v7[3] = &__block_descriptor_tmp_34_2;
    v7[4] = a1;
    v7[5] = a3 + 72;
    return dyld3::MachOFile::forEachSegment(a1, v7);
  }
  return result;
}
