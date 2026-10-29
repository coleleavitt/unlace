void __fastcall objc_visitor::Visitor::forEachProtocol(objc_visitor::Visitor *a1, __int64 a2)
{
  unsigned __int64 v4; // x23
  unsigned __int64 v5; // x24
  unsigned __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 v9; // x24
  char v11; // [xsp+Fh] [xbp-A1h] BYREF
  __int128 v12; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v13; // [xsp+20h] [xbp-90h]
  __int128 v14; // [xsp+28h] [xbp-88h] BYREF
  __int64 v15; // [xsp+38h] [xbp-78h]
  __int64 v16[3]; // [xsp+40h] [xbp-70h] BYREF
  _BYTE v17[24]; // [xsp+58h] [xbp-58h] BYREF
  unsigned __int64 v18; // [xsp+70h] [xbp-40h]
  char v19; // [xsp+78h] [xbp-38h]

  objc_visitor::Visitor::findObjCDataSection(a1, (__int64)v17);
  if ( v19 )
  {
    v4 = v18;
    v5 = *(unsigned int *)a1;
    v6 = v18 / v5;
    if ( v18 % v5 )
      objc_visitor::Visitor::forEachProtocol();
    v7 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v17);
    if ( v4 >= v5 )
    {
      v8 = v7;
      v9 = 1;
      do
      {
        metadata_visitor::Visitor::getField(
          v16,
          a1,
          (const metadata_visitor::ResolvedValue *)v17,
          (const void *)(v8 + (v9 - 1) * *(unsigned int *)a1));
        metadata_visitor::Visitor::resolveRebase((__int64 *)&v14, a1, (const metadata_visitor::ResolvedValue *)v16);
        v12 = v14;
        v13 = v15;
        v11 = 0;
        (*(void (__fastcall **)(__int64, __int128 *, char *))(a2 + 16))(a2, &v12, &v11);
        if ( v11 )
          break;
      }
      while ( v9++ != v6 );
    }
  }
}
