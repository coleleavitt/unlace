__int64 *__usercall objc_visitor::ProtocolList::getProtocolField@<X0>(
        metadata_visitor::ResolvedValue *a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        unsigned __int64 a3@<X2>,
        __int64 *a4@<X8>)
{
  __int64 v8; // x0
  const void *v9; // x2
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( !*((_BYTE *)a1 + 24) )
    objc_visitor::ProtocolList::getProtocolField();
  if ( objc_visitor::ProtocolList::numProtocols(a1, a2) <= a3 )
    objc_visitor::ProtocolList::getProtocolField();
  if ( !*((_BYTE *)a1 + 24) )
    std::__throw_bad_optional_access[abi:v15006]();
  v8 = metadata_visitor::ResolvedValue::value(a1);
  if ( !v8 )
    objc_visitor::ProtocolList::getProtocolField();
  if ( *(_DWORD *)a2 == 4 )
    v9 = (const void *)(v8 + 4 * a3 + 4);
  else
    v9 = (const void *)(v8 + 8 * a3 + 8);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return metadata_visitor::Visitor::getField(a4, a2, a1, v9);
}
