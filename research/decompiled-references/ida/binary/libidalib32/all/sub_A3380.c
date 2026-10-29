unsigned __int64 sub_A3380()
{
  char **v0; // rbx
  __int64 v1; // rdx
  int *v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // edx
  __int64 bpt_kernel_interface; // rax
  __int64 v18; // [rsp-8h] [rbp-450h]
  int v19; // [rsp+4h] [rbp-444h] BYREF
  __int64 v20; // [rsp+8h] [rbp-440h]
  _BYTE v21[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v22; // [rsp+418h] [rbp-30h]

  v0 = off_22E7A0;
  v22 = __readfsqword(0x28u);
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
  while ( v0 != &off_22E7C0 );
  netnode_check();
  v20 = 1;
  dword_250AA4 = sub_C42F0("TracingWindowOpt", 0, "TracingWindowOptMask", 1) & 1;
  v19 = dword_250AA4;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  v20 = 1;
  dword_2440D8 = sub_C42F0("TracingStepOpt", 3, "TracingStepOptMask", 31) & 0x1F;
  v19 = dword_2440D8;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  v20 = 1;
  dword_250AA0 = sub_C42F0("TracingInsnOpt", 0, "TracingInsnOptMask", 1) & 1;
  v19 = dword_250AA0;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  v20 = 1;
  dword_250A9C = sub_C42F0("TracingBblkOpt", 0, "TracingBblkOptMask", 1) & 1;
  v19 = dword_250A9C;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  v20 = 1;
  dword_2440D4 = sub_C42F0("TracingFuncOpt", 1, "TracingFuncOptMask", 1) & 1;
  v19 = dword_2440D4;
  if ( dbg )
  {
    v4 = sub_9E0A0();
    v3 = v18;
    if ( v4 )
    {
      sub_9E0A0();
      v2 = &v19;
    }
  }
  v5 = sub_C4140("TracingHighlight", 1, v1, v2, v3);
  v20 = 1;
  byte_2440DC = v5 != 0;
  v19 = v5 != 0;
  if ( dbg )
  {
    v9 = sub_9E0A0();
    v6 = v18;
    if ( v9 )
      sub_9E0A0();
  }
  v10 = sub_C4140("TracingBufferSize", 1000000, v6, v7, v8);
  v20 = 1;
  dword_250A54 = v10;
  v19 = v10;
  if ( dbg && (unsigned int)sub_9E0A0() )
  {
    sub_9E0A0();
    v13 = v18;
  }
  v14 = sub_C4140("TracingMemorySize", 0, v11, v12, v13);
  v15 = v14;
  if ( v14 > 0x400 )
  {
    v14 = 1024;
    v15 = 1024;
  }
  dword_250A50 = v14;
  v19 = v15;
  v20 = 1;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  sub_C4240("TracingFile", "", v21, 1024);
  sub_9C320((__int64)&qword_251008, v21);
  sub_C4240("TracingCondition", "", v21, 1024);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
    bpt_kernel_interface,
    &qword_250AC0,
    v21);
  return v22 - __readfsqword(0x28u);
}

