int sub_166EC0()
{
  int *i; // r15
  char v2; // [rsp+6Eh] [rbp-ACAh] BYREF
  char v3; // [rsp+6Fh] [rbp-AC9h] BYREF
  _QWORD v4[12]; // [rsp+70h] [rbp-AC8h] BYREF
  _DWORD v5[2]; // [rsp+D0h] [rbp-A68h] BYREF
  _QWORD v6[11]; // [rsp+D8h] [rbp-A60h] BYREF
  _DWORD v7[2]; // [rsp+130h] [rbp-A08h] BYREF
  _QWORD v8[11]; // [rsp+138h] [rbp-A00h] BYREF
  _DWORD v9[2]; // [rsp+190h] [rbp-9A8h] BYREF
  _QWORD v10[11]; // [rsp+198h] [rbp-9A0h] BYREF
  _DWORD v11[2]; // [rsp+1F0h] [rbp-948h] BYREF
  _QWORD v12[11]; // [rsp+1F8h] [rbp-940h] BYREF
  _DWORD v13[2]; // [rsp+250h] [rbp-8E8h] BYREF
  _QWORD v14[11]; // [rsp+258h] [rbp-8E0h] BYREF
  _DWORD v15[2]; // [rsp+2B0h] [rbp-888h] BYREF
  _QWORD v16[11]; // [rsp+2B8h] [rbp-880h] BYREF
  _DWORD v17[2]; // [rsp+310h] [rbp-828h] BYREF
  _QWORD v18[11]; // [rsp+318h] [rbp-820h] BYREF
  _DWORD v19[2]; // [rsp+370h] [rbp-7C8h] BYREF
  _QWORD v20[11]; // [rsp+378h] [rbp-7C0h] BYREF
  _DWORD v21[2]; // [rsp+3D0h] [rbp-768h] BYREF
  _QWORD v22[11]; // [rsp+3D8h] [rbp-760h] BYREF
  _DWORD v23[2]; // [rsp+430h] [rbp-708h] BYREF
  _QWORD v24[11]; // [rsp+438h] [rbp-700h] BYREF
  _DWORD v25[2]; // [rsp+490h] [rbp-6A8h] BYREF
  _QWORD v26[11]; // [rsp+498h] [rbp-6A0h] BYREF
  _DWORD v27[2]; // [rsp+4F0h] [rbp-648h] BYREF
  _QWORD v28[11]; // [rsp+4F8h] [rbp-640h] BYREF
  _DWORD v29[2]; // [rsp+550h] [rbp-5E8h] BYREF
  _QWORD v30[11]; // [rsp+558h] [rbp-5E0h] BYREF
  int v31; // [rsp+5B0h] [rbp-588h] BYREF
  _BYTE v32[88]; // [rsp+5B8h] [rbp-580h] BYREF
  int v33; // [rsp+610h] [rbp-528h]
  _BYTE v34[88]; // [rsp+618h] [rbp-520h] BYREF
  int v35; // [rsp+670h] [rbp-4C8h]
  _BYTE v36[88]; // [rsp+678h] [rbp-4C0h] BYREF
  int v37; // [rsp+6D0h] [rbp-468h]
  _BYTE v38[88]; // [rsp+6D8h] [rbp-460h] BYREF
  int v39; // [rsp+730h] [rbp-408h]
  _BYTE v40[88]; // [rsp+738h] [rbp-400h] BYREF
  int v41; // [rsp+790h] [rbp-3A8h]
  _BYTE v42[88]; // [rsp+798h] [rbp-3A0h] BYREF
  int v43; // [rsp+7F0h] [rbp-348h]
  _BYTE v44[88]; // [rsp+7F8h] [rbp-340h] BYREF
  int v45; // [rsp+850h] [rbp-2E8h]
  _BYTE v46[88]; // [rsp+858h] [rbp-2E0h] BYREF
  int v47; // [rsp+8B0h] [rbp-288h]
  _BYTE v48[88]; // [rsp+8B8h] [rbp-280h] BYREF
  int v49; // [rsp+910h] [rbp-228h]
  _BYTE v50[88]; // [rsp+918h] [rbp-220h] BYREF
  int v51; // [rsp+970h] [rbp-1C8h]
  _BYTE v52[88]; // [rsp+978h] [rbp-1C0h] BYREF
  int v53; // [rsp+9D0h] [rbp-168h]
  _BYTE v54[88]; // [rsp+9D8h] [rbp-160h] BYREF
  int v55; // [rsp+A30h] [rbp-108h]
  _BYTE v56[88]; // [rsp+A38h] [rbp-100h] BYREF
  int v57; // [rsp+A90h] [rbp-A8h] BYREF
  _BYTE v58[88]; // [rsp+A98h] [rbp-A0h] BYREF
  unsigned __int64 v59; // [rsp+AF8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  memset(v4, 0, 0x58u);
  sub_1A1F60(&v4[1], "<default cc>");
  sub_1A1F60(&v4[4], &unk_5C2F25);
  sub_1A1F60(&v4[7], &unk_5C2F25);
  v31 = 16;
  sub_3C7E20(v32, v4);
  v5[1] = 0;
  memset(v6, 0, 0x50u);
  v5[0] = 1;
  LOBYTE(v6[9]) = 1;
  sub_1A1F60(v6, "Voidarg");
  sub_1A1F60(&v6[3], "(void)");
  sub_1A1F60(&v6[6], "No arguments");
  v33 = 32;
  sub_3C7E20(v34, v5);
  v7[1] = 0;
  memset(v8, 0, 0x50u);
  v7[0] = 2;
  sub_1A1F60(v8, "Cdecl");
  sub_1A1F60(&v8[3], "__cdecl");
  sub_1A1F60(&v8[6], "Stack");
  v35 = 48;
  sub_3C7E20(v36, v7);
  v9[1] = 0;
  memset(v10, 0, 0x50u);
  v9[0] = 3;
  sub_1A1F60(v10, "Ellipsis");
  sub_1A1F60(&v10[3], "...");
  sub_1A1F60(&v10[6], "Stack, variadic arguments");
  v37 = 64;
  sub_3C7E20(v38, v9);
  v11[1] = 0;
  memset(v12, 0, 0x50u);
  v11[0] = 4;
  BYTE1(v12[9]) = 1;
  sub_1A1F60(v12, "Stdcall");
  sub_1A1F60(&v12[3], "__stdcall");
  sub_1A1F60(&v12[6], "Stack, callee purged, last argument pushed first");
  v39 = 80;
  sub_3C7E20(v40, v11);
  v13[1] = 0;
  memset(v14, 0, 0x50u);
  v13[0] = 5;
  BYTE1(v14[9]) = 1;
  sub_1A1F60(v14, "Pascal");
  sub_1A1F60(&v14[3], "__pascal");
  sub_1A1F60(&v14[6], "Stack, callee purged, first argument pushed first");
  v41 = 96;
  sub_3C7E20(v42, v13);
  v15[1] = 0;
  memset(v16, 0, 0x50u);
  v15[0] = 6;
  BYTE1(v16[9]) = 1;
  sub_1A1F60(v16, "Fastcall");
  sub_1A1F60(&v16[3], "__fastcall");
  sub_1A1F60(&v16[6], "First arguments in registers, further arguments on stack, callee purged on x86");
  v43 = 112;
  sub_3C7E20(v44, v15);
  v17[1] = 0;
  memset(v18, 0, 0x50u);
  v17[0] = 7;
  BYTE1(v18[9]) = 1;
  sub_1A1F60(v18, "Thiscall");
  sub_1A1F60(&v18[3], "__thiscall");
  sub_1A1F60(&v18[6], "First argument in register, following arguments on stack, callee purged on x86");
  v45 = 128;
  sub_3C7E20(v46, v17);
  v19[1] = 0;
  memset(v20, 0, 0x50u);
  v19[0] = 8;
  sub_1A1F60(v20, "Swift");
  sub_1A1F60(&v20[3], "__swiftcall");
  sub_1A1F60(&v20[6], "(Swift) arguments and return values in registers");
  v47 = 144;
  sub_3C7E20(v48, v19);
  v21[1] = 0;
  memset(v22, 0, 0x50u);
  v21[0] = 9;
  sub_1A1F60(v22, "Go regabi");
  sub_1A1F60(&v22[3], "__golang");
  sub_1A1F60(&v22[6], "(Go) arguments and return values on stack or in registers");
  v49 = 176;
  sub_3C7E20(v50, v21);
  v23[1] = 0;
  memset(v24, 0, 0x50u);
  v23[0] = 12;
  sub_1A1F60(v24, "Usercall ellipsis");
  sub_1A1F60(&v24[3], "__usercall ...");
  sub_1A1F60(&v24[6], "Argument and return value locations specified by user, variadic arguments");
  v51 = 208;
  sub_3C7E20(v52, v23);
  v25[1] = 0;
  memset(v26, 0, 0x50u);
  v25[0] = 13;
  BYTE1(v26[9]) = 1;
  sub_1A1F60(v26, "Userpurge");
  sub_1A1F60(&v26[3], "__userpurge");
  sub_1A1F60(&v26[6], "Argument and return value locations specified by user, callee purged");
  v53 = 224;
  sub_3C7E20(v54, v25);
  v27[1] = 0;
  memset(v28, 0, 0x50u);
  v27[0] = 11;
  sub_1A1F60(v28, "Usercall");
  sub_1A1F60(&v28[3], "__usercall");
  sub_1A1F60(&v28[6], "Argument and return value locations specified by user");
  v55 = 240;
  sub_3C7E20(v56, v27);
  v29[1] = 0;
  memset(v30, 0, 0x50u);
  v29[0] = 10;
  sub_1A1F60(v30, "Go stkabi");
  sub_1A1F60(&v30[3], "__gostk");
  sub_1A1F60(&v30[6], "(Go) arguments and return values on stack");
  v57 = 256;
  sub_3C7E20(v58, v29);
  sub_3CCF70(&unk_8D0A40, &v31, 14, &v2, &v3);
  for ( i = &v57; ; i -= 24 )
  {
    if ( *((_QWORD *)i + 8) )
    {
      *((_QWORD *)i + 9) = 0;
      qfree();
    }
    if ( *((_QWORD *)i + 5) )
    {
      *((_QWORD *)i + 6) = 0;
      qfree();
    }
    if ( *((_QWORD *)i + 2) )
    {
      *((_QWORD *)i + 3) = 0;
      qfree();
    }
    if ( &v31 == i )
      break;
  }
  sub_3C76B0(v29);
  sub_3C76B0(v27);
  sub_3C76B0(v25);
  sub_3C76B0(v23);
  sub_3C76B0(v21);
  sub_3C76B0(v19);
  sub_3C76B0(v17);
  sub_3C76B0(v15);
  sub_3C76B0(v13);
  sub_3C76B0(v11);
  sub_3C76B0(v9);
  sub_3C76B0(v7);
  sub_3C76B0(v5);
  sub_3C76B0(v4);
  __cxa_atexit(sub_3C5760, &unk_8D0A40, &off_85BC80);
  sub_268310(&unk_8D0A00, "Local Types", sub_3CE620, sub_3C4320, 1);
  return __cxa_atexit(ida_singleton_desktop_widget_factory_t__::vfunc_0, &unk_8D0A00, &off_85BC80);
}
