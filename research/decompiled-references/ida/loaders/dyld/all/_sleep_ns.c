__int64 __fastcall sleep_ns(unsigned __int64 a1)
{
  uint64_t v2; // x20
  unsigned int v3; // w8
  unsigned int v4; // w9
  __int64 v5; // x0
  __int64 v7; // x19
  __int64 unsafe; // x0
  __int64 _38; // [xsp+38h] [xbp+8h]

  v2 = mach_absolute_time();
  if ( _tbi )
  {
    v3 = *(_DWORD *)__tbi;
    v4 = *(_DWORD *)(__tbi + 4);
  }
  else
  {
    v5 = mach_timebase_info((mach_timebase_info_t)&dword_9CFB0);
    if ( (_DWORD)v5 )
    {
      v7 = v5;
      unsafe = boot_get_unsafe(v5);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)unsafe + 8LL),
        v7,
        *(_QWORD *)(*(_QWORD *)unsafe + 16LL),
        "mach_timebase_info: 0x%x",
        v7);
    }
    v3 = dword_9CFB0;
    __tbi = (__int64)&dword_9CFB0;
    v4 = dword_9CFB4;
    *(double *)&qword_9CFC0 = (double)(unsigned int)dword_9CFB0 / (double)(unsigned int)dword_9CFB4;
    qword_9CFB8 = 0xFFFFFFFFFFFFFFFFLL / (unsigned int)dword_9CFB0;
    _tbi = (__int64)&__tbi;
  }
  if ( v3 != v4 )
    a1 = a1 / v3 * v4;
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return mach_wait_until(a1 + v2);
}
