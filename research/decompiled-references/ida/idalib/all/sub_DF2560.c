__int64 __fastcall sub_DF2560(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  void *v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  void *v11; // r15
  unsigned int v12; // r12d
  void *v13; // r15
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  void *v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-40h]

  v7 = ((unsigned __int64)a2 + 63) >> 6;
  if ( v7 == 1 )
  {
    v8 = nullptr;
    v9 = 0;
  }
  else
  {
    v16 = a1[71];
    v17 = 8 * v7;
    a1[81] += v17;
    v9 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v17 + v9 && v16 )
    {
      a1[71] = v17 + v9;
      v8 = (void *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v8 = (void *)sub_986170((__int64)(a1 + 71), v17, v17, 3, a5, a6);
      v9 = (unsigned __int64)v8;
    }
  }
  v10 = a1[22];
  v11 = *(void **)sub_E21760(v10, 8);
  sub_E21790(v10, 8);
  v18 = v11;
  v19 = 64;
  v20 = 1;
  sub_2206D90(&src, &v18, a2);
  v12 = v22;
  v13 = src;
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  if ( v12 > 0x40 )
  {
    memcpy(v8, v13, 8 * (((unsigned __int64)v12 + 63) >> 6));
    operator delete[](v13);
  }
  else
  {
    v9 = 0;
    if ( v12 )
      v9 = (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
  }
  v14 = sub_E216C0(a1[22], 16);
  *(_QWORD *)v14 = v9;
  *(_DWORD *)(v14 + 8) = a2;
  return 1;
}
