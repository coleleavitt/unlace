__int64 __fastcall sub_E98D20(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+4h] [rbp-84h] BYREF
  char v11; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v12[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FC70B0(v12, **(_QWORD **)(a2 + 24), *(unsigned int *)(*(_QWORD *)(a2 + 16) + 24LL), 2519);
  sub_E97E40(v12, *(_QWORD *)(a2 + 8) == 0);
  sub_AEC220(v12, *(_BYTE **)a2, *(_QWORD *)(a2 + 8));
  v4 = *(_DWORD **)(a2 + 16);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
  if ( v5 == sub_9C4AE0 )
  {
    LODWORD(v6) = sub_BA8020((__int64)v4);
    v7 = v4[6];
  }
  else
  {
    v9 = v5((__int64)v4);
    v7 = v9;
    v6 = HIDWORD(v9);
  }
  v10 = __PAIR64__(v6, v7);
  v11 = 1;
  sub_AEC610((__int64 *)v12, (__int64 *)&v10);
  sub_E97E40(v12, a3);
  sub_FC70F0(a1, v12);
  sub_AEA040((__int64)v12);
  return a1;
}
