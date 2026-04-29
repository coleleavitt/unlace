__int64 __fastcall objc_visitor::Class::getBaseMethods(__int64 a1, metadata_visitor::Visitor *a2)
{
  int v3; // w21
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v7[3]; // [xsp+0h] [xbp-50h] BYREF
  _BYTE v8[24]; // [xsp+18h] [xbp-38h] BYREF

  objc_visitor::Class::getClassData(a1, a2, (__int64)v8);
  v3 = *(_DWORD *)a2;
  v4 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v8);
  v5 = 32;
  if ( v3 == 4 )
    v5 = 20;
  metadata_visitor::Visitor::getField(v7, a2, (const metadata_visitor::ResolvedValue *)v8, (const void *)(v4 + v5));
  return metadata_visitor::Visitor::resolveOptionalRebase(a2, (const metadata_visitor::ResolvedValue *)v7);
}
