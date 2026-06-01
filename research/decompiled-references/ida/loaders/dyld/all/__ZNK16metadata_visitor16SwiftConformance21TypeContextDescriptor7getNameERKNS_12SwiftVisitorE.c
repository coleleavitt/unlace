__int64 __fastcall metadata_visitor::SwiftConformance::TypeContextDescriptor::getName(
        metadata_visitor::SwiftConformance::TypeContextDescriptor *this,
        const metadata_visitor::SwiftVisitor *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  char v7; // w1
  __int64 v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v4 = metadata_visitor::ResolvedValue::value(this);
  metadata_visitor::Visitor::getField(v9, a2, this, (const void *)(v4 + 8));
  v5 = *(int *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v9);
  v6 = metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v9);
  if ( !v7 )
    std::__throw_bad_optional_access[abi:v15006](v6);
  return metadata_visitor::Visitor::getValueFor(a2, v6 + v5, 1);
}
