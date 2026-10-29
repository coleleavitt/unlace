__int64 __fastcall sub_DCBA60(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // r13
  __int64 v6; // r9
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  void *v9; // r13
  unsigned int v10; // eax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v14; // rax
  void *v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-40h]

  v1 = a1[22];
  v2 = sub_DFDA20(v1, 16);
  v3 = 16;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(void **)v2;
  sub_DFDA50(v1, 16);
  v7 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
  if ( v7 == 1 )
  {
    v19 = v4;
    if ( (unsigned int)v4 > 0x40 )
    {
      v3 = (__int64)v5;
      v9 = nullptr;
      v8 = 0;
      sub_21E1730(&src, v3, 1);
    }
    else
    {
      src = v5;
      v8 = 0;
      v9 = nullptr;
      sub_CD43C0((unsigned __int64 *)&src);
    }
  }
  else
  {
    v14 = a1[71];
    v15 = v5;
    a1[81] += 8 * v7;
    v8 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = 8 * v7 + v8;
    if ( a1[72] >= v16 && v14 )
    {
      a1[71] = v16;
      v9 = (void *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v17 = sub_962430((__int64)(a1 + 71), 8 * v7, 8 * v7, 3, (__int64)v5, v6);
      v15 = v5;
      v9 = (void *)v17;
      v8 = v17;
    }
    v3 = (unsigned int)v4;
    sub_21E18D0(&src, (unsigned int)v4, (unsigned int)v7, v15);
  }
  v10 = v19;
  if ( v19 <= 0x40 )
  {
    if ( !v19 )
      goto LABEL_19;
    v11 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v19) & ~(unsigned __int64)src;
LABEL_7:
    if ( v10 )
    {
      v8 = (__int64)(v11 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10);
      goto LABEL_9;
    }
LABEL_19:
    v8 = 0;
    goto LABEL_9;
  }
  sub_21E2280(&src, v3);
  v10 = v19;
  v11 = (unsigned __int64)src;
  v19 = 0;
  if ( v10 <= 0x40 )
    goto LABEL_7;
  memcpy(v9, src, 8 * (((unsigned __int64)v10 + 63) >> 6));
  operator delete[]((void *)v11);
  if ( v19 > 0x40 && src )
    operator delete[](src);
LABEL_9:
  v12 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v12 = v8;
  *(_DWORD *)(v12 + 8) = v4;
  return 1;
}

