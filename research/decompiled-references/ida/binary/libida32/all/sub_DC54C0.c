__int64 __fastcall sub_DC54C0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebp
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v7);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8420(a1, a2, (__int64)v7, 3);
  if ( (_BYTE)v5 )
    v5 = sub_D15E70(a1, (__int64)a2, (__int64)v7, a3);
  sub_DFF560(v7);
  return v5;
}

