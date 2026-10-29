__int64 __fastcall sub_DB15A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  _DWORD v5[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v5);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v5, 4);
  if ( (_BYTE)v3 )
  {
    v3 = sub_DFDF30(a1);
    if ( (_BYTE)v3 || v5[6] || !sub_D8CD70((__int64)v5) )
    {
      sub_E0E500(a1);
      v3 = sub_CDB0E0(a1, (__int64)a2);
    }
  }
  sub_DFF560(v5);
  return v3;
}

