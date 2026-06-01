__int64 __fastcall sub_23BF20(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  bool v10; // bp
  __int64 bpt_kernel_interface; // rax
  __int64 v12; // rax

  v6 = a1;
  if ( dword_8BA590 == -1 || a5 != dword_8BA590 )
  {
    v9 = qword_8BA5A8;
    a1 = qword_8BA5A8;
    v8 = sub_233780(qword_8BA5A8);
    if ( v8 == -1 )
      v8 = v9;
  }
  else
  {
    v8 = qword_8BA5A0;
  }
  v10 = a2 == v8;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a2);
  return sub_23BEC0(v6, v12, (unsigned __int8)a3 & v10, a3, a4);
}
