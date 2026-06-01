void __fastcall sub_1587510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // ecx
  __int64 *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned int *v12; // rbx
  unsigned int *v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned int *v16; // rcx
  int v17; // ecx
  _QWORD *v18; // r13
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // r13d
  int v24; // r10d
  __int64 v25; // r14
  int v26; // r14d
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 *v29; // r11
  int i; // edx
  int v31; // eax
  int v32; // eax
  bool v33; // zf
  int v34; // esi
  __int64 v35; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v36[23]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v35 = a2;
  v6 = *(unsigned int *)(v4 + 16);
  if ( !(_DWORD)v6 )
  {
    v36[0] = 0;
    goto LABEL_35;
  }
  v7 = v6 - 1;
  v8 = *(__int64 **)v4;
  v9 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v10 = *(_QWORD *)v4 + 88LL * v9;
  v11 = *(_QWORD *)v10;
  if ( a2 == *(_QWORD *)v10 )
  {
    v12 = *(unsigned int **)(v10 + 8);
    v13 = &v12[8 * *(unsigned int *)(v10 + 16)];
    if ( v13 == v12 )
      goto LABEL_8;
LABEL_4:
    v14 = v5 + 8;
    do
    {
      v15 = *v12;
      v16 = v12 + 2;
      v12 += 8;
      sub_168CDE0(v36, v14, v15, v16, 0);
      sub_15F7200(v36);
    }
    while ( v13 != v12 );
    goto LABEL_6;
  }
  if ( v11 == -4096 )
  {
LABEL_29:
    v31 = *(_DWORD *)(v4 + 8);
    a3 = (unsigned int)(3 * v6);
    v36[0] = v10;
    v32 = v31 + 1;
    a4 = (unsigned int)(4 * v32);
    if ( (unsigned int)a4 < (unsigned int)a3 )
    {
      a3 = (unsigned int)(v6 - *(_DWORD *)(v4 + 12) - v32);
      a4 = (unsigned int)v6 >> 3;
      if ( (unsigned int)a3 > (unsigned int)a4 )
      {
LABEL_31:
        v33 = *(_QWORD *)v10 == -4096;
        *(_DWORD *)(v4 + 8) = v32;
        if ( !v33 )
          --*(_DWORD *)(v4 + 12);
        *(_QWORD *)v10 = a2;
        *(_QWORD *)(v10 + 8) = v10 + 24;
        *(_QWORD *)(v10 + 16) = 0x200000000LL;
LABEL_6:
        v17 = *(_DWORD *)(v4 + 16);
        if ( !v17 )
          return;
        a2 = v35;
        v7 = v17 - 1;
        v8 = *(__int64 **)v4;
        v9 = v7 & (((unsigned int)v35 >> 4) ^ ((unsigned int)v35 >> 9));
        v10 = *(_QWORD *)v4 + 88LL * v9;
        v11 = *(_QWORD *)v10;
        if ( v35 == *(_QWORD *)v10 )
          goto LABEL_8;
        goto LABEL_23;
      }
      v34 = v6;
LABEL_36:
      sub_1586BB0((__int64 **)v4, v34, a3, a4, v6, v5);
      sub_1581940((__int64 *)v4, &v35, v36);
      a2 = v35;
      v10 = v36[0];
      v32 = *(_DWORD *)(v4 + 8) + 1;
      goto LABEL_31;
    }
LABEL_35:
    v34 = 2 * v6;
    goto LABEL_36;
  }
  v22 = *(_QWORD *)v10;
  v23 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v24 = 1;
  v25 = 0;
  while ( 1 )
  {
    if ( v25 || v22 != -8192 )
      v10 = v25;
    v26 = v24 + 1;
    v27 = v7 & (unsigned int)(v23 + v24);
    v23 = v27;
    v28 = 11 * v27;
    v29 = &v8[v28];
    v22 = *v29;
    if ( a2 == *v29 )
      break;
    if ( v22 == -4096 )
    {
      if ( !v10 )
        v10 = (__int64)&v8[v28];
      goto LABEL_29;
    }
    v24 = v26;
    v25 = v10;
    v10 = (__int64)v29;
  }
  v12 = (unsigned int *)v29[1];
  v13 = &v12[8 * *((unsigned int *)v29 + 4)];
  if ( v12 != v13 )
    goto LABEL_4;
LABEL_23:
  if ( v11 == -4096 )
    return;
  for ( i = 1; ; ++i )
  {
    v9 = v7 & (i + v9);
    v10 = (__int64)&v8[11 * v9];
    if ( a2 == *(_QWORD *)v10 )
      break;
    if ( *(_QWORD *)v10 == -4096 )
      return;
  }
LABEL_8:
  v18 = *(_QWORD **)(v10 + 8);
  v19 = &v18[4 * *(unsigned int *)(v10 + 16)];
  if ( v18 != v19 )
  {
    do
    {
      v19 -= 4;
      v20 = v19[1];
      if ( v20 )
      {
        v21 = v19[2];
        if ( v21 )
          sub_1580C40(v21, v20);
      }
    }
    while ( v18 != v19 );
    v19 = *(_QWORD **)(v10 + 8);
  }
  if ( v19 != (_QWORD *)(v10 + 24) )
    free(v19);
  *(_QWORD *)v10 = -8192;
  --*(_DWORD *)(v4 + 8);
  ++*(_DWORD *)(v4 + 12);
}
