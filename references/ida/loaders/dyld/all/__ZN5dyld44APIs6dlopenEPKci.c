__int64 __fastcall dyld4::APIs::dlopen(dyld4::APIs *this, const char *a2, __int64 a3)
{
  __int64 v3; // x30

  return (*(__int64 (__fastcall **)(dyld4::APIs *, const char *, __int64, __int64))(*(_QWORD *)this + 776LL))(
           this,
           a2,
           a3,
           v3);
}
