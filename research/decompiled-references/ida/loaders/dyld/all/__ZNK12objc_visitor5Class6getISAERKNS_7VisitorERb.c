__int64 __fastcall objc_visitor::Class::getISA(__int64 a1, metadata_visitor::Visitor *a2, bool *a3)
{
  const metadata_visitor::ResolvedValue *v5; // x22
  const void *v6; // x0
  __int64 v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v5 = (const metadata_visitor::ResolvedValue *)(a1 + 8);
  v6 = (const void *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(a1 + 8));
  metadata_visitor::Visitor::getField(v8, a2, v5, v6);
  return metadata_visitor::Visitor::resolveBindOrRebase(a2, (const metadata_visitor::ResolvedValue *)v8, a3);
}
