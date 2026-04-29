__int64 __fastcall dyld4::PrebuiltObjC::commitImage(__int64 this, const dyld4::PrebuiltObjC::ObjCOptimizerImage *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  unsigned __int64 *v5; // x22
  unsigned __int64 *v6; // x23
  __int64 v7; // x8
  unsigned __int64 *v8; // x22
  unsigned __int64 *v9; // x23
  unsigned __int64 v10; // t1
  __int64 v11; // x9
  __int64 v12; // x10
  __int128 v13; // [xsp+8h] [xbp-48h] BYREF
  __int64 v14; // [xsp+18h] [xbp-38h]

  v3 = this;
  v4 = *((_QWORD *)a2 + 29);
  if ( v4 )
  {
    v5 = *((unsigned __int64 **)a2 + 27);
    v6 = &v5[3 * v4];
    do
    {
      v13 = *v5;
      v14 = 0;
      this = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::insert(
               v3 + 384,
               &v13);
      *(_OWORD *)(this + 8) = *(_OWORD *)(v5 + 1);
      v5 += 3;
    }
    while ( v5 != v6 );
  }
  v7 = *((_QWORD *)a2 + 58);
  if ( v7 )
  {
    v8 = *((unsigned __int64 **)a2 + 56);
    v9 = &v8[3 * v7];
    do
    {
      v13 = *v8;
      v14 = 0;
      *(_OWORD *)(dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::insert(
                    v3 + 80,
                    &v13)
                + 8) = *(_OWORD *)(v8 + 1);
      this = (__int64)dyld3::OverflowSafeArray<char const*,4294967295ul>::verifySpace((_QWORD *)(v3 + 40), 1);
      v10 = *v8;
      v8 += 3;
      v11 = *(_QWORD *)(v3 + 40);
      v12 = *(_QWORD *)(v3 + 56);
      *(_QWORD *)(v3 + 56) = v12 + 1;
      *(_QWORD *)(v11 + 8 * v12) = v10;
    }
    while ( v8 != v9 );
  }
  return this;
}
