__int64 __fastcall sub_CDD1D0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  _DWORD v4[8]; // [rsp-18h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-28h]
  int v6; // [rsp+10h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v4);
  sub_DFDA50(v3, 48);
  if ( !v4[6] && v5 )
  {
    if ( v6 )
    {
      sub_E00FC0(v4);
      sub_DFFFB0(v4);
    }
  }
  sub_DFF560(v4);
  return 1;
}

