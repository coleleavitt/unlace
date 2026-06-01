__int64 __fastcall ___ZZNK5dyld46Loader25findAndRunAllInitializersERNS_12RuntimeStateEENK3__0clEv_block_invoke(
        __int64 a1,
        unsigned int a2)
{
  dyld4::RuntimeState *v3; // x21
  __int64 v4; // x8
  const void *v5; // x19
  const char *v6; // x0
  __int64 v7; // x8
  int v9; // [xsp+10h] [xbp-90h] BYREF
  __int64 v10; // [xsp+18h] [xbp-88h]
  __int64 v11; // [xsp+20h] [xbp-80h]
  const void *v12; // [xsp+28h] [xbp-78h]
  __int128 v13; // [xsp+30h] [xbp-70h]
  __int128 v14; // [xsp+40h] [xbp-60h]
  __int128 v15; // [xsp+50h] [xbp-50h]
  __int128 v16; // [xsp+60h] [xbp-40h]
  __int128 v17; // [xsp+70h] [xbp-30h]

  v3 = *(dyld4::RuntimeState **)(a1 + 48);
  v4 = **(_QWORD **)(a1 + 40);
  v5 = (const void *)(v4 + a2);
  if ( *(_BYTE *)(*((_QWORD *)v3 + 1) + 183LL) )
  {
    v6 = (const char *)dyld4::Loader::path(*(dyld4::Loader **)(a1 + 32));
    dyld4::RuntimeState::log(v3, "running initializer %p in %s\n", v5, v6);
    v4 = **(_QWORD **)(a1 + 40);
  }
  v9 = 520552448;
  v10 = v4;
  v11 = 0;
  v12 = v5;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v9);
  v7 = *(_QWORD *)(a1 + 48);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v5)(
    *(unsigned int *)(*(_QWORD *)(v7 + 8) + 96LL),
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 104LL),
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 112LL),
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 120LL),
    *(_QWORD *)(v7 + 112));
  return dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v9);
}
