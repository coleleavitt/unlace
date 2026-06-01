bool __fastcall dyld4::APIs::_dyld_get_shared_cache_uuid(dyld4::APIs *this, __n128 *a2)
{
  __int64 v3; // x8
  __int64 v5; // x20

  v3 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v3 + 184) )
  {
    dyld4::RuntimeState::log(this, "_dyld_get_shared_cache_uuid(%p)\n", a2);
    v3 = *((_QWORD *)this + 1);
  }
  v5 = *(_QWORD *)(v3 + 200);
  if ( v5 )
    DyldSharedCache::getUUID(*(DyldSharedCache **)(v3 + 200), a2);
  return v5 != 0;
}
