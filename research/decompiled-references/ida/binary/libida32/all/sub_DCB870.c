__int64 __fastcall sub_DCB870(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r9
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  void *v15; // r14
  __int64 v16; // rsi
  unsigned int v17; // eax
  void *v18; // r12
  __int64 v19; // rax
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]

  v1 = a1[22];
  v2 = (__int64 *)sub_DFDA20(v1, 16);
  v3 = v2[1];
  v4 = *v2;
  sub_DFDA50(v1, 16);
  v6 = ((unsigned __int64)(unsigned int)v3 + 63) >> 6;
  if ( v6 == 1 )
  {
    v7 = v4;
    v21 = v3;
    v8 = v3;
    if ( (unsigned int)v3 <= 0x40 )
      goto LABEL_3;
    v16 = v4;
    v15 = nullptr;
    v9 = 0;
    sub_21E1730(&src, v16, 0);
    v8 = v21;
    if ( v21 <= 0x40 )
    {
LABEL_15:
      v7 = (unsigned __int64)src;
LABEL_3:
      v9 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v8) & ~v7;
      if ( !v8 )
        v9 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v12 = a1[71];
    v13 = v4;
    a1[81] += 8 * v6;
    v9 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v14 = 8 * v6 + v9;
    if ( a1[72] >= v14 && v12 )
    {
      a1[71] = v14;
      v15 = (void *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v19 = sub_962430((__int64)(a1 + 71), 8 * v6, 8 * v6, 3, v4, v5);
      v13 = v4;
      v15 = (void *)v19;
      v9 = v19;
    }
    v16 = (unsigned int)v3;
    sub_21E18D0(&src, (unsigned int)v3, (unsigned int)v6, v13);
    v8 = v21;
    if ( v21 <= 0x40 )
      goto LABEL_15;
  }
  sub_21E2280(&src, v16);
  v17 = v21;
  v18 = src;
  v21 = 0;
  if ( v17 <= 0x40 )
  {
    v9 = (unsigned __int64)src;
  }
  else
  {
    memcpy(v15, src, 8 * (((unsigned __int64)v17 + 63) >> 6));
    operator delete[](v18);
    if ( v21 > 0x40 && src )
      operator delete[](src);
  }
LABEL_5:
  v10 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v10 = v9;
  *(_DWORD *)(v10 + 8) = v3;
  return 1;
}

