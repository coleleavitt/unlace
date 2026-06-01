void *__fastcall sub_2237400(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  size_t v9; // rbp
  void *v10; // rbx
  void *v12; // rax
  void *v13; // [rsp+8h] [rbp-20h]

  v5 = 0xFFFFFFFFLL;
  v6 = *(unsigned int *)(a1 + 12);
  if ( a3 > 0xFFFFFFFF )
    sub_2236FB0(a3);
  if ( v6 == 0xFFFFFFFFLL )
    sub_2236DA0(0xFFFFFFFFLL);
  v8 = 2 * v6 + 1;
  if ( a3 <= v8 )
  {
    if ( v8 <= 0xFFFFFFFF )
      v5 = 2 * v6 + 1;
    a3 = v5;
  }
  *a5 = a3;
  v9 = a3 * a4;
  v10 = malloc(a3 * a4);
  if ( !v10 && (v9 || (v10 = malloc(1u)) == nullptr) )
LABEL_7:
    sub_2221CE0("Allocation failed", 1u);
  if ( a2 != v10 )
    return v10;
  v12 = malloc(v9);
  if ( !v12 )
  {
    if ( v9 )
      goto LABEL_7;
    v12 = malloc(1u);
    if ( !v12 )
      goto LABEL_7;
  }
  v13 = v12;
  free(v10);
  return v13;
}
