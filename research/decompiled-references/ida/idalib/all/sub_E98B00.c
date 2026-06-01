__int64 __fastcall sub_E98B00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+4h] [rbp-84h] BYREF
  char v8; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v9[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FC70B0(v9, **(_QWORD **)(a2 + 32), *(unsigned int *)(*(_QWORD *)(a2 + 8) + 24LL), 2343);
  sub_E98080(v9, *(_QWORD *)a2);
  sub_E97E40(v9, *(_QWORD *)(a2 + 24) == 0);
  sub_AEC220(v9, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 24));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 16LL))(*(_QWORD *)(a2 + 8));
  v8 = 1;
  v7 = v5;
  sub_AEC610((__int64 *)v9, &v7);
  sub_E97E40(v9, a3);
  sub_FC70F0(a1, v9);
  sub_AEA040((__int64)v9);
  return a1;
}
