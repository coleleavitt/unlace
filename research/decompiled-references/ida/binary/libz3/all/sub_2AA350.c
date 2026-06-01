__int64 __fastcall sub_2AA350(__int64 (__fastcall **a1)(__int64, __int64), __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-A8h] BYREF
  void *v12; // [rsp+8h] [rbp-A0h]
  __int64 v13; // [rsp+18h] [rbp-90h] BYREF
  void *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  void *v16; // [rsp+58h] [rbp-50h]
  _QWORD v17[8]; // [rsp+68h] [rbp-40h] BYREF

  v6 = *a2;
  sub_15B16F0(&v11);
  v17[2] = a3;
  v7 = sub_186B270(0xBC0u);
  sub_250450(v7, &v11, 0);
  v8 = (_QWORD *)sub_186B270(0x10u);
  v8[1] = v7;
  *v8 = &off_1C4CC70;
  *a4 = v8;
  v9 = (*a1)(v6, v7);
  if ( v16 != v17 )
    operator delete(v16, v17[0] + 1LL);
  if ( v14 != &v15 )
    operator delete(v14, v15 + 1);
  if ( v12 != &v13 )
    operator delete(v12, v13 + 1);
  return v9;
}

