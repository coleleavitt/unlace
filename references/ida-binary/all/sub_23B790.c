__int64 __fastcall sub_23B790(__int64 *a1, __int64 *a2, char a3)
{
  char *v4; // rsi
  bool v5; // zf
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // rdx
  unsigned __int64 v10; // rax
  char *v11; // r14
  char *v12; // r14
  size_t v13; // rax
  size_t v14; // rbp
  const void **v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  size_t v18; // rbp
  __int64 v19; // r13
  size_t v20; // r14
  _BYTE *v21; // rsi
  char i; // al
  void *v24; // rdi
  size_t v25; // r15
  char v26; // al
  char *v27; // r14
  _BYTE *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v4 = (char *)&s1;
  v5 = a2[1] == 0;
  v34 = __readfsqword(0x28u);
  if ( !v5 )
    v4 = (char *)*a2;
  v7 = sub_23B360(a1, v4, a3, (unsigned __int64 *)&v31);
  if ( !v7 )
    return 0;
  v8 = a2[1];
  v9 = v31;
  if ( v8 )
  {
    v10 = v8 - 1;
    v11 = (char *)*a2;
    src = nullptr;
    v33 = 0;
    if ( (unsigned __int64)v31 > v10 )
      v9 = (char *)v10;
    v12 = &v11[(_QWORD)v9];
    v13 = v10 - (_QWORD)v9;
    v14 = v13;
    if ( v13 )
    {
      v24 = nullptr;
      v25 = v13 + 1;
      if ( v13 != -1 )
      {
        src = (void *)qvector_reserve(&src, 0, v13 + 1, 1);
        v24 = src;
      }
      v4 = v12;
      *(_QWORD *)&v33 = v25;
      memmove(v24, v12, v14);
      *((_BYTE *)src + v14) = 0;
      v9 = (char *)src;
      if ( src )
      {
        while ( 1 )
        {
          v26 = *v9;
          if ( !*v9 )
            break;
          if ( v26 == 47 || v26 == 92 )
            *v9 = 47;
          ++v9;
        }
      }
    }
  }
  else
  {
    src = nullptr;
    v33 = 0;
  }
  if ( a3 )
  {
    v15 = (const void **)(v7 + 24);
    if ( a2 != (__int64 *)(v7 + 24) )
    {
      v16 = *(_QWORD *)(v7 + 32);
      if ( v16 )
        goto LABEL_11;
      v17 = v33;
      a2[1] = 0;
      if ( v17 )
        goto LABEL_14;
LABEL_21:
      v9 = (char *)*a2;
      for ( i = *(_BYTE *)*a2; i; ++v9 )
      {
        if ( i == 47 || i == 92 )
          *v9 = 47;
        i = v9[1];
      }
      goto LABEL_30;
    }
    if ( !(_QWORD)v33 )
      goto LABEL_21;
    v18 = v33 - 1;
    if ( (_QWORD)v33 == 1 )
      goto LABEL_21;
LABEL_15:
    v19 = a2[1];
    v20 = v18;
    if ( v19 )
    {
      --v19;
      v20 = v18 + v19;
    }
    v21 = (_BYTE *)*a2;
    if ( a2[2] < v20 + 1 )
    {
      v29 = qvector_reserve(a2, v21, v20 + 1, 1);
      *a2 = v29;
      v21 = (_BYTE *)v29;
    }
    a2[1] = v20 + 1;
    v21[v20] = 0;
    v4 = (char *)src;
    memcpy((void *)(v19 + *a2), src, v18);
    goto LABEL_20;
  }
  v15 = (const void **)v7;
  if ( a2 == (__int64 *)v7 )
  {
    if ( !(_QWORD)v33 )
      goto LABEL_30;
    v18 = v33 - 1;
    if ( (_QWORD)v33 == 1 )
      goto LABEL_30;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(v7 + 8);
  if ( !v16 )
  {
    v17 = v33;
    a2[1] = 0;
    if ( !v17 )
      goto LABEL_30;
LABEL_14:
    v18 = v17 - 1;
    if ( v17 == 1 )
      goto LABEL_20;
    goto LABEL_15;
  }
LABEL_11:
  if ( v16 == 1 )
  {
    a2[1] = 0;
  }
  else
  {
    v27 = (char *)*v15;
    v28 = (_BYTE *)*a2;
    if ( a2[2] < v16 )
    {
      v30 = qvector_reserve(a2, *a2, v16, 1);
      *a2 = v30;
      v28 = (_BYTE *)v30;
    }
    a2[1] = v16;
    v4 = v27;
    memmove(v28, v27, v16 - 1);
    *(_BYTE *)(*a2 + v16 - 1) = 0;
  }
  v17 = v33;
  if ( (_QWORD)v33 )
    goto LABEL_14;
LABEL_20:
  if ( a3 )
    goto LABEL_21;
LABEL_30:
  if ( src )
  {
    *(_QWORD *)&v33 = 0;
    qfree(src, v4, v9);
  }
  return 1;
}
