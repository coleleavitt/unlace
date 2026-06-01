__int64 *__usercall metadata_visitor::SwiftVisitor::getSwiftConformances@<X0>(
        __int64 *__return_ptr a1@<X8>,
        metadata_visitor::SwiftVisitor *this@<X0>)
{
  __int64 *result; // x0
  unsigned __int64 v4; // x8
  char v5; // w9
  __int128 v6; // [xsp+8h] [xbp-38h] BYREF
  __int64 v7; // [xsp+18h] [xbp-28h]
  unsigned __int64 v8; // [xsp+20h] [xbp-20h]
  unsigned __int8 v9; // [xsp+28h] [xbp-18h]

  result = metadata_visitor::SwiftVisitor::findTextSection((__int64 *)&v6, this, "__swift5_proto");
  LODWORD(v4) = v9;
  if ( v9 )
  {
    if ( (v8 & 3) != 0 )
      metadata_visitor::SwiftVisitor::getSwiftConformances(result);
    v4 = v8 >> 2;
    *(_OWORD *)a1 = v6;
    a1[2] = v7;
    v5 = 1;
  }
  else
  {
    v5 = 0;
    *(_BYTE *)a1 = 0;
  }
  *((_BYTE *)a1 + 24) = v5;
  *((_DWORD *)a1 + 8) = v4;
  return result;
}
