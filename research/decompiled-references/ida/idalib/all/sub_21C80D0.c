void __fastcall sub_21C80D0(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v6; // r13
  char *v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  char *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // rbp
  char *v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 i; // rbp
  unsigned __int64 *v25; // r13
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int64 v28; // rbp
  __int64 v29; // rdx

  v4 = a2 - a1;
  if ( a2 - a1 <= 256 )
    return;
  v6 = a2;
  if ( !a3 )
  {
LABEL_21:
    v23 = v4 >> 4;
    for ( i = ((v4 >> 4) - 2) >> 1; ; --i )
    {
      sub_21C5540((__int64)a1, i, v23, *(_QWORD *)&a1[16 * i], *(_QWORD *)&a1[16 * i + 8]);
      if ( !i )
        break;
    }
    v25 = (unsigned __int64 *)(v6 - 16);
    do
    {
      v26 = *v25;
      v27 = v25[1];
      v28 = (char *)v25 - a1;
      v25 -= 2;
      v25[2] = *(_QWORD *)a1;
      v25[3] = *((_QWORD *)a1 + 1);
      sub_21C5540((__int64)a1, 0, v28 >> 4, v26, v27);
    }
    while ( v28 > 16 );
    return;
  }
  v7 = a1 + 16;
  while ( 2 )
  {
    v8 = *((_QWORD *)a1 + 2);
    --a3;
    v9 = *((_QWORD *)a2 - 2);
    v10 = *(_QWORD *)a1;
    v11 = *((_QWORD *)a1 + 1);
    v12 = &a1[16 * ((__int64)(((a2 - a1) >> 4) + ((unsigned __int64)(a2 - a1) >> 63)) >> 1)];
    v13 = *(_QWORD *)v12;
    if ( v8 >= *(_QWORD *)v12 )
    {
      if ( v9 > v8 )
        goto LABEL_7;
      if ( v9 > v13 )
      {
LABEL_18:
        v22 = *((_QWORD *)a2 - 1);
        *(_QWORD *)a1 = v9;
        *((_QWORD *)a2 - 2) = v10;
        v8 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 1) = v22;
        *((_QWORD *)a2 - 1) = v11;
        goto LABEL_8;
      }
LABEL_27:
      *(_QWORD *)a1 = v13;
      v29 = *((_QWORD *)v12 + 1);
      *(_QWORD *)v12 = v10;
      v8 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 1) = v29;
      v10 = *((_QWORD *)a2 - 2);
      *((_QWORD *)v12 + 1) = v11;
      goto LABEL_8;
    }
    if ( v9 > v13 )
      goto LABEL_27;
    if ( v9 > v8 )
      goto LABEL_18;
LABEL_7:
    v14 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = v11;
    *(_QWORD *)a1 = v8;
    *((_QWORD *)a1 + 1) = v14;
    *((_QWORD *)a1 + 2) = v10;
    v10 = *((_QWORD *)a2 - 2);
LABEL_8:
    v15 = v7;
    v16 = a2;
    while ( 1 )
    {
      v17 = *(_QWORD *)v15;
      v6 = v15;
      if ( *(_QWORD *)v15 < v8 )
        goto LABEL_15;
      v18 = v16 - 16;
      if ( v8 < v10 )
      {
        v19 = v16 - 32;
        do
        {
          v18 = v19;
          v19 -= 16;
          v10 = *((_QWORD *)v19 + 2);
        }
        while ( v10 > v8 );
      }
      if ( v15 >= v18 )
        break;
      *(_QWORD *)v15 = v10;
      v20 = *((_QWORD *)v18 + 1);
      v21 = *((_QWORD *)v15 + 1);
      *(_QWORD *)v18 = v17;
      *((_QWORD *)v15 + 1) = v20;
      v8 = *(_QWORD *)a1;
      v10 = *((_QWORD *)v18 - 2);
      *((_QWORD *)v18 + 1) = v21;
      v16 = v18;
LABEL_15:
      v15 += 16;
    }
    sub_21C80D0(v15, a2, a3);
    v4 = v15 - a1;
    if ( v15 - a1 > 256 )
    {
      a2 = v15;
      if ( !a3 )
        goto LABEL_21;
      continue;
    }
    break;
  }
}
