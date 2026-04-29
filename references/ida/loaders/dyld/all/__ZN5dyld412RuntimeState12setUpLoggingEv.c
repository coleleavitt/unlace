__int64 __fastcall dyld4::RuntimeState::setUpLogging(dyld4::RuntimeState *this)
{
  __int64 result; // x0
  char v3; // w8
  stat v4; // [xsp+8h] [xbp-128h] BYREF
  _WORD v5[49]; // [xsp+98h] [xbp-98h] BYREF
  __int64 v6; // [xsp+FAh] [xbp-36h]

  result = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(result + 196) || *(_BYTE *)(result + 197) )
  {
    *((_DWORD *)this + 204) = *(_DWORD *)(result + 192);
    *((_WORD *)this + 410) = 256;
    return result;
  }
  if ( *(_DWORD *)(result + 152) == 1 )
  {
    result = dyld4::SyscallDelegate::open(
               (dyld4::SyscallDelegate *)result,
               (dyld3 *)"/dev/console",
               (char *)&loc_20000 + 1,
               0);
LABEL_9:
    v3 = 0;
    *((_DWORD *)this + 204) = result;
LABEL_10:
    *((_BYTE *)this + 820) = v3;
    *((_BYTE *)this + 821) = 1;
    goto LABEL_11;
  }
  if ( (dyld4::SyscallDelegate::fstat((dyld4::SyscallDelegate *)result, *(_DWORD *)(result + 192), &v4) & 0x80000000) == 0 )
  {
    result = *(unsigned int *)(*((_QWORD *)this + 1) + 192LL);
    goto LABEL_9;
  }
  result = *((_QWORD *)this + 15);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 96LL))(result);
    if ( (result & 1) != 0 )
    {
      v3 = 1;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( !*((_BYTE *)this + 820) )
    return result;
  result = dyld4::SyscallDelegate::socket(*((dyld4::SyscallDelegate **)this + 1), 1, 2, 0);
  *((_DWORD *)this + 204) = result;
  if ( (_DWORD)result == -1 )
  {
LABEL_20:
    *((_BYTE *)this + 820) = 0;
    return result;
  }
  dyld4::SyscallDelegate::fcntl(*((dyld4::SyscallDelegate **)this + 1), result, 2, (char *)&dword_0 + 1);
  strcpy((char *)&v5[1], "/var/run/syslog");
  HIBYTE(v5[0]) = 1;
  v6 = 0;
  memset(&v5[9], 0, 80);
  result = dyld4::SyscallDelegate::connect(
             *((dyld4::SyscallDelegate **)this + 1),
             *((_DWORD *)this + 204),
             (const sockaddr *)v5,
             0x6Au);
  if ( (_DWORD)result == -1 )
  {
    result = dyld4::SyscallDelegate::close(*((dyld4::SyscallDelegate **)this + 1), *((_DWORD *)this + 204));
    *((_DWORD *)this + 204) = -1;
    goto LABEL_20;
  }
  if ( *((_DWORD *)this + 204) == -1 )
    goto LABEL_20;
  return result;
}
