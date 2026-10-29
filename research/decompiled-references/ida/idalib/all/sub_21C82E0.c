void __fastcall sub_21C82E0(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v6; // r13
  char *v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  char *v16; // rbp
  char *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 i; // rbp
  unsigned __int64 *v27; // r13
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rdx

  v4 = a2 - a1;
  if ( a2 - a1 <= 256 )
    return;
  v6 = a2;
  if ( !a3 )
  {
LABEL_21:
    v25 = v4 >> 4;
    for ( i = ((v4 >> 4) - 2) >> 1; ; --i )
    {
      sub_21C57A0((__int64)a1, i, v25, *(_QWORD *)&a1[16 * i], *(_QWORD *)&a1[16 * i + 8]);
      if ( !i )
        break;
    }
    v27 = (unsigned __int64 *)(v6 - 16);
    do
    {
      v28 = *v27;
      v29 = v27[1];
      v30 = (char *)v27 - a1;
      v27 -= 2;
      v27[2] = *(_QWORD *)a1;
      v27[3] = *((_QWORD *)a1 + 1);
      sub_21C57A0((__int64)a1, 0, v30 >> 4, v28, v29);
    }
    while ( v30 > 16 );
    return;
  }
  v7 = a1 + 16;
  while ( 2 )
  {
    v8 = *((_QWORD *)a1 + 2);
    --a3;
    v9 = *((_QWORD *)a2 - 2);
    v10 = *(_QWORD *)a1;
    v11 = &a1[16 * ((__int64)(((a2 - a1) >> 4) + ((unsigned __int64)(a2 - a1) >> 63)) >> 1)];
    v12 = *(_QWORD *)v11;
    if ( v8 >= *(_QWORD *)v11 )
    {
      if ( v9 > v8 )
        goto LABEL_7;
      if ( v9 > v12 )
      {
LABEL_18:
        *(_QWORD *)a1 = v9;
        v23 = *((_QWORD *)a2 - 1);
        *((_QWORD *)a2 - 2) = v10;
        v24 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v23;
        *((_QWORD *)a2 - 1) = v24;
        v8 = *(_QWORD *)a1;
        goto LABEL_8;
      }
LABEL_27:
      *(_QWORD *)a1 = v12;
      v31 = *((_QWORD *)v11 + 1);
      *(_QWORD *)v11 = v10;
      v32 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v31;
      *((_QWORD *)v11 + 1) = v32;
      v8 = *(_QWORD *)a1;
      goto LABEL_8;
    }
    if ( v9 > v12 )
      goto LABEL_27;
    if ( v9 > v8 )
      goto LABEL_18;
LABEL_7:
    v13 = *((_QWORD *)a1 + 1);
    v14 = *((_QWORD *)a1 + 3);
    *(_QWORD *)a1 = v8;
    *((_QWORD *)a1 + 2) = v10;
    *((_QWORD *)a1 + 1) = v14;
    *((_QWORD *)a1 + 3) = v13;
LABEL_8:
    v15 = *((_QWORD *)a2 - 2);
    v16 = v7;
    v17 = a2;
    while ( 1 )
    {
      v18 = *(_QWORD *)v16;
      v6 = v16;
      if ( v8 > *(_QWORD *)v16 )
        goto LABEL_15;
      v19 = v17 - 16;
      if ( v8 < v15 )
      {
        v20 = v17 - 32;
        do
        {
          v19 = v20;
          v20 -= 16;
          v15 = *((_QWORD *)v20 + 2);
        }
        while ( v8 < v15 );
      }
      if ( v16 >= v19 )
        break;
      *(_QWORD *)v16 = v15;
      v21 = *((_QWORD *)v19 + 1);
      *(_QWORD *)v19 = v18;
      v22 = *((_QWORD *)v16 + 1);
      *((_QWORD *)v16 + 1) = v21;
      v15 = *((_QWORD *)v19 - 2);
      *((_QWORD *)v19 + 1) = v22;
      v8 = *(_QWORD *)a1;
      v17 = v19;
LABEL_15:
      v16 += 16;
    }
    sub_21C82E0(v16, a2, a3);
    v4 = v16 - a1;
    if ( v16 - a1 > 256 )
    {
      a2 = v16;
      if ( !a3 )
        goto LABEL_21;
      continue;
    }
    break;
  }
}
