unsigned __int64 sub_2569B0()
{
  __int64 v0; // rdx
  __int64 bpt_kernel_interface; // rdi
  const char *v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  const char *v8; // [rsp+10h] [rbp-28h] BYREF
  __int128 v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v0 = *(_QWORD *)(dbg + 32);
  dword_8BA5B0 = (v0 & 0x1000000) == 0 ? 680260 : 549188;
  if ( (v0 & 0x4000000) != 0 )
    dword_8BA5B0 |= 0x40000u;
  netnode_check(&v7, "$ debugger configuration", 0, 0);
  if ( netnode_valobj(v7, 0, 0) >= 0 )
  {
    v8 = nullptr;
    v5 = netnode_valobj(v7, &v8, 8);
    v6 = -1;
    if ( v5 > 0 )
      v6 = (int)v8;
    dword_8BA5B0 = v6;
  }
  v8 = nullptr;
  v9 = 0;
  if ( (unsigned __int8)sub_256790((__int64 *)&v8, "EventCnd") )
  {
    bpt_kernel_interface = get_bpt_kernel_interface(&v8, "EventCnd");
    v2 = &s1;
    if ( (_QWORD)v9 )
      v2 = v8;
    (*(void (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
      bpt_kernel_interface,
      &qword_8CC580,
      v2);
  }
  else
  {
    v4 = get_bpt_kernel_interface(&v8, "EventCnd");
    (*(void (__fastcall **)(__int64, __int64 *, void *))(*(_QWORD *)v4 + 96LL))(v4, &qword_8CC580, &unk_5C2F25);
  }
  if ( (unsigned __int8)is_miniidb() )
    dword_8BA5B0 |= 0x1000u;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)&qword_8CC580);
  }
  return v10 - __readfsqword(0x28u);
}
