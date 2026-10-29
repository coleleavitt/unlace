__int64 __fastcall Z3_mk_context_rc(__int64 *a1)
{
  char v1; // bp
  __int64 v2; // rbx

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_294B40();
  sub_186AE80(0xFFFFFFFFLL);
  sub_1873000(1);
  v2 = sub_186B270(0xBC0u);
  sub_250450(v2, a1, 1);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

