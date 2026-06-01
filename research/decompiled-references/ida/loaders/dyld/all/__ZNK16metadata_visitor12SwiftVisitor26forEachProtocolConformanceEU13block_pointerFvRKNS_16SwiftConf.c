__int64 *__fastcall metadata_visitor::SwiftVisitor::forEachProtocolConformance(
        metadata_visitor::SwiftVisitor *a1,
        __int64 a2)
{
  __int64 *result; // x0
  unsigned int v5; // w21
  int v6; // w23
  bool v7; // zf
  char v8; // [xsp+Fh] [xbp-71h] BYREF
  __int64 v9[3]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v10[4]; // [xsp+28h] [xbp-58h] BYREF
  int v11; // [xsp+48h] [xbp-38h]

  result = metadata_visitor::SwiftVisitor::getSwiftConformances(v10, a1);
  if ( v11 )
  {
    v5 = 0;
    v6 = v11 - 1;
    do
    {
      metadata_visitor::SwiftConformanceList::getConformance(v9, (metadata_visitor::SwiftConformanceList *)v10, a1, v5);
      v8 = 0;
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, char *))(a2 + 16))(a2, v9, &v8);
      if ( v8 )
        v7 = 1;
      else
        v7 = v6 == v5;
      ++v5;
    }
    while ( !v7 );
  }
  return result;
}
