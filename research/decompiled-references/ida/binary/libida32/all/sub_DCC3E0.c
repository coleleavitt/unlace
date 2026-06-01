__int64 __fastcall sub_DCC3E0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  void *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  void *v9; // r9
  unsigned __int64 v10; // r8
  void *v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  void *v19; // rbx
  __int64 v20; // rax
  void *v21; // [rsp+8h] [rbp-70h]
  void *v22; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-40h]

  v1 = a1[22];
  v2 = sub_DFDA20(v1, 16);
  v3 = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  sub_DFDA50(v1, 16);
  v5 = a1[22];
  v21 = v3;
  v6 = (__int64 *)sub_DFDA20(v5, 16);
  v7 = *v6;
  v8 = v6[1];
  sub_DFDA50(v5, 16);
  v9 = (void *)v7;
  v10 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
  if ( v10 == 1 )
  {
    v24 = v4;
    if ( (unsigned int)v4 > 0x40 )
    {
      sub_21E1730(&src, v3, 0);
      v11 = nullptr;
      v12 = 0;
      v9 = (void *)v7;
    }
    else
    {
      src = v3;
      v11 = nullptr;
      v12 = 0;
    }
    v13 = ((unsigned __int64)(unsigned int)v8 + 63) >> 6;
    if ( v13 == 1 )
      goto LABEL_5;
  }
  else
  {
    v16 = a1[71];
    a1[81] += 8 * v10;
    v12 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v17 = 8 * v10 + v12;
    if ( a1[72] >= v17 && v16 )
    {
      a1[71] = v17;
      v11 = (void *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v20 = sub_962430((__int64)(a1 + 71), 8 * v10, 8 * v10, 3, v10, v7);
      v9 = (void *)v7;
      v10 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
      v11 = (void *)v20;
      v12 = v20;
    }
    v22 = v9;
    sub_21E18D0(&src, (unsigned int)v4, (unsigned int)v10, v21);
    v9 = v22;
    v13 = ((unsigned __int64)(unsigned int)v8 + 63) >> 6;
    if ( v13 == 1 )
    {
LABEL_5:
      v26 = v8;
      if ( (unsigned int)v8 > 0x40 )
        sub_21E1730(&v25, v9, 0);
      else
        v25 = v9;
      if ( v24 <= 0x40 )
        goto LABEL_8;
      goto LABEL_21;
    }
  }
  sub_21E18D0(&v25, (unsigned int)v8, v13, v9);
  if ( v24 <= 0x40 )
  {
LABEL_8:
    v12 = (unsigned __int64)v25 & (unsigned __int64)src;
    v24 = 0;
    src = (void *)((unsigned __int64)v25 & (unsigned __int64)src);
    goto LABEL_9;
  }
LABEL_21:
  sub_21E1E20(&src, &v25);
  v18 = v24;
  v19 = src;
  v24 = 0;
  if ( v18 <= 0x40 )
  {
    v12 = (unsigned __int64)src;
  }
  else
  {
    memcpy(v11, src, 8 * (((unsigned __int64)v18 + 63) >> 6));
    operator delete[](v19);
  }
LABEL_9:
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v24 > 0x40 && src )
    operator delete[](src);
  v14 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v14 = v12;
  *(_DWORD *)(v14 + 8) = v4;
  return 1;
}

