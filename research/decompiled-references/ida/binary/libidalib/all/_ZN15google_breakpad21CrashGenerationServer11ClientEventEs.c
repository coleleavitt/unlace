__int64 __fastcall google_breakpad::CrashGenerationServer::ClientEvent(
        google_breakpad::CrashGenerationServer *this,
        char a2)
{
  unsigned int v2; // ebx
  google_breakpad *v3; // rax
  bool v5; // [rsp-8h] [rbp-738h]
  _BYTE v6[16]; // [rsp+10h] [rbp-720h] BYREF
  struct cmsghdr *cmsg; // [rsp+20h] [rbp-710h]
  _BYTE v8[8]; // [rsp+28h] [rbp-708h] BYREF
  char v9; // [rsp+30h] [rbp-700h] BYREF
  int v10[396]; // [rsp+70h] [rbp-6C0h] BYREF
  _QWORD v11[2]; // [rsp+6A0h] [rbp-90h] BYREF
  struct msghdr message; // [rsp+6B0h] [rbp-80h] BYREF
  unsigned int v13; // [rsp+6E8h] [rbp-48h]
  unsigned int v14; // [rsp+6ECh] [rbp-44h]
  unsigned __int8 *cmsg_data; // [rsp+6F0h] [rbp-40h]
  ssize_t v16; // [rsp+6F8h] [rbp-38h]
  ssize_t v17; // [rsp+700h] [rbp-30h]
  __int64 v18; // [rsp+708h] [rbp-28h]
  unsigned int i; // [rsp+714h] [rbp-1Ch]
  int fd; // [rsp+718h] [rbp-18h]
  char *v21; // [rsp+71Ch] [rbp-14h]

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
    v18 = 1584;
    v11[0] = v10;
    v11[1] = 1584;
    message.msg_iov = (struct iovec *)v11;
    message.msg_iovlen = 1;
    message.msg_control = &v9;
    message.msg_controllen = 56;
    do
      v17 = recvmsg(*(_DWORD *)this, &message, 0);
    while ( v17 == -1 && *__errno_location() == 4 );
    v16 = v17;
    if ( v17 == 1584 )
    {
      if ( message.msg_controllen == 56 && (message.msg_flags & 0xFFFFFFDF) == 0 )
      {
        LODWORD(v21) = -1;
        fd = -1;
        for ( cmsg = (struct cmsghdr *)message.msg_control; cmsg; cmsg = __cmsg_nxthdr(&message, cmsg) )
        {
          if ( cmsg->cmsg_level == 1 )
          {
            if ( cmsg->cmsg_type == 1 )
            {
              v14 = cmsg->cmsg_len - 16;
              if ( (v14 & 3) != 0 )
                __assert_fail(
                  "len % sizeof(int) == 0u",
                  "src/client/linux/crash_generation/crash_generation_server.cc",
                  0xF2u,
                  "bool google_breakpad::CrashGenerationServer::ClientEvent(short int)");
              v13 = v14 >> 2;
              if ( v14 >> 2 > 1 || !v13 )
              {
                for ( i = 0; i < v13; ++i )
                  close(*(_DWORD *)&cmsg->__cmsg_data[4 * i]);
                return 1;
              }
              fd = *(_DWORD *)cmsg->__cmsg_data;
            }
            else if ( cmsg->cmsg_type == 2 )
            {
              cmsg_data = cmsg->__cmsg_data;
              LODWORD(v21) = *(_DWORD *)cmsg->__cmsg_data;
            }
          }
        }
        if ( (_DWORD)v21 == -1 || fd == -1 )
        {
          if ( fd != -1 )
            close(fd);
          return 1;
        }
        else
        {
          std::string::string((std::string *)v8);
          if ( (unsigned __int8)google_breakpad::CrashGenerationServer::MakeMinidumpFilename(this, (std::string *)v8) != 1 )
          {
            v2 = 1;
          }
          else
          {
            v3 = (google_breakpad *)std::string::c_str((std::string *)v8);
            if ( (unsigned __int8)google_breakpad::WriteMinidump(
                                    v3,
                                    (const char *)(unsigned int)v21,
                                    (int)v10,
                                    &elf_gnu_hash_indexes[120],
                                    0,
                                    0,
                                    0,
                                    v5) != 1 )
            {
              close(fd);
              v2 = 1;
            }
            else
            {
              if ( *((_QWORD *)this + 1) )
              {
                google_breakpad::ClientInfo::ClientInfo((google_breakpad::ClientInfo *)v6, (int)v21, this);
                (*((void (__fastcall **)(_QWORD, _BYTE *, _BYTE *))this + 1))(*((_QWORD *)this + 2), v6, v8);
              }
              close(fd);
              v2 = 1;
            }
          }
          std::string::~string((std::string *)v8);
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

