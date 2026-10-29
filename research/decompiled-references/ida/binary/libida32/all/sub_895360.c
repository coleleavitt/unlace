char *__fastcall sub_895360(_QWORD *a1, __int64 *a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rsi
  char *v5; // rbx
  char *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v12; // rax

  v3 = sub_8952A0(a1, *(_DWORD *)a2);
  v4 = a1[2];
  if ( v3 == (unsigned int *)a1[10] )
  {
    v5 = (char *)a1[2];
    v6 = nullptr;
  }
  else
  {
    v5 = (char *)(v3 + 4);
    v6 = (char *)v3 - v4 + 16;
  }
  v7 = a1[3];
  v8 = *a2;
  v9 = a2[1];
  if ( a1[4] < (unsigned __int64)(v7 + 1) )
  {
    v12 = qvector_reserve(a1 + 2, v4, v7 + 1, 16);
    v7 = a1[3];
    a1[2] = v12;
    v5 = &v6[v12];
  }
  memmove(v5 + 16, v5, 16 * v7 - (_QWORD)v6);
  *(_QWORD *)v5 = v8;
  *((_QWORD *)v5 + 1) = v9;
  v10 = a1[3] + 1LL;
  a1[3] = v10;
  a1[10] = a1[2] + 16 * v10;
  return v5;
}

