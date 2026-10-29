void *__fastcall sub_C6F0(char **a1, const void *a2, size_t a3, _QWORD *a4)
{
  __int64 v8; // rdx
  size_t v9; // r15
  char *v10; // rdi
  void *result; // rax
  char *v12; // rdx
  char *v13; // rdi
  unsigned __int64 v14; // r14
  size_t v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  char *v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-48h]

  v8 = *((unsigned int *)a1 + 2);
  v9 = *((unsigned int *)a1 + 3);
  v10 = *a1;
  if ( v8 + a3 > v9 )
  {
    v12 = &v10[v9];
    v13 = (char *)a4[1];
    if ( v12 == v13 && (unsigned __int64)&v13[a3] <= a4[2] )
    {
      a4[1] = &v13[a3];
      v10 = *a1;
      *((_DWORD *)a1 + 3) += a3;
      v8 = *((unsigned int *)a1 + 2);
    }
    else
    {
      v14 = 4;
      if ( a3 >= 4 )
        v14 = a3;
      if ( v14 < (unsigned int)(2 * v9) )
        v14 = (unsigned int)(2 * v9);
      v15 = v9 + v14;
      if ( !v13 || (v16 = (__int64)&v13[v15], (unsigned __int64)&v13[v15] > a4[2]) )
      {
        v17 = 2LL * a4[4];
        if ( v17 < v15 + 1 )
          v17 = v15 + 1;
        a4[4] = v17;
        v21 = v17 + 8;
        v18 = malloc(v17 + 8);
        v19 = a4[3];
        v13 = (char *)(v18 + 1);
        a4[3] = v18;
        *v18 = v19;
        a4[2] = (char *)v18 + v21;
        v16 = (__int64)v18 + v9 + v14 + 8;
      }
      a4[1] = v16;
      v20 = (char *)memcpy(v13, *a1, v9);
      *((_DWORD *)a1 + 3) += v14;
      v8 = *((unsigned int *)a1 + 2);
      *a1 = v20;
      v10 = v20;
    }
  }
  result = memcpy(&v10[v8], a2, a3);
  *((_DWORD *)a1 + 2) += a3;
  return result;
}
