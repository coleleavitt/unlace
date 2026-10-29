__int64 __fastcall sub_DCD6A0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  void *v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  void *v12; // r12
  unsigned int v13; // r12d
  void *v14; // r15
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  void *v20; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-50h]
  char v22; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-40h]

  v7 = ((unsigned __int64)a2 + 63) >> 6;
  if ( v7 == 1 )
  {
    v9 = nullptr;
    v10 = 0;
  }
  else
  {
    v18 = a1[71];
    v19 = 8 * v7;
    a1[81] += v19;
    v10 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v19 + v10 && v18 )
    {
      a1[71] = v19 + v10;
      v9 = (void *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v9 = (void *)sub_962430((__int64)(a1 + 71), v19, v19, 3, a5, a6);
      v10 = (unsigned __int64)v9;
    }
  }
  v11 = a1[22];
  v12 = (void *)*(unsigned __int16 *)sub_DFDA20(v11, 8);
  sub_DFDA50(v11, 8);
  v20 = v12;
  v21 = 16;
  v22 = 1;
  sub_21E3050(&src, &v20, a2);
  v13 = v24;
  v14 = src;
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v13 > 0x40 )
  {
    memcpy(v9, v14, 8 * (((unsigned __int64)v13 + 63) >> 6));
    v15 = v14;
    v14 = (void *)v10;
    operator delete[](v15);
  }
  v16 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v16 = v14;
  *(_DWORD *)(v16 + 8) = a2;
  return 1;
}

