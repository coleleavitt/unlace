__int64 __fastcall sub_E7910(__int64 a1)
{
  char v1; // bl
  const char *v2; // rdx
  _UNKNOWN ***v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rbx
  _BOOL8 v11; // rsi

  if ( byte_252259 )
    return 1;
  if ( !dbg )
    return 1;
  byte_252259 = 1;
  if ( !dword_25274C )
  {
LABEL_12:
    sub_E78B0();
    sub_CCE20(0);
    v3 = &off_2451A0;
    v4 = 4;
    unhook_event_listener();
    if ( (_DWORD)qword_252410 )
      qword_252410 = 0;
    v5 = xmmword_252418;
    if ( xmmword_252418 )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
        sub_C9E30((__int64)v6);
        v3 = (_UNKNOWN ***)word_38;
        v4 = (__int64)v6;
        operator delete(v6, 0x38u);
      }
      while ( v5 );
    }
    v7 = qword_2524F0;
    *(_OWORD *)&xmmword_252418 = 0;
    if ( qword_2524F0 )
    {
      v8 = xmmword_2524F8;
      if ( (_QWORD)xmmword_2524F8 )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          if ( *(_QWORD *)(v7 + v9) )
          {
            *(_QWORD *)(v7 + v9 + 8) = 0;
            qfree();
            v7 = qword_2524F0;
          }
          ++v10;
          v9 += 56;
        }
        while ( v8 != v10 );
      }
      *(_QWORD *)&xmmword_2524F8 = 0;
      v4 = v7;
      qfree();
      qword_2524F0 = 0;
      *((_QWORD *)&xmmword_2524F8 + 1) = 0;
    }
    if ( byte_252752 )
      sub_C4290(v4, v3);
    v11 = dbg != 0;
    sub_10AF30(0, v11);
    TView::disableCommand((TView *)unk_24EFE6, v11);
    del_idc_func();
    set_dbg_pointer();
    byte_252259 = 0;
    return 1;
  }
  v1 = a1;
  if ( byte_2526B9 )
  {
    if ( !(unsigned __int8)sub_CE6F0() )
      goto LABEL_6;
  }
  else if ( !sub_CE550() )
  {
    goto LABEL_6;
  }
  sub_D50A0(40);
  a1 = 4;
  sub_E2ED0(4, 2);
LABEL_6:
  if ( !dword_25274C )
    goto LABEL_12;
  if ( v1 )
    goto LABEL_29;
  v2 = "stop";
  a1 = 1;
  if ( byte_2526B9 )
    v2 = "detach from";
  if ( (int)sub_92580(
              1u,
              (__int64)"HIDECANCEL\n"
                       "IDA failed to %s the debugged program.\n"
                       "Do you want to go ahead and close the database anyway?",
              v2) > 0 )
  {
    if ( !dword_25274C )
      goto LABEL_12;
LABEL_29:
    sub_D4570(a1);
    goto LABEL_12;
  }
  byte_252259 = 0;
  return 0;
}

