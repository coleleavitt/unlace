/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_176D8
// Address: 0x000176D8

//----- (000176D8) --------------------------------------------------------
int __fastcall sub_176D8(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r0
  const char *v7; // r0
  const char *v8; // r0
  _DWORD v9[2]; // [sp+4h] [bp-10h] BYREF

  v9[0] = 416;
  v9[1] = 0;
  v4 = off_D4984(a3, v9);
  if ( v4 )
  {
    v8 = sub_15CF8(v4);
    sub_17188("%s: %s\n", "td_thr_set_event", v8);
  }
  v5 = off_D4990(a3, 1);
  if ( !v5 )
    return 1;
  v7 = sub_15CF8(v5);
  sub_171B0((int)"%s: %s\n", "td_thr_event_enable", v7);
  return 0;
}
// D4984: using guessed type int (__fastcall *off_D4984)(_DWORD, _DWORD);
// D4990: using guessed type int (__fastcall *off_D4990)(_DWORD, _DWORD);
