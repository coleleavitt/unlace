/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CAE4
// Address: 0x0001CAE4

//----- (0001CAE4) --------------------------------------------------------
int __fastcall sub_1CAE4(_DWORD *a1)
{
  int v1; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  double v9; // r2
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  double v15; // [sp+0h] [bp-18h] BYREF
  _DWORD v16[2]; // [sp+Ch] [bp-Ch] BYREF

  v1 = (unsigned __int8)byte_D4951;
  if ( !byte_D4951 )
    return 0;
  sub_53ED4((int)a1, "DBG: checking pid %d with thread_db\n", a1[267]);
  a1[214] = a1[267];
  v4 = off_D4954(a1 + 214, a1 + 215);
  if ( v4 )
  {
    v11 = sub_15CF8(v4);
    sub_53ED4((int)a1, "DBG: td_ta_new: %s\n", v11);
    a1[215] = 0;
    return 0;
  }
  v5 = off_D4988(a1[215], a1[267], (char *)&v15 + 4);
  if ( v5 )
  {
    v10 = sub_15CF8(v5);
    sub_171B0((int)"%s: %s\n", "td_ta_map_lwp2thr", v10);
    return 0;
  }
  v6 = off_D4990((char *)&v15 + 4, 8);
  if ( v6 )
  {
    v13 = sub_15CF8(v6);
    sub_17188("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v13);
  }
  v7 = off_D4990((char *)&v15 + 4, 9);
  if ( v7 )
  {
    v14 = sub_15CF8(v7);
    sub_17188("%s: %s\n", "td_thr_event_enable(TD_DEATH)", v14);
  }
  v16[1] = 0;
  v16[0] = 384;
  v8 = off_D4978(a1[215], v16);
  if ( v8 )
  {
    v12 = sub_15CF8(v8);
    sub_17188("%s: %s\n", "td_ta_set_event", v12);
  }
  sub_1CA34((int)a1, 8, a1 + 216);
  sub_1CA34((int)a1, 9, a1 + 219);
  HIDWORD(v9) = a1[219];
  LODWORD(v9) = a1[216];
  sub_53ED4((int)a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", v9, v15);
  sub_1C2DC((int)a1);
  return v1;
}
// D4951: using guessed type char byte_D4951;
// D4954: using guessed type int (__fastcall *off_D4954)(_DWORD, _DWORD);
// D4978: using guessed type int (__fastcall *off_D4978)(_DWORD, _DWORD);
// D4988: using guessed type int (__fastcall *off_D4988)(_DWORD, _DWORD, _DWORD);
// D4990: using guessed type int (__fastcall *off_D4990)(_DWORD, _DWORD);
