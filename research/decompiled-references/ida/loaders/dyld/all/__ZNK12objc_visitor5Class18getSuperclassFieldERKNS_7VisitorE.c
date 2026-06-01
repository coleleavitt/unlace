__int64 *__usercall objc_visitor::Class::getSuperclassField@<X0>(
        __int64 a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        __int64 *a3@<X8>)
{
  const metadata_visitor::ResolvedValue *v5; // x21
  int v6; // w22
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  v5 = (const metadata_visitor::ResolvedValue *)(a1 + 8);
  v6 = *(_DWORD *)a2;
  v7 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(a1 + 8));
  v8 = 8;
  if ( v6 == 4 )
    v8 = 4;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return metadata_visitor::Visitor::getField(a3, a2, v5, (const void *)(v7 + v8));
}
