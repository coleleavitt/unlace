bool __fastcall dyld4::APIs::dyld_shared_cache_some_image_overridden(dyld4::APIs *this)
{
  int v1; // w19

  v1 = *((unsigned __int8 *)this + 822);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(
      this,
      "dyld_shared_cache_some_image_overridden() => %d\n",
      *((unsigned __int8 *)this + 822));
  return v1 != 0;
}
