/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B000
// Address: 0x000000000040B000

//----- (000000000040B000) ----------------------------------------------------
__int64 __fastcall sub_40B000(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // w0
  int v5; // w0
  unsigned int v6; // w1
  const char *v8; // x0
  const char *v9; // x0
  __int64 v10; // [xsp+20h] [xbp-10h] BYREF

  v10 = 416;
  v4 = off_522098(a3, &v10, &_stack_chk_guard);
  if ( v4 )
  {
    v9 = sub_4084C0(v4);
    sub_40A608("%s: %s\n", "td_thr_set_event", v9);
  }
  v5 = off_5220B0(a3, 1);
  v6 = 1;
  if ( v5 )
  {
    v8 = sub_4084C0(v5);
    sub_40A690((int)"%s: %s\n", "td_thr_event_enable", v8);
    return 0;
  }
  return v6;
}
// 522098: using guessed type __int64 (__fastcall *off_522098)(_QWORD, _QWORD, _QWORD);
// 5220B0: using guessed type __int64 (__fastcall *off_5220B0)(_QWORD, _QWORD);
