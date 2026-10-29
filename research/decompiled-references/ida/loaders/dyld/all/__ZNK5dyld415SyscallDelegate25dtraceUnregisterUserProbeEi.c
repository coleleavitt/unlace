__int64 __fastcall dyld4::SyscallDelegate::dtraceUnregisterUserProbe(dyld4::SyscallDelegate *this, __int64 a2)
{
  __int64 result; // x0
  int v4; // w20
  __int64 _28; // [xsp+28h] [xbp+8h]

  result = open("/dev/dtracehelper", 2, 0);
  if ( (_DWORD)result != -1 )
  {
    v4 = result;
    ioctl(result, 0x20006802u, a2);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return close(v4);
  }
  return result;
}
