double __fastcall sub_809450(__int64 a1)
{
  void **v2; // rdi
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  double v11; // rbp
  __int64 *v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rsi
  void *v16; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+18h] [rbp-40h]

  v2 = (void **)(*(_BYTE *)(a1 + 2) >> 3);
  v3 = sub_2575940(v2);
  v4 = *(void **)(a1 + 16);
  v5 = v3;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  if ( (unsigned __int64)(v6 + 63) > 0x7F )
  {
    v2 = &v16;
    sub_2585D40(&v16, v6, v7, v4);
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 24);
    v16 = v4;
  }
  v8 = sub_2575D20(v2, v6, v7);
  v9 = v8;
  if ( v5 == v8 )
    sub_2581430(&v18, v8, &v16);
  else
    sub_2583C60(&v18, v5, &v16);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  v10 = sub_2575D00();
  sub_2582620(&v18, v10, 1, &v16);
  v11 = sub_2582900(&v18);
  if ( v18 != v9 )
  {
    sub_25769A0(&v18);
    return v11;
  }
  v13 = v19;
  if ( !v19 )
    return v11;
  v14 = &v19[3 * *(v19 - 1)];
  if ( v19 == v14 )
  {
    v15 = 0;
  }
  else
  {
    do
    {
      v14 -= 3;
      sub_5FF3B0(v14);
    }
    while ( v13 != v14 );
    v15 = 24 * *(v13 - 1);
  }
  operator delete[](v13 - 1, v15 + 8);
  return v11;
}

