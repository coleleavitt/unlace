/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006E90
// Address: 0x0000000100006E90

//----- (0000000100006E90) ----------------------------------------------------
bool __fastcall sub_100006E90(__int64 a1, int a2)
{
  mach_error_t v2; // eax
  unsigned int v3; // ebx
  char *v4; // rax
  char ***v5; // rax
  char *v6; // r15
  char *v7; // rax

  v2 = task_for_pid(mach_task_self_, a2, (mach_port_name_t *)(a1 + 848));
  v3 = v2;
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    v4 = mach_error_string(v2);
    sub_100000AE0((int)"%s => %d (%s)\n", "task_for_pid", v3, v4);
  }
  if ( v3 )
  {
    v5 = _NSGetArgv();
    v6 = qbasename(**v5);
    v7 = strstr(v6, "server");
    if ( v6 && v7 )
      sub_100006F60(
        a1,
        "Permission denied. Please ensure that '%s' is either codesigned or running as root.\n"
        "\n"
        "For more info, please see the 'Debugger for macOS' help entry.",
        v6);
    else
      sub_100006F60(
        a1,
        "Please run IDA with elevated permissons for local debugging.\n"
        "Another solution is to run mac_server and use localhost as\n"
        "the remote computer name.\n"
        "\n"
        "For more info, please see the 'Debugger for macOS' help entry.");
  }
  else
  {
    sub_100060FA0(a1, "mach task: 0x%x\n", *(_DWORD *)(a1 + 848));
  }
  return v3 == 0;
}
