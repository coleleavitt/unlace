__int64 __fastcall sub_1838820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 a6)
{
  unsigned int v7; // r13d
  __int64 v9; // r14
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // r9
  void *v17; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-70h]
  char v19; // [rsp+Ch] [rbp-6Ch]
  void *v20; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-60h]
  char v22; // [rsp+1Ch] [rbp-5Ch]
  void *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]

  v7 = a3;
  v9 = *(_QWORD *)(a2 + 248);
  v10 = sub_F65240(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, (__int64)a5, a6);
  v20 = a5;
  v21 = 64;
  v22 = !v10;
  v14 = sub_AAC1F0(v9, a4, v11, v12, v13);
  if ( v14 == 64 )
  {
    v18 = 64;
    v17 = v20;
    v19 = v22;
  }
  else
  {
    if ( v22 )
    {
      sub_2206D90(&v23, &v20, v14);
      v19 = 1;
    }
    else
    {
      sub_2206DE0(&v23, &v20, v14);
      v19 = 0;
    }
    v18 = v24;
    v17 = v23;
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  sub_F1F190((__int64)&v23, *(_QWORD **)(a2 + 248), (void ***)&v17, a4, 0, v15);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  sub_1D3AAD0(a1, a2, &v23, a4, v7, 0);
  return a1;
}
