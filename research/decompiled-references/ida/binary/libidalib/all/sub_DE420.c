__int64 *__fastcall sub_DE420(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *result; // rax
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  unsigned __int64 v8; // r13
  const void *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // rax

  result = (__int64 *)sub_B8AE0(a5);
  if ( result )
  {
    v6 = *a2;
    v7 = result;
    if ( result != *a2 )
    {
      v8 = result[1];
      if ( v8 > 1 )
      {
        v9 = (const void *)*result;
        v10 = (__int64 *)*v6;
        if ( v6[2] < v8 )
        {
          v11 = qvector_reserve();
          *v6 = v11;
          v10 = (__int64 *)v11;
        }
        v6[1] = v8;
        memmove(v10, v9, v8 - 1);
        result = (__int64 *)*v6;
        *(_BYTE *)(*v6 + v8 - 1) = 0;
      }
      else
      {
        v6[1] = 0;
      }
    }
    if ( v7[3] == -1 )
    {
      if ( !v7[4] )
        return result;
      return sub_94440(*a2 + 6);
    }
    result = sub_94440(*a2 + 3);
    if ( v7[4] )
      return sub_94440(*a2 + 6);
  }
  return result;
}

