__int64 __fastcall sub_142220(__int64 a1)
{
  int v1; // eax
  __int64 nsec_stamp; // rax
  int v4; // eax

  sub_175570();
  sub_176220(a1 + 136, 0);
  v1 = 1000;
  if ( dword_251288 && qword_254040 )
  {
    if ( !(unsigned __int8)qword_254040() )
    {
      byte_25403C = 0;
      sub_142080(a1);
      sub_154630(a1, 0);
      if ( byte_254028 || (byte_254028 = 1, v4 = sub_E3510(1), byte_254028 = 0, v4 == -1) || !v4 )
      {
        v1 = 1000;
        goto LABEL_8;
      }
LABEL_7:
      v1 = 0;
      goto LABEL_8;
    }
    if ( !byte_25403C )
    {
      nsec_stamp = get_nsec_stamp();
      if ( (unsigned __int64)(nsec_stamp - qword_254030) <= 0x773593FF )
      {
LABEL_6:
        if ( !byte_254028 )
        {
          byte_254028 = 1;
          sub_E3510(0);
          byte_254028 = 0;
          v1 = 0;
          goto LABEL_8;
        }
        goto LABEL_7;
      }
      qword_254030 = nsec_stamp;
    }
    byte_25403C = 0;
    sub_142080(a1);
    sub_154630(a1, 0);
    goto LABEL_6;
  }
LABEL_8:
  TProgram::event_delay = v1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
}

