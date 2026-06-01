double __usercall metadata_visitor::SwiftConformance::getTypeRef@<D0>(
        metadata_visitor::SwiftConformance *this@<X0>,
        const metadata_visitor::SwiftVisitor *a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v6; // x0
  __int64 v7; // x0
  int v8; // w8
  double result; // d0
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  __int128 v11; // [xsp+18h] [xbp-38h] BYREF
  __int64 v12; // [xsp+28h] [xbp-28h]

  v6 = metadata_visitor::ResolvedValue::value(this);
  metadata_visitor::Visitor::getField((__int64 *)&v11, a2, this, (const void *)(v6 + 4));
  v7 = metadata_visitor::ResolvedValue::value(this);
  metadata_visitor::Visitor::getField(v10, a2, this, (const void *)(v7 + 12));
  v8 = (*(_DWORD *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v10) >> 3) & 7;
  result = *(double *)&v11;
  *(_OWORD *)a3 = v11;
  *(_QWORD *)(a3 + 16) = v12;
  *(_DWORD *)(a3 + 24) = v8;
  return result;
}
