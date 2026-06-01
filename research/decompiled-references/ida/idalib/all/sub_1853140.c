void __fastcall sub_1853140(__int64 *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  char **v10; // r12
  char *v11; // rax
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rcx
  char *v15; // rdi
  char *v16; // rcx
  char *v17; // rbx
  char *v18; // rcx
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 i; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rbp
  __int64 **v35; // rax
  __int64 *v36; // rdx
  unsigned __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rcx
  unsigned int v44[3]; // [rsp+Ch] [rbp-CCh] BYREF
  __int64 v45; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v46[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = *a1;
  v44[0] = a3;
  if ( (sub_B97260(v4) & 0xFFFFFFFD) != 0 )
    goto LABEL_2;
  if ( (*(_BYTE *)(*a1 + 29) & 1) == 0 )
    goto LABEL_75;
  v21 = *(_QWORD *)a2;
  v22 = sub_B8C3D0(*a1, (__int64)a2, v5, v6, v7, v8);
  v23 = (_QWORD *)*v22;
  v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( (unsigned __int64)v23 >= v24 )
  {
    if ( v23 != (_QWORD *)v24 )
    {
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 381 )
        goto LABEL_42;
      v25 = v24 + 8;
      for ( i = v25; (_QWORD *)v25 != v23; i = v25 )
      {
        v25 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 381 )
          goto LABEL_42;
      }
    }
LABEL_75:
    BUG();
  }
  v27 = v23;
  while ( *(_WORD *)(*v27 + 36LL) != 381 )
  {
    if ( (_QWORD *)v24 == ++v27 )
      goto LABEL_75;
  }
  if ( (_QWORD *)v24 == v27 )
    goto LABEL_75;
LABEL_42:
  v28 = *v23;
  if ( *(_WORD *)(*v23 + 36LL) != 381 )
  {
    v29 = v23 + 1;
    do
      v28 = *v29++;
    while ( *(_WORD *)(v28 + 36) != 381 );
  }
  sub_168B9F0((__int64)v46, (__int64 *)(v21 + 8), *(_DWORD *)(v28 + 24), 0x1589u, 0);
  v45 = *a1;
  sub_1852F10((__int64)v46, &v45);
  sub_15F7200(v46);
  v34 = (__int64 *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_BYTE *)(*a1 + 29) & 1) == 0 )
    goto LABEL_74;
  v35 = (__int64 **)sub_B8C3D0(*a1, (__int64)&v45, v30, v31, v32, v33);
  v36 = *v35;
  v37 = (unsigned __int64)&(*v35)[*((unsigned int *)v35 + 2)];
  if ( (unsigned __int64)v36 < v37 )
  {
    v38 = v36;
    while ( *(_WORD *)(*v38 + 36) != 381 )
    {
      if ( (__int64 *)v37 == ++v38 )
        goto LABEL_74;
    }
    if ( (__int64 *)v37 != v38 )
      goto LABEL_51;
LABEL_74:
    BUG();
  }
  if ( v36 == (__int64 *)v37 )
    goto LABEL_74;
  if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 381 )
  {
    v42 = (__int64 *)(v37 + 8);
    while ( v36 != v42 )
    {
      v43 = *v42++;
      if ( *(_WORD *)(v43 + 36) == 381 )
        goto LABEL_51;
    }
    goto LABEL_74;
  }
LABEL_51:
  v39 = *v36;
  if ( *(_WORD *)(*v36 + 36) != 381 )
  {
    v40 = v36 + 1;
    do
      v39 = *v40++;
    while ( *(_WORD *)(v39 + 36) != 381 );
  }
  sub_168B9F0((__int64)v46, v34, *(_DWORD *)(v39 + 24), 0x16B9u, 0);
  v45 = *a1;
  v41 = sub_1852F10((__int64)v46, &v45);
  a2 = v44;
  sub_1588370(v41, v44);
  sub_15F7200(v46);
LABEL_2:
  v9 = *a1;
  if ( (*(_BYTE *)(*a1 + 29) & 1) == 0 )
    return;
  v10 = (char **)sub_B8C3D0(*a1, (__int64)a2, v5, v6, v7, v8);
  v11 = *v10;
  v12 = 8LL * *((unsigned int *)v10 + 2);
  v13 = &(*v10)[v12];
  v14 = v12 >> 3;
  if ( v12 >> 5 )
  {
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 381 )
    {
      v15 = *v10;
    }
    else
    {
      v15 = v11 + 8;
      if ( *(_WORD *)(*((_QWORD *)v11 + 1) + 36LL) != 381 )
      {
        v15 = v11 + 16;
        if ( *(_WORD *)(*((_QWORD *)v11 + 2) + 36LL) != 381 )
        {
          v16 = *v10;
          if ( *(_WORD *)(*((_QWORD *)v11 + 3) + 36LL) == 381 )
          {
            v15 = v11 + 24;
          }
          else
          {
            while ( 1 )
            {
              v15 = v16 + 32;
              if ( &v11[32 * (v12 >> 5)] == v16 + 32 )
              {
                v14 = (v13 - v15) >> 3;
                goto LABEL_17;
              }
              if ( *(_WORD *)(*((_QWORD *)v16 + 4) + 36LL) == 381 )
                goto LABEL_21;
              if ( *(_WORD *)(*((_QWORD *)v16 + 5) + 36LL) == 381 )
              {
                v15 = v16 + 40;
                goto LABEL_21;
              }
              if ( *(_WORD *)(*((_QWORD *)v16 + 6) + 36LL) == 381 )
              {
                v15 = v16 + 48;
                goto LABEL_21;
              }
              if ( *(_WORD *)(*((_QWORD *)v16 + 7) + 36LL) == 381 )
                break;
              v16 += 32;
            }
            v15 = v16 + 56;
          }
        }
      }
    }
LABEL_21:
    if ( v13 != v15 )
    {
      v18 = v15 + 8;
      if ( v13 == v15 + 8 )
      {
        v17 = v15;
      }
      else
      {
        do
        {
          if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 381 )
          {
            *(_QWORD *)v15 = *(_QWORD *)v18;
            v15 += 8;
          }
          v18 += 8;
        }
        while ( v13 != v18 );
        v11 = *v10;
        v19 = &(*v10)[v12];
        v17 = &v15[v19 - v13];
        if ( v19 != v13 )
        {
          memmove(v15, v13, v19 - v13);
          v11 = *v10;
        }
      }
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  v15 = *v10;
LABEL_17:
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      if ( v14 != 1 )
      {
LABEL_20:
        v17 = &v11[v12];
        goto LABEL_28;
      }
      goto LABEL_68;
    }
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 381 )
      goto LABEL_21;
    v15 += 8;
  }
  if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 381 )
    goto LABEL_21;
  v15 += 8;
LABEL_68:
  v17 = &v11[v12];
  if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 381 )
    goto LABEL_21;
LABEL_28:
  v20 = (v17 - v11) >> 3;
  *((_DWORD *)v10 + 2) = v20;
  if ( !(_DWORD)v20 )
    *(_BYTE *)(v9 + 29) &= ~1u;
}
