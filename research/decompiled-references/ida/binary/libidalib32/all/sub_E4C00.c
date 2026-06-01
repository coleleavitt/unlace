unsigned __int64 sub_E4C00()
{
  __int64 v0; // rdx
  __int64 bpt_kernel_interface; // rdi
  const char *v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  const char *v7; // [rsp+10h] [rbp-28h] BYREF
  __int128 v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v0 = *(_QWORD *)(dbg + 32LL);
  dword_24412C = (v0 & 0x1000000) == 0 ? 680260 : 549188;
  if ( (v0 & 0x4000000) != 0 )
    dword_24412C |= 0x40000u;
  netnode_check();
  if ( netnode_valobj() >= 0 )
  {
    LODWORD(v7) = 0;
    v5 = netnode_valobj();
    v6 = -1;
    if ( v5 > 0 )
      v6 = (int)v7;
    dword_24412C = v6;
  }
  v7 = nullptr;
  v8 = 0;
  if ( (unsigned __int8)sub_E49E0((__int64 *)&v7, "EventCnd") )
  {
    bpt_kernel_interface = get_bpt_kernel_interface();
    v2 = s1;
    if ( (_QWORD)v8 )
      v2 = v7;
    (*(void (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
      bpt_kernel_interface,
      &qword_251540,
      v2);
  }
  else
  {
    v4 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)v4 + 96LL))(v4, &qword_251540, "");
  }
  if ( (unsigned __int8)is_miniidb() )
    dword_24412C |= 0x1000u;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

