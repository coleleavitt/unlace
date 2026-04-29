__int64 *__usercall metadata_visitor::SwiftConformance::getProtocolConformanceFlags@<X0>(
        metadata_visitor::SwiftConformance *this@<X0>,
        const metadata_visitor::SwiftVisitor *a2@<X1>,
        __int64 *a3@<X8>)
{
  __int64 v6; // x0

  v6 = metadata_visitor::ResolvedValue::value(this);
  return metadata_visitor::Visitor::getField(a3, a2, this, (const void *)(v6 + 12));
}
