__int64 __fastcall sub_D8E900(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rdi
  __int64 v3; // rbx
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h] BYREF
  __int128 vars38; // [rsp+38h] [rbp+38h]
  int vars48; // [rsp+48h] [rbp+48h]
  __int64 vars50; // [rsp+50h] [rbp+50h]
  __int64 vars58; // [rsp+58h] [rbp+58h]
  __int64 vars60; // [rsp+60h] [rbp+60h]
  int vars68; // [rsp+68h] [rbp+68h]

  v1 = *a1;
  sub_DFDA20(*a1, 48);
  sub_DFF520(_0);
  sub_DFDA50(v1, 48);
  v2 = *a1;
  vars38 = 0;
  vars30 = 0;
  vars48 = 1;
  vars58 = 0;
  vars50 = 0;
  vars60 = 0;
  vars68 = 0;
  v3 = sub_DFD980(v2, 64);
  sub_DFF520(v3);
  *(_QWORD *)(v3 + 48) = vars60;
  *(_DWORD *)(v3 + 56) = vars68;
  sub_DFF560(&vars30);
  sub_DFF560(_0);
  return 1;
}

