_QWORD *__fastcall sub_1583E80(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rax
  unsigned __int64 v11; // rdi
  _BYTE *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 64) && *(_QWORD *)(a2 + 56) )
  {
    sub_168B9B0(&v13, *(_QWORD *)(a2 + 16) + 8LL, 6416);
    v5 = *(__int64 **)(a2 + 56);
    sub_157E260(&v13, (__int64)v5);
    v9 = *(_QWORD **)(a2 + 56);
    v10 = *(__int64 (**)(void))(*v9 + 64LL);
    if ( (char *)v10 == (char *)sub_6EF210 )
    {
      v5 = &v15;
      v11 = sub_B7F750(v9, &v15, (__int64)sub_6EF210, v6, v7, v8);
    }
    else
    {
      v11 = v10();
    }
    LODWORD(v15) = sub_EEB7E0(v11, (__int64)v5, a3);
    sub_1582CA0((__int64)&v16, &v13);
    if ( v13 && v14 )
      sub_1580C40(v14, (unsigned __int64)v13);
    *a1 = a1 + 2;
    a1[1] = 0x100000000LL;
    sub_1583880((__int64)a1, (__int64)&v15);
    if ( v16 && v17 )
    {
      sub_1580C40(v17, v16);
      return a1;
    }
  }
  else
  {
    *a1 = a1 + 2;
    a1[1] = 0x100000000LL;
  }
  return a1;
}
