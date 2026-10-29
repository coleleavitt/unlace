__int64 __fastcall sub_DC3160(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // r12d
  _DWORD v5[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v5);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v5, 3);
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)sub_DFDF30(a1) || v5[6] || !sub_D8CD70((__int64)v5) )
    {
      if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) != 0 )
        *(_BYTE *)sub_CEAA70((__int64)v5) = 1;
      else
        v3 = sub_CDB0E0(a1, (__int64)a2);
    }
    else
    {
      v3 = 0;
    }
  }
  sub_DFF560(v5);
  return v3;
}

