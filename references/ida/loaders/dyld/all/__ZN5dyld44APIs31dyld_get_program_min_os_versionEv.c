__int64 __fastcall dyld4::APIs::dyld_get_program_min_os_version(dyld4::APIs *this)
{
  return (*(__int64 (__fastcall **)(dyld4::APIs *, _QWORD))(*(_QWORD *)this + 392LL))(
           this,
           *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
}
