__int64 __fastcall metadata_visitor::SwiftConformance::SwiftProtocolConformanceFlags::typeReferenceKind(
        metadata_visitor::SwiftConformance::SwiftProtocolConformanceFlags *this)
{
  return (*(_DWORD *)metadata_visitor::ResolvedValue::value(this) >> 3) & 7;
}
