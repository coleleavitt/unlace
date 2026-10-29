size_t *__fastcall sub_1F6CDC0(char *a1, size_t **a2, __int64 a3)
{
  size_t *result; // rax
  size_t **v6; // rbp
  __int64 v7; // rdx
  size_t *v8; // r14
  size_t **v9; // r15
  size_t *v10; // r13
  char v11; // al
  size_t *v12; // r12
  size_t *v13; // r14
  size_t **v14; // r15
  unsigned __int64 v15; // r12
  size_t *v16; // rsi
  size_t **v17; // r13
  size_t i; // rax
  unsigned __int64 v19; // rax
  size_t *v20; // rdi
  size_t v21; // r10
  size_t j; // rax
  unsigned __int64 v23; // rax
  size_t v24; // r9
  size_t v25; // rdx
  int v26; // eax
  size_t *v27; // rsi
  __int64 k; // rax
  unsigned __int64 v29; // rax
  size_t *v30; // rdi
  size_t v31; // r10
  size_t m; // rax
  unsigned __int64 v33; // rax
  size_t v34; // r9
  size_t v35; // rdx
  int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // r12
  size_t *v39; // rcx
  size_t *v40; // [rsp+8h] [rbp-60h]
  size_t *v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  size_t v43; // [rsp+18h] [rbp-50h]
  size_t v44; // [rsp+18h] [rbp-50h]
  size_t v45; // [rsp+20h] [rbp-48h]
  size_t v46; // [rsp+20h] [rbp-48h]
  size_t **v47; // [rsp+28h] [rbp-40h]

  result = (size_t *)((char *)a2 - a1);
  v42 = a3;
  if ( (char *)a2 - a1 <= 128 )
    return result;
  v6 = a2;
  v7 = (char *)a2 - a1;
  if ( !a3 )
  {
    v17 = a2;
    goto LABEL_44;
  }
  v47 = (size_t **)(a1 + 8);
  while ( 2 )
  {
    v8 = *((size_t **)a1 + 1);
    --v42;
    v9 = (size_t **)&a1[8 * (v7 >> 4)];
    v10 = *v9;
    v11 = sub_1F6AA70(v8, *v9);
    v12 = *(size_t **)a1;
    v40 = *(v6 - 1);
    if ( !v11 )
    {
      if ( !sub_1F6AA70(v8, v40) )
      {
        if ( sub_1F6AA70(v10, v40) )
        {
          *(_QWORD *)a1 = v40;
          *(v6 - 1) = v12;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
LABEL_49:
      *(_QWORD *)a1 = v8;
      *((_QWORD *)a1 + 1) = v12;
      goto LABEL_7;
    }
    if ( !sub_1F6AA70(v10, v40) )
    {
      if ( sub_1F6AA70(v8, v40) )
      {
        *(_QWORD *)a1 = v40;
        *(v6 - 1) = v12;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
LABEL_6:
    *(_QWORD *)a1 = v10;
    *v9 = v12;
LABEL_7:
    v13 = *(size_t **)a1;
    v14 = v47;
    v15 = (unsigned __int64)v6;
    while ( 1 )
    {
      v16 = v13;
      v17 = v14;
      v41 = *v14;
      for ( i = v13[1]; i; i = *(_QWORD *)(v19 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v19 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v19 )
          break;
        v16 = (size_t *)v19;
      }
      v20 = *v14;
      v21 = *v16;
      for ( j = v41[1]; j; j = *(_QWORD *)(v23 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v23 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v23 )
          break;
        v20 = (size_t *)v23;
      }
      v24 = *v20;
      v25 = *v20;
      if ( v21 <= *v20 )
        v25 = *v16;
      if ( !v25 )
        break;
      v45 = *v20;
      v43 = *v16;
      v26 = memcmp(v20 + 4, v16 + 4, v25);
      v21 = v43;
      v24 = v45;
      if ( !v26 )
        break;
      if ( v26 >= 0 )
        goto LABEL_24;
LABEL_22:
      ++v14;
    }
    if ( v21 != v24 && v21 > v24 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
LABEL_24:
        v15 -= 8LL;
        v27 = *(size_t **)v15;
        for ( k = *(_QWORD *)(*(_QWORD *)v15 + 8LL); k; k = *(_QWORD *)(v29 + 8) )
        {
          if ( (k & 4) == 0 )
            break;
          v29 = k & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v29 )
            break;
          v27 = (size_t *)v29;
        }
        v30 = v13;
        v31 = *v27;
        for ( m = v13[1]; m; m = *(_QWORD *)(v33 + 8) )
        {
          if ( (m & 4) == 0 )
            break;
          v33 = m & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v33 )
            break;
          v30 = (size_t *)v33;
        }
        v34 = *v30;
        v35 = *v30;
        if ( v31 <= *v30 )
          v35 = *v27;
        if ( v35 )
        {
          v46 = *v30;
          v44 = *v27;
          v36 = memcmp(v30 + 4, v27 + 4, v35);
          v31 = v44;
          v34 = v46;
          if ( v36 )
            break;
        }
        if ( v31 == v34 || v31 <= v34 )
        {
          if ( (unsigned __int64)v14 >= v15 )
            goto LABEL_42;
LABEL_39:
          *v14 = *(size_t **)v15;
          *(_QWORD *)v15 = v41;
          v13 = *(size_t **)a1;
          goto LABEL_22;
        }
      }
    }
    while ( v36 < 0 );
    if ( (unsigned __int64)v14 < v15 )
      goto LABEL_39;
LABEL_42:
    result = (size_t *)sub_1F6CDC0(v14, v6, v42);
    v7 = (char *)v14 - a1;
    if ( (char *)v14 - a1 > 128 )
    {
      v6 = v14;
      if ( !v42 )
      {
LABEL_44:
        v37 = v7 >> 3;
        v38 = ((v7 >> 3) - 2) >> 1;
        sub_1F6AB10((__int64)a1, v38, v7 >> 3, *(size_t **)&a1[8 * v38]);
        do
        {
          --v38;
          sub_1F6AB10((__int64)a1, v38, v37, *(size_t **)&a1[8 * v38]);
        }
        while ( v38 );
        do
        {
          v39 = *--v17;
          *v17 = *(size_t **)a1;
          result = sub_1F6AB10((__int64)a1, 0, ((char *)v17 - a1) >> 3, v39);
        }
        while ( (char *)v17 - a1 > 8 );
        return result;
      }
      continue;
    }
    return result;
  }
}
