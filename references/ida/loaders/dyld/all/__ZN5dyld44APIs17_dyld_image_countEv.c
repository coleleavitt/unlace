__int64 __fastcall dyld4::APIs::_dyld_image_count(dyld4::APIs *this)
{
  __int64 v1; // x19

  v1 = *((unsigned int *)this + 12);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_image_count() => %d\n", *((_DWORD *)this + 12));
  return v1;
}
