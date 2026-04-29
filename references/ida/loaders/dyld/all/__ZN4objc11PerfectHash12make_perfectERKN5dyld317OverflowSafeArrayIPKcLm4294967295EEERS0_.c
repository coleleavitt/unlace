__int64 __fastcall objc::PerfectHash::make_perfect(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  const char **v5; // x22
  __int64 v6; // x23
  const char *v7; // t1
  int v8; // w21
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 result; // x0
  __int128 v12; // [xsp+0h] [xbp-60h] BYREF
  __int128 v13; // [xsp+10h] [xbp-50h]
  vm_size_t size; // [xsp+20h] [xbp-40h]

  size = 0;
  v12 = 0u;
  v13 = 0u;
  dyld3::OverflowSafeArray<objc::PerfectHash::key,4294967295ul>::reserve(&v12, *(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(const char ***)a1;
    v6 = 8 * v4;
    do
    {
      v7 = *v5++;
      v8 = _platform_strlen(v7);
      dyld3::OverflowSafeArray<objc::PerfectHash::key,4294967295ul>::verifySpace(&v12, 1);
      v9 = v13;
      *(_QWORD *)&v13 = v13 + 1;
      v10 = v12 + 32 * v9;
      *(_QWORD *)v10 = v7;
      *(_DWORD *)(v10 + 8) = v8;
      v6 -= 8;
    }
    while ( v6 );
  }
  result = objc::PerfectHash::make_perfect(&v12, a2);
  *(_QWORD *)&v13 = 0;
  if ( *((_QWORD *)&v13 + 1) )
    return vm_deallocate(mach_task_self_, *((vm_address_t *)&v13 + 1), size);
  return result;
}
