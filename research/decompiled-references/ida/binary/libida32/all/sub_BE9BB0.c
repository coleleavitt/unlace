void __fastcall sub_BE9BB0(__int64 a1, _QWORD *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // r12
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  void **p_src; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  bool v18; // cc
  __int64 v19; // rax
  __int64 v20; // r12
  char *v21; // rdi
  char *v22; // rdx
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  void **src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-40h]

  v9 = a2[2340];
  v10 = unk_2CAD564 == 0;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x42;
  if ( !v10 )
  {
    v24 = a6;
    v23 = a5;
    sub_EC5E10(66);
    a6 = v24;
    a5 = v23;
  }
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 52) = a6;
  v26 = sub_A73FE0((__int64)a2, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v26 > 0x40 )
    sub_21E1730(&src, 0, 0);
  else
    src = nullptr;
  v11 = sub_ECAC60(32, a2, 8);
  v10 = unk_2CAD564 == 0;
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x34;
  if ( !v10 )
    sub_EC5E10(52);
  *(_WORD *)(v11 + 1) &= 0xF801u;
  *(_QWORD *)(v11 + 8) = v9;
  v14 = v26;
  *(_DWORD *)(v11 + 28) = a3;
  p_src = (void **)&src;
  v16 = v14;
  *(_DWORD *)(v11 + 24) = v14;
  *(_QWORD *)(v11 + 16) = 0;
  v17 = (unsigned __int64)(v14 + 63) >> 6;
  if ( v16 > 0x40 )
    p_src = src;
  if ( v17 > 1 )
  {
    v19 = a2[294];
    v20 = 8 * v17;
    a2[304] += 8 * v17;
    v21 = (char *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v22 = &v21[8 * v17];
    if ( a2[295] >= (unsigned __int64)v22 && v19 )
      a2[294] = v22;
    else
      v21 = (char *)sub_962430((__int64)(a2 + 294), v20, v20, 3, v12, v13);
    *(_QWORD *)(v11 + 16) = v21;
    memmove(v21, p_src, v20);
  }
  else if ( v17 == 1 )
  {
    *(_QWORD *)(v11 + 16) = *p_src;
  }
  *(_BYTE *)(v11 + 1) &= 0x3Fu;
  *(_BYTE *)(v11 + 2) &= 0xF8u;
  v18 = v26 <= 0x40;
  *(_QWORD *)(a1 + 24) = v11;
  if ( !v18 )
  {
    if ( src )
      operator delete[](src);
  }
}

