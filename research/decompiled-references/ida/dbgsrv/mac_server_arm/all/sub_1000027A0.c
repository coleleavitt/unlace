/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000027A0
// Address: 0x00000001000027A0

//----- (00000001000027A0) ----------------------------------------------------
__int64 __fastcall sub_1000027A0(__int64 a1, int a2, mach_msg_header_t *msg, __int64 a4, __int64 a5)
{
  mach_msg_option_t v9; // w8
  mach_msg_timeout_t v10; // w5
  mach_msg_size_t msgh_size; // w8
  mach_msg_header_t *v13; // x24
  __int64 v14; // x25
  void *v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  task_read_t v18; // w0
  mach_error_t v19; // w0
  __int64 v20; // x0
  int *v21; // x1

  if ( *(_DWORD *)(a1 + 1556) == 4 )
    return 0;
  v9 = a2 == -1 ? 2 : 258;
  v10 = a2 == -1 ? 0 : a2;
  if ( mach_msg(msg, v9, 0, 0x400u, *(_DWORD *)(a1 + 1932), v10, 0) || msg->msgh_remote_port == -1 )
    return 0;
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    sub_100000AA0();
    if ( msg->msgh_size >= 0x19 )
    {
      sub_100000AA0();
      msgh_size = msg->msgh_size;
      if ( msgh_size >= 0x1C )
      {
        v13 = msg + 1;
        v14 = (msgh_size >> 2) - 6;
        do
        {
          v13 = (mach_msg_header_t *)((char *)v13 + 4);
          sub_100000AA0();
          --v14;
        }
        while ( v14 );
      }
      sub_100000AA0();
    }
  }
  sub_1000598F0();
  *(_QWORD *)a5 = 0;
  *(_DWORD *)(a5 + 8) = 0;
  v15 = *(void **)(a5 + 16);
  if ( v15 )
  {
    *(_QWORD *)(a5 + 24) = 0;
    qfree(v15);
    *(_QWORD *)(a5 + 16) = 0;
    *(_QWORD *)(a5 + 32) = 0;
  }
  qword_10009D910 = a5;
  if ( (unsigned int)sub_10000DC90(msg, a4) )
  {
    qword_10009D910 = 0;
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      sub_100000AA0();
      v16 = *(_QWORD *)(a5 + 24);
      if ( *(_DWORD *)(a5 + 8) == 5 && v16 == 2 )
      {
        if ( **(_QWORD **)(a5 + 16) != 65539 )
          goto LABEL_26;
        sub_100000AA0();
        v16 = *(_QWORD *)(a5 + 24);
      }
      if ( v16 )
      {
LABEL_26:
        v17 = 0;
        do
        {
          sub_100000AA0();
          ++v17;
        }
        while ( v17 < *(_QWORD *)(a5 + 24) );
      }
    }
    sub_1000598FC();
    v18 = *(_DWORD *)a5;
    if ( *(_DWORD *)a5 != *(_DWORD *)(a1 + 1544) )
    {
      if ( *(_BYTE *)(a1 + 664) == 1 )
      {
        sub_100000AA0();
        v18 = *(_DWORD *)a5;
      }
      *(_DWORD *)(a1 + 1544) = v18;
    }
    v19 = task_suspend(v18);
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      mach_error_string(v19);
      sub_100000AA0();
    }
    return 1;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(30076);
  return sub_100002A3C(v20, v21);
}
// 100002A39: variable 'v20' is possibly undefined
// 100002A39: variable 'v21' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
// 10009D910: using guessed type __int64 qword_10009D910;
