__int64 __fastcall objc_visitor::Visitor::forEachClass(
        metadata_visitor::Visitor *a1,
        char a2,
        metadata_visitor::ResolvedValue *this,
        __int64 a4)
{
  unsigned __int64 v4; // x25
  unsigned __int64 v5; // x26
  unsigned __int64 v6; // x24
  __int64 result; // x0
  __int64 v12; // x22
  __int64 v13; // x25
  char v14; // w23
  _BYTE v15[8]; // [xsp+0h] [xbp-F0h] BYREF
  __int128 v16; // [xsp+8h] [xbp-E8h]
  __int64 v17; // [xsp+18h] [xbp-D8h]
  __int128 v18; // [xsp+20h] [xbp-D0h]
  __int64 v19; // [xsp+30h] [xbp-C0h]
  bool v20; // [xsp+3Eh] [xbp-B2h] BYREF
  char v21; // [xsp+3Fh] [xbp-B1h] BYREF
  _BYTE v22[8]; // [xsp+40h] [xbp-B0h] BYREF
  __int128 v23; // [xsp+48h] [xbp-A8h]
  __int64 v24; // [xsp+58h] [xbp-98h]
  __int128 v25; // [xsp+60h] [xbp-90h] BYREF
  __int64 v26; // [xsp+70h] [xbp-80h]
  bool v27; // [xsp+7Fh] [xbp-71h] BYREF
  __int64 v28[4]; // [xsp+80h] [xbp-70h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = *(unsigned int *)a1;
  v6 = v4 / v5;
  if ( v4 % v5 )
    objc_visitor::Visitor::forEachClass();
  result = metadata_visitor::ResolvedValue::value(this);
  if ( v4 >= v5 )
  {
    v12 = result;
    v13 = 0;
    v14 = a2 ^ 1;
    do
    {
      metadata_visitor::Visitor::getField(v28, a1, this, (const void *)(v12 + v13 * *(unsigned int *)a1));
      v27 = 0;
      metadata_visitor::Visitor::resolveBindOrRebase(
        (__int64 *)&v25,
        a1,
        (const metadata_visitor::ResolvedValue *)v28,
        &v27);
      v23 = v25;
      v24 = v26;
      v22[0] = 0;
      v22[1] = v27;
      v21 = 0;
      result = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, char *))(a4 + 16))(a4, v22, 0, &v21);
      if ( (v21 != 0) | v14 & 1 )
      {
        if ( v21 )
          return result;
      }
      else
      {
        v20 = 0;
        objc_visitor::Class::getISA((__int64)v22, a1, &v20);
        v16 = v18;
        v17 = v19;
        v15[0] = 1;
        v15[1] = v20;
        result = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, char *))(a4 + 16))(a4, v15, 1, &v21);
        if ( v21 )
          return result;
      }
      ++v13;
    }
    while ( v13 != v6 );
  }
  return result;
}
