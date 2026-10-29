/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C628
// Address: 0x000000010001C628

//----- (000000010001C628) ----------------------------------------------------
__int64 __fastcall sub_10001C628(__int64 a1, int a2, natural_t *a3)
{
  char v4; // w20
  __int64 v6; // x0
  thread_read_t v7; // w21
  mach_error_t state; // w0
  _BOOL8 v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v17; // x0
  mach_msg_type_number_t old_stateCnt; // [xsp+24h] [xbp-2Ch] BYREF

  v4 = a2;
  v6 = sub_100001994(a1, a2);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(v6 + 4);
  old_stateCnt = 132;
  state = thread_get_state(v7, 17, a3, &old_stateCnt);
  if ( old_stateCnt == 132 )
  {
    v9 = state == 0;
    if ( state )
    {
      mach_error_string(state);
      sub_1000560A0(a1, "tid=%d port=%d: get_neon_state: %s\n", v10, v11, v12, v13, v14, v15, v4);
    }
    return v9;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(30105);
  return sub_10001C710(v17);
}
// 10001C6B0: variable 'v10' is possibly undefined
// 10001C6B0: variable 'v11' is possibly undefined
// 10001C6B0: variable 'v12' is possibly undefined
// 10001C6B0: variable 'v13' is possibly undefined
// 10001C6B0: variable 'v14' is possibly undefined
// 10001C6B0: variable 'v15' is possibly undefined
// 10001C70D: variable 'v17' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
