__int64 __fastcall sub_52DB60(_QWORD *a1, __int64 a2, __int64 *a3)
{
  const char *v3; // r13
  const char *v5; // rsi
  char *v7; // rax
  const char *v8; // r13
  const char *v9; // r15
  char *v10; // rbx
  unsigned int v11; // edi
  char v12; // bp
  int v13; // edx
  bool v14; // al
  __int64 v15; // rbp
  char *v16; // rax
  char *v17; // r15
  char v18; // al
  char *v19; // rax
  char v20; // dl
  __int64 result; // rax
  void *v22; // rdi
  __int64 v23; // rdx
  size_t v24; // rax
  size_t v25; // rbx
  void **p_src; // rsi
  char v27; // dl
  void *v28; // rdi
  size_t v29; // r13
  char *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rbp
  void **v33; // r13
  void *v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // [rsp+8h] [rbp-80h]
  unsigned int v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-78h] BYREF
  __int128 v39; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return 0;
  v3 = *(const char **)a2;
  v5 = "@def";
  v7 = strstr(v3, "@def");
  if ( !v7 || v3 != v7 )
    return 0;
  v8 = v3 + 4;
  v9 = (const char *)skip_spaces(v8);
  v10 = (char *)v9;
  if ( !v9 )
  {
LABEL_17:
    sub_169A50(a3, (__int64)"Malformed @def: %s", v8);
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v11 = *v10;
    v12 = *v10;
    if ( v11 > 0x7F )
      goto LABEL_19;
    v13 = isspace(v11);
    v14 = v12 == 59 || v12 == 0;
    if ( v13 )
      break;
    if ( v14 )
      goto LABEL_17;
LABEL_19:
    ++v10;
  }
  if ( v14 )
    goto LABEL_17;
  v38 = 0;
  v39 = 0;
  v15 = v10 - v9;
  if ( v10 != v9 )
  {
    v22 = nullptr;
    v23 = v15 + 1;
    if ( v15 != -1 )
    {
      v38 = qvector_reserve(&v38, 0, v23, 1);
      v23 = v15 + 1;
      v22 = (void *)v38;
    }
    *(_QWORD *)&v39 = v23;
    v5 = v9;
    memmove(v22, v9, v10 - v9);
    *(_BYTE *)(v38 + v15) = 0;
  }
  v16 = (char *)skip_spaces(v10);
  v17 = v16;
  if ( !v16 || (v18 = *v16) == 0 )
  {
LABEL_15:
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38, v5);
    }
    goto LABEL_17;
  }
  if ( v18 == 59 )
  {
    src = nullptr;
    v41 = 0;
  }
  else
  {
    v19 = v17;
    while ( 1 )
    {
      v20 = *++v19;
      if ( v20 == 59 )
        break;
      if ( !v20 )
        goto LABEL_15;
    }
    v24 = v19 - v17;
    src = nullptr;
    v41 = 0;
    v25 = v24;
    if ( v24 )
    {
      v28 = nullptr;
      v29 = v24 + 1;
      if ( v24 != -1 )
      {
        src = (void *)qvector_reserve(&src, 0, v24 + 1, 1);
        v28 = src;
      }
      *(_QWORD *)&v41 = v29;
      memmove(v28, v17, v25);
      *((_BYTE *)src + v25) = 0;
    }
  }
  p_src = &src;
  v27 = sub_52D3E0((__int64)a1, (__int64)&src, a3);
  result = 0xFFFFFFFFLL;
  if ( v27 )
  {
    p_src = (void **)&v38;
    v30 = sub_52D8E0(a1, (__int64)&v38);
    v31 = v30;
    if ( v30 != (char *)&src )
    {
      v32 = v41;
      if ( (unsigned __int64)v41 > 1 )
      {
        v33 = (void **)src;
        v34 = *(void **)v30;
        if ( *((_QWORD *)v30 + 2) < (unsigned __int64)v41 )
        {
          v35 = qvector_reserve(v30, *(_QWORD *)v30, v41, 1);
          *v31 = v35;
          v34 = (void *)v35;
        }
        v31[1] = v32;
        p_src = v33;
        memmove(v34, v33, v32 - 1);
        *(_BYTE *)(*v31 + v32 - 1) = 0;
      }
      else
      {
        *((_QWORD *)v30 + 1) = 0;
      }
    }
    result = 1;
  }
  if ( src )
  {
    v36 = result;
    *(_QWORD *)&v41 = 0;
    qfree(src, (const char *)p_src);
    result = v36;
  }
  if ( v38 )
  {
    v37 = result;
    *(_QWORD *)&v39 = 0;
    qfree(v38, (const char *)p_src);
    return v37;
  }
  return result;
}
