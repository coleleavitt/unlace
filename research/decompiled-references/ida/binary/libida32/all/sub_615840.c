__int64 __fastcall sub_615840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edx
  __int64 v7; // r12
  unsigned int v9; // r14d
  char v10; // r13
  __int64 v11; // rbx
  const char *v13; // rsi
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int8 v26; // al
  char v27; // dl
  unsigned __int8 v28; // dl
  int v29; // [rsp+0h] [rbp-48h] BYREF
  int v30; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 56);
  if ( (v6 & 0x2000) != 0 )
    return 0;
  v7 = a1;
  v9 = a4;
  v10 = a5;
  if ( (v6 & 0x400) != 0 )
  {
    a1 = (unsigned int)a3;
    v19 = ea2node((unsigned int)a3);
    v6 = *(_DWORD *)(a2 + 56);
    a3 = v19;
  }
  v11 = a3 - (((v6 & 0x200) == 0) - 1LL);
  if ( (v6 & 0xF) != 0 )
  {
    if ( (v6 & 1) == 0 )
      return 0;
    v13 = *(const char **)(a2 + 48);
    if ( v13 )
    {
      a1 = *(_QWORD *)v7;
      v14 = sub_60DEE0(*(_QWORD *)v7, v13, 1u);
      v6 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v14 = *(_DWORD *)(v7 + 8);
    }
    v29 = v14;
    if ( (v6 & 4) != 0 )
    {
      v21 = *(_QWORD *)v7;
      v30 = v11;
      return sub_79BE80(&v29, v21, &v30, 4);
    }
    v15 = *(unsigned __int8 *)(a2 + 32);
    if ( (v6 & 0x800) != 0 )
    {
      v22 = *(_QWORD *)(a2 + 8);
      v23 = *(_QWORD *)v7;
      v30 = v11;
      return sub_79C0D0(&v29, v23, v22, &v30, 4, v15);
    }
    v16 = v6 & 0xF;
    if ( *(_QWORD *)(a2 + 16) == 1 )
    {
      if ( (_DWORD)v16 )
      {
        v24 = *(unsigned int *)(a2 + 8);
        v25 = *(_QWORD *)v7;
        LOBYTE(v30) = v11;
        return sub_79B440(&v29, v25, v24, &v30, 1, v15);
      }
    }
    else if ( (_DWORD)v16 )
    {
      v17 = *(unsigned int *)(a2 + 8);
      v18 = *(_QWORD *)v7;
      v30 = v11;
      return sub_79B440(&v29, v18, v17, &v30, 4, v15);
    }
    sub_60D4F0(a1, v13, v16, a4, a5, v15);
  }
  if ( (v6 & 0x4070) != 0 )
    return 0;
  v20 = sub_6136E0(v7, a2);
  if ( *(_QWORD *)(a2 + 8) == 192 )
  {
    v26 = sub_6136E0(v7, (__int64)&unk_2B0BBE0);
    v27 = v26 & 0xF;
    if ( (v11 & 0xFFFFFF0F) != 0 || (_DWORD)v11 == 192 )
    {
      v28 = v27 | 0xC0;
      v11 = (unsigned int)v11;
    }
    else
    {
      v28 = v11 | v27;
      v11 = 0;
    }
    if ( v26 != v28 )
      sub_613BB0(v7, (__int64)&unk_2B0BBE0, v26, v28, 58);
  }
  sub_613BB0(v7, a2, v20, v11, v9);
  sub_615340((_QWORD *)v7, v9, v20, v10);
  return 1;
}

