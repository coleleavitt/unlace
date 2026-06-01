__int64 __fastcall sub_DED0B0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r12
  void *v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  void *v14; // r14
  void *v15; // rdi
  _QWORD *v16; // rax
  void *v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-40h]

  v7 = sub_D45A20(a1, a2, a3, a4, a5, a6);
  v8 = a1[22];
  v10 = v9;
  v11 = (void *)v7;
  v12 = *(_DWORD *)sub_E21760(v8, 8);
  sub_E21790(v8, 8);
  v19 = 32;
  v18 = (void *)v12;
  v20 = 0;
  sub_2206DE0(&src, &v18, a2);
  v13 = v22;
  v14 = src;
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  if ( v13 > 0x40 )
  {
    memcpy(v11, v14, 8 * (((unsigned __int64)v13 + 63) >> 6));
    v15 = v14;
    v14 = v11;
    operator delete[](v15);
  }
  v16 = (_QWORD *)sub_E216C0(a1[22], 16);
  *v16 = v14;
  v16[1] = v10;
  return 1;
}
