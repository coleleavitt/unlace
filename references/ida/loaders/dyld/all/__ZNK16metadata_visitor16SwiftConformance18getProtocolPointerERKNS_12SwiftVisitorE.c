__int64 __fastcall metadata_visitor::SwiftConformance::getProtocolPointer(
        metadata_visitor::SwiftConformance *this,
        const metadata_visitor::SwiftVisitor *a2)
{
  const void *v4; // x0
  __int128 v6; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+10h] [xbp-40h]
  __int128 v8; // [xsp+18h] [xbp-38h] BYREF
  __int64 v9; // [xsp+28h] [xbp-28h]

  v4 = (const void *)metadata_visitor::ResolvedValue::value(this);
  metadata_visitor::Visitor::getField((__int64 *)&v8, a2, this, v4);
  v6 = v8;
  v7 = v9;
  return metadata_visitor::SwiftConformance::SwiftRelativePointer::getTargetPointer(
           (metadata_visitor::SwiftConformance::SwiftRelativePointer *)&v6,
           a2);
}
