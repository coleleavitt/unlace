bool __fastcall dyld3::FatFile::isFatFileWithSlice(
        dyld3::FatFile *this,
        Diagnostics *a2,
        unsigned __int64 a3,
        const dyld3::GradedArchs *a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        bool *a8)
{
  bool hasError; // w0
  _BOOL8 v11; // x20
  int v12; // w8
  _QWORD v14[9]; // [xsp+0h] [xbp-80h] BYREF
  char v15; // [xsp+48h] [xbp-38h]
  __int64 v16; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v17; // [xsp+58h] [xbp-28h]
  __int64 v18; // [xsp+60h] [xbp-20h]
  int v19; // [xsp+68h] [xbp-18h]

  *a8 = 0;
  if ( (*(_DWORD *)this | 0x1000000) != 0xBFBAFECA )
    return 0;
  v16 = 0;
  v17 = &v16;
  v18 = 0x2000000000LL;
  v19 = 0;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 0x40000000;
  v14[2] = ___ZNK5dyld37FatFile18isFatFileWithSliceER11DiagnosticsyRKNS_11GradedArchsEbRyS6_Rb_block_invoke;
  v14[3] = &unk_970B0;
  v15 = a5;
  v14[4] = &v16;
  v14[5] = this;
  v14[6] = a4;
  v14[7] = a6;
  v14[8] = a7;
  dyld3::FatFile::forEachSlice(this, a2, a3, 1, (__int64)v14);
  hasError = Diagnostics::hasError(a2);
  v11 = 0;
  if ( !hasError )
  {
    v12 = *((_DWORD *)v17 + 6);
    if ( !v12 )
      *a8 = 1;
    v11 = v12 != 0;
  }
  _Block_object_dispose(&v16, 8);
  return v11;
}
