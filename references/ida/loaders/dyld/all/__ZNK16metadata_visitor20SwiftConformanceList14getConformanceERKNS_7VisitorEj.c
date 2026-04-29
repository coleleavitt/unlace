__int64 *__fastcall metadata_visitor::SwiftConformanceList::getConformance(
        metadata_visitor::SwiftConformanceList *this,
        const metadata_visitor::Visitor *a2,
        unsigned int a3)
{
  __int64 v7; // x23
  __int64 v8; // x0
  char v9; // w1

  v7 = *(int *)(metadata_visitor::ResolvedValue::value(this) + 4LL * a3);
  v8 = metadata_visitor::ResolvedValue::vmAddress(this);
  if ( !v9 )
    std::__throw_bad_optional_access[abi:v15006](v8);
  return (__int64 *)metadata_visitor::Visitor::getValueFor(a2, v7 + 4 * a3 + v8, 1);
}
