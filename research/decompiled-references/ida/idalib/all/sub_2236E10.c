void __fastcall sub_2236E10(__int64 a1, const void *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  void *v7; // rdi
  unsigned __int64 v9; // r14
  size_t v10; // r15
  void *v11; // rbx
  void *v12; // r12
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-40h]
  void *v16; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 == -1 )
    sub_2236DA0(-1);
  v6 = 2 * v5 + 1;
  v7 = *(void **)a1;
  if ( v6 >= a3 )
    a3 = v6;
  v9 = a3;
  v10 = a3 * a4;
  if ( v7 == a2 )
  {
    v11 = malloc(v10);
    if ( v11 || !v10 && (v11 = malloc(1u)) != nullptr )
    {
      if ( a2 != v11 )
      {
LABEL_15:
        memcpy(v11, a2, a4 * *(_QWORD *)(a1 + 8));
        goto LABEL_7;
      }
      v14 = malloc(v10);
      if ( v14 || !v10 && (v14 = malloc(1u)) != nullptr )
      {
        v16 = v14;
        free(v11);
        v11 = v16;
        goto LABEL_15;
      }
    }
LABEL_10:
    sub_2221CE0("Allocation failed", 1u);
  }
  v11 = realloc(v7, v10);
  if ( !v11 )
  {
    if ( v10 )
      goto LABEL_10;
    v11 = malloc(1u);
    if ( !v11 )
      goto LABEL_10;
  }
  if ( a2 == v11 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v12 = malloc(v10);
    if ( !v12 )
    {
      if ( v10 )
        goto LABEL_10;
      v12 = malloc(1u);
      if ( !v12 )
        goto LABEL_10;
    }
    if ( v15 )
      memcpy(v12, v11, a4 * v15);
    v13 = v11;
    v11 = v12;
    free(v13);
  }
LABEL_7:
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 16) = v9;
}
