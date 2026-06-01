__int64 __fastcall dyld4::SyscallDelegate::dtraceRegisterUserProbes(dyld4::SyscallDelegate *this, dof_ioctl_data *a2)
{
  __int64 result; // x0
  int v4; // w19
  dof_ioctl_data *v5; // [xsp+8h] [xbp-18h] BYREF

  result = open("/dev/dtracehelper", 2);
  if ( (_DWORD)result != -1 )
  {
    v4 = result;
    v5 = a2;
    ioctl(result, 0x80086804, &v5);
    return close(v4);
  }
  return result;
}
