void __usercall dyld4::JustInTimeLoader::getFileValidationInfo(
        dyld4::JustInTimeLoader *this@<X0>,
        dyld4::FileManager *a2@<X1>,
        _OWORD *a3@<X8>)
{
  __int64 *v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x1
  __int128 v11; // q1
  __int128 v12; // q1
  _QWORD v13[5]; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v14; // [xsp+30h] [xbp-90h] BYREF
  __int64 *v15; // [xsp+38h] [xbp-88h]
  __int64 v16; // [xsp+40h] [xbp-80h]
  __int64 (__fastcall *v17)(); // [xsp+48h] [xbp-78h]
  __int64 (__fastcall *v18)(); // [xsp+50h] [xbp-70h]
  __int64 v19; // [xsp+58h] [xbp-68h] BYREF

  v14 = 0;
  v15 = &v14;
  v16 = 0x6802000000LL;
  v17 = __Block_byref_object_copy__52;
  v18 = __Block_byref_object_dispose__53;
  __bzero(&v19, 0x40u);
  if ( *((_BYTE *)this + 56) )
  {
    v6 = v15;
    *((_BYTE *)v15 + 100) = 1;
    *(_OWORD *)(v6 + 5) = *(_OWORD *)((char *)this + 24);
    v6[7] = *((_QWORD *)this + 6);
  }
  if ( (*((_WORD *)this + 2) & 2) != 0 )
  {
    v9 = v15;
  }
  else
  {
    v7 = *((_QWORD *)this + 1);
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZNK5dyld416JustInTimeLoader21getFileValidationInfoERNS_11FileManagerE_block_invoke;
    v13[3] = &unk_96108;
    v13[4] = &v14;
    dyld3::MachOAnalyzer::forEachCDHash(v7, v13);
    v8 = dyld4::FileManager::uuidForFileSystem(a2, *((_QWORD *)this + 5));
    v9 = v15;
    *(__int64 *)((char *)v15 + 84) = v8;
    *(__int64 *)((char *)v9 + 92) = v10;
  }
  v11 = *(_OWORD *)(v9 + 7);
  *a3 = *(_OWORD *)(v9 + 5);
  a3[1] = v11;
  v12 = *(_OWORD *)(v9 + 11);
  a3[2] = *(_OWORD *)(v9 + 9);
  a3[3] = v12;
  _Block_object_dispose(&v14, 8);
}
