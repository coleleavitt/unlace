void __fastcall sub_FD8960(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rdx
  char *v5; // rdx
  __int64 v6; // rcx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  bool v16; // zf
  unsigned __int64 v17; // rax
  __int64 *v18; // r15
  size_t *v19; // rax
  size_t i; // rdx
  unsigned __int64 v21; // rdx
  size_t v22; // rcx
  size_t v23; // r8
  size_t v24; // rdx
  int v25; // eax
  size_t v26; // [rsp+0h] [rbp-58h]
  size_t v27; // [rsp+8h] [rbp-50h]
  __int64 *v28[8]; // [rsp+18h] [rbp-40h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v3 = *(unsigned int *)(a1 + 776);
  if ( *(_DWORD *)(a1 + 776) )
  {
    v4 = 0;
    if ( v3 > *(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, *(unsigned int *)(a1 + 776), 8);
      v4 = 8LL * *(unsigned int *)(a2 + 8);
    }
    v5 = (char *)(*(_QWORD *)a2 + v4);
    v6 = *(_QWORD *)a2 + 8 * v3;
    if ( v5 != (char *)v6 )
    {
      v7 = (char *)(v6 - 8);
      v8 = v5;
      v9 = ((unsigned __int64)(v7 - v5) >> 3) + 1;
      if ( v5 == v7 )
        goto LABEL_8;
      do
      {
        *(_OWORD *)v8 = 0;
        v8 += 16;
      }
      while ( v8 != &v5[16 * (v9 >> 1)] );
      v5 += 8 * (v9 & 0xFFFFFFFFFFFFFFFELL);
      if ( v9 != (v9 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_8:
        *(_QWORD *)v5 = 0;
    }
    *(_DWORD *)(a2 + 8) = v3;
  }
  sub_FD8920(v28, *(__int64 **)(a1 + 520), *(_DWORD *)(a1 + 528) == 0);
  v10 = v28[0];
  sub_FD8920(v28, (__int64 *)(*(_QWORD *)(a1 + 520) + 8LL * *(unsigned int *)(a1 + 528)), 1);
  v11 = v28[0];
  if ( v28[0] != v10 )
  {
    v12 = *v10;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
        goto LABEL_14;
      v13 = *(_QWORD *)(v12 + 8);
      if ( (v13 & 4) != 0 )
        goto LABEL_14;
      v16 = v13 == 0;
      v17 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 )
        v17 = 0;
      v18 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(v17 + 72));
      v19 = (size_t *)*v18;
      if ( !*v18 )
        goto LABEL_24;
      for ( i = v19[1]; i; i = *(_QWORD *)(v21 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v21 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v21 )
          break;
        v19 = (size_t *)v21;
      }
      v22 = *v19;
      v23 = *(_QWORD *)v12;
      v24 = *v19;
      if ( *(_QWORD *)v12 <= *v19 )
        v24 = *(_QWORD *)v12;
      if ( !v24 )
        break;
      v27 = *v19;
      v26 = *(_QWORD *)v12;
      v25 = memcmp((const void *)(v12 + 32), v19 + 4, v24);
      v23 = v26;
      v22 = v27;
      if ( !v25 )
        break;
      if ( v25 < 0 )
        goto LABEL_24;
LABEL_14:
      v12 = v10[1];
      v14 = v10 + 1;
      if ( v12 && v12 != -8 )
      {
        ++v10;
        if ( v11 == v14 )
          return;
      }
      else
      {
        v15 = v10 + 2;
        do
        {
          do
          {
            v12 = *v15;
            v10 = v15++;
          }
          while ( v12 == -8 );
        }
        while ( !v12 );
        if ( v11 == v10 )
          return;
      }
    }
    if ( v23 == v22 || v23 >= v22 )
      goto LABEL_14;
LABEL_24:
    *v18 = v12;
    goto LABEL_14;
  }
}
