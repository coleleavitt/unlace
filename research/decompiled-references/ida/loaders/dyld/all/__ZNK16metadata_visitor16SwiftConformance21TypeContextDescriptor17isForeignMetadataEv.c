bool __fastcall metadata_visitor::SwiftConformance::TypeContextDescriptor::isForeignMetadata(
        metadata_visitor::SwiftConformance::TypeContextDescriptor *this)
{
  return (*(_DWORD *)metadata_visitor::ResolvedValue::value(this) & 0x30000) == 0x20000;
}
