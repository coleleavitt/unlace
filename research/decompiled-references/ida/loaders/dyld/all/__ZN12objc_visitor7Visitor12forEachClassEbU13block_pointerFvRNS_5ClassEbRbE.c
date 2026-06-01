void __fastcall objc_visitor::Visitor::forEachClass(objc_visitor::Visitor *a1, char a2, __int64 a3)
{
  _BYTE v6[40]; // [xsp+8h] [xbp-48h] BYREF

  objc_visitor::Visitor::findObjCDataSection(a1, (__int64)v6);
  if ( v6[32] )
    objc_visitor::Visitor::forEachClass(a1, a2, (metadata_visitor::ResolvedValue *)v6, a3);
}
