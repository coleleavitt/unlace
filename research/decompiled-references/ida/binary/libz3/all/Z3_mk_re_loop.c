__int64 __fastcall Z3_mk_re_loop(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    v9 = a3;
    sub_298690();
    a3 = v9;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a4 )
    v6 = sub_163D0F0(a1 + 488, a2, a3, a4);
  else
    v6 = sub_163D080(a1 + 488);
  v7 = v6;
  sub_251FD0(a1, v6);
  if ( v5 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

