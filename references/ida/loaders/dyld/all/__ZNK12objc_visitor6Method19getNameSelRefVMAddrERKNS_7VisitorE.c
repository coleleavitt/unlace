int *__fastcall objc_visitor::Method::getNameSelRefVMAddr(int *result, __int64 a2)
{
  int v2; // w8
  metadata_visitor::ResolvedValue *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  char v7; // w1
  _BYTE v8[24]; // [xsp+8h] [xbp-38h] BYREF

  v2 = *result;
  if ( *result )
  {
    if ( v2 == 1 )
      objc_visitor::Method::getNameSelRefVMAddr();
    if ( v2 == 2 )
      objc_visitor::Method::getNameSelRefVMAddr();
  }
  else
  {
    v4 = (metadata_visitor::ResolvedValue *)(result + 2);
    v5 = *(int *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(result + 2));
    v6 = metadata_visitor::ResolvedValue::vmAddress(v4);
    if ( !v7 )
      std::__throw_bad_optional_access[abi:v15006]();
    metadata_visitor::Visitor::getValueFor(a2, v6 + v5, 1);
    return (int *)metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v8);
  }
  return result;
}
