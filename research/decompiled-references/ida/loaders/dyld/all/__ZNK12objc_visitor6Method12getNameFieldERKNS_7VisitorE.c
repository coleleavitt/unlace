__int64 *__usercall objc_visitor::Method::getNameField@<X0>(
        __int64 *result@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        __int64 *a3@<X8>)
{
  int v4; // w8
  const metadata_visitor::ResolvedValue *v6; // x21
  const void *v7; // x2
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 2 )
  {
    v6 = (const metadata_visitor::ResolvedValue *)(result + 1);
    v7 = (const void *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(result + 1));
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return metadata_visitor::Visitor::getField(a3, a2, v6, v7);
  }
  else
  {
    if ( v4 == 1 )
      objc_visitor::Method::getNameField();
    if ( !v4 )
      objc_visitor::Method::getNameField();
  }
  return result;
}
