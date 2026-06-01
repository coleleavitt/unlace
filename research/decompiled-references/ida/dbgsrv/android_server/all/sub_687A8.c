/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_687A8
// Address: 0x00000000000687A8

//----- (00000000000687A8) ----------------------------------------------------
__int64 __fastcall sub_687A8(const char *a1, pthread_mutex_t *a2, __int64 a3)
{
  __int64 v5; // x8
  char v6; // w8
  char v7; // w0
  _QWORD v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  callui(11, v9, a3);
  v5 = v9[0];
  v9[0] = &off_15D6D0;
  v9[1] = v5;
  if ( strstr(a1, "static ") )
  {
    ((void (__fastcall *)(const char *, _QWORD, char *, __int64))loc_6597C)("main", 0, byte_103C09, 7);
    v6 = compile_idc_text((__int64)a1, (__int64)a2, (__int64)v9, 0);
    v7 = 0;
    if ( (v6 & 1) != 0 )
      v7 = call_idc_func(nullptr, (__int64)"main", nullptr, 0, a2, (__int64)v9);
  }
  else
  {
    v7 = eval_idc_snippet(nullptr, a1, a2, (__int64)v9);
  }
  return v7 & 1;
}
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
