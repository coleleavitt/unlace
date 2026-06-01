void *__fastcall sub_55F020(char **a1, __int64 a2, __int64 a3, unsigned int a4, const void *a5)
{
  __int64 v5; // r12
  __int64 v7; // rbp
  int v8; // r15d
  void *result; // rax
  __int64 v10; // r8
  char *v11; // r14
  char *v13; // rax
  int v14; // r8d
  size_t v15; // rdx
  char *v16; // rdi
  int v17; // [rsp+0h] [rbp-48h]
  const void *v18; // [rsp+0h] [rbp-48h]
  const void *v19; // [rsp+8h] [rbp-40h]

  v5 = a4;
  v7 = (unsigned int)(a3 + a2);
  v8 = v5 - a3;
  result = (void *)*((unsigned int *)a1 + 2);
  v10 = (unsigned int)((_DWORD)result + v5 - a3);
  if ( (unsigned int)result < (unsigned int)v7 )
    sub_55D2B0(a1, a2, a3, a5, v10);
  v11 = *a1;
  if ( *((_DWORD *)a1 + 3) < (unsigned int)v10 )
  {
    v19 = a5;
    v17 = (_DWORD)result + v5 - a3;
    if ( v11 )
    {
      v13 = (char *)off_8C52A8(v11, 8LL * (unsigned int)v10);
      v14 = v17;
      a5 = v19;
    }
    else
    {
      v13 = (char *)off_8C52B8(8LL * (unsigned int)v10);
      a5 = v19;
      v14 = v17;
    }
    v11 = v13;
    *a1 = v13;
    result = (void *)*((unsigned int *)a1 + 2);
    *((_DWORD *)a1 + 3) = v14;
  }
  if ( (unsigned int)v7 < (unsigned int)result )
  {
    v18 = a5;
    result = memmove(&v11[8 * (unsigned int)(v5 + a2)], &v11[8 * v7], 8LL * (unsigned int)((_DWORD)result - v7));
    a5 = v18;
  }
  if ( (_DWORD)v5 )
  {
    v15 = 8 * v5;
    v16 = &v11[8 * (unsigned int)a2];
    if ( a5 )
      result = memcpy(v16, a5, v15);
    else
      result = memset(v16, 0, v15);
  }
  *((_DWORD *)a1 + 2) += v8;
  return result;
}
