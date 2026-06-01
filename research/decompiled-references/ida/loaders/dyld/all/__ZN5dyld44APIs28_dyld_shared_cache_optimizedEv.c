bool __fastcall dyld4::APIs::_dyld_shared_cache_optimized(dyld4::APIs *this)
{
  __int64 v1; // x8
  __int64 v2; // x9
  _BOOL8 v3; // x19

  v1 = *((_QWORD *)this + 1);
  v2 = *(_QWORD *)(v1 + 200);
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 104) == 1;
  else
    v3 = 0;
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "_dyld_shared_cache_optimized() => %d\n", v3);
  return v3;
}
