/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C530
// Address: 0x000000010001C530

//----- (000000010001C530) ----------------------------------------------------
__int64 __fastcall sub_10001C530(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x20
  thread_read_t v4; // w22
  mach_error_t state; // w0
  char v6; // w0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  mach_msg_type_number_t old_stateCnt; // [xsp+24h] [xbp-2Ch] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)(a1 + 896) != 1 )
      goto LABEL_11;
    v3 = *(_QWORD *)(a1 + 88);
    result = sub_100001994(v3, *(_DWORD *)(a1 + 84));
    if ( !result )
      return result;
    v4 = *(_DWORD *)(result + 4);
    old_stateCnt = 68;
    state = thread_get_state(v4, 6, (thread_state_t)(a1 + 96), &old_stateCnt);
    if ( state )
    {
      v6 = (unsigned __int8)mach_error_string(state);
      sub_1000560A0(v3, "thread_get_state: err=%s tid=%d port=%d\n", v7, v8, v9, v10, v11, v12, v6);
      return 0;
    }
    else
    {
LABEL_11:
      if ( *(_BYTE *)(a1 + 897) != 1 )
        return 1;
      result = sub_10001C628(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), (natural_t *)(a1 + 368));
      if ( (_DWORD)result )
        return 1;
    }
  }
  return result;
}
// 10001C5C8: variable 'v7' is possibly undefined
// 10001C5C8: variable 'v8' is possibly undefined
// 10001C5C8: variable 'v9' is possibly undefined
// 10001C5C8: variable 'v10' is possibly undefined
// 10001C5C8: variable 'v11' is possibly undefined
// 10001C5C8: variable 'v12' is possibly undefined
