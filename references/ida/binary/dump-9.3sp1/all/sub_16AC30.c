__int64 __fastcall sub_16AC30(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v6; // rbp
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rsi
  int v18; // r13d
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // rcx
  char *v22; // rdx
  __int64 v23; // rdi
  __int64 i; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  char v27[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 56);
  v28 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)(v1 + 72) != v2 + 2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 352) != 1 )
    return 0;
  v6 = *(unsigned int *)(*(_QWORD *)(v3 + 56) + 40LL);
  if ( v2 + 1 == (_DWORD)v6 || (unsigned int)sub_1399E0(a1, 0) )
    return 0;
  v7 = (char *)**(unsigned int **)(a1 + 56);
  v8 = sub_32E9E0(v7);
  v10 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    *(_DWORD *)v10 = v8;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v10 + 32) != 4 )
    return 0;
  v25 = *(_QWORD *)(v10 + 40);
  if ( *(_DWORD *)v25 != 6 )
    return 0;
  sub_123A40((__int64)v27, (unsigned __int8 *)(v25 + 32), v10, v9);
  sub_11CA10((char *)(*(_QWORD *)(a1 + 56) + 32LL), v27);
  v7 = v27;
  sub_11CDA0((__int64)v27);
LABEL_8:
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x4000u;
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL) = v6;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = *(_DWORD *)(v11 + 64);
  v13 = (unsigned int)(*(_DWORD *)(a1 + 72) + 2);
  if ( (unsigned int)v13 >= v12
    || (v14 = *(_QWORD *)(v11 + 528), v15 = *(_QWORD **)(v14 + 8 * v13), (unsigned int)v6 >= v12) )
  {
    sub_167AF0(v7);
  }
  v16 = *(_QWORD *)(v14 + 8 * v6);
  sub_168420(a1, *(_QWORD *)(v14 + 8 * v13), v16);
  v17 = v15[43];
  v18 = *(_DWORD *)(a1 + 72) + 1;
  v19 = v15[44];
  if ( v15[45] < (unsigned __int64)(v19 + 1) )
  {
    v26 = qvector_reserve((__int64)(v15 + 43), v17, v19 + 1, 4);
    v15[43] = v26;
    v17 = v26;
    v19 = v15[44];
  }
  *(_DWORD *)(v17 + 4 * v19) = v18;
  ++v15[44];
  v20 = *(char **)(v16 + 344);
  v21 = *(_QWORD *)(v16 + 352);
  v22 = &v20[4 * v21];
  if ( v20 != v22 )
  {
    while ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)v20 )
    {
      v20 += 4;
      if ( v22 == v20 )
        goto LABEL_18;
    }
    if ( v22 != v20 )
    {
      memmove(v20, v20 + 4, v22 - v20 - 4);
      v21 = *(_QWORD *)(v16 + 352) - 1LL;
      *(_QWORD *)(v16 + 352) = v21;
    }
  }
LABEL_18:
  if ( !v21 )
    **(_DWORD **)(v16 + 64) |= 0x400u;
  **(_DWORD **)(*(_QWORD *)(a1 + 8) + 368LL) = *(_DWORD *)(a1 + 72) + 2;
  v23 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)(v23 + 48); i; i = *(_QWORD *)(v23 + 48) )
  {
    sub_A3480(v23, i);
    v23 = *(_QWORD *)(a1 + 8);
  }
  sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"INVERT_JX_GOTO %d", *(_DWORD *)(a1 + 72));
  return 1;
}
