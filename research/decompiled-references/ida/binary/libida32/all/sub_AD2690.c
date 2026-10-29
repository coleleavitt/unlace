__int64 __fastcall sub_AD2690(__int64 *a1, __int64 a2, __int64 a3)
{
  void *v5; // rbx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r14
  void *v25; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-70h]
  void *v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+18h] [rbp-60h]
  void *v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h]

  LODWORD(v5) = sub_ACDF50(*a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a3 + 8));
  if ( !(_BYTE)v5 )
    return (unsigned int)v5;
  if ( (HIBYTE(*(_DWORD *)a2) & 1) != (HIBYTE(*(_DWORD *)a3) & 1) )
    return 0;
  v7 = sub_21D4FB0(*(_BYTE *)(a3 + 2) >> 3);
  v8 = *(void **)(a3 + 16);
  v9 = v7;
  v10 = *(unsigned int *)(a3 + 24);
  v11 = (unsigned __int64)(v10 + 63) >> 6;
  if ( v11 > 1 )
  {
    sub_21E18D0(&v29, v10, v11, v8);
  }
  else
  {
    LODWORD(v30) = *(_DWORD *)(a3 + 24);
    if ( (unsigned int)v10 > 0x40 )
      sub_21E1730(&v29, v8, 0);
    else
      v29 = v8;
  }
  v12 = sub_21D5390();
  v13 = (void *)v12;
  if ( v9 == v12 )
    sub_21DC060(&v27, v12, &v29);
  else
    sub_21DBA90(&v27, v9, &v29);
  if ( (unsigned int)v30 > 0x40 && v29 )
    operator delete[](v29);
  v14 = sub_21D4FB0(*(_BYTE *)(a2 + 2) >> 3);
  v15 = *(void **)(a2 + 16);
  v5 = (void *)v14;
  v16 = *(unsigned int *)(a2 + 24);
  v17 = (unsigned __int64)(v16 + 63) >> 6;
  if ( v17 > 1 )
  {
    sub_21E18D0(&v25, v16, v17, v15);
  }
  else
  {
    v26 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v16 > 0x40 )
      sub_21E1730(&v25, v15, 0);
    else
      v25 = v15;
  }
  if ( v5 == v13 )
    sub_21DC060(&v29, v13, &v25);
  else
    sub_21DBA90(&v29, v5, &v25);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v29 == v13 )
    v18 = sub_21DD2E0(&v29, &v27);
  else
    v18 = sub_21D6700(&v29, &v27);
  LOBYTE(v5) = v18 == 1;
  if ( v13 == v29 )
  {
    v22 = v30;
    if ( v30 )
    {
      v23 = 24LL * *(_QWORD *)(v30 - 8);
      v24 = v30 + v23;
      if ( v30 != v30 + v23 )
      {
        while ( 1 )
        {
          v22 = v24 - 24;
          sub_971860((_QWORD *)(v24 - 24));
          if ( v30 == v24 - 24 )
            break;
          v24 -= 24;
        }
        v23 = 24LL * *(_QWORD *)(v24 - 32);
      }
      operator delete[]((void *)(v22 - 8), v23 + 8);
    }
  }
  else
  {
    sub_21D5AF0(&v29);
  }
  if ( v13 == v27 )
  {
    v19 = v28;
    if ( v28 )
    {
      v20 = 24LL * *(_QWORD *)(v28 - 8);
      v21 = v28 + v20;
      if ( v28 != v28 + v20 )
      {
        while ( 1 )
        {
          v19 = v21 - 24;
          sub_971860((_QWORD *)(v21 - 24));
          if ( v28 == v21 - 24 )
            break;
          v21 -= 24;
        }
        v20 = 24LL * *(_QWORD *)(v21 - 32);
      }
      operator delete[]((void *)(v19 - 8), v20 + 8);
    }
    return (unsigned int)v5;
  }
  sub_21D5AF0(&v27);
  return (unsigned int)v5;
}

