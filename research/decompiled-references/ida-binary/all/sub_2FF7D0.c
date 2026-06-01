__int64 __fastcall ida_dialog_exec_ctl_t__::vfunc_0(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned int v3; // r12d
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, unsigned __int8); // rax
  __int64 v6; // rdi

  v1 = *(unsigned __int8 **)(a1 + 48);
  *(_QWORD *)a1 = &ida_dialog_exec_ctl_t___vtable;
  if ( v1 )
  {
    v3 = v1[8];
    v4 = *(_QWORD *)v1 + 16LL;
    v5 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v4 + 128LL);
    if ( v5 == IDAApplication__::vfunc_16 )
    {
      if ( qword_8CD748 )
      {
        sub_30EEE0();
        sub_30EEF0(qword_8CD748, v3);
      }
    }
    else
    {
      v5(v4, v1[8]);
    }
    operator delete(v1, 0x10u);
  }
  v6 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v6 != -1 )
    set_ida_state(v6);
  sub_277860((int *)(a1 + 60));
  return ui_dialog_exec_ctl_t__::vfunc_0(a1);
}
