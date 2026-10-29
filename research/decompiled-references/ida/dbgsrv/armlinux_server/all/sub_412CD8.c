/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412CD8
// Address: 0x0000000000412CD8

//----- (0000000000412CD8) ----------------------------------------------------
__int64 __fastcall sub_412CD8(__int64 a1)
{
  unsigned int v1; // w21
  int v4; // w0
  int v5; // w0
  int v6; // w0
  int v7; // w0
  __int64 v8; // x0
  int v9; // w0
  double v10; // d0
  double v11; // d1
  const char *v12; // x0
  const char *v13; // x0
  const char *v14; // x0
  const char *v15; // x0
  const char *v16; // x0
  _BYTE v17[16]; // [xsp+30h] [xbp-20h] BYREF
  __int64 v18; // [xsp+40h] [xbp-10h] BYREF

  v1 = (unsigned __int8)byte_522031;
  if ( !byte_522031 )
    return 0;
  sub_45CDF8(a1, (__int64)"DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 2044));
  *(_DWORD *)(a1 + 1648) = *(_DWORD *)(a1 + 2044);
  v4 = off_522038(a1 + 1648, a1 + 1656);
  if ( v4 )
  {
    v13 = sub_4084C0(v4);
    sub_45CDF8(a1, (__int64)"DBG: td_ta_new: %s\n", v13);
    *(_QWORD *)(a1 + 1656) = 0;
    return 0;
  }
  v5 = off_5220A0(*(_QWORD *)(a1 + 1656), *(unsigned int *)(a1 + 2044), v17);
  if ( v5 )
  {
    v12 = sub_4084C0(v5);
    sub_40A690((int)"%s: %s\n", "td_ta_map_lwp2thr", v12);
    return 0;
  }
  v6 = off_5220B0(v17, 8);
  if ( v6 )
  {
    v15 = sub_4084C0(v6);
    sub_40A608("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v15);
  }
  v7 = off_5220B0(v17, 9);
  if ( v7 )
  {
    v16 = sub_4084C0(v7);
    sub_40A608("%s: %s\n", "td_thr_event_enable(TD_DEATH)", v16);
  }
  v8 = *(_QWORD *)(a1 + 1656);
  v18 = 384;
  v9 = off_522080(v8, &v18);
  if ( v9 )
  {
    v14 = sub_4084C0(v9);
    sub_40A608("%s: %s\n", "td_ta_set_event", v14);
  }
  sub_412BE8(a1, 8, (const char **)(a1 + 1664));
  sub_412BE8(a1, 9, (const char **)(a1 + 1680));
  sub_45CDF8(a1, (__int64)"DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", v10, v11);
  sub_412058(a1);
  return v1;
}
// 412E0C: variable 'v10' is possibly undefined
// 412E0C: variable 'v11' is possibly undefined
// 522031: using guessed type char byte_522031;
// 522038: using guessed type __int64 (__fastcall *off_522038)(_QWORD, _QWORD);
// 522080: using guessed type __int64 (__fastcall *off_522080)(_QWORD, _QWORD);
// 5220A0: using guessed type __int64 (__fastcall *off_5220A0)(_QWORD, _QWORD, _QWORD);
// 5220B0: using guessed type __int64 (__fastcall *off_5220B0)(_QWORD, _QWORD);
