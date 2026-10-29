_QWORD *__fastcall sub_FE8D0(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // rax

  result = *(_QWORD **)(a1 + 8);
  if ( a2 != result + 151 )
  {
    v3 = result[152];
    if ( v3 > 1 )
    {
      v4 = (const void *)result[151];
      v5 = (_QWORD *)*a2;
      if ( a2[2] < v3 )
      {
        v6 = qvector_reserve();
        *a2 = v6;
        v5 = (_QWORD *)v6;
      }
      a2[1] = v3;
      memmove(v5, v4, v3 - 1);
      result = (_QWORD *)*a2;
      *(_BYTE *)(*a2 + v3 - 1) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return result;
}

