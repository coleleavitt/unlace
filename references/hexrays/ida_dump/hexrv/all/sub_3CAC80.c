__int64 __fastcall sub_3CAC80(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // r13
  void *v9; // rdi
  __int64 v10; // rax

  v5 = *a2;
  result = *(_QWORD *)(a1 + 184) + 24 * a5;
  if ( *a2 != (__int64 *)result )
  {
    v7 = *(_QWORD *)(result + 8);
    if ( v7 > 1 )
    {
      v8 = *(const void **)result;
      v9 = (void *)*v5;
      if ( v5[2] < v7 )
      {
        v10 = qvector_reserve(v5, *v5, *(_QWORD *)(result + 8), 1);
        *v5 = v10;
        v9 = (void *)v10;
      }
      v5[1] = v7;
      memmove(v9, v8, v7 - 1);
      result = *v5;
      *(_BYTE *)(*v5 + v7 - 1) = 0;
    }
    else
    {
      v5[1] = 0;
    }
  }
  return result;
}
