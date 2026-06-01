/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B954
// Address: 0x000000010001B954

//----- (000000010001B954) ----------------------------------------------------
__int64 __fastcall sub_10001B954(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  thread_read_t v5; // w22
  mach_error_t state; // w0
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 result; // x0
  char v10; // w0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  char v17; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  natural_t old_state[68]; // [xsp+18h] [xbp-258h] BYREF
  mach_msg_type_number_t old_stateCnt[68]; // [xsp+128h] [xbp-148h] BYREF

  v4 = sub_100001994(a1, *(_DWORD *)(a2 + 4));
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_DWORD *)(v4 + 4);
  old_stateCnt[0] = 68;
  state = thread_get_state(v5, 6, old_state, old_stateCnt);
  if ( state )
  {
    v10 = (unsigned __int8)mach_error_string(state);
    sub_1000560A0(a1, "thread_get_state: err=%s tid=%d port=%d\n", v11, v12, v13, v14, v15, v16, v10);
LABEL_7:
    if ( under_debugger == 1 )
    {
LABEL_11:
      __break(1u);
LABEL_12:
      interr(2024);
    }
    interr(2023);
    goto LABEL_9;
  }
  *(_QWORD *)&old_state[64] = *(_QWORD *)&old_state[60];
  v7 = sub_100001994(a1, *(_DWORD *)(a2 + 4));
  if ( !v7 )
    goto LABEL_10;
  v8 = v7;
  memcpy(old_stateCnt, old_state, sizeof(old_stateCnt));
  result = thread_set_state(*(_DWORD *)(v8 + 4), 6, old_stateCnt, 0x44u);
  if ( (_DWORD)result )
  {
LABEL_9:
    v17 = (unsigned __int8)mach_error_string(result);
    sub_1000560A0(a1, "thread_set_state: err=%s tid=%d port=%d\n", v18, v19, v20, v21, v22, v23, v17);
LABEL_10:
    if ( under_debugger != 1 )
      goto LABEL_12;
    goto LABEL_11;
  }
  return result;
}
// 10001BA4C: variable 'v11' is possibly undefined
// 10001BA4C: variable 'v12' is possibly undefined
// 10001BA4C: variable 'v13' is possibly undefined
// 10001BA4C: variable 'v14' is possibly undefined
// 10001BA4C: variable 'v15' is possibly undefined
// 10001BA4C: variable 'v16' is possibly undefined
// 10001BA6C: variable 'result' is possibly undefined
// 10001BA84: variable 'v18' is possibly undefined
// 10001BA84: variable 'v19' is possibly undefined
// 10001BA84: variable 'v20' is possibly undefined
// 10001BA84: variable 'v21' is possibly undefined
// 10001BA84: variable 'v22' is possibly undefined
// 10001BA84: variable 'v23' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
