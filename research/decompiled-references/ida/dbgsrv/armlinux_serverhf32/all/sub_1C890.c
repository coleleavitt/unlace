/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C890
// Address: 0x0001C890

//----- (0001C890) --------------------------------------------------------
int __fastcall sub_1C890(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r4
  double v8; // r2
  const char *v9; // r0
  const char *v11; // [sp+0h] [bp-10h]
  _BYTE v12[4]; // [sp+4h] [bp-Ch] BYREF
  int v13; // [sp+8h] [bp-8h]

  v6 = off_D3960(*(_DWORD *)(a1 + 860), a2, v12);
  if ( v6 )
  {
    v9 = sub_15B54(v6);
    v7 = 0;
    sub_1700C((int)"%s: %s\n", "td_ta_event_addr", v9);
  }
  else
  {
    v7 = sub_1C824(a1, (int)a3, v13);
    if ( v7 )
    {
      if ( a2 == 8 )
        HIDWORD(v8) = "TD_CREATE";
      else
        HIDWORD(v8) = "TD_DEATH";
      LODWORD(v8) = *a3;
      sub_53D50(a1, "%a: added BP for thread event %s\n", v8, v11);
    }
    else
    {
      sub_172DC(a1, "%a: failed to add thread_db breakpoint\n", v13);
    }
  }
  return v7;
}
// 1C8D8: variable 'v11' is possibly undefined
// D3960: using guessed type int (__fastcall *off_D3960)(_DWORD, _DWORD, _DWORD);
