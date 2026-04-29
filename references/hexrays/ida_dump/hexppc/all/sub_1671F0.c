__int64 __fastcall sub_1671F0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v6; // rbp
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rsi
  int v17; // r13d
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rdi
  __int64 i; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  char v26[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 56);
  v27 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)(v1 + 72) != v2 + 2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 352) != 1 )
    return 0;
  v6 = *(unsigned int *)(*(_QWORD *)(v3 + 56) + 40LL);
  if ( v2 + 1 == (_DWORD)v6 || (unsigned int)sub_135FA0(a1, 0) )
    return 0;
  v7 = (char *)**(unsigned int **)(a1 + 56);
  v8 = sub_32A6A0(v7);
  v9 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    *(_DWORD *)v9 = v8;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v9 + 32) != 4 )
    return 0;
  v24 = *(_QWORD *)(v9 + 40);
  if ( *(_DWORD *)v24 != 6 )
    return 0;
  sub_120000((__int64)v26, (unsigned __int8 *)(v24 + 32));
  sub_118FD0((char *)(*(_QWORD *)(a1 + 56) + 32LL), v26);
  v7 = v26;
  sub_119360((__int64)v26);
LABEL_8:
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x4000u;
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL) = v6;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_DWORD *)(v10 + 64);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 72) + 2);
  if ( (unsigned int)v12 >= v11
    || (v13 = *(_QWORD *)(v10 + 528), v14 = *(_QWORD **)(v13 + 8 * v12), (unsigned int)v6 >= v11) )
  {
    sub_1640B0(v7);
  }
  v15 = *(_QWORD *)(v13 + 8 * v6);
  sub_1649E0(a1, *(_QWORD *)(v13 + 8 * v12), v15);
  v16 = v14[43];
  v17 = *(_DWORD *)(a1 + 72) + 1;
  v18 = v14[44];
  if ( v14[45] < (unsigned __int64)(v18 + 1) )
  {
    v25 = qvector_reserve(v14 + 43, v16, v18 + 1, 4);
    v14[43] = v25;
    v16 = v25;
    v18 = v14[44];
  }
  *(_DWORD *)(v16 + 4 * v18) = v17;
  ++v14[44];
  v19 = *(char **)(v15 + 344);
  v20 = *(_QWORD *)(v15 + 352);
  v21 = &v19[4 * v20];
  if ( v19 != v21 )
  {
    while ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)v19 )
    {
      v19 += 4;
      if ( v21 == v19 )
        goto LABEL_18;
    }
    if ( v21 != v19 )
    {
      memmove(v19, v19 + 4, v21 - v19 - 4);
      v20 = *(_QWORD *)(v15 + 352) - 1LL;
      *(_QWORD *)(v15 + 352) = v20;
    }
  }
LABEL_18:
  if ( !v20 )
    **(_DWORD **)(v15 + 64) |= 0x400u;
  **(_DWORD **)(*(_QWORD *)(a1 + 8) + 368LL) = *(_DWORD *)(a1 + 72) + 2;
  v22 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)(v22 + 48); i; i = *(_QWORD *)(v22 + 48) )
  {
    sub_9FA40(v22, i);
    v22 = *(_QWORD *)(a1 + 8);
  }
  sub_63560(*(_QWORD *)(a1 + 64), 1u, (__int64)"INVERT_JX_GOTO %d", *(_DWORD *)(a1 + 72));
  return 1;
}
