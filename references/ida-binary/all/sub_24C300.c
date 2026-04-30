__int64 *__fastcall modules_chooser_t__::vfunc_6(
        double a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 *result; // rax
  __int64 *v7; // rbp
  __int64 *v8; // rbx
  unsigned __int64 v9; // r13
  const void *v10; // r15
  void *v11; // rdi
  __int64 v12; // rax

  result = (__int64 *)sub_227EE0(a6);
  if ( result )
  {
    v7 = *a3;
    v8 = result;
    if ( result != *a3 )
    {
      v9 = result[1];
      if ( v9 > 1 )
      {
        v10 = (const void *)*result;
        v11 = (void *)*v7;
        if ( v7[2] < v9 )
        {
          v12 = qvector_reserve(*a3, *v7, result[1], 1);
          *v7 = v12;
          v11 = (void *)v12;
        }
        v7[1] = v9;
        memmove(v11, v10, v9 - 1);
        result = (__int64 *)*v7;
        *(_BYTE *)(*v7 + v9 - 1) = 0;
      }
      else
      {
        v7[1] = 0;
      }
    }
    if ( v8[3] == -1 )
    {
      if ( !v8[4] )
        return result;
      return sub_169A50(*a3 + 6, (__int64)"%08a", a1);
    }
    result = sub_169A50(*a3 + 3, (__int64)"%08a", a1);
    if ( v8[4] )
      return sub_169A50(*a3 + 6, (__int64)"%08a", a1);
  }
  return result;
}
