/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007D550
// Address: 0x000000010007D550

//----- (000000010007D550) ----------------------------------------------------
char __fastcall sub_10007D550(_QWORD *a1)
{
  clock_serv_t v2; // edi
  mach_port_t v3; // eax
  mach_timespec_t cur_time; // [rsp+8h] [rbp-18h] BYREF

  v2 = clock_serv;
  if ( clock_serv )
    goto LABEL_4;
  v3 = mach_host_self();
  if ( !host_get_clock_service(v3, 0, &clock_serv) )
  {
    v2 = clock_serv;
LABEL_4:
    if ( !clock_get_time(v2, &cur_time) )
    {
      *a1 = cur_time.tv_sec;
      a1[1] = cur_time.tv_nsec;
      return 1;
    }
    if ( under_debugger != 1 )
      interr(9u);
LABEL_9:
    BUG();
  }
  if ( under_debugger == 1 )
    goto LABEL_9;
  interr(8u);
  return get_nsec_stamp();
}
// 1000AE23D: using guessed type char under_debugger;
