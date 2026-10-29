/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100074D78
// Address: 0x0000000100074D78

//----- (0000000100074D78) ----------------------------------------------------
__int64 __fastcall sub_100074D78(_QWORD *a1)
{
  clock_serv_t v2; // w0
  mach_port_t v3; // w0
  __int64 tv_nsec; // x9
  mach_timespec_t v6; // [xsp+0h] [xbp-20h] BYREF

  v2 = dword_1000A63B4;
  if ( dword_1000A63B4 )
    goto LABEL_4;
  v3 = mach_host_self();
  if ( !host_get_clock_service(v3, 0, (clock_serv_t *)&dword_1000A63B4) )
  {
    v2 = dword_1000A63B4;
LABEL_4:
    if ( !clock_get_time(v2, &v6) )
    {
      tv_nsec = v6.tv_nsec;
      *a1 = v6.tv_sec;
      a1[1] = tv_nsec;
      return 1;
    }
    if ( under_debugger != 1 )
      interr(9);
    goto LABEL_9;
  }
  if ( under_debugger == 1 )
LABEL_9:
    __break(1u);
  interr(8);
  return get_nsec_stamp();
}
// 1000A590D: using guessed type char under_debugger;
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63B4: using guessed type int dword_1000A63B4;
