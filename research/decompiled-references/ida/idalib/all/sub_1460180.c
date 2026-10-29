char __fastcall sub_1460180(__int64 a1, __int64 a2, int *a3)
{
  int *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  int *v10; // rsi
  int *v11; // rax
  __int64 v13; // rbx
  int *v14; // r15
  char v15; // al
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // r8d
  int *v21; // rsi
  unsigned __int64 v22; // r15
  int *v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  int *v26; // r14
  char v27; // al
  int v28; // ecx
  int *v29; // [rsp+8h] [rbp-50h]
  int *v30; // [rsp+8h] [rbp-50h]
  __m128 v31[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( (*a3 & 0x7FFFFFFFu) < *(_DWORD *)(a2 + 316) )
  {
    v6 = *(int **)(a1 + 3160);
    v7 = *(unsigned int *)(a1 + 3168);
    v8 = 2 * v7;
    v9 = (8 * v7) >> 3;
    if ( 8 * v7 )
    {
      while ( 1 )
      {
        v29 = v6;
        v13 = v9 >> 1;
        v14 = &v6[2 * (v9 >> 1)];
        v15 = sub_10246C0(a2, v14[1], *a3);
        v6 = v29;
        if ( v15 )
        {
          v6 = v14 + 2;
          v13 = v9 - v13 - 1;
          if ( v13 <= 0 )
            goto LABEL_11;
        }
        else if ( !v13 )
        {
LABEL_11:
          v10 = *(int **)(a1 + 3160);
          v16 = *(unsigned int *)(a1 + 3168);
          goto LABEL_12;
        }
        v9 = v13;
      }
    }
    goto LABEL_3;
  }
  v17 = sub_1020530(a2, *a3);
  v18 = *(unsigned int *)(a1 + 3320);
  v19 = *(_QWORD *)(a1 + 3304);
  if ( !(_DWORD)v18 )
    goto LABEL_30;
  v20 = (v18 - 1) & v17;
  v21 = (int *)(v19 + 152LL * v20);
  if ( v17 != *v21 )
  {
    if ( *v21 )
    {
      v28 = 1;
      do
      {
        v20 = (v18 - 1) & (v28 + v20);
        v21 = (int *)(v19 + 152LL * v20);
        if ( v17 == *v21 )
          goto LABEL_16;
        ++v28;
      }
      while ( *v21 );
    }
LABEL_30:
    sub_1460120(v31, (int *)(v19 + 152 * v18), (int *)(v19 + 152 * v18), a1 + 3304, 1);
    v22 = v31[0].m128_u64[0];
    goto LABEL_17;
  }
LABEL_16:
  sub_1460120(v31, v21, (int *)(v19 + 152 * v18), a1 + 3304, 1);
  v22 = v31[0].m128_u64[0];
LABEL_17:
  v23 = (int *)(*(_QWORD *)(a1 + 3304) + 152LL * *(unsigned int *)(a1 + 3320));
  sub_1460120(v31, v23, v23, a1 + 3304, 1);
  if ( v31[0].m128_u64[0] == v22 || v22 == -8 )
    return 0;
  v6 = *(int **)(v22 + 8);
  v7 = *(unsigned int *)(v22 + 16);
  v8 = 2 * v7;
  v24 = (8 * v7) >> 3;
  if ( !(8 * v7) )
  {
LABEL_3:
    v10 = v6;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v30 = v6;
    v25 = v24 >> 1;
    v26 = &v6[2 * (v24 >> 1)];
    v27 = sub_10246C0(a2, v26[1], *a3);
    v6 = v30;
    if ( !v27 )
      break;
    v6 = v26 + 2;
    v25 = v24 - v25 - 1;
    if ( v25 <= 0 )
      goto LABEL_25;
LABEL_22:
    v24 = v25;
  }
  if ( v25 )
    goto LABEL_22;
LABEL_25:
  v10 = *(int **)(v22 + 8);
  v16 = *(unsigned int *)(v22 + 16);
LABEL_12:
  LODWORD(v7) = v16;
  v8 = 2 * v16;
  if ( v6 != &v10[v8] )
    return sub_10246C0(a2, *v6, *a3);
LABEL_4:
  if ( !(_DWORD)v7 )
    return 0;
  v11 = &v10[v8 - 2];
  if ( *v11 != v11[1] )
    return 0;
  return sub_10246C0(a2, *v11, *a3);
}
