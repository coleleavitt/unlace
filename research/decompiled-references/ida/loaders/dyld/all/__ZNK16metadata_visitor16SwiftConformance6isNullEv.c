bool __fastcall metadata_visitor::SwiftConformance::isNull(metadata_visitor::SwiftConformance *this)
{
  return *(_OWORD *)metadata_visitor::ResolvedValue::value(this) == 0;
}
