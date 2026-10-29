char **__fastcall sub_595F80(__int64 a1, char ***a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  const char *v6; // rax
  char **v7; // r14
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r13
  char *v12; // rdi
  char *v13; // r15
  __int64 v14; // rax

  v5 = **(_QWORD **)(a1 + 184) + 40 * a5;
  sub_35A790(*a2);
  v6 = (const char *)strarray(&unk_2B2EEC0, 10, *(unsigned int *)(v5 + 32));
  v7 = *a2;
  if ( v6 && (v8 = v6, v9 = strlen(v6), (v10 = v9) != 0) )
  {
    v12 = v7[3];
    v13 = (char *)(v9 + 1);
    if ( (unsigned __int64)v7[5] < v9 + 1 )
    {
      v14 = qvector_reserve(v7 + 3, v7[3], v13, 1);
      v7[3] = (char *)v14;
      v12 = (char *)v14;
    }
    v7[4] = v13;
    memmove(v12, v8, v10);
    v7[3][v10] = 0;
  }
  else
  {
    v7[4] = nullptr;
  }
  return sub_35A790(*a2 + 6);
}
