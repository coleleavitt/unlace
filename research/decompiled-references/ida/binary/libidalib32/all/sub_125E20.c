char **__fastcall sub_125E20(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v6; // r13
  __int64 *v7; // r14
  size_t v8; // rax
  size_t v9; // r12
  char **result; // rax
  __int64 *v11; // r12
  char *v12; // rbp
  size_t v13; // rbx
  void *v14; // rdi
  char *v15; // r13
  void *v16; // rdi
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax

  v6 = off_2316C0[a5];
  v7 = *a2;
  if ( v6 && (v8 = strlen(off_2316C0[a5]), (v9 = v8) != 0) )
  {
    v16 = (void *)*v7;
    v17 = v8 + 1;
    if ( v7[2] < v8 + 1 )
    {
      v18 = qvector_reserve();
      *v7 = v18;
      v16 = (void *)v18;
    }
    v7[1] = v17;
    memmove(v16, v6, v9);
    *(_BYTE *)(*v7 + v9) = 0;
  }
  else
  {
    v7[1] = 0;
  }
  result = off_231660;
  v11 = *a2;
  v12 = off_231660[a5];
  if ( v12 && (result = (char **)strlen(v12), (v13 = (size_t)result) != 0) )
  {
    v14 = (void *)v11[3];
    v15 = (char *)result + 1;
    if ( v11[5] < (unsigned __int64)result + 1 )
    {
      v19 = qvector_reserve();
      v11[3] = v19;
      v14 = (void *)v19;
    }
    v11[4] = (__int64)v15;
    memmove(v14, v12, v13);
    result = (char **)v11[3];
    *((_BYTE *)result + v13) = 0;
  }
  else
  {
    v11[4] = 0;
  }
  return result;
}

