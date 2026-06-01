__int64 __fastcall sub_E98F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // [rsp+4h] [rbp-84h] BYREF
  char v9; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v10[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FC70B0(v10, **(_QWORD **)(a2 + 16), a3, 2328);
  sub_E98080(v10, *(_QWORD *)a2);
  sub_E97E40(v10, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) == 0);
  sub_AEC220(v10, **(_BYTE ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL));
  v8 = a4;
  v9 = 1;
  sub_AEC610((__int64 *)v10, &v8);
  sub_E97E40(v10, a5);
  sub_FC70F0(a1, v10);
  sub_AEA040((__int64)v10);
  return a1;
}
