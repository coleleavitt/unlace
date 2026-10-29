/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FF30
// Address: 0x000000010001FF30

//----- (000000010001FF30) ----------------------------------------------------
bool __fastcall sub_10001FF30(__int64 a1, int a2, natural_t *a3)
{
  __int64 v4; // rax
  thread_read_t v5; // r12d
  mach_error_t state; // eax
  bool v7; // r15
  char *v8; // rax
  __m128 *v10; // rdx
  mach_msg_type_number_t old_stateCnt; // [rsp+4h] [rbp-2Ch] BYREF

  v4 = sub_100001D80(a1, a2);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 4);
  old_stateCnt = 8;
  state = thread_get_state(v5, 10, a3, &old_stateCnt);
  if ( old_stateCnt == 8 )
  {
    v7 = state == 0;
    if ( state )
    {
      v8 = mach_error_string(state);
      sub_100060FA0(a1, "tid=%d port=%d: get_debug_state32: %s\n", a2, v5, v8);
    }
    return v7;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x7599u);
  return sub_10001FFF0(30105, 10, v10);
}
// 10001FFEF: variable 'v10' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
