__int64 __fastcall dyldhook_init(__int64 a1)
{
  __int64 result; // x0
  char *v3; // x19
  char *v4; // x0
  int v5; // w8
  int v6; // t1

  result = getpid();
  if ( (_DWORD)result != 1 )
  {
    result = _simple_getenv_0((int)a1 + 8 * *(_DWORD *)(a1 + 8) + 24, "DYLD_INSERT_LIBRARIES");
    if ( result )
    {
      result = (__int64)strstr_0((char *)result, "/systemhook.dylib");
      if ( result )
      {
        result = jbclient_mach_process_checkin(&unk_A0021, &unk_A0421, &byte_A0446);
        if ( !(_DWORD)result )
        {
          if ( byte_A0446 )
          {
            v3 = &byte_A0446;
            v4 = &byte_A0446;
            while ( 1 )
            {
              v6 = (unsigned __int8)*++v3;
              v5 = v6;
              if ( !v6 )
                break;
              if ( v5 == 124 )
              {
                *v3 = 0;
                sandbox_extension_consume(v4);
                *v3 = 124;
                v4 = v3 + 1;
              }
            }
            result = sandbox_extension_consume(v4);
          }
          qword_A0010 = (__int64)&unk_A0421;
          qword_A0018 = (__int64)&byte_A0446;
          jbinfoSection = 1;
          qword_A0008 = (__int64)&unk_A0021;
        }
      }
    }
  }
  return result;
}
