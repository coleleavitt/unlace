__int64 __fastcall sub_42ACF0(__int64 a1, const void **a2)
{
  unsigned __int64 v2; // rax
  const char *v5; // rsi
  char v6; // al
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  char *v10; // rdx
  char *v11; // rbx
  char *v12; // r12
  const char *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const char *v19; // rdi
  char *v20; // rax
  size_t v21; // r13
  __int64 v22; // rax
  const char *v23; // rbp
  __int64 i; // r14
  const char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rax
  const char *v28; // rdi
  const void *v29; // rbp
  char *s2; // [rsp+0h] [rbp-D8h]
  char *s2a; // [rsp+0h] [rbp-D8h]
  char *v32; // [rsp+8h] [rbp-D0h]
  char *v33; // [rsp+8h] [rbp-D0h]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  __int64 v35; // [rsp+18h] [rbp-C0h]
  char *s1; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-B0h]
  void *v38; // [rsp+40h] [rbp-98h] BYREF
  __int128 v39; // [rsp+48h] [rbp-90h]
  __int128 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  __int128 v43; // [rsp+78h] [rbp-60h]
  char v44; // [rsp+88h] [rbp-50h]
  unsigned __int64 v45; // [rsp+98h] [rbp-40h]

  v2 = (unsigned __int64)a2[1];
  v45 = __readfsqword(0x28u);
  if ( v2 > 1 && *((char *)*a2 + v2 - 2) == 47 )
    return 0;
  v5 = nullptr;
  s1 = nullptr;
  v37 = 0;
  v6 = sub_425800((__int64 *)&s1, 0, (__int64)a2);
  v7 = s1;
  if ( !v6 )
    goto LABEL_19;
  v8 = *(_QWORD *)(a1 + 16);
  v32 = (char *)(a1 + 8);
  if ( !v8 )
    goto LABEL_20;
  v9 = v37;
  v10 = (char *)&::s1;
  v11 = (char *)(a1 + 8);
  if ( (_QWORD)v37 )
    v10 = s1;
  s2 = v10;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v8 + 40);
    if ( !v9 )
      break;
    v12 = (char *)v8;
    v5 = v7;
    v13 = &::s1;
    if ( v16 )
      goto LABEL_8;
LABEL_9:
    v14 = strcmp(v13, v5);
    v15 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 24);
    if ( v14 >= 0 )
    {
      v11 = v12;
      v8 = v15;
    }
    if ( !v8 )
      goto LABEL_18;
  }
  if ( v16 )
  {
LABEL_16:
    v12 = (char *)v8;
LABEL_8:
    v13 = *(const char **)(v8 + 32);
    v5 = s2;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(v8 + 16);
    if ( !v17 )
      break;
    v11 = (char *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_16;
  }
  v11 = (char *)v8;
LABEL_18:
  if ( v32 == v11 )
  {
LABEL_19:
    v8 = 0;
    goto LABEL_20;
  }
  if ( *((_QWORD *)v11 + 5) )
  {
    v19 = &::s1;
    v5 = *((const char **)v11 + 4);
    if ( v9 )
      v19 = v7;
    goto LABEL_26;
  }
  v19 = v7;
  v5 = &::s1;
  if ( v9 )
  {
LABEL_26:
    v8 = 0;
    if ( strcmp(v19, v5) < 0 )
      goto LABEL_20;
  }
  v20 = (char *)a2[1];
  v38 = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v44 = 0;
  s2a = v20;
  v43 = 0;
  if ( v20 )
  {
    v21 = (size_t)(v20 - 1);
    if ( v20 == (_BYTE *)&dword_0 + 1 )
    {
      s2a = nullptr;
      goto LABEL_30;
    }
    v29 = *a2;
    v38 = (void *)qvector_reserve(&v38, 0, v20, 1);
    *(_QWORD *)&v39 = s2a;
    memmove(v38, v29, v21);
    *((_BYTE *)v38 + v21) = 0;
    s2a = (char *)v39;
    v33 = (char *)v38;
  }
  else
  {
LABEL_30:
    v33 = nullptr;
  }
  v22 = *((_QWORD *)v11 + 10);
  v23 = &::s1;
  v35 = *((_QWORD *)v11 + 8);
  v5 = (const char *)(v35 - v22);
  v34 = *((_QWORD *)v11 + 7);
  v8 = v34 + 80 * v22;
  if ( s2a )
    v23 = v33;
  for ( i = 0xCCCCCCCCCCCCCCCDLL * ((80 * (__int64)v5) >> 4); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v25 = &::s1;
      v26 = v8 + 80 * (i >> 1);
      if ( *(_QWORD *)(v26 + 8) )
        v25 = *(const char **)v26;
      v5 = v23;
      if ( strcmp(v25, v23) >= 0 )
        break;
      v8 = v26 + 80;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_39;
    }
  }
LABEL_39:
  if ( v8 == 80 * v35 + v34 )
  {
    v8 = 0;
  }
  else
  {
    v27 = *(_QWORD *)(v8 + 8);
    if ( s2a )
    {
      v5 = v33;
      v28 = &::s1;
      if ( v27 )
        v28 = *(const char **)v8;
LABEL_43:
      if ( strcmp(v28, v5) )
        v8 = 0;
    }
    else
    {
      v5 = &::s1;
      if ( v27 )
      {
        v28 = *(const char **)v8;
        goto LABEL_43;
      }
    }
  }
  if ( v33 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v33, v5);
  }
  v7 = s1;
LABEL_20:
  if ( v7 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v7, v5);
  }
  return v8;
}
