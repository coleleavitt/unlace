void __fastcall objc_visitor::Visitor::forEachSelectorReference(objc_visitor::Visitor *a1, __int64 a2)
{
  unsigned __int64 v4; // x23
  unsigned __int64 v5; // x24
  unsigned __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 v9; // x23
  __int64 v10[3]; // [xsp+0h] [xbp-70h] BYREF
  _BYTE v11[24]; // [xsp+18h] [xbp-58h] BYREF
  unsigned __int64 v12; // [xsp+30h] [xbp-40h]
  char v13; // [xsp+38h] [xbp-38h]

  objc_visitor::Visitor::findObjCDataSection(a1, (__int64)v11);
  if ( v13 )
  {
    v4 = v12;
    v5 = *(unsigned int *)a1;
    v6 = v12 / v5;
    if ( v12 % v5 )
      objc_visitor::Visitor::forEachSelectorReference();
    v7 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v11);
    if ( v4 >= v5 )
    {
      v8 = v7;
      v9 = 0;
      do
      {
        metadata_visitor::Visitor::getField(
          v10,
          a1,
          (const metadata_visitor::ResolvedValue *)v11,
          (const void *)(v8 + v9 * *(unsigned int *)a1));
        (*(void (__fastcall **)(__int64, __int64 *))(a2 + 16))(a2, v10);
        ++v9;
      }
      while ( v9 != v6 );
    }
  }
}
