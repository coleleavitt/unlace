unsigned __int64 __fastcall build_plugin_options(__int64 a1, __int64 *a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r13
  char *v8; // rsi
  char *v9; // rbx
  __int64 v10; // r15
  size_t v11; // r9
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r15
  size_t v21; // r9
  size_t v22; // r8
  size_t v23; // r10
  __int64 v24; // rsi
  char *v25; // rbp
  unsigned __int64 v26; // rbx
  char *v27; // r15
  char *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _BYTE *v31; // rsi
  unsigned __int64 v32; // r13
  size_t v33; // r8
  size_t v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rdx
  char *v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rbx
  char *v42; // rax
  void *v43; // rdi
  __int64 v45; // [rsp+0h] [rbp-90h]
  unsigned __int64 v46; // [rsp+0h] [rbp-90h]
  size_t v47; // [rsp+0h] [rbp-90h]
  size_t n; // [rsp+8h] [rbp-88h]
  size_t nb; // [rsp+8h] [rbp-88h]
  size_t na; // [rsp+8h] [rbp-88h]
  __int64 v51; // [rsp+10h] [rbp-80h]
  size_t v52; // [rsp+10h] [rbp-80h]
  size_t v53; // [rsp+10h] [rbp-80h]
  void *v54; // [rsp+18h] [rbp-78h] BYREF
  __int128 v55; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v57; // [rsp+40h] [rbp-50h]
  unsigned __int64 v58; // [rsp+50h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v55 = 0;
  v54 = nullptr;
  if ( !a3 )
  {
    v5 = *a2;
    v6 = 0;
    v7 = *a2 + 48 * a2[1];
    if ( *a2 == v7 )
    {
      v57 = 0;
      goto LABEL_48;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_5:
        v8 = (char *)v54;
        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v6 + 1) )
        {
          v54 = (void *)qvector_reserve(&v54, v54, v6 + 1, 24);
          v6 = v55;
          v8 = (char *)v54;
        }
        v9 = &v8[24 * v6];
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        *(_QWORD *)&v55 = v55 + 1;
        v10 = *(_QWORD *)(v5 + 8);
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v10 != 1 )
          {
            v12 = *((_QWORD *)v9 + 1);
            v13 = *(_QWORD *)v9;
            v14 = v10 - 1;
            if ( v12 && (--v12, v14 = v11 + v12, v10 += v12, v11 + v12 == -1) )
            {
              v16 = -1;
            }
            else
            {
              v51 = v14;
              n = v11;
              v45 = v12;
              v15 = qvector_reserve(v9, v13, v10, 1);
              v12 = v45;
              v11 = n;
              *(_QWORD *)v9 = v15;
              v13 = v15;
              v16 = v51;
            }
            *((_QWORD *)v9 + 1) = v10;
            *(_BYTE *)(v13 + v16) = 0;
            memcpy((void *)(v12 + *(_QWORD *)v9), *(const void **)v5, v11);
          }
        }
        if ( *(_QWORD *)(v5 + 32) > 1u )
        {
          v17 = *((_QWORD *)v9 + 1);
          v18 = 2;
          if ( v17 )
            v18 = v17-- + 1;
          v19 = *(_QWORD *)v9;
          if ( *((_QWORD *)v9 + 2) < v18 )
          {
            v46 = v18;
            v35 = qvector_reserve(v9, v19, v18, 1);
            *(_QWORD *)v9 = v35;
            v18 = v46;
            v19 = v35;
          }
          *((_QWORD *)v9 + 1) = v18;
          *(_BYTE *)(v19 + v17) = 61;
          *(_BYTE *)(*(_QWORD *)v9 + v17 + 1) = 0;
          v20 = *(_QWORD *)(v5 + 32);
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v20 != 1 )
              break;
          }
        }
        v5 += 48;
        v6 = v55;
        if ( v7 == v5 )
          goto LABEL_22;
      }
      v22 = *((_QWORD *)v9 + 1);
      v23 = v20 - 1;
      if ( v22 )
      {
        --v22;
        v24 = *(_QWORD *)v9;
        v23 = v21 + v22;
        v20 += v22;
        if ( *((_QWORD *)v9 + 2) < v20 )
        {
LABEL_45:
          v52 = v23;
          nb = v22;
          v47 = v21;
          v36 = qvector_reserve(v9, v24, v20, 1);
          v23 = v52;
          v22 = nb;
          *(_QWORD *)v9 = v36;
          v24 = v36;
          v21 = v47;
        }
      }
      else
      {
        v24 = *(_QWORD *)v9;
        if ( *((_QWORD *)v9 + 2) < v20 )
          goto LABEL_45;
      }
      *((_QWORD *)v9 + 1) = v20;
      v5 += 48;
      *(_BYTE *)(v24 + v23) = 0;
      memcpy((void *)(v22 + *(_QWORD *)v9), *(const void **)(v5 - 24), v21);
      v6 = v55;
      if ( v7 == v5 )
        goto LABEL_22;
    }
  }
  v54 = (void *)qvector_reserve(&v54, 0, 1, 24);
  v4 = (char *)v54 + 24 * v55;
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)&v55 = v55 + 1;
  sub_35A790((char **)v4);
  v5 = *a2;
  v6 = v55;
  v7 = *a2 + 48 * a2[1];
  if ( v7 != *a2 )
    goto LABEL_5;
LABEL_22:
  ptr = nullptr;
  v57 = 0;
  if ( !v6 )
    goto LABEL_48;
  v25 = (char *)v54;
  v26 = v6 - 1;
  v27 = (char *)v54 + 24 * v6;
  if ( v54 == v27 )
  {
    if ( v6 != 1 )
      goto LABEL_60;
LABEL_48:
    v30 = 0;
    v26 = 0;
    v31 = nullptr;
    goto LABEL_49;
  }
  v28 = (char *)v54;
  do
  {
    v29 = *((_QWORD *)v28 + 1);
    if ( v29 )
      v26 = v29 + v26 - 1;
    v28 += 24;
  }
  while ( v27 != v28 );
  v30 = 0;
  v31 = nullptr;
  if ( v26 )
  {
LABEL_60:
    ptr = (void *)qvector_reserve(&ptr, 0, v26, 1);
    v31 = ptr;
    v25 = (char *)v54;
    v26 = v57;
    v27 = (char *)v54 + 24 * v55;
    v30 = *((_QWORD *)&v57 + 1);
    if ( v54 == v27 )
      goto LABEL_49;
    goto LABEL_39;
  }
  do
  {
LABEL_39:
    if ( v26 > 1 )
    {
      if ( v30 < v26 + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, v31, v26 + 1, 1);
        v31 = ptr;
      }
      *(_QWORD *)&v57 = v26 + 1;
      v31[v26] = 0;
      *((_BYTE *)ptr + v26 - 1) = 58;
      v30 = *((_QWORD *)&v57 + 1);
      v26 = v57;
      v31 = ptr;
    }
    v32 = *((_QWORD *)v25 + 1);
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v32 != 1 )
      {
        v34 = v32 - 1;
        if ( v26 )
        {
          --v26;
          v34 = v33 + v26;
          v32 += v26;
        }
        if ( v30 < v32 )
        {
          v53 = v34;
          na = v33;
          ptr = (void *)qvector_reserve(&ptr, v31, v32, 1);
          v34 = v53;
          v31 = ptr;
          v33 = na;
        }
        *(_QWORD *)&v57 = v32;
        v31[v34] = 0;
        memcpy((char *)ptr + v26, *(const void **)v25, v33);
        v31 = ptr;
        v30 = *((_QWORD *)&v57 + 1);
        v26 = v57;
      }
    }
    v25 += 24;
  }
  while ( v27 != v25 );
LABEL_49:
  v37 = *(void **)a1;
  v38 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v31;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v30;
  ptr = v37;
  *((_QWORD *)&v57 + 1) = v38;
  if ( v37 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v37);
  }
  v39 = (char *)v54;
  if ( v54 )
  {
    v40 = v55;
    if ( (_QWORD)v55 )
    {
      v41 = 0;
      do
      {
        v42 = &v39[24 * v41];
        v43 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v43);
          v39 = (char *)v54;
        }
        ++v41;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v39);
  }
  return v58 - __readfsqword(0x28u);
}
