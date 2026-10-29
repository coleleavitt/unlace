__int64 __fastcall sub_DA8730(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v4; // r12d
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v6);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DA8420(a1, a2, (__int64)v6, 0);
  if ( (_BYTE)v4 )
    v4 = sub_D6A7D0(a1, (__int64)a2, (__int64)v6, v3);
  sub_DFF560(v6);
  return v4;
}

