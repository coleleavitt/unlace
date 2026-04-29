metadata_visitor::Visitor *__fastcall metadata_visitor::Visitor::Visitor(
        metadata_visitor::Visitor *this,
        const dyld3::MachOAnalyzer *a2)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = dyld3::MachOFile::preferredLoadAddress(a2);
  *((_BYTE *)this + 24) = 1;
  *(_DWORD *)this = dyld3::MachOFile::pointerSize(a2);
  return this;
}
