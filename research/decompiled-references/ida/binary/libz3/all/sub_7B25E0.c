void __fastcall sub_7B25E0(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // r12
  char v4; // al
  __int64 v5; // [rsp+10h] [rbp-48h]
  _BYTE v6[64]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 24) + 3904LL;
  sub_17F9A60(v6, "sat");
  v2 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v2 + 289) || (v4 = sub_1859630(v5, "override_incremental", v6, 0), v2 = *(_QWORD *)(a1 + 24), v4) )
  {
    v3 = sub_11B5060(v2);
    sub_18572D0(v6);
    if ( !v3 )
    {
      sub_1872CE0("");
      sub_1873130(107, 2529);
    }
  }
  else
  {
    sub_11B5060(v2);
    sub_18572D0(v6);
  }
}

