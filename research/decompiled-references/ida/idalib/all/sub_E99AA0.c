__int64 __fastcall sub_E99AA0(__int64 a1, _BYTE ***a2, _QWORD *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+4h] [rbp-84h] BYREF
  char v10; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v11[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FC70B0(v11, *a3, a4[6], 2512);
  sub_AEC220(v11, **a2, (signed __int64)(*a2)[1]);
  v7 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 16LL))(a4);
  v10 = 1;
  v9 = v7;
  sub_AEC610((__int64 *)v11, &v9);
  sub_E97E40(v11, a5);
  sub_FC70F0(a1, v11);
  sub_AEA040((__int64)v11);
  return a1;
}
