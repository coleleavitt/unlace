__int64 __fastcall til_next_macro(__int64 a1, const char **a2, _QWORD *a3, _DWORD *a4, bool *a5)
{
  __int64 v8; // rcx
  const char *v9; // rdx
  const char *v10; // r15
  const char *v11; // rbx
  const char *v12; // rbx
  size_t v13; // rax
  __int64 result; // rax
  const char *v15; // rbx
  __int64 v16; // [rsp+8h] [rbp-40h]

  if ( !a1 )
    return 0;
  v8 = *(_QWORD *)(a1 + 72);
  v10 = *(const char **)(v8 + 32);
  v11 = v10;
  if ( *a2 )
  {
    v16 = *(_QWORD *)(a1 + 72);
    v9 = *a2;
    v12 = &v9[strlen(*a2) + 3];
    v13 = strlen(v12);
    v8 = v16;
    v11 = &v12[v13 + 1];
  }
  result = 0;
  if ( v11 < &v10[*(unsigned int *)(v8 + 20)] )
  {
    *a2 = v11;
    v15 = &v11[strlen(v11)];
    *a4 = *((unsigned __int8 *)v15 + 1);
    result = 1;
    *a5 = v15[2] != 0;
    *a3 = v15 + 3;
  }
  return result;
}

