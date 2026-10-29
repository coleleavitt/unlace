__int64 __fastcall sub_DCE420(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 **v2; // rbp
  __int64 v3; // rax
  __int64 v5; // [rsp+4h] [rbp-24h] BYREF
  char v6; // [rsp+Ch] [rbp-1Ch]

  v1 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v2 = (unsigned __int8 **)sub_E33C90(a1, v1, 2489, 0);
  if ( v2 )
  {
    sub_AE9DF0(v2, *(_QWORD *)((*(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8), 8u);
    v3 = sub_EEC8C0(*(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = 1;
    v5 = v3;
    sub_AEC610((__int64 *)v2, &v5);
  }
  return 0;
}
