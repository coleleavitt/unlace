__int64 __fastcall sub_1AAE66(__int64 a1)
{
  int v2; // [rsp+1Ch] [rbp-4h]

  v2 = sub_1AB052(a1, 0xFFFFFFFFLL);
  if ( v2 == 2 )
    return sub_1AAF32(a1, "Microdump skipped (uninteresting)");
  sub_1AAF32(a1, "-----BEGIN BREAKPAD MICRODUMP-----");
  sub_1AB24C(a1);
  sub_1AB3D4(a1);
  sub_1AB2B4(a1);
  sub_1AB31C(a1);
  sub_1AB5BC(a1);
  if ( !v2 )
    sub_1AB624(a1);
  sub_1AB7CE(a1);
  sub_1ABD00(a1);
  return sub_1AAF32(a1, "-----END BREAKPAD MICRODUMP-----");
}

