__int64 __fastcall sub_DCD430(__int64 a1)
{
  __int64 v1; // r12
  _DWORD v3[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v3);
  sub_DFDA50(v1, 48);
  sub_DCD0E0(a1, (__int64)v3);
  if ( !v3[6] && v4 && v5 )
  {
    sub_E00FC0(v3);
    sub_DFFFB0(v3);
  }
  sub_DFF560(v3);
  return 1;
}

