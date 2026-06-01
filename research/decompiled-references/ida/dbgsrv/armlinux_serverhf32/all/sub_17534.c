/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17534
// Address: 0x00017534

//----- (00017534) --------------------------------------------------------
int __fastcall sub_17534(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r0
  const char *v7; // r0
  const char *v8; // r0
  _DWORD v9[2]; // [sp+4h] [bp-10h] BYREF

  v9[0] = 416;
  v9[1] = 0;
  v4 = off_D3964(a3, v9);
  if ( v4 )
  {
    v8 = sub_15B54(v4);
    sub_16FE4("%s: %s\n", "td_thr_set_event", v8);
  }
  v5 = off_D3970(a3, 1);
  if ( !v5 )
    return 1;
  v7 = sub_15B54(v5);
  sub_1700C((int)"%s: %s\n", "td_thr_event_enable", v7);
  return 0;
}
// D3964: using guessed type int (__fastcall *off_D3964)(_DWORD, _DWORD);
// D3970: using guessed type int (__fastcall *off_D3970)(_DWORD, _DWORD);
