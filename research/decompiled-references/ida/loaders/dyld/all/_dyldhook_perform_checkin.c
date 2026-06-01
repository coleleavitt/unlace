__int64 dyldhook_perform_checkin()
{
  __int64 result; // x0
  char *v1; // x19
  char *v2; // x0
  int v3; // w8
  int v4; // t1

  result = jbclient_mach_process_checkin(&unk_A0021, &unk_A0421, &byte_A0446);
  if ( !(_DWORD)result )
  {
    if ( byte_A0446 )
    {
      v1 = &byte_A0446;
      v2 = &byte_A0446;
      while ( 1 )
      {
        v4 = (unsigned __int8)*++v1;
        v3 = v4;
        if ( !v4 )
          break;
        if ( v3 == 124 )
        {
          *v1 = 0;
          sandbox_extension_consume(v2);
          *v1 = 124;
          v2 = v1 + 1;
        }
      }
      result = sandbox_extension_consume(v2);
    }
    qword_A0010 = (__int64)&unk_A0421;
    qword_A0018 = (__int64)&byte_A0446;
    jbinfoSection = 1;
    qword_A0008 = (__int64)&unk_A0021;
  }
  return result;
}
