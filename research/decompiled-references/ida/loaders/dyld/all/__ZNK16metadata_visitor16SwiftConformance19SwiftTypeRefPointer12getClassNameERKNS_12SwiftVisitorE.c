__int64 __fastcall metadata_visitor::SwiftConformance::SwiftTypeRefPointer::getClassName(
        metadata_visitor::SwiftConformance::SwiftTypeRefPointer *this,
        const metadata_visitor::SwiftVisitor *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  char v6; // w1
  _BYTE v8[24]; // [xsp+8h] [xbp-38h] BYREF

  if ( *((_DWORD *)this + 6) != 2 )
    metadata_visitor::SwiftConformance::SwiftTypeRefPointer::getClassName();
  v4 = *(int *)metadata_visitor::ResolvedValue::value(this);
  v5 = metadata_visitor::ResolvedValue::vmAddress(this);
  if ( !v6 )
    std::__throw_bad_optional_access[abi:v15006](v5);
  metadata_visitor::Visitor::getValueFor(a2, v5 + v4, 1);
  return metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v8);
}
