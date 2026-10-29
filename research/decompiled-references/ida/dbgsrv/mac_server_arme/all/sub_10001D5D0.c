/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D5D0
// Address: 0x000000010001D5D0

//----- (000000010001D5D0) ----------------------------------------------------
__int64 __fastcall sub_10001D5D0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // x0
  thread_read_t v6; // w22
  mach_error_t state; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  mach_error_t v14; // w0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  char v21; // [xsp+0h] [xbp-170h]
  char v22; // [xsp+0h] [xbp-170h]
  mach_msg_type_number_t old_stateCnt; // [xsp+24h] [xbp-14Ch] BYREF
  natural_t out_state[68]; // [xsp+28h] [xbp-148h] BYREF

  result = sub_100001AE0(a1, a2);
  if ( result )
  {
    v6 = *(_DWORD *)(result + 4);
    old_stateCnt = 68;
    state = thread_get_state(v6, 6, (thread_state_t)a3, &old_stateCnt);
    if ( state )
    {
      v21 = (unsigned __int8)mach_error_string(state);
      sub_1000593FC(a1, "thread_get_state: err=%s tid=%d port=%d\n", v8, v9, v10, v11, v12, v13, v21);
      return 0;
    }
    if ( (*(_BYTE *)(a3 + 268) & 1) == 0 )
    {
      v14 = thread_convert_thread_state(v6, 1, 6, (thread_state_t)a3, old_stateCnt, out_state, &old_stateCnt);
      if ( v14 )
      {
        v22 = (unsigned __int8)mach_error_string(v14);
        sub_1000593FC(a1, "thread_convert_thread_state(to): err=%s tid=%d port=%d\n", v15, v16, v17, v18, v19, v20, v22);
        return 0;
      }
      memcpy((void *)a3, out_state, 0x110u);
    }
    return 1;
  }
  return result;
}
// 10001D64C: variable 'v8' is possibly undefined
// 10001D64C: variable 'v9' is possibly undefined
// 10001D64C: variable 'v10' is possibly undefined
// 10001D64C: variable 'v11' is possibly undefined
// 10001D64C: variable 'v12' is possibly undefined
// 10001D64C: variable 'v13' is possibly undefined
// 10001D698: variable 'v15' is possibly undefined
// 10001D698: variable 'v16' is possibly undefined
// 10001D698: variable 'v17' is possibly undefined
// 10001D698: variable 'v18' is possibly undefined
// 10001D698: variable 'v19' is possibly undefined
// 10001D698: variable 'v20' is possibly undefined
