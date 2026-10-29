__int64 __fastcall objc_visitor::Class::isSwiftLegacy(__int64 a1, metadata_visitor::Visitor *a2)
{
  const metadata_visitor::ResolvedValue *v3; // x20
  int v4; // w21
  __int64 v5; // x0
  __int64 v6; // x8
  char v7; // w0
  char v8; // w1
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v11[3]; // [xsp+18h] [xbp-38h] BYREF

  v3 = (const metadata_visitor::ResolvedValue *)(a1 + 8);
  v4 = *(_DWORD *)a2;
  v5 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(a1 + 8));
  v6 = 32;
  if ( v4 == 4 )
    v6 = 16;
  metadata_visitor::Visitor::getField(v11, a2, v3, (const void *)(v5 + v6));
  metadata_visitor::Visitor::resolveRebase(v10, a2, (const metadata_visitor::ResolvedValue *)v11);
  v7 = metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v10);
  if ( !v8 )
    std::__throw_bad_optional_access[abi:v15006]();
  return v7 & 1;
}
