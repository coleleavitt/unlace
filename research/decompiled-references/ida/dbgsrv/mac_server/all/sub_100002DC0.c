/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002DC0
// Address: 0x0000000100002DC0

//----- (0000000100002DC0) ----------------------------------------------------
mach_msg_return_t __fastcall sub_100002DC0(
        __int64 a1,
        mach_msg_timeout_t a2,
        mach_msg_header_t *a3,
        int *a4,
        unsigned int *a5)
{
  __int64 v5; // r13
  int v10; // esi
  bool v11; // zf
  __int64 msgh_remote_port; // rcx
  unsigned int msgh_size; // r12d
  __int64 v15; // r12
  void *v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // r12
  task_read_t v20; // edx
  mach_error_t v21; // eax
  unsigned int v22; // ebx
  char *v23; // rax
  __int64 notify; // [rsp+0h] [rbp-40h]

  LODWORD(v5) = 0;
  if ( *(_DWORD *)(a1 + 860) == 4 )
    return v5;
  v10 = 0;
  v11 = a2 == -1;
  if ( a2 == -1 )
    a2 = 0;
  LOBYTE(v10) = !v11;
  if ( mach_msg(a3, (v10 << 8) | 2, 0, 0x400u, *(_DWORD *)(a1 + 1236), a2, 0) )
    return v5;
  msgh_remote_port = a3->msgh_remote_port;
  if ( (_DWORD)msgh_remote_port == -1 )
  {
    LODWORD(v5) = 0;
    return v5;
  }
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    LODWORD(notify) = a3->msgh_id;
    sub_100000AE0(
      (int)"received mach message:\n"
           "  msgh_bits       : 0x%x\n"
           "  msgh_size       : 0x%x\n"
           "  msgh_remote_port: %d\n"
           "  msgh_local_port : %d\n"
           "  msgh_reserved   : %d\n"
           "  msgh_id         : 0x%x\n",
      a3->msgh_bits,
      a3->msgh_size,
      msgh_remote_port,
      a3->msgh_local_port,
      a3->msgh_voucher_port,
      notify);
    if ( a3->msgh_size >= 0x19 )
    {
      sub_100000AE0((int)"  data            :");
      msgh_size = a3->msgh_size;
      if ( msgh_size >= 0x1C )
      {
        v15 = (msgh_size >> 2) - 6;
        v5 = 0;
        do
          sub_100000AE0((int)" %08x", *(&a3[1].msgh_bits + v5++));
        while ( v15 != v5 );
      }
      sub_100000AE0((int)"\n");
    }
  }
  sub_100064B10();
  *(_QWORD *)a5 = 0;
  a5[2] = 0;
  v16 = *((void **)a5 + 2);
  if ( v16 )
  {
    *((_QWORD *)a5 + 3) = 0;
    qfree(v16);
    *((_QWORD *)a5 + 2) = 0;
    *((_QWORD *)a5 + 4) = 0;
  }
  qword_1000AE240 = (__int64)a5;
  if ( (unsigned int)sub_10000F330(a3, (__int64)a4) )
  {
    qword_1000AE240 = 0;
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      sub_100000AE0(
        (int)"parsed exception:\n"
             "  task_port:      0x%x\n"
             "  thread_port:    0x%x\n"
             "  exception_type: %d\n"
             "  data_count:     %d\n",
        *a5,
        a5[1],
        a5[2],
        a5[6]);
      v17 = *((_QWORD *)a5 + 3);
      if ( a5[2] == 5 && v17 == 2 )
      {
        v18 = *((_QWORD **)a5 + 2);
        if ( *v18 != 65539 )
          goto LABEL_21;
        sub_100000AE0((int)"  signal:         %lld\n", v18[1]);
        v17 = *((_QWORD *)a5 + 3);
      }
      if ( v17 )
      {
LABEL_21:
        v19 = 0;
        do
        {
          sub_100000AE0(
            (int)"  data[%d]:        0x%llX\n",
            (unsigned int)v19,
            *(_QWORD *)(*((_QWORD *)a5 + 2) + 8 * v19));
          ++v19;
        }
        while ( v19 < *((_QWORD *)a5 + 3) );
      }
    }
    sub_100064B30();
    v20 = *a5;
    if ( *a5 != *(_DWORD *)(a1 + 848) )
    {
      if ( *(_BYTE *)(a1 + 664) == 1 )
      {
        sub_100000AE0((int)"task port changed: 0x%X => 0x%X\n");
        v20 = *a5;
      }
      *(_DWORD *)(a1 + 848) = v20;
    }
    v21 = task_suspend(v20);
    LOBYTE(v5) = 1;
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      v22 = v21;
      v23 = mach_error_string(v21);
      sub_100000AE0((int)"%s => %d (%s)\n", "task_suspend", v22, v23);
    }
    return v5;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x757Cu);
  return sub_100003050(30076, a4);
}
// 100002E6D: variable 'notify' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
// 1000AE240: using guessed type __int64 qword_1000AE240;
