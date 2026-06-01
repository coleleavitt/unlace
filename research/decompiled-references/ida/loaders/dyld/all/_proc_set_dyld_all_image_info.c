__int64 __fastcall proc_set_dyld_all_image_info(void *a1, void *a2)
{
  void *v4; // x1
  void *v5; // x6
  void *v6; // x7
  __int64 _18; // [xsp+18h] [xbp+8h]

  v4 = (void *)__getpid();
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __proc_info((char *)&dword_C + 3, v4, nullptr, nullptr, a1, a2, v5, v6);
}
