unsigned __int64 sub_A3770()
{
  char **v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 bpt_kernel_interface; // rax
  __int64 v23; // [rsp-8h] [rbp-460h]
  __int64 v24; // [rsp+10h] [rbp-448h] BYREF
  __int64 v25; // [rsp+18h] [rbp-440h]
  _BYTE v26[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v27; // [rsp+428h] [rbp-30h]

  v0 = off_22F820;
  v27 = __readfsqword(0x28u);
  netnode_check();
  do
  {
    if ( netnode_hashval() <= 0 && netnode_hashval() > 0 )
    {
      netnode_hashdel();
      netnode_hashset();
    }
    v0 += 2;
  }
  while ( &off_22F840 != v0 );
  netnode_check();
  v25 = 1;
  v1 = sub_C5730("TracingWindowOpt", 0, "TracingWindowOptMask", 1) & 1;
  dword_251B24 = v1;
  v24 = v1;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  v25 = 1;
  v2 = sub_C5730("TracingStepOpt", 3, "TracingStepOptMask", 31) & 0x1F;
  dword_245124 = v2;
  v24 = v2;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  v25 = 1;
  v3 = sub_C5730("TracingInsnOpt", 0, "TracingInsnOptMask", 1) & 1;
  dword_251B20 = v3;
  v24 = v3;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  v25 = 1;
  v4 = sub_C5730("TracingBblkOpt", 0, "TracingBblkOptMask", 1) & 1;
  dword_251B1C = v4;
  v24 = v4;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  v25 = 1;
  v5 = sub_C5730("TracingFuncOpt", 1, "TracingFuncOptMask", 1) & 1;
  dword_245120 = v5;
  v24 = v5;
  if ( dbg )
  {
    v9 = sub_9E1E0();
    v8 = v23;
    if ( v9 )
    {
      sub_9E1E0();
      v7 = &v24;
    }
  }
  v10 = sub_C5580("TracingHighlight", 1, v6, v7, v8);
  v25 = 1;
  byte_245128 = v10 != 0;
  v24 = v10 != 0;
  if ( dbg )
  {
    v14 = sub_9E1E0();
    v11 = v23;
    if ( v14 )
      sub_9E1E0();
  }
  v15 = sub_C5580("TracingBufferSize", sub_F4240, v11, v12, v13);
  v25 = 1;
  qword_251AD8 = v15;
  v24 = (int)v15;
  if ( dbg && (unsigned int)sub_9E1E0() )
  {
    sub_9E1E0();
    v18 = v23;
  }
  v19 = sub_C5580("TracingMemorySize", 0, v16, v17, v18);
  v20 = v19;
  if ( v19 > 0x400 )
  {
    v19 = 1024;
    v20 = 1024;
  }
  qword_251AD0 = v19;
  v24 = v20;
  v25 = 1;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  sub_C5680("TracingFile", "", v26, 1024);
  sub_9C440((__int64)&qword_2520E8, v26);
  sub_C5680("TracingCondition", "", v26, 1024);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
    bpt_kernel_interface,
    &qword_251B40,
    v26);
  return v27 - __readfsqword(0x28u);
}

