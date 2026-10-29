__int64 __fastcall dyld4::APIs::dyld_shared_cache_iterate_text(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)a1 + 528LL))(a1, a2, &v4, a3);
}
