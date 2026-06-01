void __fastcall dyld4::ObjCClassOpt::write(unsigned int *a1, unsigned int *a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  __int64 v10; // x10
  __int64 v11; // x9
  _QWORD *v12; // x11
  unsigned __int64 v13; // x1
  unsigned __int64 Absolute; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x0
  _QWORD v17[8]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v18; // [xsp+40h] [xbp-A0h] BYREF
  __int64 *v19; // [xsp+48h] [xbp-98h]
  __int64 v20; // [xsp+50h] [xbp-90h]
  __int64 (__fastcall *v21)(); // [xsp+58h] [xbp-88h]
  __int64 (__fastcall *v22)(); // [xsp+60h] [xbp-80h]
  _QWORD *v23; // [xsp+68h] [xbp-78h]
  __int64 v24; // [xsp+70h] [xbp-70h]
  __int64 v25; // [xsp+78h] [xbp-68h]
  __int64 v26; // [xsp+80h] [xbp-60h] BYREF
  __int64 *v27; // [xsp+88h] [xbp-58h]
  __int64 v28; // [xsp+90h] [xbp-50h]
  __int64 (__fastcall *v29)(); // [xsp+98h] [xbp-48h]
  __int64 (__fastcall *v30)(); // [xsp+A0h] [xbp-40h]
  __int64 v31; // [xsp+A8h] [xbp-38h]
  __int64 v32; // [xsp+B0h] [xbp-30h]
  __int64 v33; // [xsp+B8h] [xbp-28h]

  dyld4::ObjCStringTable::write((__int64)a1, a2, a3);
  v10 = *a1;
  v11 = (__int64)&a1[2 * v10 + 264] + a1[4] + a1[5];
  v12 = (_QWORD *)(v11 + 8 * v10);
  *v12 = (unsigned int)(a6 + a5);
  v26 = 0;
  v27 = &v26;
  v28 = 0x4002000000LL;
  v29 = __Block_byref_object_copy__8;
  v30 = __Block_byref_object_dispose__8;
  v31 = v11;
  v32 = v10;
  v33 = v10;
  v18 = 0;
  v19 = &v18;
  v20 = 0x4002000000LL;
  v21 = __Block_byref_object_copy__8;
  v22 = __Block_byref_object_dispose__8;
  v23 = v12 + 1;
  v24 = (unsigned int)(a6 + a5);
  v25 = v24;
  Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(nullptr, v13);
  if ( *a1 )
  {
    v15 = 0;
    do
    {
      if ( v27[7] <= v15 )
        dyld4::ObjCClassOpt::write(Absolute);
      *(_QWORD *)(v27[5] + 8 * v15++) = Absolute;
    }
    while ( v15 < *a1 );
  }
  v19[7] = 0;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 0x40000000;
  v17[2] = ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke;
  v17[3] = &unk_96B08;
  v17[6] = a1;
  v17[7] = Absolute;
  v17[4] = &v26;
  v17[5] = &v18;
  v16 = dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry(
          a4,
          v17);
  if ( v19[7] != *(_QWORD *)((char *)&a1[2 * *a1 + 264 + 2 * *a1] + a1[4] + a1[5]) )
    dyld4::ObjCClassOpt::write(v16);
  _Block_object_dispose(&v18, 8);
  _Block_object_dispose(&v26, 8);
}
