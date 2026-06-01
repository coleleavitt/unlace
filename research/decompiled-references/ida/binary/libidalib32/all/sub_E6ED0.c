const __m128i *__fastcall sub_E6ED0(_QWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  const __m128i *result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BOOL8 v11; // rsi
  char v12; // [rsp+0h] [rbp-28h]

  if ( !a1 )
  {
    if ( (a2 & 1) != 0 )
    {
      sub_E6AD0(1);
      if ( dbg )
        goto LABEL_21;
    }
    else if ( dbg )
    {
      goto LABEL_21;
    }
    sub_10AC80((a2 & 2) == 0, 0);
    TView::disableCommand((TView *)unk_24DF86, 0);
    return (const __m128i *)sub_E6750(nullptr, "Name", 0);
  }
  v6 = a1[1];
  result = (const __m128i *)dbg;
  if ( v6 == dbg )
    return result;
  v8 = a2 & 1;
  if ( (_DWORD)v8 )
  {
    sub_E6AD0(1);
    if ( !dbg )
    {
      v6 = a1[1];
      goto LABEL_5;
    }
  }
  else if ( !dbg )
  {
LABEL_5:
    LOBYTE(a3) = *(_BYTE *)(v6 + 82) != 0;
    if ( *(_BYTE *)(v6 + 36) >> 7 != (_BYTE)a3 )
      sub_91F70((__int64)"Wrong DBG_RESMOD_STEP_... bits", v8, a3, a4, a5, a6, v12);
    sub_E6750(*(_BYTE **)(*a1 + 16LL), "Name", 0);
    add_idc_func();
    set_dbg_pointer();
    dword_2515A4 = 0;
    if ( !byte_251178 )
    {
      byte_251178 = 1;
      qatexit();
    }
    if ( !(unsigned __int8)is_miniidb() || !(unsigned int)get_segm_qty() )
    {
      sub_C06D0(dbg);
      sub_E4C00();
      sub_A3380();
    }
    sub_D2660(0, 0);
    dword_25153C = sub_C3500(dword_24411C);
    sub_D6D40(0);
    hook_event_listener();
    sub_C0300();
    if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
    {
      sub_DE910();
      sub_DDAB0(0, (__int64)&off_244140, v9, v10);
      v11 = dbg != 0;
      sub_10AC80(1, v11);
      TView::disableCommand((TView *)unk_24DF86, v11);
    }
    else
    {
      sub_E55C0(0);
    }
    return sub_CB8A0(*(_BYTE *)(dbg + 33LL) >> 7);
  }
LABEL_21:
  if ( under_debugger )
    BUG();
  return (const __m128i *)interr();
}

