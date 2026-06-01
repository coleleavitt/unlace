void __fastcall sub_D1E10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  int v5; // r12d
  __int64 v6; // rax
  __int64 bpt_kernel_interface; // r12
  void (__fastcall *v8)(__int64, _QWORD); // r13
  __int64 *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11[2]; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+10h] [rbp-28h]
  int v13; // [rsp+18h] [rbp-20h]
  int v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp-8h]

  v10 = a1;
  *(_QWORD *)v11 = a2;
  v4 = sub_A19D0((__int64)&v10)[2];
  if ( v4 != -1 )
  {
    if ( getseg() || (sub_D1B30(1), (unsigned __int8)is_mapped()) )
      sub_C4700(v4);
  }
  sub_A19D0((__int64)&v10);
  if ( qword_252120 && !(unsigned int)sub_C14A0() )
    sub_CFB60(dword_252588);
  v5 = *((_DWORD *)sub_A19D0((__int64)&v10) + 3);
  if ( !v5 )
    sub_C6220();
  v6 = sub_1942A0("@0:1423[]\nNOMAINMENU\nNOSTATUSBAR\nThreads", v10, v11[0], v12, v13, v14, v15, v16);
  if ( v6 )
  {
    *(_DWORD *)(*(_QWORD *)(v6 + 2520) + 180LL) = v5;
    sub_196B90(v6, 0, 7, 0);
  }
  if ( *((_DWORD *)sub_A19D0((__int64)&v10) + 2) == 4 && sub_A19D0((__int64)&v10)[3] )
  {
    bpt_kernel_interface = get_bpt_kernel_interface();
    v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL);
    v9 = sub_A19D0((__int64)&v10);
    v8(bpt_kernel_interface, *(_QWORD *)v9[3]);
    nullsub_13();
  }
  if ( a3 )
    sub_D1C20(a3, 0);
  dword_2526BC |= 1u;
}

