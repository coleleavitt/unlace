__int64 __fastcall sub_83B5B0(void **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  FILE *v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // edx
  unsigned int v10; // r14d
  void *v11; // rsi
  unsigned __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r12
  size_t v16; // rax
  size_t v17; // r13
  const char *v18; // rax
  const char *v19; // rbx
  size_t v20; // rax
  size_t v21; // r12
  __int64 v22; // rax
  char *v23; // rsi
  void *v24; // rdi
  size_t v25; // r14
  void *v26; // rdi
  size_t v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v6 = openR(a2);
  if ( v6 )
  {
    v7 = (FILE *)v6;
    v8 = qfsize(v6);
    LOBYTE(v9) = v8 <= a3 && v8 > 0;
    v10 = v9;
    if ( (_BYTE)v9 )
    {
      v13 = (unsigned __int64)a1[1];
      if ( v13 < v8 )
      {
        v23 = (char *)*a1;
        if ( (unsigned __int64)a1[2] < v8 )
        {
          v28 = qvector_reserve(a1, v23, v8, 1);
          v13 = (unsigned __int64)a1[1];
          *a1 = (void *)v28;
          v23 = (char *)v28;
        }
        memset(&v23[v13], 0, v8 - v13);
        a1[1] = (void *)v8;
      }
      else if ( v8 != v13 )
      {
        a1[1] = (void *)v8;
      }
      if ( v8 == qfread(v7, *a1) )
        goto LABEL_8;
      if ( a4 )
      {
        v14 = (const char *)qstrerror(0xFFFFFFFFLL);
        v15 = v14;
        if ( v14 && (v16 = strlen(v14), (v17 = v16) != 0) )
        {
          v24 = (void *)*a4;
          v25 = v16 + 1;
          if ( a4[2] < v16 + 1 )
          {
            v30 = qvector_reserve(a4, *a4, v16 + 1, 1);
            *a4 = v30;
            v24 = (void *)v30;
          }
          a4[1] = v25;
          memmove(v24, v15, v17);
          *(_BYTE *)(*a4 + v17) = 0;
        }
        else
        {
          a4[1] = 0;
        }
      }
    }
    else if ( a4 )
    {
      v11 = (void *)*a4;
      if ( (unsigned __int64)a4[2] <= 0xF )
      {
        v22 = qvector_reserve(a4, v11, 16, 1);
        *a4 = v22;
        v11 = (void *)v22;
      }
      a4[1] = 16;
      qmemcpy(v11, "wrong file size", 15);
      *(_BYTE *)(*a4 + 15) = 0;
    }
    v10 = 0;
LABEL_8:
    qfclose(v7);
    return v10;
  }
  if ( a4 )
  {
    v18 = (const char *)qstrerror(0xFFFFFFFFLL);
    v19 = v18;
    if ( v18 && (v20 = strlen(v18), (v21 = v20) != 0) )
    {
      v26 = (void *)*a4;
      v27 = v20 + 1;
      if ( a4[2] < v20 + 1 )
      {
        v29 = qvector_reserve(a4, *a4, v20 + 1, 1);
        *a4 = v29;
        v26 = (void *)v29;
      }
      a4[1] = v27;
      memmove(v26, v19, v21);
      *(_BYTE *)(*a4 + v21) = 0;
    }
    else
    {
      a4[1] = 0;
    }
  }
  return 0;
}
