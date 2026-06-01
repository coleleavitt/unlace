__int64 __fastcall ui_core_action_handler_t__::vfunc_0(
        struct __jmp_buf_tag *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        double a5)
{
  __int64 (__fastcall *v6)(const char *); // rax
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]
  struct __jmp_buf_tag *v8; // [rsp+10h] [rbp-18h]

  v8 = a1;
  if ( byte_8C2ED0 )
  {
    v7 = 0;
    a1 = (struct __jmp_buf_tag *)sub_47B970();
    if ( _setjmp(a1) )
    {
      if ( !byte_8C2ED0 )
        return v7;
      goto LABEL_7;
    }
  }
  v6 = *(__int64 (__fastcall **)(const char *))(v8->__jmpbuf[3] + 16);
  if ( v6 )
  {
    a1 = (struct __jmp_buf_tag *)a2;
    v7 = v6(a2);
    if ( !byte_8C2ED0 )
      return v7;
LABEL_7:
    sub_47BDF0((__int64)a1, a2);
    return v7;
  }
  sub_52F4B0(a5, (__int64)a1, (__int64)a2, a3, a4);
  return ui_action_execution_data_t__::vfunc_0(a1);
}
