__int64 __fastcall sub_DCC680(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  void *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  void *v7; // r13
  __int64 v8; // r15
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r12
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void *v20; // rsi
  __int64 v21; // rax
  void *dest; // [rsp+8h] [rbp-70h]
  void *v23; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-50h]
  void *v26; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-40h]

  v1 = a1[22];
  v2 = sub_DFDA20(v1, 16);
  v3 = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  sub_DFDA50(v1, 16);
  v5 = a1[22];
  v23 = v3;
  v6 = sub_DFDA20(v5, 16);
  v7 = *(void **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  sub_DFDA50(v5, 16);
  v10 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
  if ( v10 == 1 )
  {
    v25 = v4;
    if ( (unsigned int)v4 > 0x40 )
    {
      v20 = v3;
      v11 = 0;
      sub_21E1730(&src, v20, 1);
    }
    else
    {
      src = v3;
      v11 = 0;
      sub_CD43C0((unsigned __int64 *)&src);
    }
    v12 = v8;
    dest = nullptr;
  }
  else
  {
    v18 = a1[71];
    a1[81] += 8 * v10;
    v11 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = 8 * v10 + v11;
    if ( a1[72] >= v19 && v18 )
    {
      a1[71] = v19;
      dest = (void *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v21 = sub_962430((__int64)(a1 + 71), 8 * v10, 8 * v10, 3, v9, v10);
      v10 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
      dest = (void *)v21;
      v11 = v21;
    }
    sub_21E18D0(&src, (unsigned int)v4, (unsigned int)v10, v23);
    v12 = v8;
  }
  v13 = ((unsigned __int64)v12 + 63) >> 6;
  if ( v13 == 1 )
  {
    v27 = v12;
    if ( v12 > 0x40 )
    {
      sub_21E1730(&v26, v7, 1);
    }
    else
    {
      v26 = v7;
      sub_CD43C0((unsigned __int64 *)&v26);
    }
  }
  else
  {
    sub_21E18D0(&v26, v12, v13, v7);
  }
  v14 = v25;
  if ( v25 > 0x40 )
  {
    sub_21E1ED0(&src, &v26);
    v14 = v25;
    v15 = (unsigned __int64)src;
    v25 = 0;
    if ( v14 > 0x40 )
    {
      memcpy(dest, src, 8 * (((unsigned __int64)v14 + 63) >> 6));
      operator delete[]((void *)v15);
      goto LABEL_12;
    }
  }
  else
  {
    v15 = (unsigned __int64)v26 | (unsigned __int64)src;
    v25 = 0;
    src = (void *)((unsigned __int64)v26 | (unsigned __int64)src);
  }
  v11 = 0;
  if ( v14 )
    v11 = (__int64)(v15 << (64 - (unsigned __int8)v14)) >> (64 - (unsigned __int8)v14);
LABEL_12:
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && src )
    operator delete[](src);
  v16 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v16 = v11;
  *(_DWORD *)(v16 + 8) = v4;
  return 1;
}

