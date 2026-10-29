__int64 __fastcall sub_AF6610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h]
  __int64 v15; // [rsp+18h] [rbp-70h]
  __int64 v16; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF

  sub_AF1C60(a2);
  sub_AF5DD0(a1, a2 + 64);
  sub_AF57B0(a1, a2 + 64);
  v16 = 0;
  sub_AF1460(a1, (_QWORD *)(a2 + 64), &v16);
  v13 = v16;
  v17 = 0;
  v18 = 0;
  sub_AF1810(a1, (_QWORD *)(a2 + 64), &v16, &v17, &v18);
  v4 = v18;
  v14 = v17;
  sub_AEE960(v19, a1, a2, a3, (int)&v17, (int)&v18);
  v5 = v19[0];
  v15 = v19[1];
  sub_AEDB10(a2);
  v6 = sub_186B270(0x38u);
  sub_13478B0(v6, *(_QWORD *)(a1 + 24), 2);
  sub_1349280(v6, v5, v7, v8, v9, v10);
  sub_135F980(*(_QWORD *)(a3 + 72), *(_QWORD *)(a2 + 32), v6);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v15, v5);
  }
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  result = v13;
  if ( v13 )
    return sub_186B220((void *)(v13 - 8));
  return result;
}

