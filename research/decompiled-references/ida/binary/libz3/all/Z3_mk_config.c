_QWORD *Z3_mk_config()
{
  char v0; // bp
  _QWORD *v1; // rbx

  sub_186AE80(0xFFFFFFFFLL);
  v0 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v0 )
    sub_294AA0();
  v1 = (_QWORD *)sub_186B270(0x80u);
  memset(v1, 0, 0x80u);
  sub_15B16F0(v1);
  v1[15] = 0;
  if ( v0 )
  {
    sub_2BB620(v1);
    byte_1C7EBA0 = 1;
  }
  return v1;
}

