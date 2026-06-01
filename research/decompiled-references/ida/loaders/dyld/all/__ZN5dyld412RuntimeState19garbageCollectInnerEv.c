void __fastcall dyld4::RuntimeState::garbageCollectInner(dyld4::RuntimeState *this)
{
  __int64 v2; // x0
  __int64 v3; // x12
  __int64 v4; // x8
  __int64 *v5; // x21
  __int64 v6; // x8
  char *v7; // x20
  size_t v8; // x1
  __int64 v9; // x8
  _BYTE *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x8
  __int64 v13; // x10
  __int64 v14; // [xsp+0h] [xbp-110h] BYREF
  __int64 v15; // [xsp+8h] [xbp-108h]
  _BYTE *v16; // [xsp+10h] [xbp-100h] BYREF
  __int64 v17; // [xsp+18h] [xbp-F8h]
  __int64 v18; // [xsp+20h] [xbp-F0h]
  __int64 v19; // [xsp+28h] [xbp-E8h]
  _BYTE v20[48]; // [xsp+30h] [xbp-E0h] BYREF
  __int64 *v21[2]; // [xsp+60h] [xbp-B0h] BYREF
  int v22; // [xsp+70h] [xbp-A0h]
  _QWORD v23[6]; // [xsp+78h] [xbp-98h] BYREF
  __int64 v24; // [xsp+A8h] [xbp-68h] BYREF
  __int64 *v25; // [xsp+B0h] [xbp-60h]
  __int64 v26; // [xsp+B8h] [xbp-58h]
  __int64 (__fastcall *v27)(); // [xsp+C0h] [xbp-50h]
  __int64 (__fastcall *v28)(); // [xsp+C8h] [xbp-48h]
  char *v29; // [xsp+D0h] [xbp-40h]
  __int64 v30; // [xsp+D8h] [xbp-38h]
  __int64 v31; // [xsp+E0h] [xbp-30h]

  v2 = __chkstk_darwin();
  v24 = 0;
  v25 = &v24;
  v26 = 0x4002000000LL;
  v27 = __Block_byref_object_copy__59;
  v28 = __Block_byref_object_dispose__60;
  v29 = (char *)&v14 - ((v3 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v30 = v4;
  v31 = 0;
  v23[0] = _NSConcreteStackBlock;
  v23[1] = 0x40000000;
  v23[2] = ___ZN5dyld412RuntimeState19garbageCollectInnerEv_block_invoke;
  v23[3] = &unk_95810;
  v23[4] = &v24;
  v23[5] = v2;
  dyld4::RuntimeState::withLoadersReadLock(v2, (__int64)v23);
  v21[0] = (__int64 *)this;
  v21[1] = v25 + 5;
  v22 = 0;
  dyld4::Reaper::garbageCollect(v21);
  dyld4::Reaper::finalizeDeadImages((dyld4::Reaper *)v21);
  v5 = v25;
  __chkstk_darwin();
  v7 = (char *)&v14 - ((v6 + 151) & 0xFFFFFFFFFFFFFFF0LL);
  __bzero(v7, v8);
  lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v20, v7, 8 * v5[7] + 136);
  v16 = v20;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  lsl::Vector<dyld4::Loader const*>::reserveExact(&v16, v25[7]);
  v9 = v25[7];
  if ( v9 )
  {
    v10 = (_BYTE *)(v25[5] + 8);
    v11 = 16 * v9;
    do
    {
      if ( !*v10 )
      {
        lsl::Vector<dyld4::Loader const*>::reserve(&v16, v18 + 1);
        v12 = *((_QWORD *)v10 - 1);
        v13 = v18++;
        *(_QWORD *)(v17 + 8 * v13) = v12;
      }
      v10 += 16;
      v11 -= 16;
    }
    while ( v11 );
  }
  if ( v18 )
  {
    v14 = v17;
    v15 = v18;
    dyld4::RuntimeState::notifyUnload(this, &v14);
    v14 = v17;
    v15 = v18;
    dyld4::RuntimeState::removeLoaders(this);
  }
  if ( v17 )
    lsl::Vector<dyld4::Loader const*>::resize(&v16, 0);
  lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v20);
  _Block_object_dispose(&v24, 8);
}
