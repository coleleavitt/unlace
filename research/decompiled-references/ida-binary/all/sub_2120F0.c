unsigned __int64 sub_2120F0()
{
  char **v0; // rbx
  char v1; // al
  __int64 v2; // rax
  __int64 v3; // r13
  char v4; // al
  __int64 v5; // r13
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r13
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v36; // [rsp-10h] [rbp-468h]
  __int64 v37; // [rsp-8h] [rbp-460h]
  char v38[8]; // [rsp+8h] [rbp-450h] BYREF
  __int64 v39; // [rsp+10h] [rbp-448h] BYREF
  __int64 v40; // [rsp+18h] [rbp-440h] BYREF
  _BYTE v41[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v42; // [rsp+428h] [rbp-30h]

  v0 = off_85EDE0;
  v42 = __readfsqword(0x28u);
  netnode_check(&v39, "$ debugger configuration", 0, 1);
  do
  {
    if ( netnode_hashval(v39, *v0, 0, 0, 72) <= 0 && netnode_hashval(v39, v0[1], &v40, 8, 72) > 0 )
    {
      netnode_hashdel(v39, v0[1], 72);
      netnode_hashset(v39, *v0, &v40, 8, 72);
    }
    v0 += 2;
  }
  while ( &off_85EE00 != v0 );
  netnode_check(v38, "$ debugger configuration", 0, 0);
  v1 = sub_234580("TracingWindowOpt", 0, "TracingWindowOptMask", 1);
  v40 = 1;
  v2 = v1 & 1;
  v3 = dbg;
  dword_8CB6A4 = v2;
  v39 = v2;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v3, 44, &v40, "TracingWindowOpt", 1, 2, &v39);
  v4 = sub_234580("TracingStepOpt", 3, "TracingStepOptMask", 31);
  v5 = dbg;
  v40 = 1;
  v6 = v4 & 0x1F;
  dword_8BA504 = v6;
  v39 = v6;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v5, 44, &v40, "TracingStepOpt", 1, 2, &v39);
  v7 = sub_234580("TracingInsnOpt", 0, "TracingInsnOptMask", 1);
  v8 = dbg;
  v40 = 1;
  v9 = v7 & 1;
  dword_8CB6A0 = v9;
  v39 = v9;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v8, 44, &v40, "TracingInsnOpt", 1, 2, &v39);
  v10 = sub_234580("TracingBblkOpt", 0, "TracingBblkOptMask", 1);
  v11 = dbg;
  v40 = 1;
  v12 = v10 & 1;
  dword_8CB69C = v12;
  v39 = v12;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v11, 44, &v40, "TracingBblkOpt", 1, 2, &v39);
  v13 = sub_234580("TracingFuncOpt", 1, "TracingFuncOptMask", 1);
  v17 = dbg;
  v40 = 1;
  v18 = v13 & 1;
  dword_8BA500 = v18;
  v39 = v18;
  if ( dbg )
  {
    v19 = sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0);
    v16 = v37;
    if ( v19 )
    {
      sub_20CEA0(v17, 44, &v40, "TracingFuncOpt", 1, 2, &v39);
      v15 = v36;
    }
  }
  v20 = sub_2343D0("TracingHighlight", 1, v14, v15, v16);
  v24 = dbg;
  v40 = 1;
  byte_8BA508 = v20 != 0;
  v39 = v20 != 0;
  if ( dbg )
  {
    v25 = sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0);
    v21 = v37;
    if ( v25 )
      sub_20CEA0(v24, 44, &v40, "TracingHighlight", 1, 2, &v39);
  }
  v26 = sub_2343D0("TracingBufferSize", 1000000, v21, v22, v23);
  v30 = dbg;
  v40 = 1;
  qword_8CB658 = v26;
  v39 = (int)v26;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
  {
    sub_20CEA0(v30, 44, &v40, "TracingBufferSize", 1, 2, &v39);
    v29 = v37;
  }
  v31 = sub_2343D0("TracingMemorySize", 0, v27, v28, v29);
  v32 = v31;
  if ( v31 > 0x400 )
  {
    v31 = 1024;
    v32 = 1024;
  }
  v33 = dbg;
  qword_8CB650 = v31;
  v39 = v32;
  v40 = 1;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v33, 44, &v40, "TracingMemorySize", 1, 2, &v39);
  sub_2344D0("TracingFile", &unk_5C2F25, v41, 1024);
  sub_20B400(&qword_8CBC68, v41);
  sub_2344D0("TracingCondition", &unk_5C2F25, v41, 1024);
  bpt_kernel_interface = get_bpt_kernel_interface("TracingCondition", &unk_5C2F25);
  (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
    bpt_kernel_interface,
    &qword_8CB6C0,
    v41);
  return v42 - __readfsqword(0x28u);
}
