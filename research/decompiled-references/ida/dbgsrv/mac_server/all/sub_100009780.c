/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009780
// Address: 0x0000000100009780

//----- (0000000100009780) ----------------------------------------------------
__int64 __fastcall sub_100009780(__int64 a1, _QWORD *a2)
{
  group *v3; // rax
  group *v4; // r14
  int v5; // eax
  gid_t gr_gid; // ecx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  gid_t v12[18]; // [rsp+0h] [rbp-60h] BYREF

  sub_100006110(a1);
  sub_1000675C0(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  if ( !getuid() )
    return 1;
  if ( (unsigned __int8)sub_1000069F0() )
  {
    v3 = getgrnam("_developer");
    if ( !v3 )
      goto LABEL_15;
    v4 = v3;
    v5 = getgroups(16, v12);
    if ( v5 <= 0 )
      goto LABEL_15;
    gr_gid = v4->gr_gid;
    if ( v12[0] == gr_gid )
      goto LABEL_30;
    v7 = 1;
    do
    {
      v8 = v7;
      if ( v5 == v7 )
        break;
      ++v7;
    }
    while ( v12[v8] != gr_gid );
    if ( v8 < (unsigned int)v5 )
    {
LABEL_30:
      if ( !(unsigned __int8)sub_100006AB0(a1) )
        sub_100000AE0((int)"WARNING: The debugger could not acquire the necessary permissions from the OS to debug mac ap"
                           "plications.\n"
                           "You will likely have to specify the proper credentials at process start. To avoid this, you c"
                           "an set\n"
                           "the MAC_DEBMOD_USER and MAC_DEBMOD_PASS environment variables.\n");
    }
    else
    {
LABEL_15:
      sub_100000AE0((int)"WARNING: This program must be launched by a user in the _developer group in order to debug mac applications\n");
    }
  }
  else
  {
    sub_100000AE0((int)"WARNING: This program must either be codesigned or run as root to debug mac applications.\n");
  }
  v9 = *(_QWORD *)(a1 + 536);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    sub_1000016A0(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) != -1 && *(_DWORD *)(a1 + 656) != -1 )
  {
    v10 = *(_QWORD *)(a1 + 552);
    if ( !v10 )
      LODWORD(v10) = *(_DWORD *)(a1 + 648);
    if ( (int)v10 > 0 )
    {
      sub_100064AA0();
      return 1;
    }
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x7540u);
  return sub_100009900(30016);
}
// 1000AE23D: using guessed type char under_debugger;
