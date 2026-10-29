__int64 __fastcall sub_AF64F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 result; // rax
  bool v13; // zf
  __int64 v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  _QWORD v16[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  sub_AF5FE0(v16, a1, a2, a3);
  v4 = v16[0];
  v14 = v16[1];
  sub_AEE520(v17, a1, (__int64)a2, a3);
  v5 = v17[0];
  v15 = v17[1];
  v6 = sub_186B270(0x38u);
  sub_13478B0(v6, *(_QWORD *)(a1 + 24), 2);
  v7 = sub_15E1B70(*(_QWORD *)(a1 + 24));
  sub_1349280(v6, v7, v8, v9, v10, v11);
  result = sub_135F980(*(_QWORD *)(a3 + 72), a2[4], v6);
  if ( v5 )
  {
    v13 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v15, v5);
  }
  if ( v4 )
  {
    v13 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v13 )
      return sub_15D7BC0(v14, v4);
  }
  return result;
}

