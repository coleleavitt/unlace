__int64 __fastcall sub_51E880(__int64 *a1, int a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // rdi
  const char *v11; // rdx
  const char *v12; // rbx
  const char *v13; // r14
  const char *v14; // rax
  const char *v15; // r15
  const char *v16; // rax
  size_t v17; // rax
  size_t v18; // r8
  size_t v19; // rax
  size_t v20; // r13
  size_t v21; // rax
  size_t v22; // r12
  unsigned int v23; // ebx
  void *v25; // rdi
  size_t v26; // rdx
  void *v27; // rdi
  size_t v28; // r14
  void *v29; // rdi
  size_t v30; // r13
  const char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // [rsp+0h] [rbp-78h]
  size_t v36; // [rsp+0h] [rbp-78h]
  size_t v37; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v40; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v38 = a2;
  v8 = *a1;
  v40 = 0;
  ptr = nullptr;
  v9 = sub_79BAE0(&v38, v8, &ptr, 1, 1089536, 83);
  v10 = ptr;
  if ( v9 <= 0 )
    goto LABEL_39;
  v11 = (char *)ptr + v40;
  if ( ptr < (char *)ptr + (unsigned __int64)v40 )
  {
    v13 = (char *)ptr + 1;
    v12 = (char *)ptr + 1;
    while ( v12 < v11 )
    {
      if ( !*v12++ )
        goto LABEL_4;
    }
    v12 = (char *)ptr + 1;
    v13 = nullptr;
  }
  else
  {
    v12 = (const char *)ptr;
    v13 = nullptr;
  }
LABEL_4:
  if ( !*v13 )
    v13 = nullptr;
  v14 = v12;
  do
  {
    if ( v14 >= v11 )
    {
      v15 = nullptr;
      goto LABEL_10;
    }
    ++v14;
  }
  while ( *(v14 - 1) );
  v15 = v12;
  v12 = v14;
LABEL_10:
  if ( !*v15 )
    v15 = nullptr;
  v16 = v12;
  while ( v16 < v11 )
  {
    if ( !*v16++ )
      goto LABEL_16;
  }
  v12 = nullptr;
LABEL_16:
  if ( !*v12 )
    v12 = nullptr;
  if ( v13 && (*v13 & 0x3F) == 0xD )
  {
    if ( a3 )
    {
      v17 = strlen(v13);
      v18 = v17;
      if ( v17 )
      {
        v25 = (void *)*a3;
        v26 = v17 + 1;
        if ( a3[2] < v17 + 1 )
        {
          v36 = v17 + 1;
          v37 = v17;
          v32 = qvector_reserve(a3, *a3, v26, 1);
          v18 = v37;
          v26 = v36;
          *a3 = v32;
          v25 = (void *)v32;
        }
        a3[1] = v26;
        v35 = v18;
        memmove(v25, v13, v18);
        *(_BYTE *)(*a3 + v35) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    if ( a4 )
    {
      if ( v15 && (v19 = strlen(v15), (v20 = v19) != 0) )
      {
        v27 = (void *)*a4;
        v28 = v19 + 1;
        if ( a4[2] < v19 + 1 )
        {
          v33 = qvector_reserve(a4, *a4, v19 + 1, 1);
          *a4 = v33;
          v27 = (void *)v33;
        }
        a4[1] = v28;
        memmove(v27, v15, v20);
        *(_BYTE *)(*a4 + v20) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
    if ( !a5 )
      goto LABEL_31;
    if ( !v12 || (v21 = strlen(v12), (v22 = v21) == 0) )
    {
      a5[1] = 0;
LABEL_31:
      v10 = ptr;
      v23 = 1;
      goto LABEL_32;
    }
    v29 = (void *)*a5;
    v30 = v21 + 1;
    if ( a5[2] < v21 + 1 )
    {
      v34 = qvector_reserve(a5, *a5, v21 + 1, 1);
      *a5 = v34;
      v29 = (void *)v34;
    }
    a5[1] = v30;
    v31 = v12;
    v23 = 1;
    memmove(v29, v31, v22);
    *(_BYTE *)(*a5 + v22) = 0;
    v10 = ptr;
  }
  else
  {
LABEL_39:
    v23 = 0;
  }
LABEL_32:
  if ( v10 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v10);
  }
  return v23;
}

