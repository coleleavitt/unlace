__int64 __fastcall google_breakpad::CrashGenerationServer::Run(google_breakpad::CrashGenerationServer *this)
{
  __int64 result; // rax
  struct pollfd s; // [rsp+10h] [rbp-20h] BYREF
  int v3; // [rsp+18h] [rbp-18h]
  __int16 v4; // [rsp+1Ch] [rbp-14h]
  __int16 v5; // [rsp+1Eh] [rbp-12h]
  int v6; // [rsp+2Ch] [rbp-4h]

  memset(&s, 0, 0x10u);
  s.fd = *(_DWORD *)this;
  s.events = 1;
  v3 = *((_DWORD *)this + 18);
  v4 = 1;
  do
  {
    while ( 1 )
    {
      v6 = poll(&s, 2u, -1);
      if ( v6 != -1 )
        break;
      result = (unsigned int)*__errno_location();
      if ( (_DWORD)result != 4 )
        return result;
    }
    result = s.revents && (unsigned __int8)google_breakpad::CrashGenerationServer::ClientEvent(this, s.revents) != 1;
    if ( (_BYTE)result )
      break;
    result = v5 && (unsigned __int8)google_breakpad::CrashGenerationServer::ControlEvent(this, v5) != 1;
  }
  while ( !(_BYTE)result );
  return result;
}

