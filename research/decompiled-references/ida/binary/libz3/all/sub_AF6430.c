__int64 __fastcall sub_AF6430(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_AF5FE0(v13, a1, a2, a3);
  v4 = v13[0];
  v5 = v13[1];
  v6 = sub_186B270(0x38u);
  sub_13478B0(v6, *(_QWORD *)(a1 + 24), 2);
  sub_1349280(v6, v4, v7, v8, v9, v10);
  result = sub_135F980(*(_QWORD *)(a3 + 72), a2[4], v6);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

