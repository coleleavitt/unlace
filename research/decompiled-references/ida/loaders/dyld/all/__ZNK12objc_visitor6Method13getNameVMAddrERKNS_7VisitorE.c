__int64 *__fastcall objc_visitor::Method::getNameVMAddr(__int64 *result, metadata_visitor::Visitor *a2)
{
  int v3; // w8
  metadata_visitor::ResolvedValue *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  char v7; // w1
  __int64 v8[3]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9[3]; // [xsp+18h] [xbp-38h] BYREF

  v3 = *(_DWORD *)result;
  if ( !*(_DWORD *)result )
  {
    v4 = (metadata_visitor::ResolvedValue *)(result + 1);
    v5 = *(int *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(result + 1));
    v6 = metadata_visitor::ResolvedValue::vmAddress(v4);
    if ( !v7 )
      std::__throw_bad_optional_access[abi:v15006]();
    metadata_visitor::Visitor::getValueFor(a2, v6 + v5, 1);
    goto LABEL_8;
  }
  if ( v3 == 2 )
  {
    objc_visitor::Method::getNameField(result, a2, v9);
LABEL_8:
    metadata_visitor::Visitor::resolveRebase(v8, a2, (const metadata_visitor::ResolvedValue *)v9);
    return (__int64 *)metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v8);
  }
  if ( v3 == 1 )
    objc_visitor::Method::getNameVMAddr();
  return result;
}
