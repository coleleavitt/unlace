__int64 __fastcall sub_739A80(__int64 a1)
{
  unsigned int **v1; // rbp
  unsigned int *v2; // r14
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int *v23; // rbp
  int v24; // r12d
  __int64 v25; // rdx
  unsigned int *v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int16 v28; // [rsp+1Eh] [rbp-3Ah]

  v1 = *(unsigned int ***)(*(_QWORD *)(a1 + 2664) + 8LL);
  if ( !v1 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v23 = (unsigned int *)(a1 + 1640);
    v24 = 0;
    do
    {
      v25 = *v23;
      v26 = v23;
      ++v24;
      v23 += 8;
      sub_745040(a1, v26, v25);
    }
    while ( v24 < *(__int16 *)(a1 + 1634) );
    v1 = *(unsigned int ***)(*(_QWORD *)(a1 + 2664) + 8LL);
  }
  v2 = *v1;
  v3 = sub_73ABC0(a1);
  if ( !v3 )
    return 0;
  v28 = *((_WORD *)v2 + 2);
  v27 = *(_QWORD *)(a1 + 16);
  v4 = sub_73F210(v27);
  v5 = sub_742470(v1, v4, v28 - 2LL, 0);
  if ( v4 != v5 )
    sub_73D680(v4, v5);
  v6 = sub_744F40(a1, v5);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v6;
  sub_745920(a1, v7, *(unsigned int *)(v6 + 24), v4, *(unsigned int *)(v3 + 12));
  v9 = 2 * (3LL * v28 - 3);
  v10 = (unsigned int *)*(unsigned __int16 *)((char *)*v1 + v9 + 10);
  if ( (unsigned __int16)v10 > 1u || (v10 = v1[*(unsigned __int16 *)((char *)*v1 + v9 + 10) + 2]) == nullptr )
    sub_743130(a1, v7, v10);
  v11 = *(_DWORD **)v3;
  if ( *v2 )
  {
    if ( v28 == 1 )
    {
      *v11 = *v2;
      v22 = 0;
    }
    else
    {
      v20 = *(unsigned int *)((char *)v2 + 6 * v28 - 6);
      if ( !v20 )
        sub_743130(a1, v11, v10);
      *v11 = v20;
      if ( !v28 )
      {
        v21 = *v2;
LABEL_24:
        if ( !(_DWORD)v21 )
          sub_743130(a1, v11, v10);
        sub_745920(a1, v3, 0, v10, v21);
        sub_746060(a1, v1, (unsigned int)(*((__int16 *)v2 + 2) - 1));
        sub_746060(a1, v1, (unsigned int)(*((__int16 *)v2 + 2) - 1));
        goto LABEL_9;
      }
      v22 = 6LL * (v28 - 1);
    }
    v21 = *(unsigned int *)((char *)v2 + v22 + 6);
    goto LABEL_24;
  }
  *v11 = 0;
  sub_73D6E0(v4, *(unsigned __int16 *)((char *)v2 + v9 + 6));
  sub_745C40(a1, v3, 0, v4, 0);
  sub_746320(a1, v1, (unsigned int)(*((__int16 *)v2 + 2) - 1));
  sub_746320(a1, v1, (unsigned int)(*((__int16 *)v2 + 2) - 1));
LABEL_9:
  if ( v1[2] || v1[3] )
  {
    if ( !under_debugger )
      interr(2489);
    BUG();
  }
  v12 = *(_QWORD *)(v8 + 8);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 32);
    v14 = v13 + 100;
    if ( v13 >= 0xFFFFFF9C )
      v14 = -1;
    *(_DWORD *)(v12 + 32) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 5796) = *((_DWORD *)v1 + 3);
  }
  v15 = *(_DWORD *)(v3 + 32);
  v16 = v15 + 100;
  if ( v15 >= 0xFFFFFF9C )
    v16 = -1;
  *(_DWORD *)(v3 + 32) = v16;
  v17 = *((_DWORD *)v1 + 8);
  v18 = v17 + 100;
  if ( v17 >= 0xFFFFFF9C )
    v18 = -1;
  *((_DWORD *)v1 + 8) = v18;
  sub_73AB60(a1, v3);
  sub_73AB60(a1, v1);
  sub_73F260(v27, v4);
  return 1;
}
