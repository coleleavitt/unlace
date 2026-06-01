char *__fastcall sub_E90F90(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rax
  size_t v9; // rbp
  signed __int64 v10; // rdx
  char *result; // rax
  unsigned int v12; // eax
  unsigned int v13; // r13d
  void *v14; // rdi
  char *v15; // rcx
  const void *v16; // rsi
  __int64 v17; // rdx

  v8 = (_QWORD *)a2[133];
  if ( !v8 )
  {
    v17 = a2[294];
    a2[304] += 24LL;
    v8 = (_QWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[295] >= (unsigned __int64)(v8 + 3) && v17 )
      a2[294] = v8 + 3;
    else
      v8 = (_QWORD *)sub_986170((__int64)(a2 + 294), 24, 24, 3, a5, a6);
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    a2[133] = v8;
  }
  v9 = *(unsigned int *)(a1 + 16);
  v10 = *(unsigned int *)(a1 + 20);
  *(_QWORD *)a1 = v8;
  result = (char *)v9;
  if ( (__int64)(v9 + 4) <= v10 )
  {
    v15 = *(char **)(a1 + 8);
    goto LABEL_10;
  }
  v12 = v9 + 4;
  if ( !(_DWORD)v10 )
  {
    v13 = 16;
    if ( v12 >= 0x10 )
      v13 = v9 + 4;
    result = (char *)malloc(v13);
    v15 = result;
    if ( result )
    {
      v16 = *(const void **)(a1 + 8);
      if ( v16 )
      {
        result = (char *)memcpy(result, v16, v9);
        v15 = result;
      }
      *(_QWORD *)(a1 + 8) = v15;
      goto LABEL_8;
    }
LABEL_14:
    sub_2221CE0("Allocation failed");
  }
  v13 = 2 * v10;
  v14 = *(void **)(a1 + 8);
  if ( 2 * (int)v10 < v12 )
    v13 = v9 + 4;
  result = (char *)realloc(v14, v13);
  v15 = result;
  if ( !result )
  {
    if ( v13 )
      goto LABEL_14;
    result = (char *)malloc(1u);
    v15 = result;
    if ( !result )
      goto LABEL_14;
  }
  *(_QWORD *)(a1 + 8) = v15;
  v9 = *(unsigned int *)(a1 + 16);
LABEL_8:
  *(_DWORD *)(a1 + 20) = v13;
LABEL_10:
  *(_DWORD *)&v15[v9] = a3;
  *(_DWORD *)(a1 + 16) += 4;
  return result;
}
