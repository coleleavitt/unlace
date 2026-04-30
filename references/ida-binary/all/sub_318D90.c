size_t __fastcall rs_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  size_t result; // rax
  const char *v7; // r12
  size_t v8; // rbp
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  v5 = *a2;
  result = *(_QWORD *)(a1 + 184) + 24 * a5;
  if ( *(_QWORD *)(result + 8)
    && (v7 = *(const char **)result) != nullptr
    && (result = strlen(*(const char **)result), (v8 = result) != 0) )
  {
    v9 = (void *)*v5;
    v10 = result + 1;
    if ( v5[2] < result + 1 )
    {
      v11 = qvector_reserve(v5, *v5, result + 1, 1);
      *v5 = v11;
      v9 = (void *)v11;
    }
    v5[1] = v10;
    memmove(v9, v7, v8);
    result = *v5;
    *(_BYTE *)(*v5 + v8) = 0;
  }
  else
  {
    v5[1] = 0;
  }
  return result;
}
