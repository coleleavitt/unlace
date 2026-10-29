/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000062A0
// Address: 0x00000001000062A0

//----- (00000001000062A0) ----------------------------------------------------
bool __fastcall sub_1000062A0(__int64 a1, int a2)
{
  mach_error_t v3; // w0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  mach_error_t v10; // w19
  char ***v11; // x0
  char *v12; // x21
  char *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  bool v20; // zf
  const char *v22; // [xsp+0h] [xbp-40h]

  v3 = task_for_pid(mach_task_self_, a2, (mach_port_name_t *)(a1 + 1544));
  v10 = v3;
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    mach_error_string(v3);
    v22 = "task_for_pid";
    sub_100000AA0();
  }
  if ( v10 )
  {
    v11 = _NSGetArgv();
    v12 = qbasename(**v11);
    v13 = strstr(v12, "server");
    if ( v12 )
      v20 = v13 == nullptr;
    else
      v20 = 1;
    if ( v20 )
      sub_100006388(
        a1,
        "Please run IDA with elevated permissons for local debugging.\n"
        "Another solution is to run mac_server and use localhost as\n"
        "the remote computer name.\n"
        "\n"
        "For more info, please see the 'Debugger for macOS' help entry.",
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        (char)v22);
    else
      sub_100006388(
        a1,
        "Permission denied. Please ensure that '%s' is either codesigned or running as root.\n"
        "\n"
        "For more info, please see the 'Debugger for macOS' help entry.",
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        (char)v12);
  }
  else
  {
    sub_1000560A0(a1, "mach task: 0x%x\n", v4, v5, v6, v7, v8, v9, *(_DWORD *)(a1 + 1544));
  }
  return v10 == 0;
}
// 10000632C: variable 'v14' is possibly undefined
// 10000632C: variable 'v15' is possibly undefined
// 10000632C: variable 'v16' is possibly undefined
// 10000632C: variable 'v17' is possibly undefined
// 10000632C: variable 'v18' is possibly undefined
// 10000632C: variable 'v19' is possibly undefined
// 100006368: variable 'v22' is possibly undefined
// 100006350: variable 'v4' is possibly undefined
// 100006350: variable 'v5' is possibly undefined
// 100006350: variable 'v6' is possibly undefined
// 100006350: variable 'v7' is possibly undefined
// 100006350: variable 'v8' is possibly undefined
// 100006350: variable 'v9' is possibly undefined
