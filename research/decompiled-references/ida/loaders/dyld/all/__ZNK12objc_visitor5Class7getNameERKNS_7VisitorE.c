__int64 __fastcall objc_visitor::Class::getName(__int64 a1, metadata_visitor::Visitor *a2)
{
  int v3; // w20
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v7[3]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v8[3]; // [xsp+20h] [xbp-40h] BYREF
  _BYTE v9[24]; // [xsp+38h] [xbp-28h] BYREF

  objc_visitor::Class::getClassData(a1, a2, (__int64)v9);
  v3 = *(_DWORD *)a2;
  v4 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v9);
  v5 = 24;
  if ( v3 == 4 )
    v5 = 16;
  metadata_visitor::Visitor::getField(v8, a2, (const metadata_visitor::ResolvedValue *)v9, (const void *)(v4 + v5));
  metadata_visitor::Visitor::resolveRebase(v7, a2, (const metadata_visitor::ResolvedValue *)v8);
  return metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v7);
}
