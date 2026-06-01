const char *__fastcall sub_10F0C80(_QWORD *a1, unsigned __int64 *a2)
{
  const char *v3; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // r8
  const char *v7; // rbx
  size_t v8; // r12
  size_t v9; // rcx
  size_t v10; // rdx
  int v11; // eax
  size_t v12; // rbp
  size_t v13; // r12
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rbp
  const char *v17; // rbp
  const char *v18; // rax
  _BYTE *v19; // rsi
  void *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rax
  const char *v23; // rdx
  __int64 v24; // r15
  const char *v25; // rbp
  __int64 v26; // rdi
  __int64 v28; // r12
  char *v29; // rdi
  void *v30; // rdi
  char *v31; // rdi
  unsigned __int64 v32; // rax
  size_t v33; // r12
  size_t v34; // r15
  const void *v35; // rsi
  size_t v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // r12
  unsigned __int64 v39; // [rsp+0h] [rbp-48h]
  size_t v40; // [rsp+8h] [rbp-40h]

  v3 = (const char *)(a1 + 1);
  v5 = a1[2];
  if ( !v5 )
  {
    v7 = (const char *)(a1 + 1);
    goto LABEL_23;
  }
  v6 = *a2;
  v7 = (const char *)(a1 + 1);
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v5 + 32) < v6 )
        goto LABEL_11;
      if ( *(_QWORD *)(v5 + 32) == v6 )
        break;
LABEL_9:
      v7 = (const char *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_12;
    }
    v8 = *(_QWORD *)(v5 + 48);
    v9 = a2[2];
    v10 = v9;
    if ( v8 <= v9 )
      v10 = *(_QWORD *)(v5 + 48);
    if ( v10 )
    {
      v40 = a2[2];
      v39 = v6;
      v11 = memcmp(*(const void **)(v5 + 40), (const void *)a2[1], v10);
      v6 = v39;
      v9 = v40;
      if ( v11 )
        goto LABEL_8;
    }
    v28 = v8 - v9;
    if ( v28 > 0x7FFFFFFF )
      goto LABEL_9;
    if ( v28 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v11 = v28;
LABEL_8:
      if ( v11 < 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_11:
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_12:
  if ( v3 == v7 || *((_QWORD *)v7 + 4) > v6 )
    goto LABEL_23;
  if ( *((_QWORD *)v7 + 4) == v6 )
  {
    v12 = a2[2];
    v13 = *((_QWORD *)v7 + 6);
    v14 = v13;
    if ( v12 <= v13 )
      v14 = a2[2];
    if ( v14 && (v15 = memcmp((const void *)a2[1], *((const void **)v7 + 5), v14)) != 0 )
    {
LABEL_22:
      if ( v15 < 0 )
        goto LABEL_23;
    }
    else
    {
      v16 = v12 - v13;
      if ( v16 <= 0x7FFFFFFF )
      {
        if ( v16 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v15 = v16;
          goto LABEL_22;
        }
LABEL_23:
        v17 = v7;
        v18 = (const char *)operator new(0xF8u);
        v19 = (_BYTE *)a2[1];
        v7 = v18;
        v20 = (void *)(v18 + 56);
        v21 = (__int64)&v19[a2[2]];
        *((_QWORD *)v18 + 4) = *a2;
        *((_QWORD *)v18 + 5) = v18 + 56;
        sub_10D8CD0((_QWORD *)v18 + 5, v19, v21);
        *((_QWORD *)v7 + 9) = v7 + 88;
        *((_QWORD *)v7 + 10) = 0x400000000LL;
        v22 = sub_10F09A0(a1, v17, (__int64)(v7 + 32));
        v24 = v22;
        v25 = v23;
        if ( v23 )
        {
          v26 = 1;
          if ( v3 != v23 && !v22 )
          {
            v32 = *((_QWORD *)v23 + 4);
            if ( *((_QWORD *)v7 + 4) >= v32 )
            {
              v26 = 0;
              if ( *((_QWORD *)v7 + 4) == v32 )
              {
                v33 = *((_QWORD *)v7 + 6);
                v35 = *((const void **)v23 + 5);
                v36 = *((_QWORD *)v23 + 6);
                v34 = v36;
                if ( v33 <= v36 )
                  v36 = *((_QWORD *)v7 + 6);
                v37 = sub_9B48C0(*((const void **)v7 + 5), v35, v36);
                v26 = v37;
                if ( v37 )
                {
LABEL_44:
                  v26 = (unsigned int)v26 >> 31;
                }
                else
                {
                  v38 = v33 - v34;
                  if ( v38 <= 0x7FFFFFFF )
                  {
                    if ( v38 >= (__int64)0xFFFFFFFF80000000LL )
                    {
                      LODWORD(v26) = v38;
                      goto LABEL_44;
                    }
                    v26 = 1;
                  }
                }
              }
            }
          }
          std::_Rb_tree_insert_and_rebalance(v26, v7, v25, v3);
          ++a1[5];
        }
        else
        {
          v29 = *((char **)v7 + 9);
          if ( v7 + 88 != v29 )
            free(v29);
          v30 = *((void **)v7 + 5);
          if ( v20 != v30 )
            operator delete(v30);
          v31 = (char *)v7;
          v7 = (const char *)v24;
          operator delete(v31);
        }
      }
    }
  }
  return v7 + 72;
}
