void __fastcall sub_21E7350(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v6; // r12
  char *v7; // r13
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // edx
  char *v11; // r8
  unsigned int v12; // eax
  char *v13; // rbp
  char *v14; // rax
  int v15; // r8d
  char *v16; // rdi
  char *v17; // rax
  __int64 v18; // rbp
  __int64 i; // r13
  unsigned int *v20; // r12
  unsigned int v21; // ecx
  __int64 v22; // rbp

  v4 = a2 - a1;
  if ( a2 - a1 <= 64 )
    return;
  v6 = a2;
  if ( !a3 )
  {
LABEL_21:
    v18 = v4 >> 2;
    for ( i = ((v4 >> 2) - 2) >> 1; ; --i )
    {
      sub_21E7220((__int64)a1, i, v18, *(_DWORD *)&a1[4 * i]);
      if ( !i )
        break;
    }
    v20 = (unsigned int *)(v6 - 4);
    do
    {
      v21 = *v20;
      v22 = (char *)v20-- - a1;
      v20[1] = *(_DWORD *)a1;
      sub_21E7220((__int64)a1, 0, v22 >> 2, v21);
    }
    while ( v22 > 4 );
    return;
  }
  v7 = a1 + 4;
  while ( 2 )
  {
    v8 = *((_DWORD *)a1 + 1);
    --a3;
    v9 = *((_DWORD *)a2 - 1);
    v10 = *(_DWORD *)a1;
    v11 = &a1[4 * ((__int64)(((a2 - a1) >> 2) + ((unsigned __int64)(a2 - a1) >> 63)) >> 1)];
    v12 = *(_DWORD *)v11;
    if ( v8 >= *(_DWORD *)v11 )
    {
      if ( v8 < v9 )
        goto LABEL_7;
      if ( v12 < v9 )
      {
LABEL_18:
        *(_DWORD *)a1 = v9;
        *((_DWORD *)a2 - 1) = v10;
        v8 = *(_DWORD *)a1;
        goto LABEL_8;
      }
LABEL_27:
      *(_DWORD *)a1 = v12;
      *(_DWORD *)v11 = v10;
      v8 = *(_DWORD *)a1;
      v10 = *((_DWORD *)a2 - 1);
      goto LABEL_8;
    }
    if ( v12 < v9 )
      goto LABEL_27;
    if ( v8 < v9 )
      goto LABEL_18;
LABEL_7:
    *(_DWORD *)a1 = v8;
    *((_DWORD *)a1 + 1) = v10;
    v10 = *((_DWORD *)a2 - 1);
LABEL_8:
    v13 = v7;
    v14 = a2;
    while ( 1 )
    {
      v15 = *(_DWORD *)v13;
      v6 = v13;
      if ( *(_DWORD *)v13 < v8 )
        goto LABEL_15;
      v16 = v14 - 4;
      if ( v10 > v8 )
      {
        v17 = v14 - 8;
        do
        {
          v16 = v17;
          v17 -= 4;
          v10 = *((_DWORD *)v17 + 1);
        }
        while ( v10 > v8 );
      }
      if ( v13 >= v16 )
        break;
      *(_DWORD *)v13 = v10;
      v10 = *((_DWORD *)v16 - 1);
      v14 = v16;
      *(_DWORD *)v16 = v15;
      v8 = *(_DWORD *)a1;
LABEL_15:
      v13 += 4;
    }
    sub_21E7350(v13, a2, a3);
    v4 = v13 - a1;
    if ( v13 - a1 > 64 )
    {
      a2 = v13;
      if ( !a3 )
        goto LABEL_21;
      continue;
    }
    break;
  }
}
