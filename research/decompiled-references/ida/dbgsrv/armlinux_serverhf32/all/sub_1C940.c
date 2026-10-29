/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C940
// Address: 0x0001C940

//----- (0001C940) --------------------------------------------------------
int __fastcall sub_1C940(_DWORD *a1)
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

  v1 = (unsigned __int8)byte_D3931;
  if ( !byte_D3931 )
    return 0;
  sub_53D50((int)a1, "DBG: checking pid %d with thread_db\n", a1[267]);
  a1[214] = a1[267];
  v4 = off_D3934(a1 + 214, a1 + 215);
  if ( v4 )
  {
    v11 = sub_15B54(v4);
    sub_53D50((int)a1, "DBG: td_ta_new: %s\n", v11);
    a1[215] = 0;
    return 0;
  }
  v5 = off_D3968(a1[215], a1[267], (char *)&v15 + 4);
  if ( v5 )
  {
    v10 = sub_15B54(v5);
    sub_1700C((int)"%s: %s\n", "td_ta_map_lwp2thr", v10);
    return 0;
  }
  v6 = off_D3970((char *)&v15 + 4, 8);
  if ( v6 )
  {
    v13 = sub_15B54(v6);
    sub_16FE4("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v13);
  }
  v7 = off_D3970((char *)&v15 + 4, 9);
  if ( v7 )
  {
    v14 = sub_15B54(v7);
    sub_16FE4("%s: %s\n", "td_thr_event_enable(TD_DEATH)", v14);
  }
  v16[1] = 0;
  v16[0] = 384;
  v8 = off_D3958(a1[215], v16);
  if ( v8 )
  {
    v12 = sub_15B54(v8);
    sub_16FE4("%s: %s\n", "td_ta_set_event", v12);
  }
  sub_1C890((int)a1, 8, a1 + 216);
  sub_1C890((int)a1, 9, a1 + 219);
  HIDWORD(v9) = a1[219];
  LODWORD(v9) = a1[216];
  sub_53D50((int)a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", v9, v15);
  sub_1C138((int)a1);
  return v1;
}
// D3931: using guessed type char byte_D3931;
// D3934: using guessed type int (__fastcall *off_D3934)(_DWORD, _DWORD);
// D3958: using guessed type int (__fastcall *off_D3958)(_DWORD, _DWORD);
// D3968: using guessed type int (__fastcall *off_D3968)(_DWORD, _DWORD, _DWORD);
// D3970: using guessed type int (__fastcall *off_D3970)(_DWORD, _DWORD);
