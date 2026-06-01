__int64 __fastcall sub_CBE30(__int64 *a1, __int64 *a2, char a3)
{
  const char *v4; // rsi
  bool v5; // zf
  __int64 v7; // r13
  _BYTE *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  const char *v11; // r14
  const char *v12; // r14
  size_t v13; // rax
  size_t v14; // rbp
  const void **v15; // rax
  _BYTE *v16; // rbp
  __int64 v17; // rax
  size_t v18; // rbp
  _BYTE *v19; // r13
  size_t v20; // r14
  _BYTE *v21; // rsi
  char *v22; // rdx
  char i; // al
  void *v25; // rdi
  size_t v26; // r15
  char *v27; // rdx
  char v28; // al
  const void *v29; // r14
  _BYTE *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h]
  __int128 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v4 = s1;
  v5 = a2[1] == 0;
  v36 = __readfsqword(0x28u);
  if ( !v5 )
    v4 = (const char *)*a2;
  v7 = sub_CBA50(a1, v4, a3, &v33);
  if ( !v7 )
    return 0;
  v8 = (_BYTE *)a2[1];
  v9 = v33;
  if ( v8 )
  {
    v10 = (unsigned __int64)(v8 - 1);
    v11 = (const char *)*a2;
    src = nullptr;
    v35 = 0;
    if ( v33 > v10 )
      v9 = v10;
    v12 = &v11[v9];
    v13 = v10 - v9;
    v14 = v13;
    if ( v13 )
    {
      v25 = nullptr;
      v26 = v13 + 1;
      if ( v13 != -1 )
      {
        src = (void *)qvector_reserve();
        v25 = src;
      }
      *(_QWORD *)&v35 = v26;
      memmove(v25, v12, v14);
      *((_BYTE *)src + v14) = 0;
      v27 = (char *)src;
      if ( src )
      {
        while ( 1 )
        {
          v28 = *v27;
          if ( !*v27 )
            break;
          if ( v28 == 47 || v28 == 92 )
            *v27 = 47;
          ++v27;
        }
      }
    }
  }
  else
  {
    src = nullptr;
    v35 = 0;
  }
  if ( a3 )
  {
    v15 = (const void **)(v7 + 24);
    if ( a2 != (__int64 *)(v7 + 24) )
    {
      v16 = *(_BYTE **)(v7 + 32);
      if ( v16 )
        goto LABEL_11;
      v17 = v35;
      a2[1] = 0;
      if ( v17 )
        goto LABEL_14;
LABEL_21:
      v22 = (char *)*a2;
      for ( i = *(_BYTE *)*a2; i; ++v22 )
      {
        if ( i == 47 || i == 92 )
          *v22 = 47;
        i = v22[1];
      }
      goto LABEL_30;
    }
    if ( !(_QWORD)v35 )
      goto LABEL_21;
    v18 = v35 - 1;
    if ( (_QWORD)v35 == 1 )
      goto LABEL_21;
LABEL_15:
    v19 = (_BYTE *)a2[1];
    v20 = v18;
    if ( v19 )
    {
      --v19;
      v20 = (size_t)&v19[v18];
    }
    v21 = (_BYTE *)*a2;
    if ( a2[2] < v20 + 1 )
    {
      v31 = qvector_reserve();
      *a2 = v31;
      v21 = (_BYTE *)v31;
    }
    a2[1] = v20 + 1;
    v21[v20] = 0;
    memcpy(&v19[*a2], src, v18);
    goto LABEL_20;
  }
  v15 = (const void **)v7;
  if ( a2 == (__int64 *)v7 )
  {
    if ( !(_QWORD)v35 )
      goto LABEL_30;
    v18 = v35 - 1;
    if ( (_QWORD)v35 == 1 )
      goto LABEL_30;
    goto LABEL_15;
  }
  v16 = *(_BYTE **)(v7 + 8);
  if ( !v16 )
  {
    v17 = v35;
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
  if ( v16 == (_BYTE *)&dword_0 + 1 )
  {
    a2[1] = 0;
  }
  else
  {
    v29 = *v15;
    v30 = (_BYTE *)*a2;
    if ( a2[2] < (unsigned __int64)v16 )
    {
      v32 = qvector_reserve();
      *a2 = v32;
      v30 = (_BYTE *)v32;
    }
    a2[1] = (__int64)v16;
    memmove(v30, v29, (size_t)(v16 - 1));
    v16[*a2 - 1] = 0;
  }
  v17 = v35;
  if ( (_QWORD)v35 )
    goto LABEL_14;
LABEL_20:
  if ( a3 )
    goto LABEL_21;
LABEL_30:
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return 1;
}

