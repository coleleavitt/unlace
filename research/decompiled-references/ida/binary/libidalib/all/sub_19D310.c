_QWORD *__fastcall sub_19D310(char *s, _QWORD *a2, char a3)
{
  char v3; // al
  const char *v4; // rbp
  char *v5; // rbx
  signed __int64 v6; // r12
  size_t v7; // rbp
  void *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  void *v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // r13
  __int64 v16; // rbp
  _QWORD *v17; // r14
  __int64 v18; // rbx
  __int64 i; // rbx
  _QWORD *v20; // rax
  __int64 v22; // [rsp+0h] [rbp-98h]
  _QWORD *v23; // [rsp+8h] [rbp-90h]
  int v25; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int128 v28; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h]

  v28 = 0;
  v27 = 0;
  if ( !s )
    return nullptr;
  v3 = *s;
  v4 = s;
  while ( v3 == 47 )
  {
LABEL_13:
    v5 = (char *)v4;
LABEL_14:
    v3 = v5[1];
    v4 = v5 + 1;
  }
  while ( 1 )
  {
    v5 = strchr(v4, 47);
    if ( !v5 )
      v5 = (char *)&v4[strlen(v4)];
    src = nullptr;
    v6 = v5 - v4;
    if ( v5 == v4 )
      goto LABEL_7;
    v13 = nullptr;
    if ( v6 != -1 )
    {
      src = (void *)qvector_reserve();
      v13 = src;
    }
    memmove(v13, v4, v5 - v4);
    *((_BYTE *)src + v6) = 0;
    v7 = v6 + 1;
    if ( v6 == -1 )
    {
LABEL_7:
      v7 = 0;
      v8 = nullptr;
    }
    else
    {
      v8 = (void *)qalloc_or_throw();
      memcpy(v8, src, v7);
    }
    v9 = v28;
    v10 = v27;
    if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
    {
      v27 = qvector_reserve();
      v9 = v28;
      v10 = v27;
    }
    v11 = v10 + 24 * v9;
    *(_QWORD *)v11 = v8;
    *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    v12 = v28 + 1;
    *(_QWORD *)&v28 = v28 + 1;
    if ( *v5 != 47 )
      break;
    if ( !src )
      goto LABEL_14;
    v4 = v5;
    qfree();
    if ( *v5 == 47 )
      goto LABEL_13;
  }
  if ( src )
  {
    qfree();
    v12 = v28;
  }
  v22 = v27;
  if ( !v12 )
  {
    v14 = nullptr;
    if ( v27 )
    {
LABEL_42:
      qfree();
      return v14;
    }
    return nullptr;
  }
  v14 = (_QWORD *)TProgram::menuBar;
  if ( !TProgram::menuBar )
    goto LABEL_37;
  v25 = 0;
  v15 = 0;
  v23 = *(_QWORD **)(TProgram::menuBar + 80LL);
LABEL_24:
  v16 = v27 + 24 * v15;
  v17 = (_QWORD *)*v23;
  if ( *v23 )
  {
    v18 = *(_QWORD *)(v16 + 8);
    v14 = (_QWORD *)*v23;
    do
    {
      if ( v18 )
      {
        if ( sub_19C2D0((unsigned __int8 *)v14[1], *(char **)v16) )
          goto LABEL_30;
      }
      else if ( sub_19C2D0((unsigned __int8 *)v14[1], (char *)s1) )
      {
LABEL_30:
        v15 = ++v25;
        if ( v25 >= v12 )
          goto LABEL_35;
        if ( *((_WORD *)v14 + 8) )
        {
          v14 = nullptr;
          goto LABEL_37;
        }
        v23 = (_QWORD *)v14[4];
        goto LABEL_24;
      }
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
  }
  if ( v12 - 1 == v15 && a3 )
  {
    do
    {
      v14 = v17;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
  }
  else
  {
    v14 = nullptr;
  }
LABEL_35:
  if ( a2 )
    *a2 = v23;
LABEL_37:
  if ( v27 )
  {
    for ( i = 0; i != v12; ++i )
    {
      v20 = (_QWORD *)(v22 + 24 * i);
      if ( *v20 )
      {
        v20[1] = 0;
        qfree();
        v22 = v27;
      }
    }
    goto LABEL_42;
  }
  return v14;
}

