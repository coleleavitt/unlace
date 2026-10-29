/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C710
// Address: 0x000000010001C710

//----- (000000010001C710) ----------------------------------------------------
__int64 __fastcall sub_10001C710(__int64 a1)
{
  __int64 v2; // x20
  __int64 result; // x0
  __int64 v4; // x22
  mach_error_t v5; // w0
  char v6; // w0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  natural_t __dst[68]; // [xsp+18h] [xbp-148h] BYREF

  if ( *(_BYTE *)(a1 + 896) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    result = sub_100001994(v2, *(_DWORD *)(a1 + 84));
    if ( !result )
      return result;
    v4 = result;
    memcpy(__dst, (const void *)(a1 + 96), sizeof(__dst));
    v5 = thread_set_state(*(_DWORD *)(v4 + 4), 6, __dst, 0x44u);
    if ( v5 )
    {
      v6 = (unsigned __int8)mach_error_string(v5);
      sub_1000560A0(v2, "thread_set_state: err=%s tid=%d port=%d\n", v7, v8, v9, v10, v11, v12, v6);
      return 0;
    }
  }
  if ( *(_BYTE *)(a1 + 897) != 1 )
    return 1;
  result = sub_100001994(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84));
  if ( !result )
    return result;
  return !thread_set_state(*(_DWORD *)(result + 4), 17, (thread_state_t)(a1 + 368), 0x84u);
}
// 10001C7A8: variable 'v7' is possibly undefined
// 10001C7A8: variable 'v8' is possibly undefined
// 10001C7A8: variable 'v9' is possibly undefined
// 10001C7A8: variable 'v10' is possibly undefined
// 10001C7A8: variable 'v11' is possibly undefined
// 10001C7A8: variable 'v12' is possibly undefined
