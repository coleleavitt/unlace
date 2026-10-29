/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C188
// Address: 0x000000010001C188

//----- (000000010001C188) ----------------------------------------------------
__int64 __fastcall sub_10001C188(__int64 a1, int a2)
{
  __int64 v3; // x0
  thread_read_t v4; // w21
  mach_error_t state; // w0
  char v6; // w0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  mach_msg_type_number_t old_stateCnt; // [xsp+24h] [xbp-13Ch] BYREF
  natural_t old_state[64]; // [xsp+28h] [xbp-138h] BYREF
  __int64 v16; // [xsp+128h] [xbp-38h]

  v3 = sub_100001994(a1, a2);
  if ( !v3 )
    return -1;
  v4 = *(_DWORD *)(v3 + 4);
  old_stateCnt = 68;
  state = thread_get_state(v4, 6, old_state, &old_stateCnt);
  if ( state )
  {
    v6 = (unsigned __int8)mach_error_string(state);
    sub_1000560A0(a1, "thread_get_state: err=%s tid=%d port=%d\n", v7, v8, v9, v10, v11, v12, v6);
    return -1;
  }
  return v16;
}
// 10001C1F8: variable 'v7' is possibly undefined
// 10001C1F8: variable 'v8' is possibly undefined
// 10001C1F8: variable 'v9' is possibly undefined
// 10001C1F8: variable 'v10' is possibly undefined
// 10001C1F8: variable 'v11' is possibly undefined
// 10001C1F8: variable 'v12' is possibly undefined
