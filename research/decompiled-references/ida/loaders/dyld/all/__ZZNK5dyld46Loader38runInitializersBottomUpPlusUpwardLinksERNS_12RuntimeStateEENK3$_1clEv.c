__int64 __fastcall dyld4::Loader::runInitializersBottomUpPlusUpwardLinks(dyld4::RuntimeState &)const::$_1::operator()(
        dyld4::RuntimeState **a1)
{
  dyld4::Loader *v2; // x0
  __int64 v3; // x12
  __int64 v4; // x8
  dyld4::RuntimeState *v5; // x1
  __int64 result; // x0
  dyld4::RuntimeState *v7; // x1
  __int64 v8; // x12
  __int64 v9; // x8
  __int64 v10; // x21
  __int64 v11; // x20
  dyld4::Loader **v12; // x20
  __int64 v13; // x21
  dyld4::Loader *v14; // t1
  dyld4::Loader **v15; // x20
  __int64 v16; // x21
  dyld4::Loader *v17; // t1
  _QWORD v19[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v20; // [xsp+18h] [xbp-48h]
  _QWORD v21[2]; // [xsp+20h] [xbp-40h] BYREF
  __int64 v22; // [xsp+30h] [xbp-30h]

  v2 = (dyld4::Loader *)__chkstk_darwin();
  v21[0] = (char *)&v19[-1] - ((v3 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v21[1] = v4;
  v22 = 0;
  dyld4::Loader::runInitializersBottomUp(v2, v5, (__int64)v21);
  result = __chkstk_darwin();
  v19[0] = (char *)&v19[-1] - ((v8 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v19[1] = v9;
  v20 = 0;
  v10 = v22;
  if ( v22 )
  {
    v11 = v21[0];
    result = dyld4::Loader::runInitializersBottomUp(*(dyld4::Loader **)v21[0], v7, (__int64)v19);
    if ( v10 != 1 )
    {
      v12 = (dyld4::Loader **)(v11 + 8);
      v13 = 8 * v10 - 8;
      do
      {
        v14 = *v12++;
        result = dyld4::Loader::runInitializersBottomUp(v14, *a1, (__int64)v19);
        v13 -= 8;
      }
      while ( v13 );
    }
    if ( v20 )
    {
      v22 = 0;
      v15 = (dyld4::Loader **)v19[0];
      v16 = 8 * v20;
      do
      {
        v17 = *v15++;
        result = dyld4::Loader::runInitializersBottomUp(v17, *a1, (__int64)v21);
        v16 -= 8;
      }
      while ( v16 );
    }
  }
  return result;
}
