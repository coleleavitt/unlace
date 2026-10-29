/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D790
// Address: 0x000000010001D790

//----- (000000010001D790) ----------------------------------------------------
__int64 __fastcall sub_10001D790(__int64 a1, int a2, const void *a3)
{
  __int64 result; // x0
  __int64 v6; // x22
  thread_act_t v7; // w21
  mach_msg_type_number_t v8; // w3
  mach_error_t v9; // w0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  mach_error_t v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  char v23; // [xsp+0h] [xbp-280h]
  char v24; // [xsp+0h] [xbp-280h]
  mach_msg_type_number_t out_stateCnt; // [xsp+24h] [xbp-25Ch] BYREF
  natural_t out_state[68]; // [xsp+28h] [xbp-258h] BYREF
  natural_t __dst[68]; // [xsp+138h] [xbp-148h] BYREF

  result = sub_100001AE0(a1, a2);
  if ( result )
  {
    v6 = result;
    memcpy(__dst, a3, sizeof(__dst));
    v7 = *(_DWORD *)(v6 + 4);
    v8 = 68;
    out_stateCnt = 68;
    if ( (__dst[67] & 1) == 0 )
    {
      v9 = thread_convert_thread_state(v7, 2, 6, __dst, 0x44u, out_state, &out_stateCnt);
      if ( v9 )
      {
        v23 = (unsigned __int8)mach_error_string(v9);
        sub_1000593FC(
          a1,
          "thread_convert_thread_state(from): err=%s tid=%d port=%d\n",
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v23);
        return 0;
      }
      memcpy(__dst, out_state, sizeof(__dst));
      v8 = out_stateCnt;
    }
    v16 = thread_set_state(v7, 6, __dst, v8);
    if ( v16 )
    {
      v24 = (unsigned __int8)mach_error_string(v16);
      sub_1000593FC(a1, "thread_set_state: err=%s tid=%d port=%d\n", v17, v18, v19, v20, v21, v22, v24);
      return 0;
    }
    return 1;
  }
  return result;
}
// 10001D888: variable 'v10' is possibly undefined
// 10001D888: variable 'v11' is possibly undefined
// 10001D888: variable 'v12' is possibly undefined
// 10001D888: variable 'v13' is possibly undefined
// 10001D888: variable 'v14' is possibly undefined
// 10001D888: variable 'v15' is possibly undefined
// 10001D8CC: variable 'v17' is possibly undefined
// 10001D8CC: variable 'v18' is possibly undefined
// 10001D8CC: variable 'v19' is possibly undefined
// 10001D8CC: variable 'v20' is possibly undefined
// 10001D8CC: variable 'v21' is possibly undefined
// 10001D8CC: variable 'v22' is possibly undefined
