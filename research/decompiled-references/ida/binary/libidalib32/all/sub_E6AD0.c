__int64 __fastcall sub_E6AD0(__int64 a1)
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

  if ( byte_251179 )
    return 1;
  if ( !dbg )
    return 1;
  byte_251179 = 1;
  if ( !dword_2515A4 )
  {
LABEL_12:
    sub_E6A70();
    sub_CB8A0(0);
    v3 = &off_244140;
    v4 = 4;
    unhook_event_listener();
    if ( (_DWORD)qword_2512A0 )
      qword_2512A0 = 0;
    v5 = xmmword_2512A8;
    if ( xmmword_2512A8 )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
        sub_C8970((__int64)v6);
        v3 = (_UNKNOWN ***)word_38;
        v4 = (__int64)v6;
        operator delete(v6, 0x38u);
      }
      while ( v5 );
    }
    v7 = qword_251370;
    *(_OWORD *)&xmmword_2512A8 = 0;
    if ( qword_251370 )
    {
      v8 = xmmword_251378;
      if ( (_QWORD)xmmword_251378 )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          if ( *(_QWORD *)(v7 + v9) )
          {
            *(_QWORD *)(v7 + v9 + 8) = 0;
            qfree();
            v7 = qword_251370;
          }
          ++v10;
          v9 += 56;
        }
        while ( v8 != v10 );
      }
      *(_QWORD *)&xmmword_251378 = 0;
      v4 = v7;
      qfree();
      qword_251370 = 0;
      *((_QWORD *)&xmmword_251378 + 1) = 0;
    }
    if ( byte_2515AA )
      sub_C3090(v4, v3);
    v11 = dbg != 0;
    sub_10AC80(0, v11);
    TView::disableCommand((TView *)unk_24DF86, v11);
    del_idc_func();
    set_dbg_pointer();
    byte_251179 = 0;
    return 1;
  }
  v1 = a1;
  if ( byte_251535 )
  {
    if ( !(unsigned __int8)sub_CD140() )
      goto LABEL_6;
  }
  else if ( !sub_CCFA0() )
  {
    goto LABEL_6;
  }
  sub_D3B60(40);
  a1 = 4;
  sub_E16D0(4, 2);
LABEL_6:
  if ( !dword_2515A4 )
    goto LABEL_12;
  if ( v1 )
    goto LABEL_29;
  v2 = "stop";
  a1 = 1;
  if ( byte_251535 )
    v2 = "detach from";
  if ( (int)sub_924A0(
              1u,
              (__int64)"HIDECANCEL\n"
                       "IDA failed to %s the debugged program.\n"
                       "Do you want to go ahead and close the database anyway?",
              v2) > 0 )
  {
    if ( !dword_2515A4 )
      goto LABEL_12;
LABEL_29:
    sub_D3040(a1);
    goto LABEL_12;
  }
  byte_251179 = 0;
  return 0;
}

