/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BAAC
// Address: 0x000000010001BAAC

//----- (000000010001BAAC) ----------------------------------------------------
__int64 __fastcall sub_10001BAAC(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // x0
  thread_read_t v10; // w24
  mach_error_t state; // w0
  char v12; // w0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int v19; // w9
  mach_msg_type_number_t old_stateCnt; // [xsp+24h] [xbp-15Ch] BYREF
  natural_t old_state[2]; // [xsp+28h] [xbp-158h] BYREF
  int v22; // [xsp+30h] [xbp-150h]
  __int64 v23; // [xsp+38h] [xbp-148h]

  result = sub_100001994(a1, a2);
  if ( result )
  {
    v10 = *(_DWORD *)(result + 4);
    old_stateCnt = 68;
    state = thread_get_state(v10, 6, old_state, &old_stateCnt);
    if ( state )
    {
      v12 = (unsigned __int8)mach_error_string(state);
      sub_1000560A0(a1, "thread_get_state: err=%s tid=%d port=%d\n", v13, v14, v15, v16, v17, v18, v12);
      return 0;
    }
    else
    {
      v19 = v22;
      *a3 = old_state[0];
      *a4 = v19;
      *a5 = v23;
      return 1;
    }
  }
  return result;
}
// 10001BB30: variable 'v13' is possibly undefined
// 10001BB30: variable 'v14' is possibly undefined
// 10001BB30: variable 'v15' is possibly undefined
// 10001BB30: variable 'v16' is possibly undefined
// 10001BB30: variable 'v17' is possibly undefined
// 10001BB30: variable 'v18' is possibly undefined
