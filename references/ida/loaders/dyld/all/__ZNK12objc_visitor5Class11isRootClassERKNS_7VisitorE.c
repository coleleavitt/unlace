__int64 __fastcall objc_visitor::Class::isRootClass(__int64 a1, metadata_visitor::Visitor *a2)
{
  _BYTE v3[24]; // [xsp+8h] [xbp-18h] BYREF

  objc_visitor::Class::getClassData(a1, a2, (__int64)v3);
  return (*(_DWORD *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v3) >> 1) & 1;
}
