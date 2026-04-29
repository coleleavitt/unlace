__int64 __fastcall objc_visitor::Protocol::getName(metadata_visitor::ResolvedValue *a1, metadata_visitor::Visitor *a2)
{
  int v4; // w21
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v8[3]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9[3]; // [xsp+18h] [xbp-38h] BYREF

  v4 = *(_DWORD *)a2;
  v5 = metadata_visitor::ResolvedValue::value(a1);
  v6 = 8;
  if ( v4 == 4 )
    v6 = 4;
  metadata_visitor::Visitor::getField(v9, a2, a1, (const void *)(v5 + v6));
  metadata_visitor::Visitor::resolveRebase(v8, a2, (const metadata_visitor::ResolvedValue *)v9);
  return metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v8);
}
