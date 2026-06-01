__int64 __fastcall sub_DA8E00(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  _QWORD v5[6]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v6[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v5);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8150(a1, a2, (__int64)v5, 9);
  if ( (_BYTE)v3 )
  {
    sub_CDAA60((__int64)v6, v5);
    sub_DA2BE0((__int64)v6);
    sub_DFF560(v6);
  }
  sub_DFF560(v5);
  return v3;
}

