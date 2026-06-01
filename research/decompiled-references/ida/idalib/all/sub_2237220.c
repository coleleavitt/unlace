void __fastcall sub_2237220(__int64 a1, const void *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  void *v10; // rdi
  size_t v11; // r15
  void *v12; // rbx
  void *v13; // r13
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h]
  void *v17; // [rsp+8h] [rbp-40h]

  v4 = 0xFFFFFFFFLL;
  v6 = a3;
  v7 = *(unsigned int *)(a1 + 12);
  if ( a3 > 0xFFFFFFFF )
    sub_2236FB0(a3);
  if ( v7 == 0xFFFFFFFFLL )
    sub_2236DA0(0xFFFFFFFFLL);
  v8 = 2 * v7 + 1;
  if ( v6 <= v8 )
  {
    v10 = *(void **)a1;
    if ( v8 <= 0xFFFFFFFF )
      v4 = v8;
    LODWORD(v6) = v4;
    v11 = v4 * a4;
    if ( v10 != a2 )
      goto LABEL_5;
LABEL_11:
    v12 = malloc(v11);
    if ( v12 || !v11 && (v12 = malloc(1u)) != nullptr )
    {
      if ( a2 != v12 )
      {
LABEL_15:
        memcpy(v12, a2, a4 * *(unsigned int *)(a1 + 8));
        goto LABEL_7;
      }
      v15 = malloc(v11);
      if ( v15 || !v11 && (v15 = malloc(1u)) != nullptr )
      {
        v17 = v15;
        free(v12);
        v12 = v17;
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_2221CE0("Allocation failed", 1u);
  }
  v10 = *(void **)a1;
  v11 = v6 * a4;
  if ( *(const void **)a1 == a2 )
    goto LABEL_11;
LABEL_5:
  v12 = realloc(v10, v11);
  if ( !v12 )
  {
    if ( v11 )
      goto LABEL_18;
    v12 = malloc(1u);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( a2 == v12 )
  {
    v16 = *(unsigned int *)(a1 + 8);
    v13 = malloc(v11);
    if ( !v13 )
    {
      if ( v11 )
        goto LABEL_18;
      v13 = malloc(1u);
      if ( !v13 )
        goto LABEL_18;
    }
    if ( v16 )
      memcpy(v13, v12, a4 * v16);
    v14 = v12;
    v12 = v13;
    free(v14);
  }
LABEL_7:
  *(_QWORD *)a1 = v12;
  *(_DWORD *)(a1 + 12) = v6;
}
