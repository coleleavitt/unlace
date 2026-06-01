__int64 *__usercall objc_visitor::Protocol::getInstanceMethods@<X0>(
        metadata_visitor::ResolvedValue *a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        __int64 *a3@<X8>)
{
  int v6; // w22
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v6 = *(_DWORD *)a2;
  v7 = metadata_visitor::ResolvedValue::value(a1);
  v8 = 24;
  if ( v6 == 4 )
    v8 = 12;
  metadata_visitor::Visitor::getField(v10, a2, a1, (const void *)(v7 + v8));
  return metadata_visitor::Visitor::resolveOptionalRebase(a3, a2, (const metadata_visitor::ResolvedValue *)v10);
}
