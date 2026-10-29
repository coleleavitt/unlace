__int64 __fastcall sub_8181F0(void **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  FILE *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // r14d
  void *v13; // rsi
  unsigned __int64 v15; // rdx
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rax
  const char *v20; // r12
  size_t v21; // rax
  size_t v22; // r13
  const char *v23; // rax
  const char *v24; // rbx
  size_t v25; // rax
  size_t v26; // r12
  __int64 v27; // rax
  char *v28; // rsi
  void *v29; // rdi
  size_t v30; // r14
  void *v31; // rdi
  size_t v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v6 = openR(a2);
  if ( v6 )
  {
    v9 = (FILE *)v6;
    v10 = qfsize(v6);
    LOBYTE(v11) = v10 <= a3 && v10 > 0;
    v12 = v11;
    if ( (_BYTE)v11 )
    {
      v15 = (unsigned __int64)a1[1];
      if ( v15 < v10 )
      {
        v28 = (char *)*a1;
        if ( (unsigned __int64)a1[2] < v10 )
        {
          v33 = qvector_reserve(a1, v28, v10, 1);
          v15 = (unsigned __int64)a1[1];
          *a1 = (void *)v33;
          v28 = (char *)v33;
        }
        memset(&v28[v15], 0, v10 - v15);
        a1[1] = (void *)v10;
      }
      else if ( v10 != v15 )
      {
        a1[1] = (void *)v10;
      }
      v16 = (char *)*a1;
      if ( v10 == qfread(v9, *a1) )
        goto LABEL_8;
      if ( a4 )
      {
        v19 = (const char *)qstrerror(0xFFFFFFFFLL, v16, v17, v18);
        v20 = v19;
        if ( v19 && (v21 = strlen(v19), (v22 = v21) != 0) )
        {
          v29 = (void *)*a4;
          v30 = v21 + 1;
          if ( a4[2] < v21 + 1 )
          {
            v35 = qvector_reserve(a4, *a4, v21 + 1, 1);
            *a4 = v35;
            v29 = (void *)v35;
          }
          a4[1] = v30;
          memmove(v29, v20, v22);
          *(_BYTE *)(*a4 + v22) = 0;
        }
        else
        {
          a4[1] = 0;
        }
      }
    }
    else if ( a4 )
    {
      v13 = (void *)*a4;
      if ( (unsigned __int64)a4[2] <= 0xF )
      {
        v27 = qvector_reserve(a4, v13, 16, 1);
        *a4 = v27;
        v13 = (void *)v27;
      }
      a4[1] = 16;
      qmemcpy(v13, "wrong file size", 15);
      *(_BYTE *)(*a4 + 15) = 0;
    }
    v12 = 0;
LABEL_8:
    qfclose(v9);
    return v12;
  }
  if ( a4 )
  {
    v23 = (const char *)qstrerror(0xFFFFFFFFLL, a2, v7, v8);
    v24 = v23;
    if ( v23 && (v25 = strlen(v23), (v26 = v25) != 0) )
    {
      v31 = (void *)*a4;
      v32 = v25 + 1;
      if ( a4[2] < v25 + 1 )
      {
        v34 = qvector_reserve(a4, *a4, v25 + 1, 1);
        *a4 = v34;
        v31 = (void *)v34;
      }
      a4[1] = v32;
      memmove(v31, v24, v26);
      *(_BYTE *)(*a4 + v26) = 0;
    }
    else
    {
      a4[1] = 0;
    }
  }
  return 0;
}

