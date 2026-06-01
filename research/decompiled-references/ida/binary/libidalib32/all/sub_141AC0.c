__int64 __fastcall sub_141AC0(__int64 a1)
{
  int v1; // eax
  __int64 nsec_stamp; // rax
  int v4; // eax

  sub_174A70();
  sub_175720(a1 + 136, 0);
  v1 = 1000;
  if ( dword_250228 && qword_252EA0 )
  {
    if ( !(unsigned __int8)qword_252EA0() )
    {
      byte_252E9C = 0;
      sub_141920(a1);
      sub_153E30(a1, 0);
      if ( byte_252E88 || (byte_252E88 = 1, v4 = sub_E1D10(1), byte_252E88 = 0, v4 == -1) || !v4 )
      {
        v1 = 1000;
        goto LABEL_8;
      }
LABEL_7:
      v1 = 0;
      goto LABEL_8;
    }
    if ( !byte_252E9C )
    {
      nsec_stamp = get_nsec_stamp();
      if ( (unsigned __int64)(nsec_stamp - qword_252E90) <= 0x773593FF )
      {
LABEL_6:
        if ( !byte_252E88 )
        {
          byte_252E88 = 1;
          sub_E1D10(0);
          byte_252E88 = 0;
          v1 = 0;
          goto LABEL_8;
        }
        goto LABEL_7;
      }
      qword_252E90 = nsec_stamp;
    }
    byte_252E9C = 0;
    sub_141920(a1);
    sub_153E30(a1, 0);
    goto LABEL_6;
  }
LABEL_8:
  TProgram::event_delay = v1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
}

