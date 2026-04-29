__int64 __fastcall objc_visitor::Category::getClassMethods(
        metadata_visitor::ResolvedValue *a1,
        metadata_visitor::Visitor *a2)
{
  int v4; // w22
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v4 = *(_DWORD *)a2;
  v5 = metadata_visitor::ResolvedValue::value(a1);
  v6 = 24;
  if ( v4 == 4 )
    v6 = 12;
  metadata_visitor::Visitor::getField(v8, a2, a1, (const void *)(v5 + v6));
  return metadata_visitor::Visitor::resolveOptionalRebase(a2, (const metadata_visitor::ResolvedValue *)v8);
}
