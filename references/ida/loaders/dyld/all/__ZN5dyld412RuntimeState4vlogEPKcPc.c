void __fastcall dyld4::RuntimeState::vlog(dyld4::RuntimeState *this, char *a2, char *a3)
{
  __int64 v5; // x0
  __int64 v6; // x0
  int v7; // w2
  int v8; // w3
  int v9; // w4
  int v10; // w5
  int v11; // w6
  int v12; // w7
  vm_address_t v13; // x22
  const char *v14; // x20
  int v15; // w21
  size_t v16; // x0
  __int64 v17; // x0
  os_unfair_lock_s *v18; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  os_unfair_lock_lock((os_unfair_lock_t)(*((_QWORD *)this + 13) + 36LL));
  if ( !*((_BYTE *)this + 821) )
    v5 = dyld4::RuntimeState::setUpLogging(this);
  if ( *((_BYTE *)this + 820) )
  {
    v6 = _simple_salloc(v5);
    if ( v6 )
    {
      v13 = v6;
      if ( !(unsigned int)_simple_sprintf(v6, "<%d>%s[%d]: ", v7, v8, v9, v10, v11, v12, 13)
        && !(unsigned int)_simple_vsprintf(v13, a2) )
      {
        v14 = (const char *)_simple_string(v13);
        v15 = *((_DWORD *)this + 204);
        v16 = _platform_strlen(v14);
        __sendto(v15, v14, v16, 0, nullptr, 0);
      }
      _simple_sfree(v13);
    }
  }
  else
  {
    v17 = *((unsigned int *)this + 204);
    if ( (_DWORD)v17 != -1 )
    {
      _simple_dprintf(v17, "dyld[%d]: ", *(_DWORD *)(*((_QWORD *)this + 1) + 152LL));
      _simple_vdprintf(*((_DWORD *)this + 204), a2);
    }
  }
  v18 = (os_unfair_lock_s *)(*((_QWORD *)this + 13) + 36LL);
  if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  os_unfair_lock_unlock(v18);
}
