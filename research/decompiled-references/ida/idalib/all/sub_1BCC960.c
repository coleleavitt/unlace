__int64 __fastcall sub_1BCC960(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  char v15; // r12
  char v16; // r15
  char v17; // bp
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdx
  char v23; // bp
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+8h] [rbp-40h]

  v2 = a1;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD *)a1;
  v6 = 5 * v3;
  v7 = *(_QWORD *)a1 + 168 * v3;
  if ( v4 != v7 )
  {
    v8 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 )
    {
      if ( *(char *)(v8 + 28) >= 0 )
      {
        v27 = v2;
        v9 = sub_C1D490(v8, v6, v2, v4);
        v2 = v27;
        v10 = v9;
        v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v11 )
        {
LABEL_5:
          v12 = sub_F57E80(*v11);
          if ( v12 && (*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v12 + 17) & 4) == 0 )
            return 0;
          return v10;
        }
        v14 = *(unsigned int *)(v27 + 8);
        v5 = *(_QWORD *)v27;
        v4 = 5 * v14;
        v7 = *(_QWORD *)v27 + 168 * v14;
      }
    }
  }
  v15 = 0;
  v10 = 0;
  if ( v5 == v7 )
    return 0;
  v16 = 0;
  v17 = *(_BYTE *)(v5 + 104) & 1;
  if ( v17 )
    goto LABEL_14;
LABEL_12:
  while ( 1 )
  {
    v5 += 168;
    if ( v7 == v5 )
      break;
    while ( 1 )
    {
      v16 = v15;
      v17 = *(_BYTE *)(v5 + 104) & 1;
      if ( !v17 )
        break;
LABEL_14:
      v18 = *(_QWORD *)v5;
      if ( !*(_QWORD *)v5 )
        goto LABEL_12;
      if ( *(char *)(v18 + 28) < 0 )
        goto LABEL_12;
      v28 = v2;
      v19 = sub_C1D490(v18, v6, v2, v4);
      v2 = v28;
      if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_12;
      if ( !v15 )
      {
        v15 = v17;
        v10 = v19;
        v16 = 1;
        goto LABEL_12;
      }
      if ( v10 != v19 )
        v10 = 0;
      v5 += 168;
      if ( v7 == v5 )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v16 )
    goto LABEL_35;
  v20 = *(__int64 **)v2;
  v21 = *(_QWORD *)v2 + 168LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 == v21 )
    return 0;
  do
  {
    while ( 1 )
    {
      v22 = *v20;
      v23 = v15;
      if ( !*v20 || *(char *)(v22 + 28) < 0 )
        goto LABEL_26;
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 25;
      if ( (unsigned int)v25 > 1 )
        v24 = sub_F63050(v24, v6, v25, v4);
      v26 = *(_QWORD *)(v24 + 24);
      if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_26;
      if ( !v15 )
        break;
      if ( v10 != v26 )
        v10 = 0;
LABEL_26:
      v20 += 21;
      if ( (__int64 *)v21 == v20 )
        goto LABEL_34;
    }
    v20 += 21;
    v10 = *(_QWORD *)(v24 + 24);
    v23 = 1;
    v15 = 1;
  }
  while ( (__int64 *)v21 != v20 );
LABEL_34:
  if ( v23 )
  {
LABEL_35:
    v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_5;
  }
  return 0;
}
