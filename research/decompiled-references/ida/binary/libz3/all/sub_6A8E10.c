__int64 __fastcall sub_6A8E10(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // r12
  __int64 *v4; // rdi
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  _QWORD v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(__int64 **)(a1 + 32);
  v3 = *v2;
  sub_6AA9A0(v2 + 96);
  v4 = (__int64 *)v2[18];
  if ( v4 != v2 + 20 )
    operator delete(v4, v2[20] + 1);
  v5 = (__int64 *)v2[14];
  if ( v5 != v2 + 16 )
    operator delete(v5, v2[16] + 1);
  sub_186B220(v2);
  v6 = (_QWORD *)sub_186B270(0x350u);
  v11[0] = 0;
  *v6 = v3;
  v7 = v6 + 1;
  v8 = v6;
  sub_2527E0((__int64)(v6 + 1), (__int64)v11);
  sub_18572D0(v11);
  v9 = *v8;
  v11[0] = 0;
  sub_6AA910(v8 + 96, v9, v7, v11);
  sub_18572D0(v11);
  sub_15B6B30(v7, a1 + 40);
  *((_BYTE *)v8 + 73) = sub_1859610(a1 + 40, "qe_nonlinear", 0);
  result = sub_6AA5B0(v8 + 96, a1 + 40);
  *(_QWORD *)(a1 + 32) = v8;
  return result;
}

