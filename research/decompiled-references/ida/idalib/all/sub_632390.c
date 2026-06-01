__int64 __fastcall sub_632390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edx
  __int64 *v7; // r12
  unsigned int v9; // r14d
  char v10; // r13
  __int64 v11; // rbx
  const char *v13; // rsi
  void *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int8 v26; // al
  char v27; // dl
  unsigned __int8 v28; // dl
  void *v29; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 56);
  if ( (v6 & 0x2000) != 0 )
    return 0;
  v7 = (__int64 *)a1;
  v9 = a4;
  v10 = a5;
  if ( (v6 & 0x400) != 0 )
  {
    a1 = a3;
    v19 = ea2node(a3);
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
      a1 = *v7;
      v14 = sub_62A340(*v7, v13, 1u);
      v6 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v14 = (void *)v7[1];
    }
    v29 = v14;
    if ( (v6 & 4) != 0 )
    {
      v21 = *v7;
      v30[0] = v11;
      return sub_7BF280(&v29, v21, v30, 8);
    }
    v15 = *(unsigned __int8 *)(a2 + 32);
    if ( (v6 & 0x800) != 0 )
    {
      v22 = *(_QWORD *)(a2 + 8);
      v23 = *v7;
      v30[0] = v11;
      return sub_7BF4E0(&v29, v23, v22, v30, 8, v15);
    }
    v16 = v6 & 0xF;
    if ( *(_QWORD *)(a2 + 16) == 1 )
    {
      if ( (_DWORD)v16 )
      {
        v24 = *(_QWORD *)(a2 + 8);
        v25 = *v7;
        LOBYTE(v30[0]) = v11;
        return sub_7BE7C0(&v29, v25, v24, v30, 1, v15);
      }
    }
    else if ( (_DWORD)v16 )
    {
      v17 = *(_QWORD *)(a2 + 8);
      v18 = *v7;
      v30[0] = v11;
      return sub_7BE7C0(&v29, v18, v17, v30, 8, v15);
    }
    sub_629950(a1, v13, v16, a4, a5, v15);
  }
  if ( (v6 & 0x4070) != 0 )
    return 0;
  v20 = sub_6301E0((__int64)v7, a2);
  if ( *(_QWORD *)(a2 + 8) == 268 )
  {
    v26 = sub_6301E0((__int64)v7, (__int64)&unk_2B35BA0);
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
      sub_6306B0((__int64)v7, (__int64)&unk_2B35BA0, v26, v28, 58);
  }
  sub_6306B0((__int64)v7, a2, v20, v11, v9);
  sub_631E70(v7, v9, v20, v10);
  return 1;
}
