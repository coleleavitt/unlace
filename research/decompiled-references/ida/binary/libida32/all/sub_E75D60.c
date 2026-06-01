__int64 __fastcall sub_E75D60(__int64 a1, _BYTE ***a2, _QWORD *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+4h] [rbp-84h] BYREF
  char v10; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v11[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FA3370(v11, *a3, a4[6], 2512);
  sub_AC84E0(v11, **a2, (signed __int64)(*a2)[1]);
  v7 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 16LL))(a4);
  v10 = 1;
  v9 = v7;
  sub_AC88D0((__int64 *)v11, &v9);
  sub_E74100(v11, a5);
  sub_FA33B0(a1, v11);
  sub_AC6300((__int64)v11);
  return a1;
}

