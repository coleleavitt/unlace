void __fastcall ___ZNK5dyld46Loader18setUpPageInLinkingER11DiagnosticsRNS_12RuntimeStateEmyRKN5dyld35ArrayIPKvEE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x10
  __int64 v8; // x8
  _QWORD v9[11]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v10; // [xsp+58h] [xbp-48h]
  int v11; // [xsp+68h] [xbp-38h]
  char v12; // [xsp+6Ch] [xbp-34h]
  __int64 v13; // [xsp+70h] [xbp-30h] BYREF
  __int64 *v14; // [xsp+78h] [xbp-28h]
  __int64 v15; // [xsp+80h] [xbp-20h]
  __int64 v16; // [xsp+88h] [xbp-18h]

  v13 = 0;
  v14 = &v13;
  v15 = 0x2000000000LL;
  v16 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD **)(a1 + 72);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK5dyld46Loader18setUpPageInLinkingER11DiagnosticsRNS_12RuntimeStateEmyRKN5dyld35ArrayIPKvEE_block_invoke_2;
  v9[3] = &unk_95B10;
  v5 = *(_QWORD *)(a1 + 80);
  v9[9] = a2;
  v9[10] = v5;
  v6 = *(_QWORD *)(a1 + 40);
  v9[4] = *(_QWORD *)(a1 + 32);
  v9[5] = v6;
  v11 = *(_DWORD *)(a1 + 120);
  v10 = *(_OWORD *)(a1 + 88);
  v12 = *(_BYTE *)(a1 + 124);
  v7 = *(_QWORD *)(a1 + 56);
  v9[6] = *(_QWORD *)(a1 + 48);
  v9[7] = v7;
  v9[8] = &v13;
  dyld3::MachOFile::forEachSegment(v3, (__int64)v9);
  if ( v14[3] )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 56LL)
      && (unsigned int)((__int64 (*)(void))dyld4::setUpPageInLinkingRegions)() )
    {
      dyld4::setUpPageInLinkingRegions(
        *(_QWORD *)(a1 + 104),
        v4,
        *(_QWORD *)(a1 + 96),
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL),
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL),
        1,
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 40LL,
        *(_QWORD *)(a1 + 112));
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    if ( *(_QWORD *)(v8 + 56) )
      dyld4::setUpPageInLinkingRegions(
        *(_QWORD *)(a1 + 104),
        v4,
        *(_QWORD *)(a1 + 96),
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL),
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL),
        1,
        v8 + 40,
        *(_QWORD *)(a1 + 112));
  }
  _Block_object_dispose(&v13, 8);
}
