__int64 __fastcall sub_58FD72(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  _BYTE v5[16]; // [rsp+10h] [rbp-720h] BYREF
  struct cmsghdr *cmsg; // [rsp+20h] [rbp-710h]
  _BYTE v7[8]; // [rsp+28h] [rbp-708h] BYREF
  char v8; // [rsp+30h] [rbp-700h] BYREF
  _BYTE v9[1584]; // [rsp+70h] [rbp-6C0h] BYREF
  _QWORD v10[2]; // [rsp+6A0h] [rbp-90h] BYREF
  struct msghdr message; // [rsp+6B0h] [rbp-80h] BYREF
  unsigned int v12; // [rsp+6E8h] [rbp-48h]
  unsigned int v13; // [rsp+6ECh] [rbp-44h]
  unsigned __int8 *cmsg_data; // [rsp+6F0h] [rbp-40h]
  ssize_t v15; // [rsp+6F8h] [rbp-38h]
  ssize_t v16; // [rsp+700h] [rbp-30h]
  __int64 v17; // [rsp+708h] [rbp-28h]
  unsigned int i; // [rsp+714h] [rbp-1Ch]
  int fd; // [rsp+718h] [rbp-18h]
  unsigned int v20; // [rsp+71Ch] [rbp-14h]

  if ( (a2 & 0x10) != 0 )
  {
    return 0;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      __assert_fail(
        "0x001 & revents",
        "src/client/linux/crash_generation/crash_generation_server.cc",
        0xC5u,
        "bool google_breakpad::CrashGenerationServer::ClientEvent(short int)");
    message.msg_name = nullptr;
    *(_QWORD *)&message.msg_namelen = 0;
    *(_QWORD *)&message.msg_flags = 0;
    v17 = 1584;
    v10[0] = v9;
    v10[1] = 1584;
    message.msg_iov = (struct iovec *)v10;
    message.msg_iovlen = 1;
    message.msg_control = &v8;
    message.msg_controllen = 56;
    do
      v16 = recvmsg(*(_DWORD *)a1, &message, 0);
    while ( v16 == -1 && *__errno_location() == 4 );
    v15 = v16;
    if ( v16 == 1584 )
    {
      if ( message.msg_controllen == 56 && (message.msg_flags & 0xFFFFFFDF) == 0 )
      {
        v20 = -1;
        fd = -1;
        for ( cmsg = (struct cmsghdr *)message.msg_control; cmsg; cmsg = __cmsg_nxthdr(&message, cmsg) )
        {
          if ( cmsg->cmsg_level == 1 )
          {
            if ( cmsg->cmsg_type == 1 )
            {
              v13 = cmsg->cmsg_len - 16;
              if ( (v13 & 3) != 0 )
                __assert_fail(
                  "len % sizeof(int) == 0u",
                  "src/client/linux/crash_generation/crash_generation_server.cc",
                  0xF2u,
                  "bool google_breakpad::CrashGenerationServer::ClientEvent(short int)");
              v12 = v13 >> 2;
              if ( v13 >> 2 > 1 || !v12 )
              {
                for ( i = 0; i < v12; ++i )
                  close(*(_DWORD *)&cmsg->__cmsg_data[4 * i]);
                return 1;
              }
              fd = *(_DWORD *)cmsg->__cmsg_data;
            }
            else if ( cmsg->cmsg_type == 2 )
            {
              cmsg_data = cmsg->__cmsg_data;
              v20 = *(_DWORD *)cmsg->__cmsg_data;
            }
          }
        }
        if ( v20 == -1 || fd == -1 )
        {
          if ( fd != -1 )
            close(fd);
          return 1;
        }
        else
        {
          std::string::string((std::string *)v7);
          if ( (unsigned __int8)sub_590228(a1, v7) != 1 )
          {
            v2 = 1;
          }
          else
          {
            v3 = std::string::c_str((std::string *)v7);
            if ( (unsigned __int8)sub_5A3AE9(v3, v20, (unsigned int)v9, 1584, 0, 0, 0) != 1 )
            {
              close(fd);
              v2 = 1;
            }
            else
            {
              if ( *(_QWORD *)(a1 + 8) )
              {
                sub_5903FE(v5, v20, a1);
                (*(void (__fastcall **)(_QWORD, _BYTE *, _BYTE *))(a1 + 8))(*(_QWORD *)(a1 + 16), v5, v7);
              }
              close(fd);
              v2 = 1;
            }
          }
          std::string::~string((std::string *)v7);
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
