__int64 __fastcall sub_C820(char **a1, int a2, _QWORD *a3)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  char *v7; // rdi
  __int64 result; // rax
  size_t v9; // r15
  char *v10; // rax
  char *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rdx
  char *v15; // rax
  unsigned __int64 v16; // r14
  size_t v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  int v21; // eax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v5 = *((unsigned int *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  v7 = *a1;
  if ( (int)v5 + 11 > v6 )
  {
    v9 = v6;
    v10 = &v7[v6];
    v11 = (char *)a3[1];
    if ( v10 == v11 && (unsigned __int64)(v11 + 11) <= a3[2] )
    {
      a3[1] = v11 + 11;
      v7 = *a1;
      *((_DWORD *)a1 + 3) += 11;
      v5 = *((unsigned int *)a1 + 2);
    }
    else
    {
      v12 = 2 * v6;
      v13 = 2 * v6;
      if ( v12 < 0xB )
        v12 = 11;
      v14 = v12 + v6;
      if ( !v11 || (v15 = &v11[v14], (unsigned __int64)&v11[v14] > a3[2]) )
      {
        v22 = v14;
        v16 = 2LL * a3[4];
        if ( v16 < v14 + 1 )
          v16 = v14 + 1;
        a3[4] = v16;
        v17 = v16 + 8;
        v18 = malloc(v17);
        v19 = a3[3];
        v11 = (char *)(v18 + 1);
        a3[3] = v18;
        *v18 = v19;
        a3[2] = (char *)v18 + v17;
        v15 = (char *)v18 + v22 + 8;
      }
      a3[1] = v15;
      v20 = (char *)memcpy(v11, *a1, v9);
      *a1 = v20;
      v7 = v20;
      v21 = 11;
      if ( v13 >= 0xB )
        v21 = v13;
      *((_DWORD *)a1 + 3) += v21;
      v5 = *((unsigned int *)a1 + 2);
    }
  }
  result = __snprintf_chk(&v7[v5], 11, 1, -1, "%d", a2);
  *((_DWORD *)a1 + 2) += result;
  return result;
}

