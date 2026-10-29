__int64 __fastcall sub_E99B30(__int64 a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v8; // [rsp+4h] [rbp-84h] BYREF
  char v9; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v10[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FC70B0(v10, **(_QWORD **)(a2 + 16), a3[6], 2330);
  sub_E98080(v10, *(_QWORD *)a2);
  sub_E97E40(v10, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) == 0);
  sub_AEC220(v10, **(_BYTE ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL));
  v6 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 16LL))(a3);
  v9 = 1;
  v8 = v6;
  sub_AEC610((__int64 *)v10, &v8);
  sub_E97E40(v10, a4);
  sub_FC70F0(a1, v10);
  sub_AEA040((__int64)v10);
  return a1;
}
