__int64 __fastcall bpt_ui_interface_impl_t__::vfunc_2(__int64 a1, unsigned int a2, __int64 a3, int a4, char a5, int a6)
{
  int v6; // r13d
  int v8; // r8d
  __int64 result; // rax
  int v11; // [rsp+8h] [rbp-30h]

  v6 = a5 & 2;
  v8 = a5 & 4;
  if ( !v8 )
  {
    if ( *(_DWORD *)(a3 + 44) == 3 )
    {
      if ( v6 )
      {
LABEL_4:
        result = sub_383F40(a2, a3);
        goto LABEL_5;
      }
    }
    else
    {
      v11 = a4;
      sub_27E9E0(*(_QWORD *)(a3 + 56), 1);
      a4 = v11;
      if ( v6 )
        goto LABEL_4;
    }
    sub_236E30(19, a2, a3, a4, v8, a6);
    goto LABEL_4;
  }
LABEL_5:
  if ( (a5 & 1) == 0 )
  {
    result = mark_builtin_widgets(0x2000, 0, 1);
    if ( !v6 )
      return sub_531B30(1, 0, 0);
  }
  return result;
}
