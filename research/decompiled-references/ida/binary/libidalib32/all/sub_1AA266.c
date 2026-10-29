__int64 __fastcall sub_1AA266(__int64 a1)
{
  int v2; // [rsp+1Ch] [rbp-4h]

  v2 = sub_1AA452(a1, 0xFFFFFFFFLL);
  if ( v2 == 2 )
    return sub_1AA332(a1, "Microdump skipped (uninteresting)");
  sub_1AA332(a1, "-----BEGIN BREAKPAD MICRODUMP-----");
  sub_1AA64C(a1);
  sub_1AA7D4(a1);
  sub_1AA6B4(a1);
  sub_1AA71C(a1);
  sub_1AA9BC(a1);
  if ( !v2 )
    sub_1AAA24(a1);
  sub_1AABCE(a1);
  sub_1AB100(a1);
  return sub_1AA332(a1, "-----END BREAKPAD MICRODUMP-----");
}

