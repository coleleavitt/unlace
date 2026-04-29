void __fastcall dyld3::MachOFile::analyzeSegmentsLayout(dyld3::MachOFile *this, unsigned __int64 *a2, bool *a3)
{
  int v6; // w10
  __int64 v7; // x10
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  bool v10; // zf
  bool v11; // w8
  _QWORD v12[8]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v13; // [xsp+40h] [xbp-A0h] BYREF
  __int64 *v14; // [xsp+48h] [xbp-98h]
  __int64 v15; // [xsp+50h] [xbp-90h]
  __int64 v16; // [xsp+58h] [xbp-88h]
  __int64 v17; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v18; // [xsp+68h] [xbp-78h]
  __int64 v19; // [xsp+70h] [xbp-70h]
  __int64 v20; // [xsp+78h] [xbp-68h]
  __int64 v21; // [xsp+80h] [xbp-60h] BYREF
  __int64 *v22; // [xsp+88h] [xbp-58h]
  __int64 v23; // [xsp+90h] [xbp-50h]
  __int64 v24; // [xsp+98h] [xbp-48h]
  __int64 v25; // [xsp+A0h] [xbp-40h] BYREF
  __int64 *v26; // [xsp+A8h] [xbp-38h]
  __int64 v27; // [xsp+B0h] [xbp-30h]
  char v28; // [xsp+B8h] [xbp-28h]

  v25 = 0;
  v26 = &v25;
  v27 = 0x2000000000LL;
  v28 = 0;
  v21 = 0;
  v22 = &v21;
  v23 = 0x2000000000LL;
  v24 = -1;
  v17 = 0;
  v18 = &v17;
  v19 = 0x2000000000LL;
  v20 = 0;
  v13 = 0;
  v14 = &v13;
  v15 = 0x2000000000LL;
  v16 = 0;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 0x40000000;
  v12[2] = ___ZNK5dyld39MachOFile21analyzeSegmentsLayoutERyRb_block_invoke;
  v12[3] = &unk_97730;
  v12[4] = &v25;
  v12[5] = &v21;
  v12[6] = &v17;
  v12[7] = &v13;
  dyld3::MachOFile::forEachSegment(this, (__int64)v12);
  v6 = *((_DWORD *)this + 1);
  if ( v6 == 33554444 || v6 == 16777228 || v6 == 12 && *((_DWORD *)this + 3) != 11 && *((_DWORD *)this + 2) == 12 )
    v7 = 0x3FFF;
  else
    v7 = 4095;
  v8 = (v18[3] - v22[3] + v7) & ~v7;
  v9 = v14[3];
  *a2 = v8;
  if ( *((_BYTE *)v26 + 24) )
    v10 = 0;
  else
    v10 = v8 == v9;
  v11 = !v10;
  *a3 = v11;
  _Block_object_dispose(&v13, 8);
  _Block_object_dispose(&v17, 8);
  _Block_object_dispose(&v21, 8);
  _Block_object_dispose(&v25, 8);
}
