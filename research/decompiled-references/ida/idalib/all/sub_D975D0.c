__int64 __fastcall sub_D975D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r13
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r12d
  void *v15; // r13
  void *v17; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-70h]
  void *v19; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-60h]
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+2Ch] [rbp-4Ch]
  void *v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]

  v5 = a3;
  v6 = sub_CE6180(
         a1[23],
         *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL),
         a3,
         a4,
         a5);
  v10 = sub_CE6180(
          a1[23],
          *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
          v7,
          v8,
          v9);
  sub_D8B1A0((__int64)&v17, a1[22], v6);
  sub_D8B1A0((__int64)&v19, a1[22], v10);
  v22 = 1;
  v21 = nullptr;
  v23 = 0;
  v11 = sub_2208020(&v17, v20);
  if ( v5 )
    sub_220B740(&v24, &v19, v11);
  else
    sub_220B480(&v24, &v19, v11);
  v14 = v25;
  v25 = 0;
  v15 = v24;
  if ( v22 > 0x40 && v21 )
  {
    operator delete[](v21);
    v21 = v15;
    v22 = v14;
    v23 = 1;
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  else
  {
    v21 = v24;
    v22 = v14;
    v23 = 1;
  }
  sub_D8FFE0(a1, (__int64)&v21, *(_QWORD *)(a2 + 8), v12, v13);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return 1;
}
