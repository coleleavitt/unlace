/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412BE8
// Address: 0x0000000000412BE8

//----- (0000000000412BE8) ----------------------------------------------------
__int64 __fastcall sub_412BE8(__int64 a1, __int64 a2, const char **a3)
{
  int v5; // w0
  unsigned int v6; // w21
  double v7; // d0
  const char *v9; // x0
  _BYTE v10[8]; // [xsp+38h] [xbp-18h] BYREF
  __off64_t v11; // [xsp+40h] [xbp-10h]

  v5 = off_522090(*(_QWORD *)(a1 + 1656), a2, v10, off_522090, &_stack_chk_guard, 0);
  if ( v5 )
  {
    v9 = sub_4084C0(v5);
    v6 = 0;
    sub_40A690((int)"%s: %s\n", "td_ta_event_addr", v9);
  }
  else
  {
    v6 = (unsigned __int8)sub_412B30(a1, (__int64)a3, v11);
    if ( v6 )
      sub_45CDF8(a1, (__int64)"%a: added BP for thread event %s\n", v7, *a3);
    else
      sub_40AAF0(a1, (__int64)"%a: failed to add thread_db breakpoint\n", v7);
  }
  return v6;
}
// 412C6C: variable 'v7' is possibly undefined
// 522090: using guessed type __int64 (__fastcall *off_522090)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
