unsigned __int64 __fastcall sub_5CFA60(_QWORD *a1, const char **a2, __int64 a3)
{
  char *v3; // r12
  __int64 v4; // r14
  unsigned __int64 v7; // r13
  char v8; // al
  _BYTE *v9; // r13
  size_t v10; // r14
  size_t v11; // r10
  size_t v12; // r8
  void *v13; // r11
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // r8
  size_t v17; // r9
  void *v18; // rdx
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // rax
  const char *src; // [rsp+0h] [rbp-78h]
  void *srcb; // [rsp+0h] [rbp-78h]
  void *srca; // [rsp+0h] [rbp-78h]
  char *s; // [rsp+8h] [rbp-70h]
  size_t na; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+10h] [rbp-68h]
  size_t v28; // [rsp+18h] [rbp-60h]
  size_t v29; // [rsp+18h] [rbp-60h]
  void *v30; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = (char *)*a2;
  if ( !*a2 )
    return v32 - __readfsqword(0x28u);
  v4 = a1[76];
  if ( !v4 )
  {
    if ( *v3 && *v3 != 58 )
      return v32 - __readfsqword(0x28u);
    v10 = *(_QWORD *)(a3 + 8);
    v30 = nullptr;
    v31 = 0;
    if ( !v10 )
    {
      s = v3;
      v9 = nullptr;
LABEL_22:
      v14 = strlen(s);
      v15 = v31;
      v16 = v14;
      v17 = v14;
      if ( (_QWORD)v31 )
      {
        v15 = v31 - 1;
        v17 = v14 + v31 - 1;
      }
      v18 = (void *)(v17 + 1);
      if ( *((_QWORD *)&v31 + 1) < v17 + 1 )
      {
        v28 = v14;
        na = v17;
        srcb = (void *)(v17 + 1);
        v30 = (void *)qvector_reserve(&v30, v9, v18, 1);
        v16 = v28;
        v9 = v30;
        v17 = na;
        v18 = srcb;
      }
      *(_QWORD *)&v31 = v18;
      v9[v17] = 0;
      memmove((char *)v30 + v15, s, v16);
      v9 = v30;
      goto LABEL_27;
    }
    s = v3;
    v9 = nullptr;
    v11 = v10 - 1;
    if ( v10 == 1 )
      goto LABEL_22;
    goto LABEL_13;
  }
  v7 = v4 - 1;
  src = (const char *)a1[75];
  if ( strncmp(*a2, src, v4 - 1) )
    return v32 - __readfsqword(0x28u);
  s = &v3[v7];
  v8 = v3[v7];
  if ( v8 != 58 )
  {
    if ( v8 )
      return v32 - __readfsqword(0x28u);
  }
  v30 = nullptr;
  v31 = 0;
  if ( v7 < v4 - 2 || v4 == 2 )
  {
    v9 = nullptr;
  }
  else
  {
    v21 = (void *)qvector_reserve(&v30, 0, v4 - 1, 1);
    *(_QWORD *)&v31 = v4 - 1;
    v30 = v21;
    memmove(v21, src, v4 - 2);
    *((char *)v30 + v4 - 2) = 0;
    v9 = v30;
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
LABEL_13:
      v12 = v31;
      v13 = (void *)v11;
      if ( (_QWORD)v31 )
      {
        v12 = v31 - 1;
        v13 = (void *)(v31 - 1 + v11);
        v10 = v31 + v11;
      }
      if ( *((_QWORD *)&v31 + 1) < v10 )
      {
        v29 = v11;
        n = v12;
        srca = v13;
        v30 = (void *)qvector_reserve(&v30, v9, v10, 1);
        v11 = v29;
        v9 = v30;
        v12 = n;
        v13 = srca;
      }
      *(_QWORD *)&v31 = v10;
      *((_BYTE *)v13 + (_QWORD)v9) = 0;
      memcpy((char *)v30 + v12, *(const void **)a3, v11);
      v9 = v30;
    }
  }
  if ( s )
    goto LABEL_22;
LABEL_27:
  sub_63FC70(*(_QWORD *)(a1[12] + 1480LL), a1[30], v3, v9, 1);
  qfree(v3);
  v19 = qstrdup(v30);
  v20 = v30;
  *a2 = (const char *)v19;
  if ( v20 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v20);
  }
  return v32 - __readfsqword(0x28u);
}

