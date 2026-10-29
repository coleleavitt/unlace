__int64 __fastcall sub_D92A00(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdi
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]
  int vars38; // [rsp+38h] [rbp+38h]

  v1 = *a1;
  v2 = sub_DFDA20(*a1, 64);
  sub_DFF520(_0);
  vars30 = *(_QWORD *)(v2 + 48);
  vars38 = *(_DWORD *)(v2 + 56);
  sub_DFDA50(v1, 64);
  v3 = *a1;
  LOBYTE(v1) = *(_BYTE *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  v4 = sub_DFD980(*a1, 64);
  sub_DFF4A0(v4, _0);
  v5 = *a1;
  *(_QWORD *)(v4 + 48) = vars30;
  *(_DWORD *)(v4 + 56) = vars38;
  *(_BYTE *)sub_DFD980(v5, 8) = v1;
  sub_DFF560(_0);
  return 1;
}

