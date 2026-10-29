void __fastcall stylable_widget_mixin_t__::vfunc_2(__int64 a1, __int64 *a2)
{
  const void *v2; // r12
  size_t v3; // rax
  size_t v4; // rbp
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  v2 = *(const void **)(a1 + 56);
  if ( v2 && (v3 = strlen(*(const char **)(a1 + 56)), (v4 = v3) != 0) )
  {
    v5 = (void *)*a2;
    v6 = v3 + 1;
    if ( a2[2] < v3 + 1 )
    {
      v7 = qvector_reserve(a2, *a2, v3 + 1, 1);
      *a2 = v7;
      v5 = (void *)v7;
    }
    a2[1] = v6;
    memmove(v5, v2, v4);
    *(_BYTE *)(*a2 + v4) = 0;
  }
  else
  {
    a2[1] = 0;
  }
}
