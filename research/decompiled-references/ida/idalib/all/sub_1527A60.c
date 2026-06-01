void __fastcall sub_1527A60(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r12d
  __int64 v3; // r14
  char v4; // r13
  int v5; // eax
  __int64 v6; // rbp
  unsigned int *v7; // rax
  size_t v8; // r15
  int v9; // ecx
  __int64 v10; // rsi
  bool v11; // al
  const void *v12; // r8
  char v13; // al
  char v14; // al
  const void *v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+8h] [rbp-90h]
  const void *v17; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v18[17]; // [rsp+10h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)v1;
  v4 = *(_BYTE *)(v1 + 8);
  v5 = *(_DWORD *)(a1 + 20);
  if ( !v5 )
    v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_QWORD *)(a1 + 96) + 200LL;
  v7 = *(unsigned int **)(v3 + 16);
  v8 = *v7;
  if ( v8 == 3 && *((_WORD *)v7 + 8) == 27745 && *((_BYTE *)v7 + 18) == 108 )
  {
    if ( v4 )
    {
      sub_FC70B0((__int64)v18, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), v2, 2194);
      sub_1520C80(v18, 1);
      sub_AEA040((__int64)v18);
    }
    else
    {
      sub_FFA600(*(_QWORD *)(a1 + 96) + 200LL);
    }
  }
  else if ( v4 == 2 )
  {
    v16 = (__int64)(v7 + 4);
    v11 = sub_FF7E70(*(_QWORD *)(a1 + 96) + 200LL, (__int64)(v7 + 4), *v7);
    v12 = (const void *)v16;
    if ( !v11 || (v13 = sub_FF8060(v6, v16, v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)), v12 = (const void *)v16, !v13) )
    {
      v17 = v12;
      sub_FFAA10(v6, v12, v8, 1);
      sub_FFA8F0(v6, v17, v8, 1);
    }
  }
  else if ( v4 != 3 )
  {
    v15 = v7 + 4;
    if ( sub_FF7E70(*(_QWORD *)(a1 + 96) + 200LL, (__int64)(v7 + 4), *v7)
      && (unsigned __int8)sub_FF7FC0(v6, (__int64)v15, v8) )
    {
      if ( (unsigned __int8)sub_FF8360(v6, (__int64)v15, v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
      {
        sub_FFA7D0(v6, v15, v8, v4 == 1);
        return;
      }
      v14 = sub_FF86D0(v6, (__int64)v15, v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL));
      v9 = 2201;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
      if ( !v14 )
        v9 = 2219;
    }
    else
    {
      v9 = 2216;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
    }
    sub_FC70B0((__int64)v18, v10, v2, v9);
    sub_AE9DF0(v18, v3, 5u);
    sub_AEA040((__int64)v18);
  }
}
