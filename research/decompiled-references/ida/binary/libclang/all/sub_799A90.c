__int64 __fastcall sub_799A90(__int64 a1)
{
  char v1; // al
  __int64 v2; // r15
  __int64 v3; // rax
  const void *v4; // r14
  size_t v5; // r12
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  unsigned int *v12; // rdi
  unsigned __int64 v13; // rdx
  const void *v14; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  const void *v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0 )
  {
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 88);
      v3 = *(_QWORD *)(v2 + 17288);
      v4 = *(const void **)(v3 + 352);
      v5 = *(_QWORD *)(v3 + 360);
      goto LABEL_4;
    }
    return 0;
  }
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(sub_793320(a1) + 88);
  v18 = *(_QWORD *)(v2 + 17288);
  v4 = *(const void **)(v18 + 352);
  v5 = *(_QWORD *)(v18 + 360);
LABEL_4:
  v6 = 0;
  v7 = sub_6BB160(v2, a1);
  v8 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v9 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v9 = sub_793320(a1);
    v6 = *sub_6BB160(*(_QWORD *)(v9 + 88), a1);
  }
  if ( v8 == v6 )
    return 0;
  while ( 1 )
  {
    v10 = *(_QWORD **)v6;
    if ( *(_WORD *)(*(_QWORD *)v6 + 32LL) == 136 )
    {
      v11 = *(_QWORD *)(v2 + 2160);
      v12 = *(unsigned int **)(v10[5] + 16LL);
      v13 = *v12;
      v14 = v12 + 4;
      v19 = v14;
      v20 = v13;
      if ( *(char *)(v11 + 2) < 0 )
      {
        v16 = sub_25E4BB0(&v19, "_app_extension", 14);
        v13 = v20;
        v14 = v19;
        v17 = v16;
        if ( v20 <= v16 )
          v17 = v20;
        if ( v16 != -1 )
          v13 = v17;
      }
      if ( v13 == v5
        && (!v5 || !memcmp(v14, v4, v5))
        && (unsigned int)v10[6] | (HIDWORD(v10[7]) | (unsigned int)v10[7] | HIDWORD(v10[6])) & 0x7FFFFFFF )
      {
        break;
      }
    }
    v6 += 8;
    if ( v8 == v6 )
      return 0;
  }
  return v10[6];
}

