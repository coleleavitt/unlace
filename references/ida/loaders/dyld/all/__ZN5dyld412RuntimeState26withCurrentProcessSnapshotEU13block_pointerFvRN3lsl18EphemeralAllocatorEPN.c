void __fastcall dyld4::RuntimeState::withCurrentProcessSnapshot(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  dyld4::Atlas::ProcessSnapshot *v5; // x22
  dyld4::Atlas::ProcessSnapshot **v6; // x0
  void *v7; // x0
  void *v8; // x22
  unsigned __int64 v9; // x23
  void *v10; // x1
  atomic_uint128 *v11; // x8
  unsigned __int128 v12; // kr00_16
  unsigned __int128 v13; // t0
  unsigned __int128 v14; // t2
  __int64 v15; // x9
  __int64 v16; // x10
  _QWORD v17[7]; // [xsp+0h] [xbp-140h] BYREF
  dyld4::Atlas::ProcessSnapshot *v18; // [xsp+38h] [xbp-108h] BYREF
  __int128 v19; // [xsp+40h] [xbp-100h]
  __int128 v20; // [xsp+50h] [xbp-F0h]
  __int128 v21; // [xsp+60h] [xbp-E0h]
  __int128 v22; // [xsp+70h] [xbp-D0h]
  __int128 v23; // [xsp+80h] [xbp-C0h]
  __int128 v24; // [xsp+90h] [xbp-B0h]
  __int64 v25; // [xsp+A0h] [xbp-A0h]
  __int64 v26; // [xsp+A8h] [xbp-98h] BYREF
  const void *v27; // [xsp+B0h] [xbp-90h]
  unsigned __int64 v28; // [xsp+B8h] [xbp-88h]
  dyld4::Atlas::ProcessSnapshot *v29; // [xsp+C8h] [xbp-78h] BYREF
  _BYTE v30[48]; // [xsp+D0h] [xbp-70h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 159LL) )
  {
    lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v30);
    os_unfair_lock_lock((os_unfair_lock_t)(a1 + 840));
    if ( *((_QWORD *)gProcessInfo + 38) )
    {
      v4 = *((_QWORD *)gProcessInfo + 39);
      v18 = *((dyld4::Atlas::ProcessSnapshot **)gProcessInfo + 38);
      *(_QWORD *)&v19 = v4;
      LOBYTE(v26) = 1;
      lsl::Allocator::makeUnique<dyld4::Atlas::ProcessSnapshot,lsl::EphemeralAllocator &,dyld4::FileManager &,bool,std::span<std::byte,18446744073709551615ul> const&>(
        v17,
        v30,
        v30,
        a1 + 336,
        &v26,
        &v18);
      v5 = (dyld4::Atlas::ProcessSnapshot *)v17[0];
      v29 = (dyld4::Atlas::ProcessSnapshot *)v17[0];
      v17[0] = 0;
      v6 = (dyld4::Atlas::ProcessSnapshot **)v17;
    }
    else
    {
      LOBYTE(v17[0]) = 1;
      lsl::Allocator::makeUnique<dyld4::Atlas::ProcessSnapshot,lsl::EphemeralAllocator &,dyld4::FileManager &,bool>(
        &v18,
        v30,
        v30,
        a1 + 336,
        v17);
      v5 = v18;
      v29 = v18;
      v18 = nullptr;
      v6 = &v18;
    }
    lsl::UniquePtr<dyld4::Atlas::ProcessSnapshot>::~UniquePtr(v6);
    (*(void (__fastcall **)(__int64, _BYTE *, dyld4::Atlas::ProcessSnapshot *))(a2 + 16))(a2, v30, v5);
    dyld4::Atlas::ProcessSnapshot::serialize(&v26, v5);
    v7 = (void *)lsl::Allocator::malloc(*(lsl::Allocator **)(a1 + 16), v28);
    v8 = v7;
    if ( v28 )
    {
      _platform_memmove(v7, v27, v28);
      v9 = v28;
    }
    else
    {
      v9 = 0;
    }
    v10 = *((void **)gProcessInfo + 38);
    v11 = (atomic_uint128 *)((char *)gProcessInfo + 304);
    v12 = __PAIR128__(*((_QWORD *)gProcessInfo + 39), (unsigned __int64)v10);
    do
    {
      v14 = v12;
      *(_QWORD *)&v13 = v8;
      *((_QWORD *)&v13 + 1) = v9;
      atomic_compare_exchange_strong_explicit(v11, &v14, v13, memory_order_relaxed, memory_order_relaxed);
      v15 = *((_QWORD *)&v14 + 1) ^ *((_QWORD *)&v12 + 1);
      v16 = v14 ^ v12;
      v12 = v14;
    }
    while ( v16 | v15 );
    if ( v10 )
      lsl::Allocator::free(*(lsl::Allocator **)(a1 + 16), v10);
    LODWORD(v18) = 520552496;
    v19 = 0u;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v25 = 0;
    dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v18);
    dyld4::RemoteNotificationResponder::RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v17);
    dyld4::RemoteNotificationResponder::blockOnSynchronousEvent((dyld4::RemoteNotificationResponder *)v17, 0);
    dyld4::RemoteNotificationResponder::~RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v17);
    dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v18);
    os_unfair_lock_unlock((os_unfair_lock_t)(a1 + 840));
    if ( v27 )
      lsl::Vector<std::byte>::resize((int)&v26, 0);
    lsl::UniquePtr<dyld4::Atlas::ProcessSnapshot>::~UniquePtr(&v29);
    lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v30);
  }
}
