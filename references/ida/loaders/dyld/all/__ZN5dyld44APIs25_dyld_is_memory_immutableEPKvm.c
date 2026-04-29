__int64 __fastcall dyld4::APIs::_dyld_is_memory_immutable(
        dyld4::APIs *this,
        const void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  bool v12; // cf
  __int64 v13; // x19
  unsigned __int8 v15; // [xsp+1Fh] [xbp-81h] BYREF
  __int64 v16; // [xsp+20h] [xbp-80h] BYREF
  _QWORD v17[7]; // [xsp+28h] [xbp-78h] BYREF
  __int64 v18; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v19; // [xsp+68h] [xbp-38h]
  __int64 v20; // [xsp+70h] [xbp-30h]
  char v21; // [xsp+78h] [xbp-28h]

  v18 = 0;
  v19 = &v18;
  v20 = 0x2000000000LL;
  v21 = 0;
  v10 = *((_QWORD *)this + 1);
  v11 = *(_QWORD *)(v10 + 200);
  if ( v11 )
    v12 = v11 >= (unsigned __int64)a2;
  else
    v12 = 1;
  if ( !v12
    && v11 + DyldSharedCache::mappedSize(*(DyldSharedCache **)(v10 + 200), (__int64)a2, a3, a4, a5, a6, a7) > (unsigned __int64)a2 )
  {
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 0x40000000;
    v17[2] = ___ZN5dyld44APIs25_dyld_is_memory_immutableEPKvm_block_invoke;
    v17[3] = &unk_96890;
    v17[5] = a2;
    v17[6] = a3;
    v17[4] = &v18;
    DyldSharedCache::forEachCache(v11, v17);
  }
  if ( !*((_BYTE *)v19 + 24) )
  {
    v16 = 0;
    v15 = 0;
    if ( (unsigned int)dyld4::RuntimeState::inPermanentRange(
                         (__int64)this,
                         (unsigned __int64)a2,
                         (unsigned __int64)a2 + a3,
                         &v15,
                         &v16) )
      *((_BYTE *)v19 + 24) = ((v15 >> 1) & 1) == 0;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_is_memory_immutable(%p, %lu) => %d\n", a2, a3, *((unsigned __int8 *)v19 + 24));
  v13 = *((unsigned __int8 *)v19 + 24);
  _Block_object_dispose(&v18, 8);
  return v13;
}
