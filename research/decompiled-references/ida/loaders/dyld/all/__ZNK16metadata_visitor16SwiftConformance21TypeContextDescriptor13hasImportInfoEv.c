__int64 __fastcall metadata_visitor::SwiftConformance::TypeContextDescriptor::hasImportInfo(
        metadata_visitor::SwiftConformance::TypeContextDescriptor *this)
{
  return (*(unsigned __int8 *)(metadata_visitor::ResolvedValue::value(this) + 2) >> 2) & 1;
}
